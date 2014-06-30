
#pragma once
// CTP MA only
#ifdef __CTP_MA__

namespace LTSNative
{

	// common 
	typedef void (__stdcall *Callback_OnFrontConnected)();
	typedef void (__stdcall *Callback_OnFrontDisconnected)(int nReason);
	typedef void (__stdcall *Callback_OnHeartBeatWarning)(int nTimeLapse);

	// marketdata
	typedef void (__stdcall *Callback_OnRspSubMarketData)(CSecurityFtdcSpecificInstrumentField *pSpecificInstrument, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
	typedef void (__stdcall *Callback_OnRspUnSubMarketData)(CSecurityFtdcSpecificInstrumentField *pSpecificInstrument, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
	typedef void (__stdcall *Callback_OnRtnDepthMarketData)(CSecurityFtdcDepthMarketDataField *pDepthMarketData);

	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspError)(CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspUserLogin)(CSecurityFtdcRspUserLoginField *pRspUserLogin,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspUserLogout)(CSecurityFtdcUserLogoutField *pUserLogout,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspOrderInsert)(CSecurityFtdcInputOrderField *pInputOrder,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspOrderAction)(CSecurityFtdcInputOrderActionField *pInputOrderAction,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspUserPasswordUpdate)(CSecurityFtdcUserPasswordUpdateField *pUserPasswordUpdate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspTradingAccountPasswordUpdate)(CSecurityFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryExchange)(CSecurityFtdcExchangeField *pExchange,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryInstrument)(CSecurityFtdcInstrumentField *pInstrument,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryInvestor)(CSecurityFtdcInvestorField *pInvestor,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryTradingCode)(CSecurityFtdcTradingCodeField *pTradingCode,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryTradingAccount)(CSecurityFtdcTradingAccountField *pTradingAccount,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryDepthMarketData)(CSecurityFtdcDepthMarketDataField *pDepthMarketData,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryInvestorPositionDetail)(CSecurityFtdcInvestorPositionDetailField *pInvestorPositionDetail,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryBondInterest)(CSecurityFtdcBondInterestField *pBondInterest,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryOrder)(CSecurityFtdcOrderField *pOrder,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryTrade)(CSecurityFtdcTradeField *pTrade,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryInvestorPosition)(CSecurityFtdcInvestorPositionField *pInvestorPosition,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRtnOrder)(CSecurityFtdcOrderField *pOrder,CSecurityFtdcOrderField *pOrder);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRtnTrade)(CSecurityFtdcTradeField *pTrade,CSecurityFtdcTradeField *pTrade);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnErrRtnOrderInsert)(CSecurityFtdcInputOrderField *pInputOrder,CSecurityFtdcRspInfoField *pRspInfo);
	/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnErrRtnOrderAction)(CSecurityFtdcOrderActionField *pOrderAction,CSecurityFtdcRspInfoField *pRspInfo);

};

#endif
