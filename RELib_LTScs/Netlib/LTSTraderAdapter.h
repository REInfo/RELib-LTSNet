

#pragma once
#include "Util.h"
#include "LTSTraderSpi.h"


using namespace RELib_LTSNative;

namespace  RELib_LTSNative{
	class CLTSTraderSpi;
};


namespace RELib_LTSNet
{

	/// <summary>
	/// �й���,TraderAPI Adapter
	/// </summary>
	public ref class CLTSTraderAdapter
	{
	public:
		/// <summary>
		///����CTPTraderAdapter
		///����������Ϣ�ļ���Ŀ¼��Ĭ��Ϊ��ǰĿ¼
		/// </summary>
		CLTSTraderAdapter(void);
		/// <summary>
		///����CTPTraderAdapter
		/// </summary>
		/// <param name="pszFlowPath">����������Ϣ�ļ���Ŀ¼��Ĭ��Ϊ��ǰĿ¼</param>
		/// <param name="bIsUsingUdp">�Ƿ�ʹ��UDPЭ��</param>
		CLTSTraderAdapter(String^ pszFlowPath, String^ pszUserApiType);
	private:
		~CLTSTraderAdapter(void);
		CSecurityFtdcTraderApi* m_pApi;
		CLTSTraderSpi* m_pSpi;
	public:
		///ɾ���ӿڶ�����
		///@remark ����ʹ�ñ��ӿڶ���ʱ,���øú���ɾ���ӿڶ���
		void Release();

		///��ʼ��
		///@remark ��ʼ�����л���,ֻ�е��ú�,�ӿڲſ�ʼ����
		void Init();

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
		void RegisterFront(String^ pszFrontAddress);



		///����˽������
		///@param nResumeType ˽�����ش���ʽ  
		///        TERT_RESTART:�ӱ������տ�ʼ�ش�
		///        TERT_RESUME:���ϴ��յ�������
		///        TERT_QUICK:ֻ���͵�¼��˽����������
		///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ�˽���������ݡ�
		void SubscribePrivateTopic(EnumRESUMETYPE nResumeType);

		///���Ĺ�������
		///@param nResumeType �������ش���ʽ  
		///        TERT_RESTART:�ӱ������տ�ʼ�ش�
		///        TERT_RESUME:���ϴ��յ�������
		///        TERT_QUICK:ֻ���͵�¼�󹫹���������
		///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ������������ݡ�
		void SubscribePublicTopic(EnumRESUMETYPE nResumeType);

		///���Ľ���Ա����
		///@param nResumeType ����Ա���ش���ʽ  
		///        TERT_RESTART:�ӱ������տ�ʼ�ش�
		///        TERT_RESUME:���ϴ��յ�������
		///        TERT_QUICK:ֻ���͵�¼����Ա��������
		///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ�����Ա�������ݡ�
		//void SubscribeUserTopic(EnumRESUMETYPE nResumeType);



		///�û���¼����
		int ReqUserLogin(SecurityFtdcReqUserLoginField^ pReqUserLoginField, int nRequestID);


		/// <summary>
		/// 
		/// </summary>
		int  ReqUserLogout(SecurityFtdcUserLogoutField^ pUserLogout, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqFetchAuthRandCode(SecurityFtdcAuthRandCodeField^ pAuthRandCode, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqOrderInsert(SecurityFtdcInputOrderField^ pInputOrder, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqOrderAction(SecurityFtdcInputOrderActionField^ pInputOrderAction, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqUserPasswordUpdate(SecurityFtdcUserPasswordUpdateField^ pUserPasswordUpdate, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqTradingAccountPasswordUpdate(SecurityFtdcTradingAccountPasswordUpdateField^ pTradingAccountPasswordUpdate, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqFundOutByLiber(SecurityFtdcInputFundTransferField^ pInputFundTransfer, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqFundInterTransfer(SecurityFtdcFundInterTransferField^ pFundInterTransfer, int nRequestID);

		//events
	public:
		/// <summary>
		/// ���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
		/// </summary>
		event FrontConnected^ OnFrontConnected {
			void add(FrontConnected^ handler) {
				FrontConnected_delegate += handler;
			}
			void remove(FrontConnected^ handler) {
				FrontConnected_delegate -= handler;
			}
			void raise() {
				if (FrontConnected_delegate)
					FrontConnected_delegate();
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
			void add(FrontDisconnected^ handler) {
				FrontDisconnected_delegate += handler;
			}
			void remove(FrontDisconnected^ handler) {
				FrontDisconnected_delegate -= handler;
			}
			void raise(int nReason) {
				if (FrontDisconnected_delegate)
					FrontDisconnected_delegate(nReason);
			}
		}
		///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
		///@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��
		event HeartBeatWarning^ OnHeartBeatWarning{
			void add(HeartBeatWarning^ handler) {
				HeartBeatWarning_delegate += handler;
			}
			void remove(HeartBeatWarning^ handler) {
				HeartBeatWarning_delegate -= handler;
			}
			void raise(int nTimeLapse) {
				if (HeartBeatWarning_delegate)
					HeartBeatWarning_delegate(nTimeLapse);
			}
		}




		/// <summary>
		/// 
		/// </summary>
		event RspError^ OnRspError{
			void add(RspError^ handler) { RspError_delegate += handler; }
			void remove(RspError^ handler) { RspError_delegate -= handler; }
			void raise(SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspError_delegate) RspError_delegate(pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspUserLogin^ OnRspUserLogin{
			void add(RspUserLogin^ handler) { RspUserLogin_delegate += handler; }
			void remove(RspUserLogin^ handler) { RspUserLogin_delegate -= handler; }
			void raise(SecurityFtdcRspUserLoginField^ pRspUserLogin, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspUserLogin_delegate) RspUserLogin_delegate(pRspUserLogin, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspUserLogout^ OnRspUserLogout{
			void add(RspUserLogout^ handler) { RspUserLogout_delegate += handler; }
			void remove(RspUserLogout^ handler) { RspUserLogout_delegate -= handler; }
			void raise(SecurityFtdcUserLogoutField^ pUserLogout, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspUserLogout_delegate) RspUserLogout_delegate(pUserLogout, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspFetchAuthRandCode^ OnRspFetchAuthRandCode{
			void add(RspFetchAuthRandCode^ handler) { RspFetchAuthRandCode_delegate += handler; }
			void remove(RspFetchAuthRandCode^ handler) { RspFetchAuthRandCode_delegate -= handler; }
			void raise(SecurityFtdcAuthRandCodeField^ pAuthRandCode, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspFetchAuthRandCode_delegate) RspFetchAuthRandCode_delegate(pAuthRandCode, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspOrderInsert^ OnRspOrderInsert{
			void add(RspOrderInsert^ handler) { RspOrderInsert_delegate += handler; }
			void remove(RspOrderInsert^ handler) { RspOrderInsert_delegate -= handler; }
			void raise(SecurityFtdcInputOrderField^ pInputOrder, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspOrderInsert_delegate) RspOrderInsert_delegate(pInputOrder, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspOrderAction^ OnRspOrderAction{
			void add(RspOrderAction^ handler) { RspOrderAction_delegate += handler; }
			void remove(RspOrderAction^ handler) { RspOrderAction_delegate -= handler; }
			void raise(SecurityFtdcInputOrderActionField^ pInputOrderAction, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspOrderAction_delegate) RspOrderAction_delegate(pInputOrderAction, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspUserPasswordUpdate^ OnRspUserPasswordUpdate{
			void add(RspUserPasswordUpdate^ handler) { RspUserPasswordUpdate_delegate += handler; }
			void remove(RspUserPasswordUpdate^ handler) { RspUserPasswordUpdate_delegate -= handler; }
			void raise(SecurityFtdcUserPasswordUpdateField^ pUserPasswordUpdate, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspUserPasswordUpdate_delegate) RspUserPasswordUpdate_delegate(pUserPasswordUpdate, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspTradingAccountPasswordUpdate^ OnRspTradingAccountPasswordUpdate{
			void add(RspTradingAccountPasswordUpdate^ handler) { RspTradingAccountPasswordUpdate_delegate += handler; }
			void remove(RspTradingAccountPasswordUpdate^ handler) { RspTradingAccountPasswordUpdate_delegate -= handler; }
			void raise(SecurityFtdcTradingAccountPasswordUpdateField^ pTradingAccountPasswordUpdate, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspTradingAccountPasswordUpdate_delegate) RspTradingAccountPasswordUpdate_delegate(pTradingAccountPasswordUpdate, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RtnOrder^ OnRtnOrder{
			void add(RtnOrder^ handler) { RtnOrder_delegate += handler; }
			void remove(RtnOrder^ handler) { RtnOrder_delegate -= handler; }
			void raise(SecurityFtdcOrderField^ pOrder) {
				if (RtnOrder_delegate) RtnOrder_delegate(pOrder);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RtnTrade^ OnRtnTrade{
			void add(RtnTrade^ handler) { RtnTrade_delegate += handler; }
			void remove(RtnTrade^ handler) { RtnTrade_delegate -= handler; }
			void raise(SecurityFtdcTradeField^ pTrade) {
				if (RtnTrade_delegate) RtnTrade_delegate(pTrade);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event ErrRtnOrderInsert^ OnErrRtnOrderInsert{
			void add(ErrRtnOrderInsert^ handler) { ErrRtnOrderInsert_delegate += handler; }
			void remove(ErrRtnOrderInsert^ handler) { ErrRtnOrderInsert_delegate -= handler; }
			void raise(SecurityFtdcInputOrderField^ pInputOrder, SecurityFtdcRspInfoField^ pRspInfo) {
				if (ErrRtnOrderInsert_delegate) ErrRtnOrderInsert_delegate(pInputOrder, pRspInfo);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event ErrRtnOrderAction^ OnErrRtnOrderAction{
			void add(ErrRtnOrderAction^ handler) { ErrRtnOrderAction_delegate += handler; }
			void remove(ErrRtnOrderAction^ handler) { ErrRtnOrderAction_delegate -= handler; }
			void raise(SecurityFtdcOrderActionField^ pOrderAction, SecurityFtdcRspInfoField^ pRspInfo) {
				if (ErrRtnOrderAction_delegate) ErrRtnOrderAction_delegate(pOrderAction, pRspInfo);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspFundOutByLiber^ OnRspFundOutByLiber{
			void add(RspFundOutByLiber^ handler) { RspFundOutByLiber_delegate += handler; }
			void remove(RspFundOutByLiber^ handler) { RspFundOutByLiber_delegate -= handler; }
			void raise(SecurityFtdcInputFundTransferField^ pInputFundTransfer, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspFundOutByLiber_delegate) RspFundOutByLiber_delegate(pInputFundTransfer, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RtnFundOutByLiber^ OnRtnFundOutByLiber{
			void add(RtnFundOutByLiber^ handler) { RtnFundOutByLiber_delegate += handler; }
			void remove(RtnFundOutByLiber^ handler) { RtnFundOutByLiber_delegate -= handler; }
			void raise(SecurityFtdcFundTransferField^ pFundTransfer) {
				if (RtnFundOutByLiber_delegate) RtnFundOutByLiber_delegate(pFundTransfer);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event ErrRtnFundOutByLiber^ OnErrRtnFundOutByLiber{
			void add(ErrRtnFundOutByLiber^ handler) { ErrRtnFundOutByLiber_delegate += handler; }
			void remove(ErrRtnFundOutByLiber^ handler) { ErrRtnFundOutByLiber_delegate -= handler; }
			void raise(SecurityFtdcInputFundTransferField^ pInputFundTransfer, SecurityFtdcRspInfoField^ pRspInfo) {
				if (ErrRtnFundOutByLiber_delegate) ErrRtnFundOutByLiber_delegate(pInputFundTransfer, pRspInfo);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RtnFundInByBank^ OnRtnFundInByBank{
			void add(RtnFundInByBank^ handler) { RtnFundInByBank_delegate += handler; }
			void remove(RtnFundInByBank^ handler) { RtnFundInByBank_delegate -= handler; }
			void raise(SecurityFtdcFundTransferField^ pFundTransfer) {
				if (RtnFundInByBank_delegate) RtnFundInByBank_delegate(pFundTransfer);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspFundInterTransfer^ OnRspFundInterTransfer{
			void add(RspFundInterTransfer^ handler) { RspFundInterTransfer_delegate += handler; }
			void remove(RspFundInterTransfer^ handler) { RspFundInterTransfer_delegate -= handler; }
			void raise(SecurityFtdcFundInterTransferField^ pFundInterTransfer, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspFundInterTransfer_delegate) RspFundInterTransfer_delegate(pFundInterTransfer, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RtnFundInterTransferSerial^ OnRtnFundInterTransferSerial{
			void add(RtnFundInterTransferSerial^ handler) { RtnFundInterTransferSerial_delegate += handler; }
			void remove(RtnFundInterTransferSerial^ handler) { RtnFundInterTransferSerial_delegate -= handler; }
			void raise(SecurityFtdcFundInterTransferSerialField^ pFundInterTransferSerial) {
				if (RtnFundInterTransferSerial_delegate) RtnFundInterTransferSerial_delegate(pFundInterTransferSerial);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event ErrRtnFundInterTransfer^ OnErrRtnFundInterTransfer{
			void add(ErrRtnFundInterTransfer^ handler) { ErrRtnFundInterTransfer_delegate += handler; }
			void remove(ErrRtnFundInterTransfer^ handler) { ErrRtnFundInterTransfer_delegate -= handler; }
			void raise(SecurityFtdcFundInterTransferField^ pFundInterTransfer, SecurityFtdcRspInfoField^ pRspInfo) {
				if (ErrRtnFundInterTransfer_delegate) ErrRtnFundInterTransfer_delegate(pFundInterTransfer, pRspInfo);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RtnPlatformStateInfo^ OnRtnPlatformStateInfo{
			void add(RtnPlatformStateInfo^ handler) { RtnPlatformStateInfo_delegate += handler; }
			void remove(RtnPlatformStateInfo^ handler) { RtnPlatformStateInfo_delegate -= handler; }
			void raise(SecurityFtdcPlatformStateInfoField^ pPlatformStateInfo) {
				if (RtnPlatformStateInfo_delegate) RtnPlatformStateInfo_delegate(pPlatformStateInfo);
			}
		}

		// delegates
	private:
		///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
		FrontConnected^ FrontConnected_delegate;

		///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
		///@param nReason ����ԭ��
		///        0x1001 �����ʧ��
		///        0x1002 ����дʧ��
		///        0x2001 ����������ʱ
		///        0x2002 ��������ʧ��
		///        0x2003 �յ�������
		FrontDisconnected^ FrontDisconnected_delegate;

		///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
		///@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��
		HeartBeatWarning^ HeartBeatWarning_delegate;



		RspError^ RspError_delegate;
		RspUserLogin^ RspUserLogin_delegate;
		RspUserLogout^ RspUserLogout_delegate;
		RspFetchAuthRandCode^ RspFetchAuthRandCode_delegate;
		RspOrderInsert^ RspOrderInsert_delegate;
		RspOrderAction^ RspOrderAction_delegate;
		RspUserPasswordUpdate^ RspUserPasswordUpdate_delegate;
		RspTradingAccountPasswordUpdate^ RspTradingAccountPasswordUpdate_delegate;
		RtnOrder^ RtnOrder_delegate;
		RtnTrade^ RtnTrade_delegate;
		ErrRtnOrderInsert^ ErrRtnOrderInsert_delegate;
		ErrRtnOrderAction^ ErrRtnOrderAction_delegate;
		RspFundOutByLiber^ RspFundOutByLiber_delegate;
		RtnFundOutByLiber^ RtnFundOutByLiber_delegate;
		ErrRtnFundOutByLiber^ ErrRtnFundOutByLiber_delegate;
		RtnFundInByBank^ RtnFundInByBank_delegate;
		RspFundInterTransfer^ RspFundInterTransfer_delegate;
		RtnFundInterTransferSerial^ RtnFundInterTransferSerial_delegate;
		ErrRtnFundInterTransfer^ ErrRtnFundInterTransfer_delegate;
		RtnPlatformStateInfo^ RtnPlatformStateInfo_delegate;
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
