


#include "StdAfx.h"
#include "LTSMdSpi.h"
#include "LTSMDAdapter.h"
#include <memory.h>

using namespace RELib_LTSNative;

namespace RELib_LTSNet
{

	/// <summary>
	///����LTSMDAdapter
	///����������Ϣ�ļ���Ŀ¼��Ĭ��Ϊ��ǰĿ¼
	/// </summary>
	LTSMDAdapter::LTSMDAdapter(void)
	{
		m_pApi =CSecurityFtdcMdApi::CreateFtdcMdApi();
		m_pSpi = new CLTSMdSpi(this);
#ifdef __LTS_MA__
		RegisterCallbacks();
#endif
		m_pApi->RegisterSpi(m_pSpi);
	}

	/// <summary>
	///����CTPMDAdapter
	/// </summary>
	/// <param name="pszFlowPath">����������Ϣ�ļ���Ŀ¼��Ĭ��Ϊ��ǰĿ¼</param>
	/// <param name="bIsUsingUdp">�Ƿ�ʹ��UDPЭ��</param>
	LTSMDAdapter::LTSMDAdapter(String^ pszFlowPath, String^ pszUserApiType)
	{
		CAutoStrPtr asp(pszFlowPath);
		CAutoStrPtr arg2(pszUserApiType);

		m_pApi = CSecurityFtdcMdApi::CreateFtdcMdApi(asp.m_pChar);
		m_pSpi = new CLTSMdSpi(this);
#ifdef __LTS_MA__
		RegisterCallbacks();
#endif	
		m_pApi->RegisterSpi(m_pSpi);
	}

	LTSMDAdapter::~LTSMDAdapter(void)
	{
		Release();
	}
	///ɾ���ӿڶ�����
	///@remark ����ʹ�ñ��ӿڶ���ʱ,���øú���ɾ���ӿڶ���
	void LTSMDAdapter::Release(void)
	{
		if(m_pApi)
		{
			m_pApi->RegisterSpi(0);
			m_pApi->Release();
			m_pApi = nullptr;
			delete m_pSpi;
			m_pSpi = nullptr;
		}
	}
	///��ʼ��
	///@remark ��ʼ�����л���,ֻ�е��ú�,�ӿڲſ�ʼ����
	void LTSMDAdapter::Init(void)
	{
		m_pApi->Init();
	}
	
	///�ȴ��ӿ��߳̽�������
	///@return �߳��˳�����
	int LTSMDAdapter::Join(void)
	{
		return m_pApi->Join();
	}

	///��ȡ��ǰ������
	///@retrun ��ȡ���Ľ�����
	///@remark ֻ�е�¼�ɹ���,���ܵõ���ȷ�Ľ�����
	String^ LTSMDAdapter::GetTradingDay()
	{
		return gcnew String(m_pApi->GetTradingDay());
	}
	
	///ע��ǰ�û������ַ
	///@param pszFrontAddress��ǰ�û������ַ��
	///@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port�����磺��tcp://127.0.0.1:12001���� 
	///@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����12001������������˿ںš�
	///@remark RegisterFront������RegisterNameServer
	void LTSMDAdapter::RegisterFront(String^  pszFrontAddress)
	{
		CAutoStrPtr asp = CAutoStrPtr(pszFrontAddress);
		m_pApi->RegisterFront(asp.m_pChar);
	}		

	///ע��ص��ӿ�
	///@param pSpi �����Իص��ӿ����ʵ��
	/*void LTSMDAdapter::RegisterSpi(CIndexFtdcUserSpi *pSpi){
		CIndexFtdcUserSpi native;
		MNConv<IndexFtdcUserSpi^, CIndexFtdcUserSpi>::M2N(pSpi, &native);
		return m_pApi->RegisterSpi(&native);
	}	*/		
	
	///����֤��
	///@param pszCertFileName �û�֤���ļ���
	///@param pszKeyFileName �û�˽Կ�ļ���
	///@param pszCaFileName ������CA֤���ļ���
	///@param pszKeyFilePassword �û�˽Կ�ļ�����
	///@return 0 �����ɹ�
	///@return -1 ������CA֤������ʧ��
	///@return -2 �û�֤������ʧ��
	///@return -3 �û�˽Կ����ʧ��	
	///@return -4 �û�֤��У��ʧ��
	// int RegisterCertificateFile(const char *pszCertFileName, const char *pszKeyFileName, 
	//	const char *pszCaFileName, const char *pszKeyFilePassword) = 0;
	
	///�����г����顣
	///@param nTopicID �г���������  
	///@param nResumeType �г������ش���ʽ  
	///        TERT_RESTART:�ӱ������տ�ʼ�ش�
	///        TERT_RESUME:���ϴ��յ�������
	///        TERT_QUICK:�ȴ��͵�ǰ�������,�ٴ��͵�¼���г����������
	///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ�˽���������ݡ�
	//void LTSMDAdapter::SubscribeMarketDataTopic(int nTopicID, EnumRESUMETYPE nResumeType){
	//	m_pApi->SubscribeMarketDataTopic(nTopicID,(SECURITY_TE_RESUME_TYPE)nResumeType);
	//}

	///����˽������
	///@param nResumeType ˽�����ش���ʽ  
	///        TERT_RESTART:�ӱ������տ�ʼ�ش�
	///        TERT_RESUME:���ϴ��յ�������
	///        TERT_QUICK:ֻ���͵�¼��˽����������
	///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ�˽���������ݡ�
	//void LTSMDAdapter::SubscribePrivateTopic(EnumRESUMETYPE nResumeType){
	//	m_pApi->SubscribePrivateTopic((SECURITY_TE_RESUME_TYPE)nResumeType);
	//}
	
	///���Ĺ�������
	///@param nResumeType �������ش���ʽ  
	///        TERT_RESTART:�ӱ������տ�ʼ�ش�
	///        TERT_RESUME:���ϴ��յ�������
	///        TERT_QUICK:ֻ���͵�¼�󹫹���������
	///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ������������ݡ�
	//void LTSMDAdapter::SubscribePublicTopic(EnumRESUMETYPE nResumeType){
	//	m_pApi->SubscribePublicTopic((SECURITY_TE_RESUME_TYPE)nResumeType);
	//}
	
	///���Ľ���Ա����
	///@param nResumeType ����Ա���ش���ʽ  
	///        TERT_RESTART:�ӱ������տ�ʼ�ش�
	///        TERT_RESUME:���ϴ��յ�������
	///        TERT_QUICK:ֻ���͵�¼����Ա��������
	///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ�����Ա�������ݡ�
	//void LTSMDAdapter::SubscribeUserTopic(EnumRESUMETYPE nResumeType){
	//	m_pApi->SubscribeUserTopic((SECURITY_TE_RESUME_TYPE)nResumeType);
	//}
	
	///����������ʱʱ�䡣
	///@param timeout ������ʱʱ��(��)  
	//void SetHeartbeatTimeout(unsigned int timeout){
	//	return m_pApi->SetHeartbeatTimeout(timeout);
	//}
	
	///��������־�ļ�
	///@param pszReqLogFileName ������־�ļ���  
	///@return 0 �����ɹ�
	///@return -1 ����־�ļ�ʧ��
	//int LTSMDAdapter::OpenRequestLog(String^ pszReqLogFileName){
	//	CAutoStrPtr asp = CAutoStrPtr(pszReqLogFileName);
	//	return m_pApi->OpenRequestLog(asp.m_pChar);
	//}

	///��Ӧ����־�ļ�
	///@param pszRspLogFileName Ӧ����־�ļ���  
	///@return 0 �����ɹ�
	///@return -1 ����־�ļ�ʧ��
	//int LTSMDAdapter::OpenResponseLog(String^ pszRspLogFileName){
	//	CAutoStrPtr asp = CAutoStrPtr(pszRspLogFileName);
	//	return m_pApi->OpenResponseLog(asp.m_pChar);
	//}

	///�����г����顣
	///@param nTopicID �г���������  
	///@param nResumeType �г������ش���ʽ  
	///        TERT_RESTART:�ӱ������տ�ʼ�ش�
	///        TERT_RESUME:���ϴ��յ�������
	///        TERT_QUICK:�ȴ��͵�ǰ�������,�ٴ��͵�¼���г����������
	///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ�˽���������ݡ�
	int LTSMDAdapter::SubscribeMarketData(array<String^>^ ppInstrumentID, int nCount, String^ pExchageID){
		if(ppInstrumentID == nullptr || ppInstrumentID->Length <= 0)
			return -1;

		

		int count = ppInstrumentID->Length;
		char** pp = new char*[count];
		CAutoStrPtr** asp = new CAutoStrPtr*[count];
		for(int i=0; i<count; i++)
		{
			//����ָ�룬�����Զ��ͷ� stringָ��
			CAutoStrPtr* ptr = new CAutoStrPtr(ppInstrumentID[i]);
			asp[i] = ptr;
			pp[i] = ptr->m_pChar;
		}
		CAutoStrPtr asp2 = CAutoStrPtr(pExchageID);
		int result = m_pApi->SubscribeMarketData(pp,nCount,asp2.m_pChar);

		// �ͷ����з�����ַ����ڴ�
		for(int i=0; i<count; i++)
			delete asp[i];
		delete asp;
		delete pp;

		return result;
	}

	int LTSMDAdapter::UnSubscribeMarketData(array<String^>^ ppInstrumentID, int nCount, String^ pExchageID)
	{
		if(ppInstrumentID == nullptr || ppInstrumentID->Length <= 0)
			return -1;

		nCount = ppInstrumentID->Length;
		char** pp = new char*[nCount];
		CAutoStrPtr** asp = new CAutoStrPtr*[nCount];
		for(int i=0; i<nCount; i++)
		{
			CAutoStrPtr* ptr = new CAutoStrPtr(ppInstrumentID[i]);
			asp[i] = ptr;
			pp[i] = ptr->m_pChar;
		}
		CAutoStrPtr asp2 = CAutoStrPtr(pExchageID);
		int result = m_pApi->UnSubscribeMarketData(pp, nCount,asp2.m_pChar);

		// �ͷ���������ַ����ڴ�
		for(int i=0; i<nCount; i++)
			delete asp[i];
		delete asp;
		delete pp;

		return result;
	}

	/// <summary>
	/// �û���¼����
	/// </summary>
	int LTSMDAdapter::ReqUserLogin(SecurityFtdcReqUserLoginField^ pReqUserLoginField, int nRequestID)
	{
		CSecurityFtdcReqUserLoginField native;
		MNConv<SecurityFtdcReqUserLoginField^, CSecurityFtdcReqUserLoginField>::M2N(pReqUserLoginField, &native);
		return m_pApi->ReqUserLogin(&native, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int LTSMDAdapter:: ReqUserLogout(SecurityFtdcUserLogoutField^ pUserLogout, int nRequestID)
	{
		CSecurityFtdcUserLogoutField native0;
		MNConv<SecurityFtdcUserLogoutField^, CSecurityFtdcUserLogoutField>::M2N(pUserLogout, &native0);

		return m_pApi->ReqUserLogout(&native0, nRequestID);
	}
	

#ifdef __LTS_MA__

	// �����лص�������ַ���ݸ�SPI���������delegate������
	void CTPMDAdapter::RegisterCallbacks()
	{
		m_pSpi->d_FrontConnected = gcnew Internal_FrontConnected(this, &LTSMDAdapter::cbk_OnFrontConnected);
		m_pSpi->p_OnFrontConnected = (Callback_OnFrontConnected)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_FrontConnected).ToPointer();

		m_pSpi->d_FrontDisconnected = gcnew Internal_FrontDisconnected(this, &LTSMDAdapter::cbk_OnFrontDisconnected);
		m_pSpi->p_OnFrontDisconnected = (Callback_OnFrontDisconnected)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_FrontDisconnected).ToPointer();

		m_pSpi->d_HeartBeatWarning = gcnew Internal_HeartBeatWarning(this, &LTSMDAdapter::cbk_OnHeartBeatWarning);
		m_pSpi->p_OnHeartBeatWarning = (Callback_OnHeartBeatWarning)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_HeartBeatWarning).ToPointer();

		

						/// <summary>
		/// 
		/// </summary>
			m_pSpi->d_RspError = gcnew Internal_RspError(this, &LTSMDAdapter::cbk_OnRspError);
			m_pSpi->p_OnRspError = (Callback_OnRspError)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspError).ToPointer();
							/// <summary>
		/// 
		/// </summary>
			m_pSpi->d_RspUserLogin = gcnew Internal_RspUserLogin(this, &LTSMDAdapter::cbk_OnRspUserLogin);
			m_pSpi->p_OnRspUserLogin = (Callback_OnRspUserLogin)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspUserLogin).ToPointer();
							/// <summary>
		/// 
		/// </summary>
			m_pSpi->d_RspUserLogout = gcnew Internal_RspUserLogout(this, &LTSMDAdapter::cbk_OnRspUserLogout);
			m_pSpi->p_OnRspUserLogout = (Callback_OnRspUserLogout)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspUserLogout).ToPointer();
							/// <summary>
		/// 
		/// </summary>
			m_pSpi->d_RspFetchAuthRandCode = gcnew Internal_RspFetchAuthRandCode(this, &LTSMDAdapter::cbk_OnRspFetchAuthRandCode);
			m_pSpi->p_OnRspFetchAuthRandCode = (Callback_OnRspFetchAuthRandCode)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspFetchAuthRandCode).ToPointer();
							/// <summary>
		/// 
		/// </summary>
			m_pSpi->d_RspOrderInsert = gcnew Internal_RspOrderInsert(this, &LTSMDAdapter::cbk_OnRspOrderInsert);
			m_pSpi->p_OnRspOrderInsert = (Callback_OnRspOrderInsert)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspOrderInsert).ToPointer();
							/// <summary>
		/// 
		/// </summary>
			m_pSpi->d_RspOrderAction = gcnew Internal_RspOrderAction(this, &LTSMDAdapter::cbk_OnRspOrderAction);
			m_pSpi->p_OnRspOrderAction = (Callback_OnRspOrderAction)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspOrderAction).ToPointer();
							/// <summary>
		/// 
		/// </summary>
			m_pSpi->d_RspUserPasswordUpdate = gcnew Internal_RspUserPasswordUpdate(this, &LTSMDAdapter::cbk_OnRspUserPasswordUpdate);
			m_pSpi->p_OnRspUserPasswordUpdate = (Callback_OnRspUserPasswordUpdate)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspUserPasswordUpdate).ToPointer();
							/// <summary>
		/// 
		/// </summary>
			m_pSpi->d_RspTradingAccountPasswordUpdate = gcnew Internal_RspTradingAccountPasswordUpdate(this, &LTSMDAdapter::cbk_OnRspTradingAccountPasswordUpdate);
			m_pSpi->p_OnRspTradingAccountPasswordUpdate = (Callback_OnRspTradingAccountPasswordUpdate)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspTradingAccountPasswordUpdate).ToPointer();
							/// <summary>
		/// 
		/// </summary>
			m_pSpi->d_RtnOrder = gcnew Internal_RtnOrder(this, &LTSMDAdapter::cbk_OnRtnOrder);
			m_pSpi->p_OnRtnOrder = (Callback_OnRtnOrder)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RtnOrder).ToPointer();
							/// <summary>
		/// 
		/// </summary>
			m_pSpi->d_RtnTrade = gcnew Internal_RtnTrade(this, &LTSMDAdapter::cbk_OnRtnTrade);
			m_pSpi->p_OnRtnTrade = (Callback_OnRtnTrade)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RtnTrade).ToPointer();
							/// <summary>
		/// 
		/// </summary>
			m_pSpi->d_ErrRtnOrderInsert = gcnew Internal_ErrRtnOrderInsert(this, &LTSMDAdapter::cbk_OnErrRtnOrderInsert);
			m_pSpi->p_OnErrRtnOrderInsert = (Callback_OnErrRtnOrderInsert)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_ErrRtnOrderInsert).ToPointer();
							/// <summary>
		/// 
		/// </summary>
			m_pSpi->d_ErrRtnOrderAction = gcnew Internal_ErrRtnOrderAction(this, &LTSMDAdapter::cbk_OnErrRtnOrderAction);
			m_pSpi->p_OnErrRtnOrderAction = (Callback_OnErrRtnOrderAction)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_ErrRtnOrderAction).ToPointer();
							/// <summary>
		/// 
		/// </summary>
			m_pSpi->d_RspFundOutByLiber = gcnew Internal_RspFundOutByLiber(this, &LTSMDAdapter::cbk_OnRspFundOutByLiber);
			m_pSpi->p_OnRspFundOutByLiber = (Callback_OnRspFundOutByLiber)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspFundOutByLiber).ToPointer();
							/// <summary>
		/// 
		/// </summary>
			m_pSpi->d_RtnFundOutByLiber = gcnew Internal_RtnFundOutByLiber(this, &LTSMDAdapter::cbk_OnRtnFundOutByLiber);
			m_pSpi->p_OnRtnFundOutByLiber = (Callback_OnRtnFundOutByLiber)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RtnFundOutByLiber).ToPointer();
							/// <summary>
		/// 
		/// </summary>
			m_pSpi->d_ErrRtnFundOutByLiber = gcnew Internal_ErrRtnFundOutByLiber(this, &LTSMDAdapter::cbk_OnErrRtnFundOutByLiber);
			m_pSpi->p_OnErrRtnFundOutByLiber = (Callback_OnErrRtnFundOutByLiber)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_ErrRtnFundOutByLiber).ToPointer();
							/// <summary>
		/// 
		/// </summary>
			m_pSpi->d_RtnFundInByBank = gcnew Internal_RtnFundInByBank(this, &LTSMDAdapter::cbk_OnRtnFundInByBank);
			m_pSpi->p_OnRtnFundInByBank = (Callback_OnRtnFundInByBank)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RtnFundInByBank).ToPointer();
							/// <summary>
		/// 
		/// </summary>
			m_pSpi->d_RspFundInterTransfer = gcnew Internal_RspFundInterTransfer(this, &LTSMDAdapter::cbk_OnRspFundInterTransfer);
			m_pSpi->p_OnRspFundInterTransfer = (Callback_OnRspFundInterTransfer)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspFundInterTransfer).ToPointer();
							/// <summary>
		/// 
		/// </summary>
			m_pSpi->d_RtnFundInterTransferSerial = gcnew Internal_RtnFundInterTransferSerial(this, &LTSMDAdapter::cbk_OnRtnFundInterTransferSerial);
			m_pSpi->p_OnRtnFundInterTransferSerial = (Callback_OnRtnFundInterTransferSerial)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RtnFundInterTransferSerial).ToPointer();
							/// <summary>
		/// 
		/// </summary>
			m_pSpi->d_ErrRtnFundInterTransfer = gcnew Internal_ErrRtnFundInterTransfer(this, &LTSMDAdapter::cbk_OnErrRtnFundInterTransfer);
			m_pSpi->p_OnErrRtnFundInterTransfer = (Callback_OnErrRtnFundInterTransfer)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_ErrRtnFundInterTransfer).ToPointer();
							/// <summary>
		/// 
		/// </summary>
			m_pSpi->d_RtnPlatformStateInfo = gcnew Internal_RtnPlatformStateInfo(this, &LTSMDAdapter::cbk_OnRtnPlatformStateInfo);
			m_pSpi->p_OnRtnPlatformStateInfo = (Callback_OnRtnPlatformStateInfo)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RtnPlatformStateInfo).ToPointer();
																															}

	// ------------------------------------ Callbacks ------------------------------------
	void LTSMDAdapter::cbk_OnFrontConnected(){
		this->OnFrontConnected();
	}
	void LTSMDAdapter::cbk_OnFrontDisconnected(int nReason){
		this->OnFrontDisconnected(nReason);
	}
	void LTSMDAdapter::cbk_OnHeartBeatWarning(int nTimeLapse){
		this->OnHeartBeatWarning(nTimeLapse);
	}
	


					/// <summary>
		/// 
		/// </summary>
		void LTSMDAdapter::cbk_OnRspError(CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast)
		{
			this->OnRspError(RspInfoField(pRspInfo),nRequestID,bIsLast);
		}
							/// <summary>
		/// 
		/// </summary>
		void LTSMDAdapter::cbk_OnRspUserLogin(CSecurityFtdcRspUserLoginField *pRspUserLogin,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast)
		{
			this->OnRspUserLogin(MNConv<SecurityFtdcRspUserLoginField^, CSecurityFtdcRspUserLoginField>::N2M(pRspUserLogin),RspInfoField(pRspInfo),nRequestID,bIsLast);
		}
							/// <summary>
		/// 
		/// </summary>
		void LTSMDAdapter::cbk_OnRspUserLogout(CSecurityFtdcUserLogoutField *pUserLogout,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast)
		{
			this->OnRspUserLogout(MNConv<SecurityFtdcUserLogoutField^, CSecurityFtdcUserLogoutField>::N2M(pUserLogout),RspInfoField(pRspInfo),nRequestID,bIsLast);
		}
							/// <summary>
		/// 
		/// </summary>
		void LTSMDAdapter::cbk_OnRspFetchAuthRandCode(CSecurityFtdcAuthRandCodeField *pAuthRandCode,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast)
		{
			this->OnRspFetchAuthRandCode(MNConv<SecurityFtdcAuthRandCodeField^, CSecurityFtdcAuthRandCodeField>::N2M(pAuthRandCode),RspInfoField(pRspInfo),nRequestID,bIsLast);
		}
							/// <summary>
		/// 
		/// </summary>
		void LTSMDAdapter::cbk_OnRspOrderInsert(CSecurityFtdcInputOrderField *pInputOrder,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast)
		{
			this->OnRspOrderInsert(MNConv<SecurityFtdcInputOrderField^, CSecurityFtdcInputOrderField>::N2M(pInputOrder),RspInfoField(pRspInfo),nRequestID,bIsLast);
		}
							/// <summary>
		/// 
		/// </summary>
		void LTSMDAdapter::cbk_OnRspOrderAction(CSecurityFtdcInputOrderActionField *pInputOrderAction,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast)
		{
			this->OnRspOrderAction(MNConv<SecurityFtdcInputOrderActionField^, CSecurityFtdcInputOrderActionField>::N2M(pInputOrderAction),RspInfoField(pRspInfo),nRequestID,bIsLast);
		}
							/// <summary>
		/// 
		/// </summary>
		void LTSMDAdapter::cbk_OnRspUserPasswordUpdate(CSecurityFtdcUserPasswordUpdateField *pUserPasswordUpdate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast)
		{
			this->OnRspUserPasswordUpdate(MNConv<SecurityFtdcUserPasswordUpdateField^, CSecurityFtdcUserPasswordUpdateField>::N2M(pUserPasswordUpdate),RspInfoField(pRspInfo),nRequestID,bIsLast);
		}
							/// <summary>
		/// 
		/// </summary>
		void LTSMDAdapter::cbk_OnRspTradingAccountPasswordUpdate(CSecurityFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast)
		{
			this->OnRspTradingAccountPasswordUpdate(MNConv<SecurityFtdcTradingAccountPasswordUpdateField^, CSecurityFtdcTradingAccountPasswordUpdateField>::N2M(pTradingAccountPasswordUpdate),RspInfoField(pRspInfo),nRequestID,bIsLast);
		}
							/// <summary>
		/// 
		/// </summary>
		void LTSMDAdapter::cbk_OnRtnOrder(CSecurityFtdcOrderField *pOrder)
		{
			this->OnRtnOrder(MNConv<SecurityFtdcOrderField^, CSecurityFtdcOrderField>::N2M(pOrder));
		}
							/// <summary>
		/// 
		/// </summary>
		void LTSMDAdapter::cbk_OnRtnTrade(CSecurityFtdcTradeField *pTrade)
		{
			this->OnRtnTrade(MNConv<SecurityFtdcTradeField^, CSecurityFtdcTradeField>::N2M(pTrade));
		}
							/// <summary>
		/// 
		/// </summary>
		void LTSMDAdapter::cbk_OnErrRtnOrderInsert(CSecurityFtdcInputOrderField *pInputOrder,CSecurityFtdcRspInfoField *pRspInfo)
		{
			this->OnErrRtnOrderInsert(MNConv<SecurityFtdcInputOrderField^, CSecurityFtdcInputOrderField>::N2M(pInputOrder),RspInfoField(pRspInfo));
		}
							/// <summary>
		/// 
		/// </summary>
		void LTSMDAdapter::cbk_OnErrRtnOrderAction(CSecurityFtdcOrderActionField *pOrderAction,CSecurityFtdcRspInfoField *pRspInfo)
		{
			this->OnErrRtnOrderAction(MNConv<SecurityFtdcOrderActionField^, CSecurityFtdcOrderActionField>::N2M(pOrderAction),RspInfoField(pRspInfo));
		}
							/// <summary>
		/// 
		/// </summary>
		void LTSMDAdapter::cbk_OnRspFundOutByLiber(CSecurityFtdcInputFundTransferField *pInputFundTransfer,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast)
		{
			this->OnRspFundOutByLiber(MNConv<SecurityFtdcInputFundTransferField^, CSecurityFtdcInputFundTransferField>::N2M(pInputFundTransfer),RspInfoField(pRspInfo),nRequestID,bIsLast);
		}
							/// <summary>
		/// 
		/// </summary>
		void LTSMDAdapter::cbk_OnRtnFundOutByLiber(CSecurityFtdcFundTransferField *pFundTransfer)
		{
			this->OnRtnFundOutByLiber(MNConv<SecurityFtdcFundTransferField^, CSecurityFtdcFundTransferField>::N2M(pFundTransfer));
		}
							/// <summary>
		/// 
		/// </summary>
		void LTSMDAdapter::cbk_OnErrRtnFundOutByLiber(CSecurityFtdcInputFundTransferField *pInputFundTransfer,CSecurityFtdcRspInfoField *pRspInfo)
		{
			this->OnErrRtnFundOutByLiber(MNConv<SecurityFtdcInputFundTransferField^, CSecurityFtdcInputFundTransferField>::N2M(pInputFundTransfer),RspInfoField(pRspInfo));
		}
							/// <summary>
		/// 
		/// </summary>
		void LTSMDAdapter::cbk_OnRtnFundInByBank(CSecurityFtdcFundTransferField *pFundTransfer)
		{
			this->OnRtnFundInByBank(MNConv<SecurityFtdcFundTransferField^, CSecurityFtdcFundTransferField>::N2M(pFundTransfer));
		}
							/// <summary>
		/// 
		/// </summary>
		void LTSMDAdapter::cbk_OnRspFundInterTransfer(CSecurityFtdcFundInterTransferField *pFundInterTransfer,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast)
		{
			this->OnRspFundInterTransfer(MNConv<SecurityFtdcFundInterTransferField^, CSecurityFtdcFundInterTransferField>::N2M(pFundInterTransfer),RspInfoField(pRspInfo),nRequestID,bIsLast);
		}
							/// <summary>
		/// 
		/// </summary>
		void LTSMDAdapter::cbk_OnRtnFundInterTransferSerial(CSecurityFtdcFundInterTransferSerialField *pFundInterTransferSerial)
		{
			this->OnRtnFundInterTransferSerial(MNConv<SecurityFtdcFundInterTransferSerialField^, CSecurityFtdcFundInterTransferSerialField>::N2M(pFundInterTransferSerial));
		}
							/// <summary>
		/// 
		/// </summary>
		void LTSMDAdapter::cbk_OnErrRtnFundInterTransfer(CSecurityFtdcFundInterTransferField *pFundInterTransfer,CSecurityFtdcRspInfoField *pRspInfo)
		{
			this->OnErrRtnFundInterTransfer(MNConv<SecurityFtdcFundInterTransferField^, CSecurityFtdcFundInterTransferField>::N2M(pFundInterTransfer),RspInfoField(pRspInfo));
		}
							/// <summary>
		/// 
		/// </summary>
		void LTSMDAdapter::cbk_OnRtnPlatformStateInfo(CSecurityFtdcPlatformStateInfoField *pPlatformStateInfo)
		{
			this->OnRtnPlatformStateInfo(MNConv<SecurityFtdcPlatformStateInfoField^, CSecurityFtdcPlatformStateInfoField>::N2M(pPlatformStateInfo));
		}
																														#endif


}// end of namespace



