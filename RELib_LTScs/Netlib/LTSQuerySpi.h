

#pragma once
#include "Util.h"
#include <vcclr.h>
#include "Callbacks.h"
#include "LTSQueryAdapter.h"

namespace RELib_LTSNative
{

	/// 非托管类
	class CLTSQuerySpi : public  CSecurityFtdcQuerySpi
	{
	public:
		/// 构造函数
		CLTSQuerySpi(CLTSQueryAdapter^ pAdapter);
		///当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
		virtual void OnFrontConnected();

		///当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
		///@param nReason 错误原因
		///        0x1001 网络读失败
		///        0x1002 网络写失败
		///        0x2001 接收心跳超时
		///        0x2002 发送心跳失败
		///        0x2003 收到错误报文
		virtual void OnFrontDisconnected(int nReason);

		///心跳超时警告。当长时间未收到报文时，该方法被调用。
		///@param nTimeLapse 距离上次接收报文的时间
		virtual void OnHeartBeatWarning(int nTimeLapse);



		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspError(CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspUserLogin(CSecurityFtdcRspUserLoginField *pRspUserLogin, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspUserLogout(CSecurityFtdcUserLogoutField *pUserLogout, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspFetchAuthRandCode(CSecurityFtdcAuthRandCodeField *pAuthRandCode, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryExchange(CSecurityFtdcExchangeField *pExchange, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryInstrument(CSecurityFtdcInstrumentField *pInstrument, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryInvestor(CSecurityFtdcInvestorField *pInvestor, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryTradingCode(CSecurityFtdcTradingCodeField *pTradingCode, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryTradingAccount(CSecurityFtdcTradingAccountField *pTradingAccount, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryBondInterest(CSecurityFtdcBondInterestField *pBondInterest, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryMarketRationInfo(CSecurityFtdcMarketRationInfoField *pMarketRationInfo, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryInstrumentCommissionRate(CSecurityFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryETFInstrument(CSecurityFtdcETFInstrumentField *pETFInstrument, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryETFBasket(CSecurityFtdcETFBasketField *pETFBasket, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryOFInstrument(CSecurityFtdcOFInstrumentField *pOFInstrument, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQrySFInstrument(CSecurityFtdcSFInstrumentField *pSFInstrument, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryInstrumentUnitMargin(CSecurityFtdcInstrumentUnitMarginField *pInstrumentUnitMargin, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryPreDelivInfo(CSecurityFtdcPreDelivInfoField *pPreDelivInfo, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryCreditStockAssignInfo(CSecurityFtdcCreditStockAssignInfoField *pCreditStockAssignInfo, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryCreditCashAssignInfo(CSecurityFtdcCreditCashAssignInfoField *pCreditCashAssignInfo, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryConversionRate(CSecurityFtdcConversionRateField *pConversionRate, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryHisCreditDebtInfo(CSecurityFtdcHisCreditDebtInfoField *pHisCreditDebtInfo, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryMarketDataStaticInfo(CSecurityFtdcMarketDataStaticInfoField *pMarketDataStaticInfo, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryExpireRepurchInfo(CSecurityFtdcExpireRepurchInfoField *pExpireRepurchInfo, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryBondPledgeRate(CSecurityFtdcBondPledgeRateField *pBondPledgeRate, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryPledgeBond(CSecurityFtdcPledgeBondField *pPledgeBond, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryHKBasicInfo(CSecurityFtdcHKBasicInfoField *pHKBasicInfo, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryOrder(CSecurityFtdcOrderField *pOrder, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryTrade(CSecurityFtdcTradeField *pTrade, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryInvestorPosition(CSecurityFtdcInvestorPositionField *pInvestorPosition, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryFundTransferSerial(CSecurityFtdcFundTransferField *pFundTransfer, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryFundInterTransferSerial(CSecurityFtdcFundInterTransferSerialField *pFundInterTransferSerial, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

#ifdef __LTS_MA__
		// 回调函数
	public:
		Callback_OnFrontConnected p_OnFrontConnected;
		Callback_OnFrontDisconnected p_OnFrontDisconnected;
		Callback_OnHeartBeatWarning p_OnHeartBeatWarning;


		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspError	p_OnRspError;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspUserLogin	p_OnRspUserLogin;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspUserLogout	p_OnRspUserLogout;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspFetchAuthRandCode	p_OnRspFetchAuthRandCode;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspQryExchange	p_OnRspQryExchange;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspQryInstrument	p_OnRspQryInstrument;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspQryInvestor	p_OnRspQryInvestor;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspQryTradingCode	p_OnRspQryTradingCode;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspQryTradingAccount	p_OnRspQryTradingAccount;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspQryBondInterest	p_OnRspQryBondInterest;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspQryMarketRationInfo	p_OnRspQryMarketRationInfo;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspQryInstrumentCommissionRate	p_OnRspQryInstrumentCommissionRate;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspQryETFInstrument	p_OnRspQryETFInstrument;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspQryETFBasket	p_OnRspQryETFBasket;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspQryOFInstrument	p_OnRspQryOFInstrument;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspQrySFInstrument	p_OnRspQrySFInstrument;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspQryInstrumentUnitMargin	p_OnRspQryInstrumentUnitMargin;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspQryPreDelivInfo	p_OnRspQryPreDelivInfo;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspQryCreditStockAssignInfo	p_OnRspQryCreditStockAssignInfo;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspQryCreditCashAssignInfo	p_OnRspQryCreditCashAssignInfo;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspQryConversionRate	p_OnRspQryConversionRate;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspQryHisCreditDebtInfo	p_OnRspQryHisCreditDebtInfo;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspQryMarketDataStaticInfo	p_OnRspQryMarketDataStaticInfo;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspQryExpireRepurchInfo	p_OnRspQryExpireRepurchInfo;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspQryBondPledgeRate	p_OnRspQryBondPledgeRate;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspQryPledgeBond	p_OnRspQryPledgeBond;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspQryHKBasicInfo	p_OnRspQryHKBasicInfo;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspQryOrder	p_OnRspQryOrder;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspQryTrade	p_OnRspQryTrade;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspQryInvestorPosition	p_OnRspQryInvestorPosition;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspQryFundTransferSerial	p_OnRspQryFundTransferSerial;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspQryFundInterTransferSerial	p_OnRspQryFundInterTransferSerial;

		// 回调函数对应的delegate，必须保持一份对该deleage的引用，否则GC会自动回收该deleage并导致上面的回调函数失效
		gcroot<Internal_FrontConnected^> d_FrontConnected;
		gcroot<Internal_FrontDisconnected^> d_FrontDisconnected;
		gcroot<Internal_HeartBeatWarning^> d_HeartBeatWarning;

		gcroot<Internal_PackageStart^> d_PackageStart;
		gcroot<Internal_PackageEnd^> d_PackageEnd;

		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspError^> d_RspError;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspUserLogin^> d_RspUserLogin;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspUserLogout^> d_RspUserLogout;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspFetchAuthRandCode^> d_RspFetchAuthRandCode;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspQryExchange^> d_RspQryExchange;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspQryInstrument^> d_RspQryInstrument;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspQryInvestor^> d_RspQryInvestor;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspQryTradingCode^> d_RspQryTradingCode;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspQryTradingAccount^> d_RspQryTradingAccount;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspQryBondInterest^> d_RspQryBondInterest;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspQryMarketRationInfo^> d_RspQryMarketRationInfo;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspQryInstrumentCommissionRate^> d_RspQryInstrumentCommissionRate;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspQryETFInstrument^> d_RspQryETFInstrument;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspQryETFBasket^> d_RspQryETFBasket;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspQryOFInstrument^> d_RspQryOFInstrument;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspQrySFInstrument^> d_RspQrySFInstrument;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspQryInstrumentUnitMargin^> d_RspQryInstrumentUnitMargin;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspQryPreDelivInfo^> d_RspQryPreDelivInfo;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspQryCreditStockAssignInfo^> d_RspQryCreditStockAssignInfo;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspQryCreditCashAssignInfo^> d_RspQryCreditCashAssignInfo;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspQryConversionRate^> d_RspQryConversionRate;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspQryHisCreditDebtInfo^> d_RspQryHisCreditDebtInfo;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspQryMarketDataStaticInfo^> d_RspQryMarketDataStaticInfo;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspQryExpireRepurchInfo^> d_RspQryExpireRepurchInfo;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspQryBondPledgeRate^> d_RspQryBondPledgeRate;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspQryPledgeBond^> d_RspQryPledgeBond;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspQryHKBasicInfo^> d_RspQryHKBasicInfo;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspQryOrder^> d_RspQryOrder;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspQryTrade^> d_RspQryTrade;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspQryInvestorPosition^> d_RspQryInvestorPosition;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspQryFundTransferSerial^> d_RspQryFundTransferSerial;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspQryFundInterTransferSerial^> d_RspQryFundInterTransferSerial;
#else
	private:
		gcroot<CLTSQueryAdapter^> m_pAdapter;
#endif

	};
};
