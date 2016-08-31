


#include "StdAfx.h"
#include "LTSMdSpi.h"
#include "LTSMDAdapter.h"
#include <memory.h>

using namespace RELib_LTSNative;

namespace RELib_LTSNet
{

	/// <summary>
	///创建LTSMDAdapter
	///存贮订阅信息文件的目录，默认为当前目录
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
	///创建CTPMDAdapter
	/// </summary>
	/// <param name="pszFlowPath">存贮订阅信息文件的目录，默认为当前目录</param>
	/// <param name="bIsUsingUdp">是否使用UDP协议</param>
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
	///删除接口对象本身
	///@remark 不再使用本接口对象时,调用该函数删除接口对象
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
	///初始化
	///@remark 初始化运行环境,只有调用后,接口才开始工作
	void LTSMDAdapter::Init(void)
	{
		m_pApi->Init();
	}
	
	///等待接口线程结束运行
	///@return 线程退出代码
	int LTSMDAdapter::Join(void)
	{
		return m_pApi->Join();
	}

	///获取当前交易日
	///@retrun 获取到的交易日
	///@remark 只有登录成功后,才能得到正确的交易日
	String^ LTSMDAdapter::GetTradingDay()
	{
		return gcnew String(m_pApi->GetTradingDay());
	}
	
	///注册前置机网络地址
	///@param pszFrontAddress：前置机网络地址。
	///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:12001”。 
	///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”12001”代表服务器端口号。
	///@remark RegisterFront优先于RegisterNameServer
	void LTSMDAdapter::RegisterFront(String^  pszFrontAddress)
	{
		CAutoStrPtr asp = CAutoStrPtr(pszFrontAddress);
		m_pApi->RegisterFront(asp.m_pChar);
	}		

	///注册回调接口
	///@param pSpi 派生自回调接口类的实例
	/*void LTSMDAdapter::RegisterSpi(CIndexFtdcUserSpi *pSpi){
		CIndexFtdcUserSpi native;
		MNConv<IndexFtdcUserSpi^, CIndexFtdcUserSpi>::M2N(pSpi, &native);
		return m_pApi->RegisterSpi(&native);
	}	*/		
	
	///加载证书
	///@param pszCertFileName 用户证书文件名
	///@param pszKeyFileName 用户私钥文件名
	///@param pszCaFileName 可信任CA证书文件名
	///@param pszKeyFilePassword 用户私钥文件密码
	///@return 0 操作成功
	///@return -1 可信任CA证书载入失败
	///@return -2 用户证书载入失败
	///@return -3 用户私钥载入失败	
	///@return -4 用户证书校验失败
	// int RegisterCertificateFile(const char *pszCertFileName, const char *pszKeyFileName, 
	//	const char *pszCaFileName, const char *pszKeyFilePassword) = 0;
	
	///订阅市场行情。
	///@param nTopicID 市场行情主题  
	///@param nResumeType 市场行情重传方式  
	///        TERT_RESTART:从本交易日开始重传
	///        TERT_RESUME:从上次收到的续传
	///        TERT_QUICK:先传送当前行情快照,再传送登录后市场行情的内容
	///@remark 该方法要在Init方法前调用。若不调用则不会收到私有流的数据。
	//void LTSMDAdapter::SubscribeMarketDataTopic(int nTopicID, EnumRESUMETYPE nResumeType){
	//	m_pApi->SubscribeMarketDataTopic(nTopicID,(SECURITY_TE_RESUME_TYPE)nResumeType);
	//}

	///订阅私有流。
	///@param nResumeType 私有流重传方式  
	///        TERT_RESTART:从本交易日开始重传
	///        TERT_RESUME:从上次收到的续传
	///        TERT_QUICK:只传送登录后私有流的内容
	///@remark 该方法要在Init方法前调用。若不调用则不会收到私有流的数据。
	//void LTSMDAdapter::SubscribePrivateTopic(EnumRESUMETYPE nResumeType){
	//	m_pApi->SubscribePrivateTopic((SECURITY_TE_RESUME_TYPE)nResumeType);
	//}
	
	///订阅公共流。
	///@param nResumeType 公共流重传方式  
	///        TERT_RESTART:从本交易日开始重传
	///        TERT_RESUME:从上次收到的续传
	///        TERT_QUICK:只传送登录后公共流的内容
	///@remark 该方法要在Init方法前调用。若不调用则不会收到公共流的数据。
	//void LTSMDAdapter::SubscribePublicTopic(EnumRESUMETYPE nResumeType){
	//	m_pApi->SubscribePublicTopic((SECURITY_TE_RESUME_TYPE)nResumeType);
	//}
	
	///订阅交易员流。
	///@param nResumeType 交易员流重传方式  
	///        TERT_RESTART:从本交易日开始重传
	///        TERT_RESUME:从上次收到的续传
	///        TERT_QUICK:只传送登录后交易员流的内容
	///@remark 该方法要在Init方法前调用。若不调用则不会收到交易员流的数据。
	//void LTSMDAdapter::SubscribeUserTopic(EnumRESUMETYPE nResumeType){
	//	m_pApi->SubscribeUserTopic((SECURITY_TE_RESUME_TYPE)nResumeType);
	//}
	
	///设置心跳超时时间。
	///@param timeout 心跳超时时间(秒)  
	//void SetHeartbeatTimeout(unsigned int timeout){
	//	return m_pApi->SetHeartbeatTimeout(timeout);
	//}
	
	///打开请求日志文件
	///@param pszReqLogFileName 请求日志文件名  
	///@return 0 操作成功
	///@return -1 打开日志文件失败
	//int LTSMDAdapter::OpenRequestLog(String^ pszReqLogFileName){
	//	CAutoStrPtr asp = CAutoStrPtr(pszReqLogFileName);
	//	return m_pApi->OpenRequestLog(asp.m_pChar);
	//}

	///打开应答日志文件
	///@param pszRspLogFileName 应答日志文件名  
	///@return 0 操作成功
	///@return -1 打开日志文件失败
	//int LTSMDAdapter::OpenResponseLog(String^ pszRspLogFileName){
	//	CAutoStrPtr asp = CAutoStrPtr(pszRspLogFileName);
	//	return m_pApi->OpenResponseLog(asp.m_pChar);
	//}

	///订阅市场行情。
	///@param nTopicID 市场行情主题  
	///@param nResumeType 市场行情重传方式  
	///        TERT_RESTART:从本交易日开始重传
	///        TERT_RESUME:从上次收到的续传
	///        TERT_QUICK:先传送当前行情快照,再传送登录后市场行情的内容
	///@remark 该方法要在Init方法前调用。若不调用则不会收到私有流的数据。
	int LTSMDAdapter::SubscribeMarketData(array<String^>^ ppInstrumentID, int nCount, String^ pExchageID){
		if(ppInstrumentID == nullptr || ppInstrumentID->Length <= 0)
			return -1;

		

		int count = ppInstrumentID->Length;
		char** pp = new char*[count];
		CAutoStrPtr** asp = new CAutoStrPtr*[count];
		for(int i=0; i<count; i++)
		{
			//智能指针，可以自动释放 string指针
			CAutoStrPtr* ptr = new CAutoStrPtr(ppInstrumentID[i]);
			asp[i] = ptr;
			pp[i] = ptr->m_pChar;
		}
		CAutoStrPtr asp2 = CAutoStrPtr(pExchageID);
		int result = m_pApi->SubscribeMarketData(pp,nCount,asp2.m_pChar);

		// 释放所有分配的字符串内存
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

		// 释放所分配的字符串内存
		for(int i=0; i<nCount; i++)
			delete asp[i];
		delete asp;
		delete pp;

		return result;
	}

	/// <summary>
	/// 用户登录请求
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

	// 将所有回调函数地址传递给SPI，并保存对delegate的引用
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



