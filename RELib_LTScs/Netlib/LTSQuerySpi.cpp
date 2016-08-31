

#include "StdAfx.h"
#include "LTSQuerySpi.h"
#include "LTSQueryAdapter.h"
#include "Callbacks.h"


namespace RELib_LTSNative
{
	CLTSQuerySpi::CLTSQuerySpi(CLTSQueryAdapter^ pAdapter) {
#ifndef __LTS_MA__
		m_pAdapter = pAdapter;
#endif
	};
#ifdef __LTS_MA__

	///当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
	void CLTSQuerySpi::OnFrontConnected(){
		p_OnFrontConnected();
	};

	///当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
	///@param nReason 错误原因
	///        0x1001 网络读失败
	///        0x1002 网络写失败
	///        0x2001 接收心跳超时
	///        0x2002 发送心跳失败
	///        0x2003 收到错误报文
	void CLTSQuerySpi::OnFrontDisconnected(int nReason){
		p_OnFrontDisconnected(nReason);
	};

	///心跳超时警告。当长时间未收到报文时，该方法被调用。
	///@param nTimeLapse 距离上次接收报文的时间
	void CLTSQuerySpi::OnHeartBeatWarning(int nTimeLapse){
		p_OnHeartBeatWarning(nTimeLapse);
	};




	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspError(CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspError(RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspUserLogin(CSecurityFtdcRspUserLoginField *pRspUserLogin,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspUserLogin(MNConv<SecurityFtdcRspUserLoginField^, CSecurityFtdcRspUserLoginField>::N2M(pRspUserLogin),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspUserLogout(CSecurityFtdcUserLogoutField *pUserLogout,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspUserLogout(MNConv<SecurityFtdcUserLogoutField^, CSecurityFtdcUserLogoutField>::N2M(pUserLogout),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspFetchAuthRandCode(CSecurityFtdcAuthRandCodeField *pAuthRandCode,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspFetchAuthRandCode(MNConv<SecurityFtdcAuthRandCodeField^, CSecurityFtdcAuthRandCodeField>::N2M(pAuthRandCode),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryExchange(CSecurityFtdcExchangeField *pExchange,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryExchange(MNConv<SecurityFtdcExchangeField^, CSecurityFtdcExchangeField>::N2M(pExchange),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryInstrument(CSecurityFtdcInstrumentField *pInstrument,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryInstrument(MNConv<SecurityFtdcInstrumentField^, CSecurityFtdcInstrumentField>::N2M(pInstrument),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryInvestor(CSecurityFtdcInvestorField *pInvestor,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryInvestor(MNConv<SecurityFtdcInvestorField^, CSecurityFtdcInvestorField>::N2M(pInvestor),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryTradingCode(CSecurityFtdcTradingCodeField *pTradingCode,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryTradingCode(MNConv<SecurityFtdcTradingCodeField^, CSecurityFtdcTradingCodeField>::N2M(pTradingCode),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryTradingAccount(CSecurityFtdcTradingAccountField *pTradingAccount,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryTradingAccount(MNConv<SecurityFtdcTradingAccountField^, CSecurityFtdcTradingAccountField>::N2M(pTradingAccount),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryBondInterest(CSecurityFtdcBondInterestField *pBondInterest,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryBondInterest(MNConv<SecurityFtdcBondInterestField^, CSecurityFtdcBondInterestField>::N2M(pBondInterest),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryMarketRationInfo(CSecurityFtdcMarketRationInfoField *pMarketRationInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryMarketRationInfo(MNConv<SecurityFtdcMarketRationInfoField^, CSecurityFtdcMarketRationInfoField>::N2M(pMarketRationInfo),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryInstrumentCommissionRate(CSecurityFtdcInstrumentCommissionRateField *pInstrumentCommissionRate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryInstrumentCommissionRate(MNConv<SecurityFtdcInstrumentCommissionRateField^, CSecurityFtdcInstrumentCommissionRateField>::N2M(pInstrumentCommissionRate),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryETFInstrument(CSecurityFtdcETFInstrumentField *pETFInstrument,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryETFInstrument(MNConv<SecurityFtdcETFInstrumentField^, CSecurityFtdcETFInstrumentField>::N2M(pETFInstrument),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryETFBasket(CSecurityFtdcETFBasketField *pETFBasket,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryETFBasket(MNConv<SecurityFtdcETFBasketField^, CSecurityFtdcETFBasketField>::N2M(pETFBasket),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryOFInstrument(CSecurityFtdcOFInstrumentField *pOFInstrument,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryOFInstrument(MNConv<SecurityFtdcOFInstrumentField^, CSecurityFtdcOFInstrumentField>::N2M(pOFInstrument),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQrySFInstrument(CSecurityFtdcSFInstrumentField *pSFInstrument,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQrySFInstrument(MNConv<SecurityFtdcSFInstrumentField^, CSecurityFtdcSFInstrumentField>::N2M(pSFInstrument),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryInstrumentUnitMargin(CSecurityFtdcInstrumentUnitMarginField *pInstrumentUnitMargin,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryInstrumentUnitMargin(MNConv<SecurityFtdcInstrumentUnitMarginField^, CSecurityFtdcInstrumentUnitMarginField>::N2M(pInstrumentUnitMargin),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryPreDelivInfo(CSecurityFtdcPreDelivInfoField *pPreDelivInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryPreDelivInfo(MNConv<SecurityFtdcPreDelivInfoField^, CSecurityFtdcPreDelivInfoField>::N2M(pPreDelivInfo),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryCreditStockAssignInfo(CSecurityFtdcCreditStockAssignInfoField *pCreditStockAssignInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryCreditStockAssignInfo(MNConv<SecurityFtdcCreditStockAssignInfoField^, CSecurityFtdcCreditStockAssignInfoField>::N2M(pCreditStockAssignInfo),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryCreditCashAssignInfo(CSecurityFtdcCreditCashAssignInfoField *pCreditCashAssignInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryCreditCashAssignInfo(MNConv<SecurityFtdcCreditCashAssignInfoField^, CSecurityFtdcCreditCashAssignInfoField>::N2M(pCreditCashAssignInfo),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryConversionRate(CSecurityFtdcConversionRateField *pConversionRate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryConversionRate(MNConv<SecurityFtdcConversionRateField^, CSecurityFtdcConversionRateField>::N2M(pConversionRate),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryHisCreditDebtInfo(CSecurityFtdcHisCreditDebtInfoField *pHisCreditDebtInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryHisCreditDebtInfo(MNConv<SecurityFtdcHisCreditDebtInfoField^, CSecurityFtdcHisCreditDebtInfoField>::N2M(pHisCreditDebtInfo),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryMarketDataStaticInfo(CSecurityFtdcMarketDataStaticInfoField *pMarketDataStaticInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryMarketDataStaticInfo(MNConv<SecurityFtdcMarketDataStaticInfoField^, CSecurityFtdcMarketDataStaticInfoField>::N2M(pMarketDataStaticInfo),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryExpireRepurchInfo(CSecurityFtdcExpireRepurchInfoField *pExpireRepurchInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryExpireRepurchInfo(MNConv<SecurityFtdcExpireRepurchInfoField^, CSecurityFtdcExpireRepurchInfoField>::N2M(pExpireRepurchInfo),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryBondPledgeRate(CSecurityFtdcBondPledgeRateField *pBondPledgeRate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryBondPledgeRate(MNConv<SecurityFtdcBondPledgeRateField^, CSecurityFtdcBondPledgeRateField>::N2M(pBondPledgeRate),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryPledgeBond(CSecurityFtdcPledgeBondField *pPledgeBond,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryPledgeBond(MNConv<SecurityFtdcPledgeBondField^, CSecurityFtdcPledgeBondField>::N2M(pPledgeBond),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryHKBasicInfo(CSecurityFtdcHKBasicInfoField *pHKBasicInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryHKBasicInfo(MNConv<SecurityFtdcHKBasicInfoField^, CSecurityFtdcHKBasicInfoField>::N2M(pHKBasicInfo),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryOrder(CSecurityFtdcOrderField *pOrder,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryOrder(MNConv<SecurityFtdcOrderField^, CSecurityFtdcOrderField>::N2M(pOrder),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryTrade(CSecurityFtdcTradeField *pTrade,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryTrade(MNConv<SecurityFtdcTradeField^, CSecurityFtdcTradeField>::N2M(pTrade),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryInvestorPosition(CSecurityFtdcInvestorPositionField *pInvestorPosition,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryInvestorPosition(MNConv<SecurityFtdcInvestorPositionField^, CSecurityFtdcInvestorPositionField>::N2M(pInvestorPosition),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryFundTransferSerial(CSecurityFtdcFundTransferField *pFundTransfer,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryFundTransferSerial(MNConv<SecurityFtdcFundTransferField^, CSecurityFtdcFundTransferField>::N2M(pFundTransfer),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryFundInterTransferSerial(CSecurityFtdcFundInterTransferSerialField *pFundInterTransferSerial,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryFundInterTransferSerial(MNConv<SecurityFtdcFundInterTransferSerialField^, CSecurityFtdcFundInterTransferSerialField>::N2M(pFundInterTransferSerial),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};

#else
	///当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
	void CLTSQuerySpi::OnFrontConnected(){
		m_pAdapter->OnFrontConnected();
	};

	///当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
	///@param nReason 错误原因
	///        0x1001 网络读失败
	///        0x1002 网络写失败
	///        0x2001 接收心跳超时
	///        0x2002 发送心跳失败
	///        0x2003 收到错误报文
	void CLTSQuerySpi::OnFrontDisconnected(int nReason){
		m_pAdapter->OnFrontDisconnected(nReason);
	};

	///心跳超时警告。当长时间未收到报文时，该方法被调用。
	///@param nTimeLapse 距离上次接收报文的时间
	void CLTSQuerySpi::OnHeartBeatWarning(int nTimeLapse){
		m_pAdapter->OnHeartBeatWarning(nTimeLapse);
	};

	///客户端认证响应
	/*void CLTSQuerySpi::OnRspAuthenticate(CIndexFtdcRspAuthenticateField *pRspAuthenticateField, CIndexFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
	m_pAdapter->OnRspAuthenticate(MNConv<ThostFtdcRspAuthenticateField^,CIndexFtdcRspAuthenticateField>::N2M(pRspAuthenticateField), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};*/


	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspError(CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspError(RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspUserLogin(CSecurityFtdcRspUserLoginField *pRspUserLogin, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspUserLogin(MNConv<SecurityFtdcRspUserLoginField^, CSecurityFtdcRspUserLoginField>::N2M(pRspUserLogin), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspUserLogout(CSecurityFtdcUserLogoutField *pUserLogout, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspUserLogout(MNConv<SecurityFtdcUserLogoutField^, CSecurityFtdcUserLogoutField>::N2M(pUserLogout), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspFetchAuthRandCode(CSecurityFtdcAuthRandCodeField *pAuthRandCode, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspFetchAuthRandCode(MNConv<SecurityFtdcAuthRandCodeField^, CSecurityFtdcAuthRandCodeField>::N2M(pAuthRandCode), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryExchange(CSecurityFtdcExchangeField *pExchange, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryExchange(MNConv<SecurityFtdcExchangeField^, CSecurityFtdcExchangeField>::N2M(pExchange), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryInstrument(CSecurityFtdcInstrumentField *pInstrument, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryInstrument(MNConv<SecurityFtdcInstrumentField^, CSecurityFtdcInstrumentField>::N2M(pInstrument), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryInvestor(CSecurityFtdcInvestorField *pInvestor, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryInvestor(MNConv<SecurityFtdcInvestorField^, CSecurityFtdcInvestorField>::N2M(pInvestor), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryTradingCode(CSecurityFtdcTradingCodeField *pTradingCode, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryTradingCode(MNConv<SecurityFtdcTradingCodeField^, CSecurityFtdcTradingCodeField>::N2M(pTradingCode), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryTradingAccount(CSecurityFtdcTradingAccountField *pTradingAccount, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryTradingAccount(MNConv<SecurityFtdcTradingAccountField^, CSecurityFtdcTradingAccountField>::N2M(pTradingAccount), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryBondInterest(CSecurityFtdcBondInterestField *pBondInterest, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryBondInterest(MNConv<SecurityFtdcBondInterestField^, CSecurityFtdcBondInterestField>::N2M(pBondInterest), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryMarketRationInfo(CSecurityFtdcMarketRationInfoField *pMarketRationInfo, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryMarketRationInfo(MNConv<SecurityFtdcMarketRationInfoField^, CSecurityFtdcMarketRationInfoField>::N2M(pMarketRationInfo), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryInstrumentCommissionRate(CSecurityFtdcInstrumentCommissionRateField *pInstrumentCommissionRate, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryInstrumentCommissionRate(MNConv<SecurityFtdcInstrumentCommissionRateField^, CSecurityFtdcInstrumentCommissionRateField>::N2M(pInstrumentCommissionRate), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryETFInstrument(CSecurityFtdcETFInstrumentField *pETFInstrument, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryETFInstrument(MNConv<SecurityFtdcETFInstrumentField^, CSecurityFtdcETFInstrumentField>::N2M(pETFInstrument), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryETFBasket(CSecurityFtdcETFBasketField *pETFBasket, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryETFBasket(MNConv<SecurityFtdcETFBasketField^, CSecurityFtdcETFBasketField>::N2M(pETFBasket), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryOFInstrument(CSecurityFtdcOFInstrumentField *pOFInstrument, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryOFInstrument(MNConv<SecurityFtdcOFInstrumentField^, CSecurityFtdcOFInstrumentField>::N2M(pOFInstrument), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQrySFInstrument(CSecurityFtdcSFInstrumentField *pSFInstrument, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQrySFInstrument(MNConv<SecurityFtdcSFInstrumentField^, CSecurityFtdcSFInstrumentField>::N2M(pSFInstrument), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryInstrumentUnitMargin(CSecurityFtdcInstrumentUnitMarginField *pInstrumentUnitMargin, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryInstrumentUnitMargin(MNConv<SecurityFtdcInstrumentUnitMarginField^, CSecurityFtdcInstrumentUnitMarginField>::N2M(pInstrumentUnitMargin), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryPreDelivInfo(CSecurityFtdcPreDelivInfoField *pPreDelivInfo, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryPreDelivInfo(MNConv<SecurityFtdcPreDelivInfoField^, CSecurityFtdcPreDelivInfoField>::N2M(pPreDelivInfo), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryCreditStockAssignInfo(CSecurityFtdcCreditStockAssignInfoField *pCreditStockAssignInfo, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryCreditStockAssignInfo(MNConv<SecurityFtdcCreditStockAssignInfoField^, CSecurityFtdcCreditStockAssignInfoField>::N2M(pCreditStockAssignInfo), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryCreditCashAssignInfo(CSecurityFtdcCreditCashAssignInfoField *pCreditCashAssignInfo, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryCreditCashAssignInfo(MNConv<SecurityFtdcCreditCashAssignInfoField^, CSecurityFtdcCreditCashAssignInfoField>::N2M(pCreditCashAssignInfo), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryConversionRate(CSecurityFtdcConversionRateField *pConversionRate, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryConversionRate(MNConv<SecurityFtdcConversionRateField^, CSecurityFtdcConversionRateField>::N2M(pConversionRate), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryHisCreditDebtInfo(CSecurityFtdcHisCreditDebtInfoField *pHisCreditDebtInfo, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryHisCreditDebtInfo(MNConv<SecurityFtdcHisCreditDebtInfoField^, CSecurityFtdcHisCreditDebtInfoField>::N2M(pHisCreditDebtInfo), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryMarketDataStaticInfo(CSecurityFtdcMarketDataStaticInfoField *pMarketDataStaticInfo, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryMarketDataStaticInfo(MNConv<SecurityFtdcMarketDataStaticInfoField^, CSecurityFtdcMarketDataStaticInfoField>::N2M(pMarketDataStaticInfo), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryExpireRepurchInfo(CSecurityFtdcExpireRepurchInfoField *pExpireRepurchInfo, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryExpireRepurchInfo(MNConv<SecurityFtdcExpireRepurchInfoField^, CSecurityFtdcExpireRepurchInfoField>::N2M(pExpireRepurchInfo), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryBondPledgeRate(CSecurityFtdcBondPledgeRateField *pBondPledgeRate, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryBondPledgeRate(MNConv<SecurityFtdcBondPledgeRateField^, CSecurityFtdcBondPledgeRateField>::N2M(pBondPledgeRate), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryPledgeBond(CSecurityFtdcPledgeBondField *pPledgeBond, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryPledgeBond(MNConv<SecurityFtdcPledgeBondField^, CSecurityFtdcPledgeBondField>::N2M(pPledgeBond), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryHKBasicInfo(CSecurityFtdcHKBasicInfoField *pHKBasicInfo, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryHKBasicInfo(MNConv<SecurityFtdcHKBasicInfoField^, CSecurityFtdcHKBasicInfoField>::N2M(pHKBasicInfo), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryOrder(CSecurityFtdcOrderField *pOrder, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryOrder(MNConv<SecurityFtdcOrderField^, CSecurityFtdcOrderField>::N2M(pOrder), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryTrade(CSecurityFtdcTradeField *pTrade, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryTrade(MNConv<SecurityFtdcTradeField^, CSecurityFtdcTradeField>::N2M(pTrade), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryInvestorPosition(CSecurityFtdcInvestorPositionField *pInvestorPosition, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryInvestorPosition(MNConv<SecurityFtdcInvestorPositionField^, CSecurityFtdcInvestorPositionField>::N2M(pInvestorPosition), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryFundTransferSerial(CSecurityFtdcFundTransferField *pFundTransfer, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryFundTransferSerial(MNConv<SecurityFtdcFundTransferField^, CSecurityFtdcFundTransferField>::N2M(pFundTransfer), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSQuerySpi::OnRspQryFundInterTransferSerial(CSecurityFtdcFundInterTransferSerialField *pFundInterTransferSerial, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryFundInterTransferSerial(MNConv<SecurityFtdcFundInterTransferSerialField^, CSecurityFtdcFundInterTransferSerialField>::N2M(pFundInterTransferSerial), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

#endif
}