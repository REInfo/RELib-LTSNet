
#pragma once

namespace RELib_LTSNet
{

	// common deleagats
	///当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
	public delegate  void FrontConnected();

	///当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
	///@param nReason 错误原因
	///        0x1001 网络读失败
	///        0x1002 网络写失败
	///        0x2001 接收心跳超时
	///        0x2002 发送心跳失败
	///        0x2003 收到错误报文
	public delegate  void FrontDisconnected(int nReason);

	///心跳超时警告。当长时间未收到报文时，该方法被调用。
	///@param nTimeLapse 距离上次接收报文的时间
	public delegate  void HeartBeatWarning(int nTimeLapse);

	///报文回调开始通知。当API收到一个报文后，首先调用本方法，然后是各数据域的回调，最后是报文回调结束通知。
	///@param nTopicID 主题代码（如私有流、公共流、行情流等）
	///@param nSequenceNo 报文序号
	public delegate  void PackageStart(int nTopicID, int nSequenceNo);

	///报文回调结束通知。当API收到一个报文后，首先调用报文回调开始通知，然后是各数据域的回调，最后调用本方法。
	///@param nTopicID 主题代码（如私有流、公共流、行情流等）
	///@param nSequenceNo 报文序号
	public delegate  void PackageEnd(int nTopicID, int nSequenceNo);

	///订阅行情应答
	public delegate void RspSubMarketData(SecurityFtdcSpecificInstrumentField^ pSpecificInstrument, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

	///取消订阅行情应答
	public delegate void RspUnSubMarketData(SecurityFtdcSpecificInstrumentField^ pSpecificInstrument, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

	///深度行情通知
	public delegate void RtnDepthMarketData(SecurityFtdcDepthMarketDataField^ pDepthMarketData);


	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspError(SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspUserLogin(SecurityFtdcRspUserLoginField^ pRspUserLogin, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspUserLogout(SecurityFtdcUserLogoutField^ pUserLogout, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspFetchAuthRandCode(SecurityFtdcAuthRandCodeField^ pAuthRandCode, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspOrderInsert(SecurityFtdcInputOrderField^ pInputOrder, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspOrderAction(SecurityFtdcInputOrderActionField^ pInputOrderAction, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspUserPasswordUpdate(SecurityFtdcUserPasswordUpdateField^ pUserPasswordUpdate, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspTradingAccountPasswordUpdate(SecurityFtdcTradingAccountPasswordUpdateField^ pTradingAccountPasswordUpdate, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RtnOrder(SecurityFtdcOrderField^ pOrder);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RtnTrade(SecurityFtdcTradeField^ pTrade);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  ErrRtnOrderInsert(SecurityFtdcInputOrderField^ pInputOrder, SecurityFtdcRspInfoField^ pRspInfo);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  ErrRtnOrderAction(SecurityFtdcOrderActionField^ pOrderAction, SecurityFtdcRspInfoField^ pRspInfo);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspFundOutByLiber(SecurityFtdcInputFundTransferField^ pInputFundTransfer, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RtnFundOutByLiber(SecurityFtdcFundTransferField^ pFundTransfer);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  ErrRtnFundOutByLiber(SecurityFtdcInputFundTransferField^ pInputFundTransfer, SecurityFtdcRspInfoField^ pRspInfo);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RtnFundInByBank(SecurityFtdcFundTransferField^ pFundTransfer);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspFundInterTransfer(SecurityFtdcFundInterTransferField^ pFundInterTransfer, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RtnFundInterTransferSerial(SecurityFtdcFundInterTransferSerialField^ pFundInterTransferSerial);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  ErrRtnFundInterTransfer(SecurityFtdcFundInterTransferField^ pFundInterTransfer, SecurityFtdcRspInfoField^ pRspInfo);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RtnPlatformStateInfo(SecurityFtdcPlatformStateInfoField^ pPlatformStateInfo);

	///#region Query

	/// <summary>
	/// 
	/// </summary>
	//public delegate void  RspError(SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	//public delegate void  RspUserLogin(SecurityFtdcRspUserLoginField^ pRspUserLogin, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	//public delegate void  RspUserLogout(SecurityFtdcUserLogoutField^ pUserLogout, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	//public delegate void  RspFetchAuthRandCode(SecurityFtdcAuthRandCodeField^ pAuthRandCode, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspQryExchange(SecurityFtdcExchangeField^ pExchange, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspQryInstrument(SecurityFtdcInstrumentField^ pInstrument, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspQryInvestor(SecurityFtdcInvestorField^ pInvestor, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspQryTradingCode(SecurityFtdcTradingCodeField^ pTradingCode, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspQryTradingAccount(SecurityFtdcTradingAccountField^ pTradingAccount, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspQryBondInterest(SecurityFtdcBondInterestField^ pBondInterest, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspQryMarketRationInfo(SecurityFtdcMarketRationInfoField^ pMarketRationInfo, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspQryInstrumentCommissionRate(SecurityFtdcInstrumentCommissionRateField^ pInstrumentCommissionRate, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspQryETFInstrument(SecurityFtdcETFInstrumentField^ pETFInstrument, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspQryETFBasket(SecurityFtdcETFBasketField^ pETFBasket, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspQryOFInstrument(SecurityFtdcOFInstrumentField^ pOFInstrument, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspQrySFInstrument(SecurityFtdcSFInstrumentField^ pSFInstrument, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspQryInstrumentUnitMargin(SecurityFtdcInstrumentUnitMarginField^ pInstrumentUnitMargin, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspQryPreDelivInfo(SecurityFtdcPreDelivInfoField^ pPreDelivInfo, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspQryCreditStockAssignInfo(SecurityFtdcCreditStockAssignInfoField^ pCreditStockAssignInfo, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspQryCreditCashAssignInfo(SecurityFtdcCreditCashAssignInfoField^ pCreditCashAssignInfo, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspQryConversionRate(SecurityFtdcConversionRateField^ pConversionRate, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspQryHisCreditDebtInfo(SecurityFtdcHisCreditDebtInfoField^ pHisCreditDebtInfo, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspQryMarketDataStaticInfo(SecurityFtdcMarketDataStaticInfoField^ pMarketDataStaticInfo, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspQryExpireRepurchInfo(SecurityFtdcExpireRepurchInfoField^ pExpireRepurchInfo, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspQryBondPledgeRate(SecurityFtdcBondPledgeRateField^ pBondPledgeRate, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspQryPledgeBond(SecurityFtdcPledgeBondField^ pPledgeBond, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspQryHKBasicInfo(SecurityFtdcHKBasicInfoField^ pHKBasicInfo, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspQryOrder(SecurityFtdcOrderField^ pOrder, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspQryTrade(SecurityFtdcTradeField^ pTrade, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspQryInvestorPosition(SecurityFtdcInvestorPositionField^ pInvestorPosition, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspQryFundTransferSerial(SecurityFtdcFundTransferField^ pFundTransfer, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	public delegate void  RspQryFundInterTransferSerial(SecurityFtdcFundInterTransferSerialField^ pFundInterTransferSerial, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

	///#endregion
};

#ifdef __LTS_MA__

namespace LTSNative
{

	///当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
	delegate void Internal_FrontConnected();

	///当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
	///@param nReason 错误原因
	///        0x1001 网络读失败
	///        0x1002 网络写失败
	///        0x2001 接收心跳超时
	///        0x2002 发送心跳失败
	///        0x2003 收到错误报文
	delegate void Internal_FrontDisconnected(int nReason);

	///心跳超时警告。当长时间未收到报文时，该方法被调用。
	///@param nTimeLapse 距离上次接收报文的时间
	delegate void Internal_HeartBeatWarning(int nTimeLapse);

	///报文回调开始通知。当API收到一个报文后，首先调用本方法，然后是各数据域的回调，最后是报文回调结束通知。
	///@param nTopicID 主题代码（如私有流、公共流、行情流等）
	///@param nSequenceNo 报文序号
	delegate void Internal_PackageStart(int nTopicID, int nSequenceNo);

	///报文回调结束通知。当API收到一个报文后，首先调用报文回调开始通知，然后是各数据域的回调，最后调用本方法。
	///@param nTopicID 主题代码（如私有流、公共流、行情流等）
	///@param nSequenceNo 报文序号
	delegate void Internal_PackageEnd(int nTopicID, int nSequenceNo);

	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspError(CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspUserLogin(CSecurityFtdcRspUserLoginField *pRspUserLogin,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspUserLogout(CSecurityFtdcUserLogoutField *pUserLogout,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspFetchAuthRandCode(CSecurityFtdcAuthRandCodeField *pAuthRandCode,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspOrderInsert(CSecurityFtdcInputOrderField *pInputOrder,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspOrderAction(CSecurityFtdcInputOrderActionField *pInputOrderAction,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspUserPasswordUpdate(CSecurityFtdcUserPasswordUpdateField *pUserPasswordUpdate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspTradingAccountPasswordUpdate(CSecurityFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RtnOrder(CSecurityFtdcOrderField *pOrder);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RtnTrade(CSecurityFtdcTradeField *pTrade);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_ErrRtnOrderInsert(CSecurityFtdcInputOrderField *pInputOrder,CSecurityFtdcRspInfoField *pRspInfo);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_ErrRtnOrderAction(CSecurityFtdcOrderActionField *pOrderAction,CSecurityFtdcRspInfoField *pRspInfo);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspFundOutByLiber(CSecurityFtdcInputFundTransferField *pInputFundTransfer,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RtnFundOutByLiber(CSecurityFtdcFundTransferField *pFundTransfer);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_ErrRtnFundOutByLiber(CSecurityFtdcInputFundTransferField *pInputFundTransfer,CSecurityFtdcRspInfoField *pRspInfo);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RtnFundInByBank(CSecurityFtdcFundTransferField *pFundTransfer);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspFundInterTransfer(CSecurityFtdcFundInterTransferField *pFundInterTransfer,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RtnFundInterTransferSerial(CSecurityFtdcFundInterTransferSerialField *pFundInterTransferSerial);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_ErrRtnFundInterTransfer(CSecurityFtdcFundInterTransferField *pFundInterTransfer,CSecurityFtdcRspInfoField *pRspInfo);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RtnPlatformStateInfo(CSecurityFtdcPlatformStateInfoField *pPlatformStateInfo);

	///region Query
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspError(CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspUserLogin(CSecurityFtdcRspUserLoginField *pRspUserLogin,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspUserLogout(CSecurityFtdcUserLogoutField *pUserLogout,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspFetchAuthRandCode(CSecurityFtdcAuthRandCodeField *pAuthRandCode,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspQryExchange(CSecurityFtdcExchangeField *pExchange,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspQryInstrument(CSecurityFtdcInstrumentField *pInstrument,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspQryInvestor(CSecurityFtdcInvestorField *pInvestor,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspQryTradingCode(CSecurityFtdcTradingCodeField *pTradingCode,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspQryTradingAccount(CSecurityFtdcTradingAccountField *pTradingAccount,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspQryBondInterest(CSecurityFtdcBondInterestField *pBondInterest,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspQryMarketRationInfo(CSecurityFtdcMarketRationInfoField *pMarketRationInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspQryInstrumentCommissionRate(CSecurityFtdcInstrumentCommissionRateField *pInstrumentCommissionRate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspQryETFInstrument(CSecurityFtdcETFInstrumentField *pETFInstrument,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspQryETFBasket(CSecurityFtdcETFBasketField *pETFBasket,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspQryOFInstrument(CSecurityFtdcOFInstrumentField *pOFInstrument,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspQrySFInstrument(CSecurityFtdcSFInstrumentField *pSFInstrument,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspQryInstrumentUnitMargin(CSecurityFtdcInstrumentUnitMarginField *pInstrumentUnitMargin,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspQryPreDelivInfo(CSecurityFtdcPreDelivInfoField *pPreDelivInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspQryCreditStockAssignInfo(CSecurityFtdcCreditStockAssignInfoField *pCreditStockAssignInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspQryCreditCashAssignInfo(CSecurityFtdcCreditCashAssignInfoField *pCreditCashAssignInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspQryConversionRate(CSecurityFtdcConversionRateField *pConversionRate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspQryHisCreditDebtInfo(CSecurityFtdcHisCreditDebtInfoField *pHisCreditDebtInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspQryMarketDataStaticInfo(CSecurityFtdcMarketDataStaticInfoField *pMarketDataStaticInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspQryExpireRepurchInfo(CSecurityFtdcExpireRepurchInfoField *pExpireRepurchInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspQryBondPledgeRate(CSecurityFtdcBondPledgeRateField *pBondPledgeRate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspQryPledgeBond(CSecurityFtdcPledgeBondField *pPledgeBond,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspQryHKBasicInfo(CSecurityFtdcHKBasicInfoField *pHKBasicInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspQryOrder(CSecurityFtdcOrderField *pOrder,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspQryTrade(CSecurityFtdcTradeField *pTrade,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspQryInvestorPosition(CSecurityFtdcInvestorPositionField *pInvestorPosition,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspQryFundTransferSerial(CSecurityFtdcFundTransferField *pFundTransfer,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspQryFundInterTransferSerial(CSecurityFtdcFundInterTransferSerialField *pFundInterTransferSerial,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);

	///#endregion
};

#endif
