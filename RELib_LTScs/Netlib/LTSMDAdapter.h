


#pragma once
#include "Util.h"


using namespace RELib_LTSNative;

namespace  RELib_LTSNative{
	class CLTSMdSpi;
};

namespace RELib_LTSNet
{

	/// <summary>
	/// �й���,Marcket Data Adapter
	/// </summary>
	public ref class LTSMDAdapter
	{
	public:
		/// <summary>
		///����LTSMDAdapter
		///����������Ϣ�ļ���Ŀ¼��Ĭ��Ϊ��ǰĿ¼
		/// </summary>
		LTSMDAdapter(void);
		/// <summary>
		///����LTSMDAdapter
		/// </summary>
		/// <param name="pszFlowPath">����������Ϣ�ļ���Ŀ¼��Ĭ��Ϊ��ǰĿ¼</param>
		/// <param name="bIsUsingUdp">�Ƿ�ʹ��UDPЭ��</param>
		LTSMDAdapter(String^ pszFlowPath,  String^ pszUserApiType);
	private:
		~LTSMDAdapter(void);
		CSecurityFtdcMdApi* m_pApi;
		CLTSMdSpi* m_pSpi;
	public:
		///ɾ���ӿڶ�����
	///@remark ����ʹ�ñ��ӿڶ���ʱ,���øú���ɾ���ӿڶ���
	void Release(void);
	
	///��ʼ��
	///@remark ��ʼ�����л���,ֻ�е��ú�,�ӿڲſ�ʼ����
	void Init(void);
	
	///�ȴ��ӿ��߳̽�������
	///@return �߳��˳�����
	int Join();
	
	///��ȡ��ǰ������
	///@retrun ��ȡ���Ľ�����
	///@remark ֻ�е�¼�ɹ���,���ܵõ���ȷ�Ľ�����
	String^ GetTradingDay();
	
	///ע��ǰ�û������ַ
	///@param pszFrontAddress��ǰ�û������ַ��
	///@remark �����ַ�ĸ�ʽΪ����protocol://ipaddress:port�����磺��tcp://127.0.0.1:17001���� 
	///@remark ��tcp��������Э�飬��127.0.0.1�������������ַ����17001������������˿ںš�
	void RegisterFront(String^  pszFrontAddress);

	
	
		

		///�����г����顣
		///@param nTopicID �г���������  
		///@param nResumeType �г������ش���ʽ  
		///        TERT_RESTART:�ӱ������տ�ʼ�ش�
		///        TERT_RESUME:���ϴ��յ�������
		///        TERT_QUICK:�ȴ��͵�ǰ�������,�ٴ��͵�¼���г����������
		///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ�˽���������ݡ�
		int SubscribeMarketData(array<String^>^ ppInstrumentID, int nCount, String^ pExchageID);
		///�˶����顣
		///@param ppInstrumentID ��ԼID  
		///@param nCount Ҫ����/�˶�����ĺ�Լ����
		///@remark 
		int UnSubscribeMarketData(array<String^>^ ppInstrumentID, int nCount, String^ pExchageID);

		

		/// <summary>
		/// �û���¼����
		/// </summary>
		int ReqUserLogin(SecurityFtdcReqUserLoginField^ pReqUserLoginField, int nRequestID);


		/// <summary>
		/// 
		/// </summary>
		int ReqUserLogout(SecurityFtdcUserLogoutField^ pUserLogout, int nRequestID);

		///��������Ӧ��
		//void OnRspSubMarketData(SecurityFtdcSpecificInstrumentField^ pSpecificInstrument, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

		///ȡ����������Ӧ��
		//void OnRspUnSubMarketData(SecurityFtdcSpecificInstrumentField^ pSpecificInstrument, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

		///�������֪ͨ
		//void OnRtnDepthMarketData(SecurityFtdcDepthMarketDataField^ pDepthMarketData);
	

	//events
	public:
	/// <summary>
		/// ���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
		/// </summary>
		event FrontConnected^ OnFrontConnected {
			void add(FrontConnected^ handler ) {
				OnFrontConnected_delegate += handler;
			}
			void remove(FrontConnected^ handler) {
				OnFrontConnected_delegate -= handler;
			}
			void raise() {
				if(OnFrontConnected_delegate)
					OnFrontConnected_delegate();
			}
		}
	/// <summary>
		/// ���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
		/// ����ԭ��
		/// 0x1001 �����ʧ��
		/// 0x1002 ����дʧ��
		/// 0x2001 ����������ʱ
		/// 0x2002 ��������ʧ��
		/// 0x2003 �յ�������
		/// </summary>
		event FrontDisconnected^ OnFrontDisconnected {
			void add(FrontDisconnected^ handler ) {
				OnFrontDisconnected_delegate += handler;
			}
			void remove(FrontDisconnected^ handler) {
				OnFrontDisconnected_delegate -= handler;
			}
			void raise(int nReason) {
				if(OnFrontDisconnected_delegate)
					OnFrontDisconnected_delegate(nReason);
			}
		}
	///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
	///@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��
	event HeartBeatWarning^ OnHeartBeatWarning {
			void add(HeartBeatWarning^ handler ) {
				OnHeartBeatWarning_delegate += handler;
			}
			void remove(HeartBeatWarning^ handler) {
				OnHeartBeatWarning_delegate -= handler;
			}
			void raise(int nTimeLapse) {
				if(OnHeartBeatWarning_delegate)
					OnHeartBeatWarning_delegate(nTimeLapse);
			}
		}

		/// <summary>
	/// ��������Ӧ��
	/// </summary>
	event RspSubMarketData^ OnRspSubMarketData {
		void add(RspSubMarketData^ handler ) {
			OnRspSubMarketData_delegate += handler;
		}
		void remove(RspSubMarketData^ handler) {
			OnRspSubMarketData_delegate -= handler;
		}
		void raise(SecurityFtdcSpecificInstrumentField^ pSpecificInstrument, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) { 
			if(OnRspSubMarketData_delegate)
				OnRspSubMarketData_delegate(pSpecificInstrument, pRspInfo, nRequestID, bIsLast);
		}
	}
	/// <summary>
	/// ȡ����������Ӧ��
	/// </summary>
	event RspUnSubMarketData^ OnRspUnSubMarketData {
		void add(RspUnSubMarketData^ handler ) {
			OnRspUnSubMarketData_delegate += handler;
		}
		void remove(RspUnSubMarketData^ handler) {
			OnRspUnSubMarketData_delegate -= handler;
		}
		void raise(SecurityFtdcSpecificInstrumentField^ pSpecificInstrument, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) { 
			if(OnRspUnSubMarketData_delegate)
				OnRspUnSubMarketData_delegate(pSpecificInstrument, pRspInfo, nRequestID, bIsLast);
		}
	}

	/// <summary>
	/// �������֪ͨ
	/// </summary>
	event RtnDepthMarketData^ OnRtnDepthMarketData {
		void add(RtnDepthMarketData^ handler ) {
			OnRtnDepthMarketData_delegate += handler;
		}
		void remove(RtnDepthMarketData^ handler) {
			OnRtnDepthMarketData_delegate -= handler;
		}
		void raise(SecurityFtdcDepthMarketDataField^ pDepthMarketData) { 
			if(OnRtnDepthMarketData_delegate)
				OnRtnDepthMarketData_delegate(pDepthMarketData);
		}
	}

	
	

					/// <summary>
		/// 
		/// </summary>
		event RspError^ OnRspError{
			void add(RspError^ handler) { OnRspError_delegate += handler; }
			void remove(RspError^ handler) { OnRspError_delegate -= handler; }
			void raise(SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(OnRspError_delegate) OnRspError_delegate(pRspInfo,nRequestID,bIsLast);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event RspUserLogin^ OnRspUserLogin{
			void add(RspUserLogin^ handler) { OnRspUserLogin_delegate += handler; }
			void remove(RspUserLogin^ handler) { OnRspUserLogin_delegate -= handler; }
			void raise(SecurityFtdcRspUserLoginField^ pRspUserLogin,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(OnRspUserLogin_delegate) OnRspUserLogin_delegate(pRspUserLogin,pRspInfo,nRequestID,bIsLast);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event RspUserLogout^ OnRspUserLogout{
			void add(RspUserLogout^ handler) { OnRspUserLogout_delegate += handler; }
			void remove(RspUserLogout^ handler) { OnRspUserLogout_delegate -= handler; }
			void raise(SecurityFtdcUserLogoutField^ pUserLogout,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(OnRspUserLogout_delegate) OnRspUserLogout_delegate(pUserLogout,pRspInfo,nRequestID,bIsLast);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event RspFetchAuthRandCode^ OnRspFetchAuthRandCode{
			void add(RspFetchAuthRandCode^ handler) { OnRspFetchAuthRandCode_delegate += handler; }
			void remove(RspFetchAuthRandCode^ handler) { OnRspFetchAuthRandCode_delegate -= handler; }
			void raise(SecurityFtdcAuthRandCodeField^ pAuthRandCode,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(OnRspFetchAuthRandCode_delegate) OnRspFetchAuthRandCode_delegate(pAuthRandCode,pRspInfo,nRequestID,bIsLast);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event RspOrderInsert^ OnRspOrderInsert{
			void add(RspOrderInsert^ handler) { OnRspOrderInsert_delegate += handler; }
			void remove(RspOrderInsert^ handler) { OnRspOrderInsert_delegate -= handler; }
			void raise(SecurityFtdcInputOrderField^ pInputOrder,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(OnRspOrderInsert_delegate) OnRspOrderInsert_delegate(pInputOrder,pRspInfo,nRequestID,bIsLast);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event RspOrderAction^ OnRspOrderAction{
			void add(RspOrderAction^ handler) { OnRspOrderAction_delegate += handler; }
			void remove(RspOrderAction^ handler) { OnRspOrderAction_delegate -= handler; }
			void raise(SecurityFtdcInputOrderActionField^ pInputOrderAction,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(OnRspOrderAction_delegate) OnRspOrderAction_delegate(pInputOrderAction,pRspInfo,nRequestID,bIsLast);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event RspUserPasswordUpdate^ OnRspUserPasswordUpdate{
			void add(RspUserPasswordUpdate^ handler) { OnRspUserPasswordUpdate_delegate += handler; }
			void remove(RspUserPasswordUpdate^ handler) { OnRspUserPasswordUpdate_delegate -= handler; }
			void raise(SecurityFtdcUserPasswordUpdateField^ pUserPasswordUpdate,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(OnRspUserPasswordUpdate_delegate) OnRspUserPasswordUpdate_delegate(pUserPasswordUpdate,pRspInfo,nRequestID,bIsLast);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event RspTradingAccountPasswordUpdate^ OnRspTradingAccountPasswordUpdate{
			void add(RspTradingAccountPasswordUpdate^ handler) { OnRspTradingAccountPasswordUpdate_delegate += handler; }
			void remove(RspTradingAccountPasswordUpdate^ handler) { OnRspTradingAccountPasswordUpdate_delegate -= handler; }
			void raise(SecurityFtdcTradingAccountPasswordUpdateField^ pTradingAccountPasswordUpdate,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(OnRspTradingAccountPasswordUpdate_delegate) OnRspTradingAccountPasswordUpdate_delegate(pTradingAccountPasswordUpdate,pRspInfo,nRequestID,bIsLast);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event RtnOrder^ OnRtnOrder{
			void add(RtnOrder^ handler) { OnRtnOrder_delegate += handler; }
			void remove(RtnOrder^ handler) { OnRtnOrder_delegate -= handler; }
			void raise(SecurityFtdcOrderField^ pOrder) {
				if(OnRtnOrder_delegate) OnRtnOrder_delegate(pOrder);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event RtnTrade^ OnRtnTrade{
			void add(RtnTrade^ handler) { OnRtnTrade_delegate += handler; }
			void remove(RtnTrade^ handler) { OnRtnTrade_delegate -= handler; }
			void raise(SecurityFtdcTradeField^ pTrade) {
				if(OnRtnTrade_delegate) OnRtnTrade_delegate(pTrade);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event ErrRtnOrderInsert^ OnErrRtnOrderInsert{
			void add(ErrRtnOrderInsert^ handler) { OnErrRtnOrderInsert_delegate += handler; }
			void remove(ErrRtnOrderInsert^ handler) { OnErrRtnOrderInsert_delegate -= handler; }
			void raise(SecurityFtdcInputOrderField^ pInputOrder,SecurityFtdcRspInfoField^ pRspInfo) {
				if(OnErrRtnOrderInsert_delegate) OnErrRtnOrderInsert_delegate(pInputOrder,pRspInfo);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event ErrRtnOrderAction^ OnErrRtnOrderAction{
			void add(ErrRtnOrderAction^ handler) { OnErrRtnOrderAction_delegate += handler; }
			void remove(ErrRtnOrderAction^ handler) { OnErrRtnOrderAction_delegate -= handler; }
			void raise(SecurityFtdcOrderActionField^ pOrderAction,SecurityFtdcRspInfoField^ pRspInfo) {
				if(OnErrRtnOrderAction_delegate) OnErrRtnOrderAction_delegate(pOrderAction,pRspInfo);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event RspFundOutByLiber^ OnRspFundOutByLiber{
			void add(RspFundOutByLiber^ handler) { OnRspFundOutByLiber_delegate += handler; }
			void remove(RspFundOutByLiber^ handler) { OnRspFundOutByLiber_delegate -= handler; }
			void raise(SecurityFtdcInputFundTransferField^ pInputFundTransfer,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(OnRspFundOutByLiber_delegate) OnRspFundOutByLiber_delegate(pInputFundTransfer,pRspInfo,nRequestID,bIsLast);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event RtnFundOutByLiber^ OnRtnFundOutByLiber{
			void add(RtnFundOutByLiber^ handler) { OnRtnFundOutByLiber_delegate += handler; }
			void remove(RtnFundOutByLiber^ handler) { OnRtnFundOutByLiber_delegate -= handler; }
			void raise(SecurityFtdcFundTransferField^ pFundTransfer) {
				if(OnRtnFundOutByLiber_delegate) OnRtnFundOutByLiber_delegate(pFundTransfer);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event ErrRtnFundOutByLiber^ OnErrRtnFundOutByLiber{
			void add(ErrRtnFundOutByLiber^ handler) { OnErrRtnFundOutByLiber_delegate += handler; }
			void remove(ErrRtnFundOutByLiber^ handler) { OnErrRtnFundOutByLiber_delegate -= handler; }
			void raise(SecurityFtdcInputFundTransferField^ pInputFundTransfer,SecurityFtdcRspInfoField^ pRspInfo) {
				if(OnErrRtnFundOutByLiber_delegate) OnErrRtnFundOutByLiber_delegate(pInputFundTransfer,pRspInfo);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event RtnFundInByBank^ OnRtnFundInByBank{
			void add(RtnFundInByBank^ handler) { OnRtnFundInByBank_delegate += handler; }
			void remove(RtnFundInByBank^ handler) { OnRtnFundInByBank_delegate -= handler; }
			void raise(SecurityFtdcFundTransferField^ pFundTransfer) {
				if(OnRtnFundInByBank_delegate) OnRtnFundInByBank_delegate(pFundTransfer);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event RspFundInterTransfer^ OnRspFundInterTransfer{
			void add(RspFundInterTransfer^ handler) { OnRspFundInterTransfer_delegate += handler; }
			void remove(RspFundInterTransfer^ handler) { OnRspFundInterTransfer_delegate -= handler; }
			void raise(SecurityFtdcFundInterTransferField^ pFundInterTransfer,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(OnRspFundInterTransfer_delegate) OnRspFundInterTransfer_delegate(pFundInterTransfer,pRspInfo,nRequestID,bIsLast);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event RtnFundInterTransferSerial^ OnRtnFundInterTransferSerial{
			void add(RtnFundInterTransferSerial^ handler) { OnRtnFundInterTransferSerial_delegate += handler; }
			void remove(RtnFundInterTransferSerial^ handler) { OnRtnFundInterTransferSerial_delegate -= handler; }
			void raise(SecurityFtdcFundInterTransferSerialField^ pFundInterTransferSerial) {
				if(OnRtnFundInterTransferSerial_delegate) OnRtnFundInterTransferSerial_delegate(pFundInterTransferSerial);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event ErrRtnFundInterTransfer^ OnErrRtnFundInterTransfer{
			void add(ErrRtnFundInterTransfer^ handler) { OnErrRtnFundInterTransfer_delegate += handler; }
			void remove(ErrRtnFundInterTransfer^ handler) { OnErrRtnFundInterTransfer_delegate -= handler; }
			void raise(SecurityFtdcFundInterTransferField^ pFundInterTransfer,SecurityFtdcRspInfoField^ pRspInfo) {
				if(OnErrRtnFundInterTransfer_delegate) OnErrRtnFundInterTransfer_delegate(pFundInterTransfer,pRspInfo);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event RtnPlatformStateInfo^ OnRtnPlatformStateInfo{
			void add(RtnPlatformStateInfo^ handler) { OnRtnPlatformStateInfo_delegate += handler; }
			void remove(RtnPlatformStateInfo^ handler) { OnRtnPlatformStateInfo_delegate -= handler; }
			void raise(SecurityFtdcPlatformStateInfoField^ pPlatformStateInfo) {
				if(OnRtnPlatformStateInfo_delegate) OnRtnPlatformStateInfo_delegate(pPlatformStateInfo);
			}
		}
																														
	// delegates
	private:
		///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
		FrontConnected^ OnFrontConnected_delegate;
	
	///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
	///@param nReason ����ԭ��
	///        0x1001 �����ʧ��
	///        0x1002 ����дʧ��
	///        0x2001 ����������ʱ
	///        0x2002 ��������ʧ��
	///        0x2003 �յ�������
	FrontDisconnected^ OnFrontDisconnected_delegate;
		
	///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
	///@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��
	HeartBeatWarning^ OnHeartBeatWarning_delegate;
	
	RspSubMarketData^ OnRspSubMarketData_delegate;
	RspUnSubMarketData^ OnRspUnSubMarketData_delegate;
	RtnDepthMarketData^ OnRtnDepthMarketData_delegate;

						RspError^ OnRspError_delegate;
								RspUserLogin^ OnRspUserLogin_delegate;
								RspUserLogout^ OnRspUserLogout_delegate;
								RspFetchAuthRandCode^ OnRspFetchAuthRandCode_delegate;
								RspOrderInsert^ OnRspOrderInsert_delegate;
								RspOrderAction^ OnRspOrderAction_delegate;
								RspUserPasswordUpdate^ OnRspUserPasswordUpdate_delegate;
								RspTradingAccountPasswordUpdate^ OnRspTradingAccountPasswordUpdate_delegate;
								RtnOrder^ OnRtnOrder_delegate;
								RtnTrade^ OnRtnTrade_delegate;
								ErrRtnOrderInsert^ OnErrRtnOrderInsert_delegate;
								ErrRtnOrderAction^ OnErrRtnOrderAction_delegate;
								RspFundOutByLiber^ OnRspFundOutByLiber_delegate;
								RtnFundOutByLiber^ OnRtnFundOutByLiber_delegate;
								ErrRtnFundOutByLiber^ OnErrRtnFundOutByLiber_delegate;
								RtnFundInByBank^ OnRtnFundInByBank_delegate;
								RspFundInterTransfer^ OnRspFundInterTransfer_delegate;
								RtnFundInterTransferSerial^ OnRtnFundInterTransferSerial_delegate;
								ErrRtnFundInterTransfer^ OnErrRtnFundInterTransfer_delegate;
								RtnPlatformStateInfo^ OnRtnPlatformStateInfo_delegate;
																														#ifdef __LTS_MA__
		// callbacks for MA
	private:
	///Ĭ��
	///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
	void cbk_OnFrontConnected();
	
	///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
	///@param nReason ����ԭ��
	///        0x1001 �����ʧ��
	///        0x1002 ����дʧ��
	///        0x2001 ����������ʱ
	///        0x2002 ��������ʧ��
	///        0x2003 �յ�������
	void cbk_OnFrontDisconnected(int nReason);
		
	///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
	///@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��
	void cbk_OnHeartBeatWarning(int nTimeLapse);
	
	


					/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspError(CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspUserLogin(CSecurityFtdcRspUserLoginField *pRspUserLogin,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspUserLogout(CSecurityFtdcUserLogoutField *pUserLogout,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspFetchAuthRandCode(CSecurityFtdcAuthRandCodeField *pAuthRandCode,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspOrderInsert(CSecurityFtdcInputOrderField *pInputOrder,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspOrderAction(CSecurityFtdcInputOrderActionField *pInputOrderAction,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspUserPasswordUpdate(CSecurityFtdcUserPasswordUpdateField *pUserPasswordUpdate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspTradingAccountPasswordUpdate(CSecurityFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnRtnOrder(CSecurityFtdcOrderField *pOrder);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnRtnTrade(CSecurityFtdcTradeField *pTrade);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnErrRtnOrderInsert(CSecurityFtdcInputOrderField *pInputOrder,CSecurityFtdcRspInfoField *pRspInfo);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnErrRtnOrderAction(CSecurityFtdcOrderActionField *pOrderAction,CSecurityFtdcRspInfoField *pRspInfo);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspFundOutByLiber(CSecurityFtdcInputFundTransferField *pInputFundTransfer,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnRtnFundOutByLiber(CSecurityFtdcFundTransferField *pFundTransfer);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnErrRtnFundOutByLiber(CSecurityFtdcInputFundTransferField *pInputFundTransfer,CSecurityFtdcRspInfoField *pRspInfo);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnRtnFundInByBank(CSecurityFtdcFundTransferField *pFundTransfer);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspFundInterTransfer(CSecurityFtdcFundInterTransferField *pFundInterTransfer,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnRtnFundInterTransferSerial(CSecurityFtdcFundInterTransferSerialField *pFundInterTransferSerial);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnErrRtnFundInterTransfer(CSecurityFtdcFundInterTransferField *pFundInterTransfer,CSecurityFtdcRspInfoField *pRspInfo);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnRtnPlatformStateInfo(CSecurityFtdcPlatformStateInfoField *pPlatformStateInfo);
																														
/// <summary>
		/// �����лص�������ַ���ݸ�SPI
		/// </summary>
		void RegisterCallbacks();
#endif
	};
}
