

#pragma once
#include "Util.h"

using namespace LTSNative;

namespace  LTSNative{
	class CLTSMdSpi;
};


namespace RELib_LTScs
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
		LTSMDAdapter(String^ pszFlowPath);
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

		
		///ע��ص��ӿ�
		///@param pSpi �����Իص��ӿ����ʵ��
		//void RegisterSpi(CSecurityFtdcMdSpi *pSpi);

		

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
			void raise(SecurityFtdcRspUserLoginField^ pRspUserLogin,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) 
			{
				if(OnRspUserLogin_delegate) 
					OnRspUserLogin_delegate(pRspUserLogin,pRspInfo,nRequestID,bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspUserLogout^ OnRspUserLogout{
			void add(RspUserLogout^ handler) { OnRspUserLogout_delegate += handler; }
			void remove(RspUserLogout^ handler) { OnRspUserLogout_delegate -= handler; }
			void raise(SecurityFtdcUserLogoutField^ pUserLogout,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(OnRspUserLogout_delegate) 
				OnRspUserLogout_delegate(pUserLogout,pRspInfo,nRequestID,bIsLast);
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

		

		RspError^ OnRspError_delegate;
		RspUserLogin^ OnRspUserLogin_delegate;
		RspUserLogout^ OnRspUserLogout_delegate;
		
		RspSubMarketData^ OnRspSubMarketData_delegate;
		RspUnSubMarketData^ OnRspUnSubMarketData_delegate;
		RtnDepthMarketData^ OnRtnDepthMarketData_delegate;
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
