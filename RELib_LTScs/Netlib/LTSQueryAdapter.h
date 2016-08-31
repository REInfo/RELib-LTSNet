

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
	/// 托管类,QueryAPI Adapter
	/// </summary>
	public ref class CLTSQueryAdapter
	{
	public:
		/// <summary>
		///创建CTPTraderAdapter
		///存贮订阅信息文件的目录，默认为当前目录
		/// </summary>
		CLTSQueryAdapter(void);
		/// <summary>
		///创建CTPTraderAdapter
		/// </summary>
		/// <param name="pszFlowPath">存贮订阅信息文件的目录，默认为当前目录</param>
		/// <param name="bIsUsingUdp">是否使用UDP协议</param>
		CLTSQueryAdapter(String^ pszFlowPath, String^ pszUserApiType);
	private:
		~CLTSQueryAdapter(void);
		CSecurityFtdcQueryApi* m_pApi;
		CLTSQuerySpi* m_pSpi;
	public:
		///删除接口对象本身
		///@remark 不再使用本接口对象时,调用该函数删除接口对象
		void Release();

		///初始化
		///@remark 初始化运行环境,只有调用后,接口才开始工作
		void Init();

		///等待接口线程结束运行
		///@return 线程退出代码
		int Join();

		///获取当前交易日
		///@retrun 获取到的交易日
		///@remark 只有登录成功后,才能得到正确的交易日
		String^ GetTradingDay();

		///注册前置机网络地址
		///@param pszFrontAddress：前置机网络地址。
		///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:17001”。 
		///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”17001”代表服务器端口号。
		void RegisterFront(String^ pszFrontAddress);


		///用户登录请求
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
		/// 当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
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
		/// 当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
		/// 错误原因
		/// 0x1001 网络读失败
		/// 0x1002 网络写失败
		/// 0x2001 接收心跳超时
		/// 0x2002 发送心跳失败
		/// 0x2003 收到错误报文
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
		///心跳超时警告。当长时间未收到报文时，该方法被调用。
		///@param nTimeLapse 距离上次接收报文的时间
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
		///当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
		FrontConnected^ FrontConnected_delegate;

		///当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
		///@param nReason 错误原因
		///        0x1001 网络读失败
		///        0x1002 网络写失败
		///        0x2001 接收心跳超时
		///        0x2002 发送心跳失败
		///        0x2003 收到错误报文
		FrontDisconnected^ FrontDisconnected_delegate;

		///心跳超时警告。当长时间未收到报文时，该方法被调用。
		///@param nTimeLapse 距离上次接收报文的时间
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
		///默认
		///当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
		void cbk_OnFrontConnected();

		///当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
		///@param nReason 错误原因
		///        0x1001 网络读失败
		///        0x1002 网络写失败
		///        0x2001 接收心跳超时
		///        0x2002 发送心跳失败
		///        0x2003 收到错误报文
		void cbk_OnFrontDisconnected(int nReason);

		///心跳超时警告。当长时间未收到报文时，该方法被调用。
		///@param nTimeLapse 距离上次接收报文的时间
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
		/// 将所有回调函数地址传递给SPI
		/// </summary>
		void RegisterCallbacks();
#endif
	};
}
