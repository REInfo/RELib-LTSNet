

#include "StdAfx.h"
#include "LTSQuerySpi.h"
#include "LTSQueryAdapter.h"



using namespace RELib_LTSNative;

namespace RELib_LTSNet
{

	/// <summary>
	///托管类,TraderAPI Adapter 创建CTPQueryAdapter
	///存贮订阅信息文件的目录，默认为当前目录
	/// </summary>
	CLTSQueryAdapter::CLTSQueryAdapter(void)
	{
		m_pApi = CSecurityFtdcQueryApi::CreateFtdcQueryApi();
		m_pSpi = new CLTSQuerySpi(this);
#ifdef __LTS_MA__
		RegisterCallbacks();
#endif
		m_pApi->RegisterSpi(m_pSpi);
	}

	/// <summary>
	///创建CTPMDAdapter
	/// </summary>
	/// <param name="pszFlowPath">存贮订阅信息文件的目录，默认为当前目录</param>
	/// <param name="pszUserApiType"> </param>
	CLTSQueryAdapter::CLTSQueryAdapter(String^ pszFlowPath, String^ pszUserApiType)
	{
		CAutoStrPtr asp(pszFlowPath);
		CAutoStrPtr arg2(pszUserApiType);

		m_pApi = CSecurityFtdcQueryApi::CreateFtdcQueryApi(asp.m_pChar);
		m_pSpi = new CLTSQuerySpi(this);
#ifdef __LTS_MA__
		RegisterCallbacks();
#endif	
		m_pApi->RegisterSpi(m_pSpi);
	}

	CLTSQueryAdapter::~CLTSQueryAdapter(void)
	{
		Release();
	}
	void CLTSQueryAdapter::Release(void)
	{
		if (m_pApi)
		{
			m_pApi->RegisterSpi(0);
			m_pApi->Release();
			m_pApi = nullptr;
			delete m_pSpi;
			m_pSpi = nullptr;
		}
	}
	///注册前置机网络地址
	void CLTSQueryAdapter::RegisterFront(String^  pszFrontAddress)
	{
		CAutoStrPtr asp = CAutoStrPtr(pszFrontAddress);
		m_pApi->RegisterFront(asp.m_pChar);
	}




	void CLTSQueryAdapter::Init(void)
	{
		m_pApi->Init();
	}

	int CLTSQueryAdapter::Join(void)
	{
		return m_pApi->Join();
	}

	String^ CLTSQueryAdapter::GetTradingDay()
	{
		return gcnew String(m_pApi->GetTradingDay());
	}

	///用户登录请求
	int CLTSQueryAdapter::ReqUserLogin(SecurityFtdcReqUserLoginField^ pReqUserLoginField, int nRequestID)
	{
		CSecurityFtdcReqUserLoginField native;
		MNConv<SecurityFtdcReqUserLoginField^, CSecurityFtdcReqUserLoginField>::M2N(pReqUserLoginField, &native);
		return m_pApi->ReqUserLogin(&native, nRequestID);
	}


	/// <summary>
	/// 
	/// </summary>
	int CLTSQueryAdapter::ReqUserLogout(SecurityFtdcUserLogoutField^ pUserLogout, int nRequestID)
	{
		CSecurityFtdcUserLogoutField native0;
		MNConv<SecurityFtdcUserLogoutField^, CSecurityFtdcUserLogoutField>::M2N(pUserLogout, &native0);

		return m_pApi->ReqUserLogout(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSQueryAdapter::ReqFetchAuthRandCode(SecurityFtdcAuthRandCodeField^ pAuthRandCode, int nRequestID)
	{
		CSecurityFtdcAuthRandCodeField native0;
		MNConv<SecurityFtdcAuthRandCodeField^, CSecurityFtdcAuthRandCodeField>::M2N(pAuthRandCode, &native0);

		return m_pApi->ReqFetchAuthRandCode(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSQueryAdapter::ReqQryExchange(SecurityFtdcQryExchangeField^ pQryExchange, int nRequestID)
	{
		CSecurityFtdcQryExchangeField native0;
		MNConv<SecurityFtdcQryExchangeField^, CSecurityFtdcQryExchangeField>::M2N(pQryExchange, &native0);

		return m_pApi->ReqQryExchange(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSQueryAdapter::ReqQryInstrument(SecurityFtdcQryInstrumentField^ pQryInstrument, int nRequestID)
	{
		CSecurityFtdcQryInstrumentField native0;
		MNConv<SecurityFtdcQryInstrumentField^, CSecurityFtdcQryInstrumentField>::M2N(pQryInstrument, &native0);

		return m_pApi->ReqQryInstrument(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSQueryAdapter::ReqQryInvestor(SecurityFtdcQryInvestorField^ pQryInvestor, int nRequestID)
	{
		CSecurityFtdcQryInvestorField native0;
		MNConv<SecurityFtdcQryInvestorField^, CSecurityFtdcQryInvestorField>::M2N(pQryInvestor, &native0);

		return m_pApi->ReqQryInvestor(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSQueryAdapter::ReqQryTradingCode(SecurityFtdcQryTradingCodeField^ pQryTradingCode, int nRequestID)
	{
		CSecurityFtdcQryTradingCodeField native0;
		MNConv<SecurityFtdcQryTradingCodeField^, CSecurityFtdcQryTradingCodeField>::M2N(pQryTradingCode, &native0);

		return m_pApi->ReqQryTradingCode(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSQueryAdapter::ReqQryTradingAccount(SecurityFtdcQryTradingAccountField^ pQryTradingAccount, int nRequestID)
	{
		CSecurityFtdcQryTradingAccountField native0;
		MNConv<SecurityFtdcQryTradingAccountField^, CSecurityFtdcQryTradingAccountField>::M2N(pQryTradingAccount, &native0);

		return m_pApi->ReqQryTradingAccount(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSQueryAdapter::ReqQryBondInterest(SecurityFtdcQryBondInterestField^ pQryBondInterest, int nRequestID)
	{
		CSecurityFtdcQryBondInterestField native0;
		MNConv<SecurityFtdcQryBondInterestField^, CSecurityFtdcQryBondInterestField>::M2N(pQryBondInterest, &native0);

		return m_pApi->ReqQryBondInterest(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSQueryAdapter::ReqQryMarketRationInfo(SecurityFtdcQryMarketRationInfoField^ pQryMarketRationInfo, int nRequestID)
	{
		CSecurityFtdcQryMarketRationInfoField native0;
		MNConv<SecurityFtdcQryMarketRationInfoField^, CSecurityFtdcQryMarketRationInfoField>::M2N(pQryMarketRationInfo, &native0);

		return m_pApi->ReqQryMarketRationInfo(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSQueryAdapter::ReqQryInstrumentCommissionRate(SecurityFtdcQryInstrumentCommissionRateField^ pQryInstrumentCommissionRate, int nRequestID)
	{
		CSecurityFtdcQryInstrumentCommissionRateField native0;
		MNConv<SecurityFtdcQryInstrumentCommissionRateField^, CSecurityFtdcQryInstrumentCommissionRateField>::M2N(pQryInstrumentCommissionRate, &native0);

		return m_pApi->ReqQryInstrumentCommissionRate(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSQueryAdapter::ReqQryETFInstrument(SecurityFtdcQryETFInstrumentField^ pQryETFInstrument, int nRequestID)
	{
		CSecurityFtdcQryETFInstrumentField native0;
		MNConv<SecurityFtdcQryETFInstrumentField^, CSecurityFtdcQryETFInstrumentField>::M2N(pQryETFInstrument, &native0);

		return m_pApi->ReqQryETFInstrument(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSQueryAdapter::ReqQryETFBasket(SecurityFtdcQryETFBasketField^ pQryETFBasket, int nRequestID)
	{
		CSecurityFtdcQryETFBasketField native0;
		MNConv<SecurityFtdcQryETFBasketField^, CSecurityFtdcQryETFBasketField>::M2N(pQryETFBasket, &native0);

		return m_pApi->ReqQryETFBasket(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSQueryAdapter::ReqQryOFInstrument(SecurityFtdcQryOFInstrumentField^ pQryOFInstrument, int nRequestID)
	{
		CSecurityFtdcQryOFInstrumentField native0;
		MNConv<SecurityFtdcQryOFInstrumentField^, CSecurityFtdcQryOFInstrumentField>::M2N(pQryOFInstrument, &native0);

		return m_pApi->ReqQryOFInstrument(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSQueryAdapter::ReqQrySFInstrument(SecurityFtdcQrySFInstrumentField^ pQrySFInstrument, int nRequestID)
	{
		CSecurityFtdcQrySFInstrumentField native0;
		MNConv<SecurityFtdcQrySFInstrumentField^, CSecurityFtdcQrySFInstrumentField>::M2N(pQrySFInstrument, &native0);

		return m_pApi->ReqQrySFInstrument(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSQueryAdapter::ReqQryInstrumentUnitMargin(SecurityFtdcQryInstrumentUnitMarginField^ pQryInstrumentUnitMargin, int nRequestID)
	{
		CSecurityFtdcQryInstrumentUnitMarginField native0;
		MNConv<SecurityFtdcQryInstrumentUnitMarginField^, CSecurityFtdcQryInstrumentUnitMarginField>::M2N(pQryInstrumentUnitMargin, &native0);

		return m_pApi->ReqQryInstrumentUnitMargin(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSQueryAdapter::ReqQryPreDelivInfo(SecurityFtdcQryPreDelivInfoField^ pQryPreDelivInfo, int nRequestID)
	{
		CSecurityFtdcQryPreDelivInfoField native0;
		MNConv<SecurityFtdcQryPreDelivInfoField^, CSecurityFtdcQryPreDelivInfoField>::M2N(pQryPreDelivInfo, &native0);

		return m_pApi->ReqQryPreDelivInfo(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSQueryAdapter::ReqQryCreditStockAssignInfo(SecurityFtdcQryCreditStockAssignInfoField^ pQryCreditStockAssignInfo, int nRequestID)
	{
		CSecurityFtdcQryCreditStockAssignInfoField native0;
		MNConv<SecurityFtdcQryCreditStockAssignInfoField^, CSecurityFtdcQryCreditStockAssignInfoField>::M2N(pQryCreditStockAssignInfo, &native0);

		return m_pApi->ReqQryCreditStockAssignInfo(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSQueryAdapter::ReqQryCreditCashAssignInfo(SecurityFtdcQryCreditCashAssignInfoField^ pQryCreditCashAssignInfo, int nRequestID)
	{
		CSecurityFtdcQryCreditCashAssignInfoField native0;
		MNConv<SecurityFtdcQryCreditCashAssignInfoField^, CSecurityFtdcQryCreditCashAssignInfoField>::M2N(pQryCreditCashAssignInfo, &native0);

		return m_pApi->ReqQryCreditCashAssignInfo(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSQueryAdapter::ReqQryConversionRate(SecurityFtdcQryConversionRateField^ pQryConversionRate, int nRequestID)
	{
		CSecurityFtdcQryConversionRateField native0;
		MNConv<SecurityFtdcQryConversionRateField^, CSecurityFtdcQryConversionRateField>::M2N(pQryConversionRate, &native0);

		return m_pApi->ReqQryConversionRate(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSQueryAdapter::ReqQryHisCreditDebtInfo(SecurityFtdcQryHisCreditDebtInfoField^ pQryHisCreditDebtInfo, int nRequestID)
	{
		CSecurityFtdcQryHisCreditDebtInfoField native0;
		MNConv<SecurityFtdcQryHisCreditDebtInfoField^, CSecurityFtdcQryHisCreditDebtInfoField>::M2N(pQryHisCreditDebtInfo, &native0);

		return m_pApi->ReqQryHisCreditDebtInfo(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSQueryAdapter::ReqQryMarketDataStaticInfo(SecurityFtdcQryMarketDataStaticInfoField^ pQryMarketDataStaticInfo, int nRequestID)
	{
		CSecurityFtdcQryMarketDataStaticInfoField native0;
		MNConv<SecurityFtdcQryMarketDataStaticInfoField^, CSecurityFtdcQryMarketDataStaticInfoField>::M2N(pQryMarketDataStaticInfo, &native0);

		return m_pApi->ReqQryMarketDataStaticInfo(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSQueryAdapter::ReqQryExpireRepurchInfo(SecurityFtdcQryExpireRepurchInfoField^ pQryExpireRepurchInfo, int nRequestID)
	{
		CSecurityFtdcQryExpireRepurchInfoField native0;
		MNConv<SecurityFtdcQryExpireRepurchInfoField^, CSecurityFtdcQryExpireRepurchInfoField>::M2N(pQryExpireRepurchInfo, &native0);

		return m_pApi->ReqQryExpireRepurchInfo(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSQueryAdapter::ReqQryBondPledgeRate(SecurityFtdcQryBondPledgeRateField^ pQryBondPledgeRate, int nRequestID)
	{
		CSecurityFtdcQryBondPledgeRateField native0;
		MNConv<SecurityFtdcQryBondPledgeRateField^, CSecurityFtdcQryBondPledgeRateField>::M2N(pQryBondPledgeRate, &native0);

		return m_pApi->ReqQryBondPledgeRate(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSQueryAdapter::ReqQryPledgeBond(SecurityFtdcQryPledgeBondField^ pQryPledgeBond, int nRequestID)
	{
		CSecurityFtdcQryPledgeBondField native0;
		MNConv<SecurityFtdcQryPledgeBondField^, CSecurityFtdcQryPledgeBondField>::M2N(pQryPledgeBond, &native0);

		return m_pApi->ReqQryPledgeBond(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSQueryAdapter::ReqQryHKBasicInfo(SecurityFtdcQryHKBasicInfoField^ pQryHKBasicInfo, int nRequestID)
	{
		CSecurityFtdcQryHKBasicInfoField native0;
		MNConv<SecurityFtdcQryHKBasicInfoField^, CSecurityFtdcQryHKBasicInfoField>::M2N(pQryHKBasicInfo, &native0);

		return m_pApi->ReqQryHKBasicInfo(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSQueryAdapter::ReqQryOrder(SecurityFtdcQryOrderField^ pQryOrder, int nRequestID)
	{
		CSecurityFtdcQryOrderField native0;
		MNConv<SecurityFtdcQryOrderField^, CSecurityFtdcQryOrderField>::M2N(pQryOrder, &native0);

		return m_pApi->ReqQryOrder(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSQueryAdapter::ReqQryTrade(SecurityFtdcQryTradeField^ pQryTrade, int nRequestID)
	{
		CSecurityFtdcQryTradeField native0;
		MNConv<SecurityFtdcQryTradeField^, CSecurityFtdcQryTradeField>::M2N(pQryTrade, &native0);

		return m_pApi->ReqQryTrade(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSQueryAdapter::ReqQryInvestorPosition(SecurityFtdcQryInvestorPositionField^ pQryInvestorPosition, int nRequestID)
	{
		CSecurityFtdcQryInvestorPositionField native0;
		MNConv<SecurityFtdcQryInvestorPositionField^, CSecurityFtdcQryInvestorPositionField>::M2N(pQryInvestorPosition, &native0);

		return m_pApi->ReqQryInvestorPosition(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSQueryAdapter::ReqQryFundTransferSerial(SecurityFtdcQryFundTransferSerialField^ pQryFundTransferSerial, int nRequestID)
	{
		CSecurityFtdcQryFundTransferSerialField native0;
		MNConv<SecurityFtdcQryFundTransferSerialField^, CSecurityFtdcQryFundTransferSerialField>::M2N(pQryFundTransferSerial, &native0);

		return m_pApi->ReqQryFundTransferSerial(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSQueryAdapter::ReqQryFundInterTransferSerial(SecurityFtdcQryFundInterTransferSerialField^ pQryFundInterTransferSerial, int nRequestID)
	{
		CSecurityFtdcQryFundInterTransferSerialField native0;
		MNConv<SecurityFtdcQryFundInterTransferSerialField^, CSecurityFtdcQryFundInterTransferSerialField>::M2N(pQryFundInterTransferSerial, &native0);

		return m_pApi->ReqQryFundInterTransferSerial(&native0, nRequestID);
	}

#ifdef __LTS_MA__

	//------------------------------------ Callbacks ------------------------------------
	void CLTSQueryAdapter::cbk_OnFrontConnected(){
		this->OnFrontConnected();
	}
	void CLTSQueryAdapter::cbk_OnFrontDisconnected(int nReason){
		this->OnFrontDisconnected(nReason);
	}
	void CLTSQueryAdapter::cbk_OnHeartBeatWarning(int nTimeLapse){
		this->OnHeartBeatWarning(nTimeLapse);
	}


	/// <summary>
	/// 
	/// </summary>
	void CLTSQueryAdapter::cbk_OnRspError(CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspError(RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSQueryAdapter::cbk_OnRspUserLogin(CSecurityFtdcRspUserLoginField *pRspUserLogin,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspUserLogin(MNConv<SecurityFtdcRspUserLoginField^, CSecurityFtdcRspUserLoginField>::N2M(pRspUserLogin),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSQueryAdapter::cbk_OnRspUserLogout(CSecurityFtdcUserLogoutField *pUserLogout,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspUserLogout(MNConv<SecurityFtdcUserLogoutField^, CSecurityFtdcUserLogoutField>::N2M(pUserLogout),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSQueryAdapter::cbk_OnRspFetchAuthRandCode(CSecurityFtdcAuthRandCodeField *pAuthRandCode,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspFetchAuthRandCode(MNConv<SecurityFtdcAuthRandCodeField^, CSecurityFtdcAuthRandCodeField>::N2M(pAuthRandCode),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSQueryAdapter::cbk_OnRspQryExchange(CSecurityFtdcExchangeField *pExchange,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspQryExchange(MNConv<SecurityFtdcExchangeField^, CSecurityFtdcExchangeField>::N2M(pExchange),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSQueryAdapter::cbk_OnRspQryInstrument(CSecurityFtdcInstrumentField *pInstrument,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspQryInstrument(MNConv<SecurityFtdcInstrumentField^, CSecurityFtdcInstrumentField>::N2M(pInstrument),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSQueryAdapter::cbk_OnRspQryInvestor(CSecurityFtdcInvestorField *pInvestor,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspQryInvestor(MNConv<SecurityFtdcInvestorField^, CSecurityFtdcInvestorField>::N2M(pInvestor),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSQueryAdapter::cbk_OnRspQryTradingCode(CSecurityFtdcTradingCodeField *pTradingCode,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspQryTradingCode(MNConv<SecurityFtdcTradingCodeField^, CSecurityFtdcTradingCodeField>::N2M(pTradingCode),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSQueryAdapter::cbk_OnRspQryTradingAccount(CSecurityFtdcTradingAccountField *pTradingAccount,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspQryTradingAccount(MNConv<SecurityFtdcTradingAccountField^, CSecurityFtdcTradingAccountField>::N2M(pTradingAccount),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSQueryAdapter::cbk_OnRspQryBondInterest(CSecurityFtdcBondInterestField *pBondInterest,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspQryBondInterest(MNConv<SecurityFtdcBondInterestField^, CSecurityFtdcBondInterestField>::N2M(pBondInterest),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSQueryAdapter::cbk_OnRspQryMarketRationInfo(CSecurityFtdcMarketRationInfoField *pMarketRationInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspQryMarketRationInfo(MNConv<SecurityFtdcMarketRationInfoField^, CSecurityFtdcMarketRationInfoField>::N2M(pMarketRationInfo),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSQueryAdapter::cbk_OnRspQryInstrumentCommissionRate(CSecurityFtdcInstrumentCommissionRateField *pInstrumentCommissionRate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspQryInstrumentCommissionRate(MNConv<SecurityFtdcInstrumentCommissionRateField^, CSecurityFtdcInstrumentCommissionRateField>::N2M(pInstrumentCommissionRate),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSQueryAdapter::cbk_OnRspQryETFInstrument(CSecurityFtdcETFInstrumentField *pETFInstrument,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspQryETFInstrument(MNConv<SecurityFtdcETFInstrumentField^, CSecurityFtdcETFInstrumentField>::N2M(pETFInstrument),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSQueryAdapter::cbk_OnRspQryETFBasket(CSecurityFtdcETFBasketField *pETFBasket,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspQryETFBasket(MNConv<SecurityFtdcETFBasketField^, CSecurityFtdcETFBasketField>::N2M(pETFBasket),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSQueryAdapter::cbk_OnRspQryOFInstrument(CSecurityFtdcOFInstrumentField *pOFInstrument,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspQryOFInstrument(MNConv<SecurityFtdcOFInstrumentField^, CSecurityFtdcOFInstrumentField>::N2M(pOFInstrument),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSQueryAdapter::cbk_OnRspQrySFInstrument(CSecurityFtdcSFInstrumentField *pSFInstrument,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspQrySFInstrument(MNConv<SecurityFtdcSFInstrumentField^, CSecurityFtdcSFInstrumentField>::N2M(pSFInstrument),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSQueryAdapter::cbk_OnRspQryInstrumentUnitMargin(CSecurityFtdcInstrumentUnitMarginField *pInstrumentUnitMargin,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspQryInstrumentUnitMargin(MNConv<SecurityFtdcInstrumentUnitMarginField^, CSecurityFtdcInstrumentUnitMarginField>::N2M(pInstrumentUnitMargin),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSQueryAdapter::cbk_OnRspQryPreDelivInfo(CSecurityFtdcPreDelivInfoField *pPreDelivInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspQryPreDelivInfo(MNConv<SecurityFtdcPreDelivInfoField^, CSecurityFtdcPreDelivInfoField>::N2M(pPreDelivInfo),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSQueryAdapter::cbk_OnRspQryCreditStockAssignInfo(CSecurityFtdcCreditStockAssignInfoField *pCreditStockAssignInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspQryCreditStockAssignInfo(MNConv<SecurityFtdcCreditStockAssignInfoField^, CSecurityFtdcCreditStockAssignInfoField>::N2M(pCreditStockAssignInfo),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSQueryAdapter::cbk_OnRspQryCreditCashAssignInfo(CSecurityFtdcCreditCashAssignInfoField *pCreditCashAssignInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspQryCreditCashAssignInfo(MNConv<SecurityFtdcCreditCashAssignInfoField^, CSecurityFtdcCreditCashAssignInfoField>::N2M(pCreditCashAssignInfo),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSQueryAdapter::cbk_OnRspQryConversionRate(CSecurityFtdcConversionRateField *pConversionRate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspQryConversionRate(MNConv<SecurityFtdcConversionRateField^, CSecurityFtdcConversionRateField>::N2M(pConversionRate),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSQueryAdapter::cbk_OnRspQryHisCreditDebtInfo(CSecurityFtdcHisCreditDebtInfoField *pHisCreditDebtInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspQryHisCreditDebtInfo(MNConv<SecurityFtdcHisCreditDebtInfoField^, CSecurityFtdcHisCreditDebtInfoField>::N2M(pHisCreditDebtInfo),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSQueryAdapter::cbk_OnRspQryMarketDataStaticInfo(CSecurityFtdcMarketDataStaticInfoField *pMarketDataStaticInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspQryMarketDataStaticInfo(MNConv<SecurityFtdcMarketDataStaticInfoField^, CSecurityFtdcMarketDataStaticInfoField>::N2M(pMarketDataStaticInfo),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSQueryAdapter::cbk_OnRspQryExpireRepurchInfo(CSecurityFtdcExpireRepurchInfoField *pExpireRepurchInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspQryExpireRepurchInfo(MNConv<SecurityFtdcExpireRepurchInfoField^, CSecurityFtdcExpireRepurchInfoField>::N2M(pExpireRepurchInfo),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSQueryAdapter::cbk_OnRspQryBondPledgeRate(CSecurityFtdcBondPledgeRateField *pBondPledgeRate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspQryBondPledgeRate(MNConv<SecurityFtdcBondPledgeRateField^, CSecurityFtdcBondPledgeRateField>::N2M(pBondPledgeRate),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSQueryAdapter::cbk_OnRspQryPledgeBond(CSecurityFtdcPledgeBondField *pPledgeBond,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspQryPledgeBond(MNConv<SecurityFtdcPledgeBondField^, CSecurityFtdcPledgeBondField>::N2M(pPledgeBond),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSQueryAdapter::cbk_OnRspQryHKBasicInfo(CSecurityFtdcHKBasicInfoField *pHKBasicInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspQryHKBasicInfo(MNConv<SecurityFtdcHKBasicInfoField^, CSecurityFtdcHKBasicInfoField>::N2M(pHKBasicInfo),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSQueryAdapter::cbk_OnRspQryOrder(CSecurityFtdcOrderField *pOrder,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspQryOrder(MNConv<SecurityFtdcOrderField^, CSecurityFtdcOrderField>::N2M(pOrder),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSQueryAdapter::cbk_OnRspQryTrade(CSecurityFtdcTradeField *pTrade,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspQryTrade(MNConv<SecurityFtdcTradeField^, CSecurityFtdcTradeField>::N2M(pTrade),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSQueryAdapter::cbk_OnRspQryInvestorPosition(CSecurityFtdcInvestorPositionField *pInvestorPosition,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspQryInvestorPosition(MNConv<SecurityFtdcInvestorPositionField^, CSecurityFtdcInvestorPositionField>::N2M(pInvestorPosition),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSQueryAdapter::cbk_OnRspQryFundTransferSerial(CSecurityFtdcFundTransferField *pFundTransfer,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspQryFundTransferSerial(MNConv<SecurityFtdcFundTransferField^, CSecurityFtdcFundTransferField>::N2M(pFundTransfer),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSQueryAdapter::cbk_OnRspQryFundInterTransferSerial(CSecurityFtdcFundInterTransferSerialField *pFundInterTransferSerial,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspQryFundInterTransferSerial(MNConv<SecurityFtdcFundInterTransferSerialField^, CSecurityFtdcFundInterTransferSerialField>::N2M(pFundInterTransferSerial),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}

	// 将所有回调函数地址传递给SPI，并保存对delegate的引用
	void CLTSQueryAdapter::RegisterCallbacks()
	{
		m_pSpi->d_FrontConnected = gcnew Internal_FrontConnected(this, &CLTSQueryAdapter::cbk_OnFrontConnected);
		m_pSpi->p_OnFrontConnected = (Callback_OnFrontConnected)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_FrontConnected).ToPointer();

		m_pSpi->d_FrontDisconnected = gcnew Internal_FrontDisconnected(this, &CLTSQueryAdapter::cbk_OnFrontDisconnected);
		m_pSpi->p_OnFrontDisconnected = (Callback_OnFrontDisconnected)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_FrontDisconnected).ToPointer();

		m_pSpi->d_HeartBeatWarning = gcnew Internal_HeartBeatWarning(this, &CLTSQueryAdapter::cbk_OnHeartBeatWarning);
		m_pSpi->p_OnHeartBeatWarning = (Callback_OnHeartBeatWarning)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_HeartBeatWarning).ToPointer();

		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspError = gcnew Internal_RspError(this, &CLTSQueryAdapter::cbk_OnRspError);
		m_pSpi->p_OnRspError = (Callback_OnRspError)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspError).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspUserLogin = gcnew Internal_RspUserLogin(this, &CLTSQueryAdapter::cbk_OnRspUserLogin);
		m_pSpi->p_OnRspUserLogin = (Callback_OnRspUserLogin)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspUserLogin).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspUserLogout = gcnew Internal_RspUserLogout(this, &CLTSQueryAdapter::cbk_OnRspUserLogout);
		m_pSpi->p_OnRspUserLogout = (Callback_OnRspUserLogout)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspUserLogout).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspFetchAuthRandCode = gcnew Internal_RspFetchAuthRandCode(this, &CLTSQueryAdapter::cbk_OnRspFetchAuthRandCode);
		m_pSpi->p_OnRspFetchAuthRandCode = (Callback_OnRspFetchAuthRandCode)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspFetchAuthRandCode).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspQryExchange = gcnew Internal_RspQryExchange(this, &CLTSQueryAdapter::cbk_OnRspQryExchange);
		m_pSpi->p_OnRspQryExchange = (Callback_OnRspQryExchange)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryExchange).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspQryInstrument = gcnew Internal_RspQryInstrument(this, &CLTSQueryAdapter::cbk_OnRspQryInstrument);
		m_pSpi->p_OnRspQryInstrument = (Callback_OnRspQryInstrument)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryInstrument).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspQryInvestor = gcnew Internal_RspQryInvestor(this, &CLTSQueryAdapter::cbk_OnRspQryInvestor);
		m_pSpi->p_OnRspQryInvestor = (Callback_OnRspQryInvestor)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryInvestor).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspQryTradingCode = gcnew Internal_RspQryTradingCode(this, &CLTSQueryAdapter::cbk_OnRspQryTradingCode);
		m_pSpi->p_OnRspQryTradingCode = (Callback_OnRspQryTradingCode)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryTradingCode).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspQryTradingAccount = gcnew Internal_RspQryTradingAccount(this, &CLTSQueryAdapter::cbk_OnRspQryTradingAccount);
		m_pSpi->p_OnRspQryTradingAccount = (Callback_OnRspQryTradingAccount)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryTradingAccount).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspQryBondInterest = gcnew Internal_RspQryBondInterest(this, &CLTSQueryAdapter::cbk_OnRspQryBondInterest);
		m_pSpi->p_OnRspQryBondInterest = (Callback_OnRspQryBondInterest)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryBondInterest).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspQryMarketRationInfo = gcnew Internal_RspQryMarketRationInfo(this, &CLTSQueryAdapter::cbk_OnRspQryMarketRationInfo);
		m_pSpi->p_OnRspQryMarketRationInfo = (Callback_OnRspQryMarketRationInfo)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryMarketRationInfo).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspQryInstrumentCommissionRate = gcnew Internal_RspQryInstrumentCommissionRate(this, &CLTSQueryAdapter::cbk_OnRspQryInstrumentCommissionRate);
		m_pSpi->p_OnRspQryInstrumentCommissionRate = (Callback_OnRspQryInstrumentCommissionRate)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryInstrumentCommissionRate).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspQryETFInstrument = gcnew Internal_RspQryETFInstrument(this, &CLTSQueryAdapter::cbk_OnRspQryETFInstrument);
		m_pSpi->p_OnRspQryETFInstrument = (Callback_OnRspQryETFInstrument)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryETFInstrument).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspQryETFBasket = gcnew Internal_RspQryETFBasket(this, &CLTSQueryAdapter::cbk_OnRspQryETFBasket);
		m_pSpi->p_OnRspQryETFBasket = (Callback_OnRspQryETFBasket)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryETFBasket).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspQryOFInstrument = gcnew Internal_RspQryOFInstrument(this, &CLTSQueryAdapter::cbk_OnRspQryOFInstrument);
		m_pSpi->p_OnRspQryOFInstrument = (Callback_OnRspQryOFInstrument)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryOFInstrument).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspQrySFInstrument = gcnew Internal_RspQrySFInstrument(this, &CLTSQueryAdapter::cbk_OnRspQrySFInstrument);
		m_pSpi->p_OnRspQrySFInstrument = (Callback_OnRspQrySFInstrument)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQrySFInstrument).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspQryInstrumentUnitMargin = gcnew Internal_RspQryInstrumentUnitMargin(this, &CLTSQueryAdapter::cbk_OnRspQryInstrumentUnitMargin);
		m_pSpi->p_OnRspQryInstrumentUnitMargin = (Callback_OnRspQryInstrumentUnitMargin)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryInstrumentUnitMargin).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspQryPreDelivInfo = gcnew Internal_RspQryPreDelivInfo(this, &CLTSQueryAdapter::cbk_OnRspQryPreDelivInfo);
		m_pSpi->p_OnRspQryPreDelivInfo = (Callback_OnRspQryPreDelivInfo)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryPreDelivInfo).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspQryCreditStockAssignInfo = gcnew Internal_RspQryCreditStockAssignInfo(this, &CLTSQueryAdapter::cbk_OnRspQryCreditStockAssignInfo);
		m_pSpi->p_OnRspQryCreditStockAssignInfo = (Callback_OnRspQryCreditStockAssignInfo)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryCreditStockAssignInfo).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspQryCreditCashAssignInfo = gcnew Internal_RspQryCreditCashAssignInfo(this, &CLTSQueryAdapter::cbk_OnRspQryCreditCashAssignInfo);
		m_pSpi->p_OnRspQryCreditCashAssignInfo = (Callback_OnRspQryCreditCashAssignInfo)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryCreditCashAssignInfo).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspQryConversionRate = gcnew Internal_RspQryConversionRate(this, &CLTSQueryAdapter::cbk_OnRspQryConversionRate);
		m_pSpi->p_OnRspQryConversionRate = (Callback_OnRspQryConversionRate)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryConversionRate).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspQryHisCreditDebtInfo = gcnew Internal_RspQryHisCreditDebtInfo(this, &CLTSQueryAdapter::cbk_OnRspQryHisCreditDebtInfo);
		m_pSpi->p_OnRspQryHisCreditDebtInfo = (Callback_OnRspQryHisCreditDebtInfo)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryHisCreditDebtInfo).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspQryMarketDataStaticInfo = gcnew Internal_RspQryMarketDataStaticInfo(this, &CLTSQueryAdapter::cbk_OnRspQryMarketDataStaticInfo);
		m_pSpi->p_OnRspQryMarketDataStaticInfo = (Callback_OnRspQryMarketDataStaticInfo)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryMarketDataStaticInfo).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspQryExpireRepurchInfo = gcnew Internal_RspQryExpireRepurchInfo(this, &CLTSQueryAdapter::cbk_OnRspQryExpireRepurchInfo);
		m_pSpi->p_OnRspQryExpireRepurchInfo = (Callback_OnRspQryExpireRepurchInfo)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryExpireRepurchInfo).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspQryBondPledgeRate = gcnew Internal_RspQryBondPledgeRate(this, &CLTSQueryAdapter::cbk_OnRspQryBondPledgeRate);
		m_pSpi->p_OnRspQryBondPledgeRate = (Callback_OnRspQryBondPledgeRate)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryBondPledgeRate).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspQryPledgeBond = gcnew Internal_RspQryPledgeBond(this, &CLTSQueryAdapter::cbk_OnRspQryPledgeBond);
		m_pSpi->p_OnRspQryPledgeBond = (Callback_OnRspQryPledgeBond)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryPledgeBond).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspQryHKBasicInfo = gcnew Internal_RspQryHKBasicInfo(this, &CLTSQueryAdapter::cbk_OnRspQryHKBasicInfo);
		m_pSpi->p_OnRspQryHKBasicInfo = (Callback_OnRspQryHKBasicInfo)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryHKBasicInfo).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspQryOrder = gcnew Internal_RspQryOrder(this, &CLTSQueryAdapter::cbk_OnRspQryOrder);
		m_pSpi->p_OnRspQryOrder = (Callback_OnRspQryOrder)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryOrder).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspQryTrade = gcnew Internal_RspQryTrade(this, &CLTSQueryAdapter::cbk_OnRspQryTrade);
		m_pSpi->p_OnRspQryTrade = (Callback_OnRspQryTrade)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryTrade).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspQryInvestorPosition = gcnew Internal_RspQryInvestorPosition(this, &CLTSQueryAdapter::cbk_OnRspQryInvestorPosition);
		m_pSpi->p_OnRspQryInvestorPosition = (Callback_OnRspQryInvestorPosition)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryInvestorPosition).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspQryFundTransferSerial = gcnew Internal_RspQryFundTransferSerial(this, &CLTSQueryAdapter::cbk_OnRspQryFundTransferSerial);
		m_pSpi->p_OnRspQryFundTransferSerial = (Callback_OnRspQryFundTransferSerial)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryFundTransferSerial).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspQryFundInterTransferSerial = gcnew Internal_RspQryFundInterTransferSerial(this, &CLTSQueryAdapter::cbk_OnRspQryFundInterTransferSerial);
		m_pSpi->p_OnRspQryFundInterTransferSerial = (Callback_OnRspQryFundInterTransferSerial)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspQryFundInterTransferSerial).ToPointer();
	}
#endif

} // end of namespace
