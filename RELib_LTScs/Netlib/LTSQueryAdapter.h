

#pragma once
#include "Util.h"
#include "LTSQuerySpi.h"


using namespace RELib_LTSNative;

namespace  RELib_LTSNative{
	class CLTSQuerySpi;
};


namespace RELib_LTSNet
{

	/// <summary>
	/// �й���,QueryAPI Adapter
	/// </summary>
	public ref class CLTSQueryAdapter
	{
	public:
		/// <summary>
		///����CTPTraderAdapter
		///����������Ϣ�ļ���Ŀ¼��Ĭ��Ϊ��ǰĿ¼
		/// </summary>
		CLTSQueryAdapter(void);
		/// <summary>
		///����CTPTraderAdapter
		/// </summary>
		/// <param name="pszFlowPath">����������Ϣ�ļ���Ŀ¼��Ĭ��Ϊ��ǰĿ¼</param>
		/// <param name="bIsUsingUdp">�Ƿ�ʹ��UDPЭ��</param>
		CLTSQueryAdapter(String^ pszFlowPath, String^ pszUserApiType);
	private:
		~CLTSQueryAdapter(void);
		CSecurityFtdcQueryApi* m_pApi;
		CLTSQuerySpi* m_pSpi;
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
		int  ReqQryExchange(SecurityFtdcQryExchangeField^ pQryExchange, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqQryInstrument(SecurityFtdcQryInstrumentField^ pQryInstrument, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqQryInvestor(SecurityFtdcQryInvestorField^ pQryInvestor, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqQryTradingCode(SecurityFtdcQryTradingCodeField^ pQryTradingCode, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqQryTradingAccount(SecurityFtdcQryTradingAccountField^ pQryTradingAccount, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqQryBondInterest(SecurityFtdcQryBondInterestField^ pQryBondInterest, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqQryMarketRationInfo(SecurityFtdcQryMarketRationInfoField^ pQryMarketRationInfo, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqQryInstrumentCommissionRate(SecurityFtdcQryInstrumentCommissionRateField^ pQryInstrumentCommissionRate, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqQryETFInstrument(SecurityFtdcQryETFInstrumentField^ pQryETFInstrument, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqQryETFBasket(SecurityFtdcQryETFBasketField^ pQryETFBasket, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqQryOFInstrument(SecurityFtdcQryOFInstrumentField^ pQryOFInstrument, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqQrySFInstrument(SecurityFtdcQrySFInstrumentField^ pQrySFInstrument, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqQryInstrumentUnitMargin(SecurityFtdcQryInstrumentUnitMarginField^ pQryInstrumentUnitMargin, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqQryPreDelivInfo(SecurityFtdcQryPreDelivInfoField^ pQryPreDelivInfo, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqQryCreditStockAssignInfo(SecurityFtdcQryCreditStockAssignInfoField^ pQryCreditStockAssignInfo, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqQryCreditCashAssignInfo(SecurityFtdcQryCreditCashAssignInfoField^ pQryCreditCashAssignInfo, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqQryConversionRate(SecurityFtdcQryConversionRateField^ pQryConversionRate, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqQryHisCreditDebtInfo(SecurityFtdcQryHisCreditDebtInfoField^ pQryHisCreditDebtInfo, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqQryMarketDataStaticInfo(SecurityFtdcQryMarketDataStaticInfoField^ pQryMarketDataStaticInfo, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqQryExpireRepurchInfo(SecurityFtdcQryExpireRepurchInfoField^ pQryExpireRepurchInfo, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqQryBondPledgeRate(SecurityFtdcQryBondPledgeRateField^ pQryBondPledgeRate, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqQryPledgeBond(SecurityFtdcQryPledgeBondField^ pQryPledgeBond, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqQryHKBasicInfo(SecurityFtdcQryHKBasicInfoField^ pQryHKBasicInfo, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqQryOrder(SecurityFtdcQryOrderField^ pQryOrder, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqQryTrade(SecurityFtdcQryTradeField^ pQryTrade, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqQryInvestorPosition(SecurityFtdcQryInvestorPositionField^ pQryInvestorPosition, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqQryFundTransferSerial(SecurityFtdcQryFundTransferSerialField^ pQryFundTransferSerial, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqQryFundInterTransferSerial(SecurityFtdcQryFundInterTransferSerialField^ pQryFundInterTransferSerial, int nRequestID);

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
		event RspQryExchange^ OnRspQryExchange{
			void add(RspQryExchange^ handler) { RspQryExchange_delegate += handler; }
			void remove(RspQryExchange^ handler) { RspQryExchange_delegate -= handler; }
			void raise(SecurityFtdcExchangeField^ pExchange, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspQryExchange_delegate) RspQryExchange_delegate(pExchange, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryInstrument^ OnRspQryInstrument{
			void add(RspQryInstrument^ handler) { RspQryInstrument_delegate += handler; }
			void remove(RspQryInstrument^ handler) { RspQryInstrument_delegate -= handler; }
			void raise(SecurityFtdcInstrumentField^ pInstrument, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspQryInstrument_delegate) RspQryInstrument_delegate(pInstrument, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryInvestor^ OnRspQryInvestor{
			void add(RspQryInvestor^ handler) { RspQryInvestor_delegate += handler; }
			void remove(RspQryInvestor^ handler) { RspQryInvestor_delegate -= handler; }
			void raise(SecurityFtdcInvestorField^ pInvestor, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspQryInvestor_delegate) RspQryInvestor_delegate(pInvestor, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryTradingCode^ OnRspQryTradingCode{
			void add(RspQryTradingCode^ handler) { RspQryTradingCode_delegate += handler; }
			void remove(RspQryTradingCode^ handler) { RspQryTradingCode_delegate -= handler; }
			void raise(SecurityFtdcTradingCodeField^ pTradingCode, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspQryTradingCode_delegate) RspQryTradingCode_delegate(pTradingCode, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryTradingAccount^ OnRspQryTradingAccount{
			void add(RspQryTradingAccount^ handler) { RspQryTradingAccount_delegate += handler; }
			void remove(RspQryTradingAccount^ handler) { RspQryTradingAccount_delegate -= handler; }
			void raise(SecurityFtdcTradingAccountField^ pTradingAccount, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspQryTradingAccount_delegate) RspQryTradingAccount_delegate(pTradingAccount, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryBondInterest^ OnRspQryBondInterest{
			void add(RspQryBondInterest^ handler) { RspQryBondInterest_delegate += handler; }
			void remove(RspQryBondInterest^ handler) { RspQryBondInterest_delegate -= handler; }
			void raise(SecurityFtdcBondInterestField^ pBondInterest, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspQryBondInterest_delegate) RspQryBondInterest_delegate(pBondInterest, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryMarketRationInfo^ OnRspQryMarketRationInfo{
			void add(RspQryMarketRationInfo^ handler) { RspQryMarketRationInfo_delegate += handler; }
			void remove(RspQryMarketRationInfo^ handler) { RspQryMarketRationInfo_delegate -= handler; }
			void raise(SecurityFtdcMarketRationInfoField^ pMarketRationInfo, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspQryMarketRationInfo_delegate) RspQryMarketRationInfo_delegate(pMarketRationInfo, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryInstrumentCommissionRate^ OnRspQryInstrumentCommissionRate{
			void add(RspQryInstrumentCommissionRate^ handler) { RspQryInstrumentCommissionRate_delegate += handler; }
			void remove(RspQryInstrumentCommissionRate^ handler) { RspQryInstrumentCommissionRate_delegate -= handler; }
			void raise(SecurityFtdcInstrumentCommissionRateField^ pInstrumentCommissionRate, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspQryInstrumentCommissionRate_delegate) RspQryInstrumentCommissionRate_delegate(pInstrumentCommissionRate, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryETFInstrument^ OnRspQryETFInstrument{
			void add(RspQryETFInstrument^ handler) { RspQryETFInstrument_delegate += handler; }
			void remove(RspQryETFInstrument^ handler) { RspQryETFInstrument_delegate -= handler; }
			void raise(SecurityFtdcETFInstrumentField^ pETFInstrument, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspQryETFInstrument_delegate) RspQryETFInstrument_delegate(pETFInstrument, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryETFBasket^ OnRspQryETFBasket{
			void add(RspQryETFBasket^ handler) { RspQryETFBasket_delegate += handler; }
			void remove(RspQryETFBasket^ handler) { RspQryETFBasket_delegate -= handler; }
			void raise(SecurityFtdcETFBasketField^ pETFBasket, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspQryETFBasket_delegate) RspQryETFBasket_delegate(pETFBasket, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryOFInstrument^ OnRspQryOFInstrument{
			void add(RspQryOFInstrument^ handler) { RspQryOFInstrument_delegate += handler; }
			void remove(RspQryOFInstrument^ handler) { RspQryOFInstrument_delegate -= handler; }
			void raise(SecurityFtdcOFInstrumentField^ pOFInstrument, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspQryOFInstrument_delegate) RspQryOFInstrument_delegate(pOFInstrument, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQrySFInstrument^ OnRspQrySFInstrument{
			void add(RspQrySFInstrument^ handler) { RspQrySFInstrument_delegate += handler; }
			void remove(RspQrySFInstrument^ handler) { RspQrySFInstrument_delegate -= handler; }
			void raise(SecurityFtdcSFInstrumentField^ pSFInstrument, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspQrySFInstrument_delegate) RspQrySFInstrument_delegate(pSFInstrument, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryInstrumentUnitMargin^ OnRspQryInstrumentUnitMargin{
			void add(RspQryInstrumentUnitMargin^ handler) { RspQryInstrumentUnitMargin_delegate += handler; }
			void remove(RspQryInstrumentUnitMargin^ handler) { RspQryInstrumentUnitMargin_delegate -= handler; }
			void raise(SecurityFtdcInstrumentUnitMarginField^ pInstrumentUnitMargin, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspQryInstrumentUnitMargin_delegate) RspQryInstrumentUnitMargin_delegate(pInstrumentUnitMargin, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryPreDelivInfo^ OnRspQryPreDelivInfo{
			void add(RspQryPreDelivInfo^ handler) { RspQryPreDelivInfo_delegate += handler; }
			void remove(RspQryPreDelivInfo^ handler) { RspQryPreDelivInfo_delegate -= handler; }
			void raise(SecurityFtdcPreDelivInfoField^ pPreDelivInfo, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspQryPreDelivInfo_delegate) RspQryPreDelivInfo_delegate(pPreDelivInfo, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryCreditStockAssignInfo^ OnRspQryCreditStockAssignInfo{
			void add(RspQryCreditStockAssignInfo^ handler) { RspQryCreditStockAssignInfo_delegate += handler; }
			void remove(RspQryCreditStockAssignInfo^ handler) { RspQryCreditStockAssignInfo_delegate -= handler; }
			void raise(SecurityFtdcCreditStockAssignInfoField^ pCreditStockAssignInfo, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspQryCreditStockAssignInfo_delegate) RspQryCreditStockAssignInfo_delegate(pCreditStockAssignInfo, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryCreditCashAssignInfo^ OnRspQryCreditCashAssignInfo{
			void add(RspQryCreditCashAssignInfo^ handler) { RspQryCreditCashAssignInfo_delegate += handler; }
			void remove(RspQryCreditCashAssignInfo^ handler) { RspQryCreditCashAssignInfo_delegate -= handler; }
			void raise(SecurityFtdcCreditCashAssignInfoField^ pCreditCashAssignInfo, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspQryCreditCashAssignInfo_delegate) RspQryCreditCashAssignInfo_delegate(pCreditCashAssignInfo, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryConversionRate^ OnRspQryConversionRate{
			void add(RspQryConversionRate^ handler) { RspQryConversionRate_delegate += handler; }
			void remove(RspQryConversionRate^ handler) { RspQryConversionRate_delegate -= handler; }
			void raise(SecurityFtdcConversionRateField^ pConversionRate, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspQryConversionRate_delegate) RspQryConversionRate_delegate(pConversionRate, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryHisCreditDebtInfo^ OnRspQryHisCreditDebtInfo{
			void add(RspQryHisCreditDebtInfo^ handler) { RspQryHisCreditDebtInfo_delegate += handler; }
			void remove(RspQryHisCreditDebtInfo^ handler) { RspQryHisCreditDebtInfo_delegate -= handler; }
			void raise(SecurityFtdcHisCreditDebtInfoField^ pHisCreditDebtInfo, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspQryHisCreditDebtInfo_delegate) RspQryHisCreditDebtInfo_delegate(pHisCreditDebtInfo, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryMarketDataStaticInfo^ OnRspQryMarketDataStaticInfo{
			void add(RspQryMarketDataStaticInfo^ handler) { RspQryMarketDataStaticInfo_delegate += handler; }
			void remove(RspQryMarketDataStaticInfo^ handler) { RspQryMarketDataStaticInfo_delegate -= handler; }
			void raise(SecurityFtdcMarketDataStaticInfoField^ pMarketDataStaticInfo, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspQryMarketDataStaticInfo_delegate) RspQryMarketDataStaticInfo_delegate(pMarketDataStaticInfo, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryExpireRepurchInfo^ OnRspQryExpireRepurchInfo{
			void add(RspQryExpireRepurchInfo^ handler) { RspQryExpireRepurchInfo_delegate += handler; }
			void remove(RspQryExpireRepurchInfo^ handler) { RspQryExpireRepurchInfo_delegate -= handler; }
			void raise(SecurityFtdcExpireRepurchInfoField^ pExpireRepurchInfo, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspQryExpireRepurchInfo_delegate) RspQryExpireRepurchInfo_delegate(pExpireRepurchInfo, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryBondPledgeRate^ OnRspQryBondPledgeRate{
			void add(RspQryBondPledgeRate^ handler) { RspQryBondPledgeRate_delegate += handler; }
			void remove(RspQryBondPledgeRate^ handler) { RspQryBondPledgeRate_delegate -= handler; }
			void raise(SecurityFtdcBondPledgeRateField^ pBondPledgeRate, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspQryBondPledgeRate_delegate) RspQryBondPledgeRate_delegate(pBondPledgeRate, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryPledgeBond^ OnRspQryPledgeBond{
			void add(RspQryPledgeBond^ handler) { RspQryPledgeBond_delegate += handler; }
			void remove(RspQryPledgeBond^ handler) { RspQryPledgeBond_delegate -= handler; }
			void raise(SecurityFtdcPledgeBondField^ pPledgeBond, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspQryPledgeBond_delegate) RspQryPledgeBond_delegate(pPledgeBond, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryHKBasicInfo^ OnRspQryHKBasicInfo{
			void add(RspQryHKBasicInfo^ handler) { RspQryHKBasicInfo_delegate += handler; }
			void remove(RspQryHKBasicInfo^ handler) { RspQryHKBasicInfo_delegate -= handler; }
			void raise(SecurityFtdcHKBasicInfoField^ pHKBasicInfo, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspQryHKBasicInfo_delegate) RspQryHKBasicInfo_delegate(pHKBasicInfo, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryOrder^ OnRspQryOrder{
			void add(RspQryOrder^ handler) { RspQryOrder_delegate += handler; }
			void remove(RspQryOrder^ handler) { RspQryOrder_delegate -= handler; }
			void raise(SecurityFtdcOrderField^ pOrder, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspQryOrder_delegate) RspQryOrder_delegate(pOrder, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryTrade^ OnRspQryTrade{
			void add(RspQryTrade^ handler) { RspQryTrade_delegate += handler; }
			void remove(RspQryTrade^ handler) { RspQryTrade_delegate -= handler; }
			void raise(SecurityFtdcTradeField^ pTrade, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspQryTrade_delegate) RspQryTrade_delegate(pTrade, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryInvestorPosition^ OnRspQryInvestorPosition{
			void add(RspQryInvestorPosition^ handler) { RspQryInvestorPosition_delegate += handler; }
			void remove(RspQryInvestorPosition^ handler) { RspQryInvestorPosition_delegate -= handler; }
			void raise(SecurityFtdcInvestorPositionField^ pInvestorPosition, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspQryInvestorPosition_delegate) RspQryInvestorPosition_delegate(pInvestorPosition, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryFundTransferSerial^ OnRspQryFundTransferSerial{
			void add(RspQryFundTransferSerial^ handler) { RspQryFundTransferSerial_delegate += handler; }
			void remove(RspQryFundTransferSerial^ handler) { RspQryFundTransferSerial_delegate -= handler; }
			void raise(SecurityFtdcFundTransferField^ pFundTransfer, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspQryFundTransferSerial_delegate) RspQryFundTransferSerial_delegate(pFundTransfer, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspQryFundInterTransferSerial^ OnRspQryFundInterTransferSerial{
			void add(RspQryFundInterTransferSerial^ handler) { RspQryFundInterTransferSerial_delegate += handler; }
			void remove(RspQryFundInterTransferSerial^ handler) { RspQryFundInterTransferSerial_delegate -= handler; }
			void raise(SecurityFtdcFundInterTransferSerialField^ pFundInterTransferSerial, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspQryFundInterTransferSerial_delegate) RspQryFundInterTransferSerial_delegate(pFundInterTransferSerial, pRspInfo, nRequestID, bIsLast);
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
		RspQryExchange^ RspQryExchange_delegate;
		RspQryInstrument^ RspQryInstrument_delegate;
		RspQryInvestor^ RspQryInvestor_delegate;
		RspQryTradingCode^ RspQryTradingCode_delegate;
		RspQryTradingAccount^ RspQryTradingAccount_delegate;
		RspQryBondInterest^ RspQryBondInterest_delegate;
		RspQryMarketRationInfo^ RspQryMarketRationInfo_delegate;
		RspQryInstrumentCommissionRate^ RspQryInstrumentCommissionRate_delegate;
		RspQryETFInstrument^ RspQryETFInstrument_delegate;
		RspQryETFBasket^ RspQryETFBasket_delegate;
		RspQryOFInstrument^ RspQryOFInstrument_delegate;
		RspQrySFInstrument^ RspQrySFInstrument_delegate;
		RspQryInstrumentUnitMargin^ RspQryInstrumentUnitMargin_delegate;
		RspQryPreDelivInfo^ RspQryPreDelivInfo_delegate;
		RspQryCreditStockAssignInfo^ RspQryCreditStockAssignInfo_delegate;
		RspQryCreditCashAssignInfo^ RspQryCreditCashAssignInfo_delegate;
		RspQryConversionRate^ RspQryConversionRate_delegate;
		RspQryHisCreditDebtInfo^ RspQryHisCreditDebtInfo_delegate;
		RspQryMarketDataStaticInfo^ RspQryMarketDataStaticInfo_delegate;
		RspQryExpireRepurchInfo^ RspQryExpireRepurchInfo_delegate;
		RspQryBondPledgeRate^ RspQryBondPledgeRate_delegate;
		RspQryPledgeBond^ RspQryPledgeBond_delegate;
		RspQryHKBasicInfo^ RspQryHKBasicInfo_delegate;
		RspQryOrder^ RspQryOrder_delegate;
		RspQryTrade^ RspQryTrade_delegate;
		RspQryInvestorPosition^ RspQryInvestorPosition_delegate;
		RspQryFundTransferSerial^ RspQryFundTransferSerial_delegate;
		RspQryFundInterTransferSerial^ RspQryFundInterTransferSerial_delegate;
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
		void cbk_OnRspQryBondInterest(CSecurityFtdcBondInterestField *pBondInterest,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspQryMarketRationInfo(CSecurityFtdcMarketRationInfoField *pMarketRationInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspQryInstrumentCommissionRate(CSecurityFtdcInstrumentCommissionRateField *pInstrumentCommissionRate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspQryETFInstrument(CSecurityFtdcETFInstrumentField *pETFInstrument,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspQryETFBasket(CSecurityFtdcETFBasketField *pETFBasket,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspQryOFInstrument(CSecurityFtdcOFInstrumentField *pOFInstrument,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspQrySFInstrument(CSecurityFtdcSFInstrumentField *pSFInstrument,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspQryInstrumentUnitMargin(CSecurityFtdcInstrumentUnitMarginField *pInstrumentUnitMargin,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspQryPreDelivInfo(CSecurityFtdcPreDelivInfoField *pPreDelivInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspQryCreditStockAssignInfo(CSecurityFtdcCreditStockAssignInfoField *pCreditStockAssignInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspQryCreditCashAssignInfo(CSecurityFtdcCreditCashAssignInfoField *pCreditCashAssignInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspQryConversionRate(CSecurityFtdcConversionRateField *pConversionRate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspQryHisCreditDebtInfo(CSecurityFtdcHisCreditDebtInfoField *pHisCreditDebtInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspQryMarketDataStaticInfo(CSecurityFtdcMarketDataStaticInfoField *pMarketDataStaticInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspQryExpireRepurchInfo(CSecurityFtdcExpireRepurchInfoField *pExpireRepurchInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspQryBondPledgeRate(CSecurityFtdcBondPledgeRateField *pBondPledgeRate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspQryPledgeBond(CSecurityFtdcPledgeBondField *pPledgeBond,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspQryHKBasicInfo(CSecurityFtdcHKBasicInfoField *pHKBasicInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
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
		void cbk_OnRspQryFundTransferSerial(CSecurityFtdcFundTransferField *pFundTransfer,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspQryFundInterTransferSerial(CSecurityFtdcFundInterTransferSerialField *pFundInterTransferSerial,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);

		/// <summary>
		/// �����лص�������ַ���ݸ�SPI
		/// </summary>
		void RegisterCallbacks();
#endif
	};
}
