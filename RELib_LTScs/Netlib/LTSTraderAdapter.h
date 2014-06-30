

#pragma once
#include "Util.h"
#include "LTSTraderSpi.h"

using namespace LTSNative;

namespace  LTSNative{
	class CLTSTraderSpi;
};


namespace RELib_LTScs
{

	/// <summary>
	/// �й���,TraderAPI Adapter
	/// </summary>
	public ref class LTSTraderAdapter
	{
	public:
		/// <summary>
		///����CTPTraderAdapter
		///����������Ϣ�ļ���Ŀ¼��Ĭ��Ϊ��ǰĿ¼
		/// </summary>
		LTSTraderAdapter(void);
		/// <summary>
		///����CTPTraderAdapter
		/// </summary>
		/// <param name="pszFlowPath">����������Ϣ�ļ���Ŀ¼��Ĭ��Ϊ��ǰĿ¼</param>
		/// <param name="bIsUsingUdp">�Ƿ�ʹ��UDPЭ��</param>
		LTSTraderAdapter(String^ pszFlowPath,String^ pszUserApiType);
	private:
		~LTSTraderAdapter(void);
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
		///        SECURITY_TERT_RESTART:�ӱ������տ�ʼ�ش�
		///        SECURITY_TERT_RESUME:���ϴ��յ�������
		///        SECURITY_TERT_QUICK:ֻ���͵�¼��˽����������
		///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ�˽���������ݡ�
		void SubscribePrivateTopic(EnumRESUMETYPE nResumeType);

		///���Ĺ�������
		///@param nResumeType �������ش���ʽ  
		///        SECURITY_TERT_RESTART:�ӱ������տ�ʼ�ش�
		///        SECURITY_TERT_RESUME:���ϴ��յ�������
		///        SECURITY_TERT_QUICK:ֻ���͵�¼�󹫹���������
		///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ������������ݡ�
		void SubscribePublicTopic(EnumRESUMETYPE nResumeType);
		

		///�û���¼����
		int ReqUserLogin(SecurityFtdcReqUserLoginField^ pReqUserLoginField, int nRequestID);


		/// <summary>
		/// 
		/// </summary>
		int ReqUserLogout(SecurityFtdcUserLogoutField^ pUserLogout, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int ReqOrderInsert(SecurityFtdcInputOrderField^ pInputOrder, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int ReqOrderAction(SecurityFtdcInputOrderActionField^ pInputOrderAction, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int ReqUserPasswordUpdate(SecurityFtdcUserPasswordUpdateField^ pUserPasswordUpdate, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int ReqTradingAccountPasswordUpdate(SecurityFtdcTradingAccountPasswordUpdateField^ pTradingAccountPasswordUpdate, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int ReqQryExchange(SecurityFtdcQryExchangeField^ pQryExchange, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int ReqQryInstrument(SecurityFtdcQryInstrumentField^ pQryInstrument, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int ReqQryInvestor(SecurityFtdcQryInvestorField^ pQryInvestor, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int ReqQryTradingCode(SecurityFtdcQryTradingCodeField^ pQryTradingCode, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int ReqQryTradingAccount(SecurityFtdcQryTradingAccountField^ pQryTradingAccount, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int ReqQryDepthMarketData(SecurityFtdcQryDepthMarketDataField^ pQryDepthMarketData, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int ReqQryInvestorPositionDetail(SecurityFtdcQryInvestorPositionDetailField^ pQryInvestorPositionDetail, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int ReqQryBondInterest(SecurityFtdcQryBondInterestField^ pQryBondInterest, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int ReqQryOrder(SecurityFtdcQryOrderField^ pQryOrder, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int ReqQryTrade(SecurityFtdcQryTradeField^ pQryTrade, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int ReqQryInvestorPosition(SecurityFtdcQryInvestorPositionField^ pQryInvestorPosition, int nRequestID);

		//events
	public:
		/// <summary>
		/// ���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
		/// </summary>
		event FrontConnected^ OnFrontConnected {
			void add(FrontConnected^ handler ) {
				FrontConnected_delegate += handler;
			}
			void remove(FrontConnected^ handler) {
				FrontConnected_delegate -= handler;
			}
			void raise() {
				if(FrontConnected_delegate)
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
			void add(FrontDisconnected^ handler ) {
				FrontDisconnected_delegate += handler;
			}
			void remove(FrontDisconnected^ handler) {
				FrontDisconnected_delegate -= handler;
			}
			void raise(int nReason) {
				if(FrontDisconnected_delegate)
					FrontDisconnected_delegate(nReason);
			}
		}
		///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
		///@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��
		event HeartBeatWarning^ OnHeartBeatWarning{
			void add(HeartBeatWarning^ handler ) {
				HeartBeatWarning_delegate += handler;
			}
			void remove(HeartBeatWarning^ handler) {
				HeartBeatWarning_delegate -= handler;
			}
			void raise(int nTimeLapse) {
				if(HeartBeatWarning_delegate)
					HeartBeatWarning_delegate(nTimeLapse);
			}
		}


		
		/// <summary>
		/// 
		/// </summary>
		event RspError^ OnRspError{
			void add(RspError^ handler) { RspError_delegate += handler; }
			void remove(RspError^ handler) { RspError_delegate -= handler; }
			void raise(SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(RspError_delegate) RspError_delegate(pRspInfo,nRequestID,bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspUserLogin^ OnRspUserLogin{
			void add(RspUserLogin^ handler) { RspUserLogin_delegate += handler; }
			void remove(RspUserLogin^ handler) { RspUserLogin_delegate -= handler; }
			void raise(SecurityFtdcRspUserLoginField^ pRspUserLogin,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(RspUserLogin_delegate) RspUserLogin_delegate(pRspUserLogin,pRspInfo,nRequestID,bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspUserLogout^ OnRspUserLogout{
			void add(RspUserLogout^ handler) { RspUserLogout_delegate += handler; }
			void remove(RspUserLogout^ handler) { RspUserLogout_delegate -= handler; }
			void raise(SecurityFtdcUserLogoutField^ pUserLogout,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(RspUserLogout_delegate) RspUserLogout_delegate(pUserLogout,pRspInfo,nRequestID,bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspOrderInsert^ OnRspOrderInsert{
			void add(RspOrderInsert^ handler) { RspOrderInsert_delegate += handler; }
			void remove(RspOrderInsert^ handler) { RspOrderInsert_delegate -= handler; }
			void raise(SecurityFtdcInputOrderField^ pInputOrder,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(RspOrderInsert_delegate) RspOrderInsert_delegate(pInputOrder,pRspInfo,nRequestID,bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspOrderAction^ OnRspOrderAction{
			void add(RspOrderAction^ handler) { RspOrderAction_delegate += handler; }
			void remove(RspOrderAction^ handler) { RspOrderAction_delegate -= handler; }
			void raise(SecurityFtdcInputOrderActionField^ pInputOrderAction,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(RspOrderAction_delegate) RspOrderAction_delegate(pInputOrderAction,pRspInfo,nRequestID,bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspUserPasswordUpdate^ OnRspUserPasswordUpdate{
			void add(RspUserPasswordUpdate^ handler) { RspUserPasswordUpdate_delegate += handler; }
			void remove(RspUserPasswordUpdate^ handler) { RspUserPasswordUpdate_delegate -= handler; }
			void raise(SecurityFtdcUserPasswordUpdateField^ pUserPasswordUpdate,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(RspUserPasswordUpdate_delegate) RspUserPasswordUpdate_delegate(pUserPasswordUpdate,pRspInfo,nRequestID,bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspTradingAccountPasswordUpdate^ OnRspTradingAccountPasswordUpdate{
			void add(RspTradingAccountPasswordUpdate^ handler) { RspTradingAccountPasswordUpdate_delegate += handler; }
			void remove(RspTradingAccountPasswordUpdate^ handler) { RspTradingAccountPasswordUpdate_delegate -= handler; }
			void raise(SecurityFtdcTradingAccountPasswordUpdateField^ pTradingAccountPasswordUpdate,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(RspTradingAccountPasswordUpdate_delegate) RspTradingAccountPasswordUpdate_delegate(pTradingAccountPasswordUpdate,pRspInfo,nRequestID,bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryExchange^ OnRspQryExchange{
			void add(RspQryExchange^ handler) { RspQryExchange_delegate += handler; }
			void remove(RspQryExchange^ handler) { RspQryExchange_delegate -= handler; }
			void raise(SecurityFtdcExchangeField^ pExchange,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(RspQryExchange_delegate) RspQryExchange_delegate(pExchange,pRspInfo,nRequestID,bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryInstrument^ OnRspQryInstrument{
			void add(RspQryInstrument^ handler) { RspQryInstrument_delegate += handler; }
			void remove(RspQryInstrument^ handler) { RspQryInstrument_delegate -= handler; }
			void raise(SecurityFtdcInstrumentField^ pInstrument,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(RspQryInstrument_delegate) RspQryInstrument_delegate(pInstrument,pRspInfo,nRequestID,bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryInvestor^ OnRspQryInvestor{
			void add(RspQryInvestor^ handler) { RspQryInvestor_delegate += handler; }
			void remove(RspQryInvestor^ handler) { RspQryInvestor_delegate -= handler; }
			void raise(SecurityFtdcInvestorField^ pInvestor,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(RspQryInvestor_delegate) RspQryInvestor_delegate(pInvestor,pRspInfo,nRequestID,bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryTradingCode^ OnRspQryTradingCode{
			void add(RspQryTradingCode^ handler) { RspQryTradingCode_delegate += handler; }
			void remove(RspQryTradingCode^ handler) { RspQryTradingCode_delegate -= handler; }
			void raise(SecurityFtdcTradingCodeField^ pTradingCode,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(RspQryTradingCode_delegate) RspQryTradingCode_delegate(pTradingCode,pRspInfo,nRequestID,bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryTradingAccount^ OnRspQryTradingAccount{
			void add(RspQryTradingAccount^ handler) { RspQryTradingAccount_delegate += handler; }
			void remove(RspQryTradingAccount^ handler) { RspQryTradingAccount_delegate -= handler; }
			void raise(SecurityFtdcTradingAccountField^ pTradingAccount,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(RspQryTradingAccount_delegate) RspQryTradingAccount_delegate(pTradingAccount,pRspInfo,nRequestID,bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryDepthMarketData^ OnRspQryDepthMarketData{
			void add(RspQryDepthMarketData^ handler) { RspQryDepthMarketData_delegate += handler; }
			void remove(RspQryDepthMarketData^ handler) { RspQryDepthMarketData_delegate -= handler; }
			void raise(SecurityFtdcDepthMarketDataField^ pDepthMarketData,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(RspQryDepthMarketData_delegate) RspQryDepthMarketData_delegate(pDepthMarketData,pRspInfo,nRequestID,bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryInvestorPositionDetail^ OnRspQryInvestorPositionDetail{
			void add(RspQryInvestorPositionDetail^ handler) { RspQryInvestorPositionDetail_delegate += handler; }
			void remove(RspQryInvestorPositionDetail^ handler) { RspQryInvestorPositionDetail_delegate -= handler; }
			void raise(SecurityFtdcInvestorPositionDetailField^ pInvestorPositionDetail,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(RspQryInvestorPositionDetail_delegate) RspQryInvestorPositionDetail_delegate(pInvestorPositionDetail,pRspInfo,nRequestID,bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryBondInterest^ OnRspQryBondInterest{
			void add(RspQryBondInterest^ handler) { RspQryBondInterest_delegate += handler; }
			void remove(RspQryBondInterest^ handler) { RspQryBondInterest_delegate -= handler; }
			void raise(SecurityFtdcBondInterestField^ pBondInterest,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(RspQryBondInterest_delegate) RspQryBondInterest_delegate(pBondInterest,pRspInfo,nRequestID,bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryOrder^ OnRspQryOrder{
			void add(RspQryOrder^ handler) { RspQryOrder_delegate += handler; }
			void remove(RspQryOrder^ handler) { RspQryOrder_delegate -= handler; }
			void raise(SecurityFtdcOrderField^ pOrder,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(RspQryOrder_delegate) RspQryOrder_delegate(pOrder,pRspInfo,nRequestID,bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryTrade^ OnRspQryTrade{
			void add(RspQryTrade^ handler) { RspQryTrade_delegate += handler; }
			void remove(RspQryTrade^ handler) { RspQryTrade_delegate -= handler; }
			void raise(SecurityFtdcTradeField^ pTrade,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(RspQryTrade_delegate) RspQryTrade_delegate(pTrade,pRspInfo,nRequestID,bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryInvestorPosition^ OnRspQryInvestorPosition{
			void add(RspQryInvestorPosition^ handler) { RspQryInvestorPosition_delegate += handler; }
			void remove(RspQryInvestorPosition^ handler) { RspQryInvestorPosition_delegate -= handler; }
			void raise(SecurityFtdcInvestorPositionField^ pInvestorPosition,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(RspQryInvestorPosition_delegate) RspQryInvestorPosition_delegate(pInvestorPosition,pRspInfo,nRequestID,bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RtnOrder^ OnRtnOrder{
			void add(RtnOrder^ handler) { RtnOrder_delegate += handler; }
			void remove(RtnOrder^ handler) { RtnOrder_delegate -= handler; }
			void raise(SecurityFtdcOrderField^ pOrder) {
				if(RtnOrder_delegate) RtnOrder_delegate(pOrder);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RtnTrade^ OnRtnTrade{
			void add(RtnTrade^ handler) { RtnTrade_delegate += handler; }
			void remove(RtnTrade^ handler) { RtnTrade_delegate -= handler; }
			void raise(SecurityFtdcTradeField^ pTrade) {
				if(RtnTrade_delegate) RtnTrade_delegate(pTrade);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event ErrRtnOrderInsert^ OnErrRtnOrderInsert{
			void add(ErrRtnOrderInsert^ handler) { ErrRtnOrderInsert_delegate += handler; }
			void remove(ErrRtnOrderInsert^ handler) { ErrRtnOrderInsert_delegate -= handler; }
			void raise(SecurityFtdcInputOrderField^ pInputOrder,SecurityFtdcRspInfoField^ pRspInfo) {
				if(ErrRtnOrderInsert_delegate) ErrRtnOrderInsert_delegate(pInputOrder,pRspInfo);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event ErrRtnOrderAction^ OnErrRtnOrderAction{
			void add(ErrRtnOrderAction^ handler) { ErrRtnOrderAction_delegate += handler; }
			void remove(ErrRtnOrderAction^ handler) { ErrRtnOrderAction_delegate -= handler; }
			void raise(SecurityFtdcOrderActionField^ pOrderAction,SecurityFtdcRspInfoField^ pRspInfo) {
				if(ErrRtnOrderAction_delegate) ErrRtnOrderAction_delegate(pOrderAction,pRspInfo);
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
		RspOrderInsert^ RspOrderInsert_delegate;
		RspOrderAction^ RspOrderAction_delegate;
		RspUserPasswordUpdate^ RspUserPasswordUpdate_delegate;
		RspTradingAccountPasswordUpdate^ RspTradingAccountPasswordUpdate_delegate;
		RspQryExchange^ RspQryExchange_delegate;
		RspQryInstrument^ RspQryInstrument_delegate;
		RspQryInvestor^ RspQryInvestor_delegate;
		RspQryTradingCode^ RspQryTradingCode_delegate;
		RspQryTradingAccount^ RspQryTradingAccount_delegate;
		RspQryDepthMarketData^ RspQryDepthMarketData_delegate;
		RspQryInvestorPositionDetail^ RspQryInvestorPositionDetail_delegate;
		RspQryBondInterest^ RspQryBondInterest_delegate;
		RspQryOrder^ RspQryOrder_delegate;
		RspQryTrade^ RspQryTrade_delegate;
		RspQryInvestorPosition^ RspQryInvestorPosition_delegate;
		RtnOrder^ RtnOrder_delegate;
		RtnTrade^ RtnTrade_delegate;
		ErrRtnOrderInsert^ ErrRtnOrderInsert_delegate;
		ErrRtnOrderAction^ ErrRtnOrderAction_delegate;
#ifdef __CTP_MA__
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
		void cbk_OnRspQryExchange(CSecurityFtdcExchangeField *pExchange,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspQryInstrument(CSecurityFtdcInstrumentField *pInstrument,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspQryInvestor(CSecurityFtdcInvestorField *pInvestor,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspQryTradingCode(CSecurityFtdcTradingCodeField *pTradingCode,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspQryTradingAccount(CSecurityFtdcTradingAccountField *pTradingAccount,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspQryDepthMarketData(CSecurityFtdcDepthMarketDataField *pDepthMarketData,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspQryInvestorPositionDetail(CSecurityFtdcInvestorPositionDetailField *pInvestorPositionDetail,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspQryBondInterest(CSecurityFtdcBondInterestField *pBondInterest,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspQryOrder(CSecurityFtdcOrderField *pOrder,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspQryTrade(CSecurityFtdcTradeField *pTrade,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspQryInvestorPosition(CSecurityFtdcInvestorPositionField *pInvestorPosition,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		void cbk_OnRtnOrder(CSecurityFtdcOrderField *pOrder,CSecurityFtdcOrderField *pOrder);
		/// <summary>
		/// 
		/// </summary>
		void cbk_OnRtnTrade(CSecurityFtdcTradeField *pTrade,CSecurityFtdcTradeField *pTrade);
		/// <summary>
		/// 
		/// </summary>
		void cbk_OnErrRtnOrderInsert(CSecurityFtdcInputOrderField *pInputOrder,CSecurityFtdcRspInfoField *pRspInfo);
		/// <summary>
		/// 
		/// </summary>
		void cbk_OnErrRtnOrderAction(CSecurityFtdcOrderActionField *pOrderAction,CSecurityFtdcRspInfoField *pRspInfo);

		/// <summary>
		/// �����лص�������ַ���ݸ�SPI
		/// </summary>
		void RegisterCallbacks();
#endif
	};
}
