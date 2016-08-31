
#pragma once
// CTP MA only
#ifdef __LTS_MA__

namespace RELib_LTSNet
{
	
	// common 
	typedef void (__stdcall *Callback_OnFrontConnected)();
	typedef void (__stdcall *Callback_OnFrontDisconnected)(int nReason);
	typedef void (__stdcall *Callback_OnHeartBeatWarning)(int nTimeLapse);

	
	///报文回调结束通知。当API收到一个报文后，首先调用报文回调开始通知，然后是各数据域的回调，最后调用本方法。
	///@param nTopicID 主题代码（如私有流、公共流、行情流等）
	///@param nSequenceNo 报文序号
	typedef void (__stdcall *Callback_OnPackageEnd)(int nTopicID, int nSequenceNo);

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
	typedef void (__stdcall *Callback_OnRspFetchAuthRandCode)(CSecurityFtdcAuthRandCodeField *pAuthRandCode,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
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
	typedef void (__stdcall *Callback_OnRtnOrder)(CSecurityFtdcOrderField *pOrder);
	    		/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRtnTrade)(CSecurityFtdcTradeField *pTrade);
	    		/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnErrRtnOrderInsert)(CSecurityFtdcInputOrderField *pInputOrder,CSecurityFtdcRspInfoField *pRspInfo);
	    		/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnErrRtnOrderAction)(CSecurityFtdcOrderActionField *pOrderAction,CSecurityFtdcRspInfoField *pRspInfo);
	    		/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspFundOutByLiber)(CSecurityFtdcInputFundTransferField *pInputFundTransfer,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	    		/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRtnFundOutByLiber)(CSecurityFtdcFundTransferField *pFundTransfer);
	    		/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnErrRtnFundOutByLiber)(CSecurityFtdcInputFundTransferField *pInputFundTransfer,CSecurityFtdcRspInfoField *pRspInfo);
	    		/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRtnFundInByBank)(CSecurityFtdcFundTransferField *pFundTransfer);
	    		/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspFundInterTransfer)(CSecurityFtdcFundInterTransferField *pFundInterTransfer,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	    		/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRtnFundInterTransferSerial)(CSecurityFtdcFundInterTransferSerialField *pFundInterTransferSerial);
	    		/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnErrRtnFundInterTransfer)(CSecurityFtdcFundInterTransferField *pFundInterTransfer,CSecurityFtdcRspInfoField *pRspInfo);
	    		/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRtnPlatformStateInfo)(CSecurityFtdcPlatformStateInfoField *pPlatformStateInfo);
	    	    	    	    	    	    	    	    	    	    
	/////QueryPackages
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
	typedef void (__stdcall *Callback_OnRspFetchAuthRandCode)(CSecurityFtdcAuthRandCodeField *pAuthRandCode,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
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
	typedef void (__stdcall *Callback_OnRspQryBondInterest)(CSecurityFtdcBondInterestField *pBondInterest,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	    		/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryMarketRationInfo)(CSecurityFtdcMarketRationInfoField *pMarketRationInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	    		/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryInstrumentCommissionRate)(CSecurityFtdcInstrumentCommissionRateField *pInstrumentCommissionRate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	    		/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryETFInstrument)(CSecurityFtdcETFInstrumentField *pETFInstrument,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	    		/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryETFBasket)(CSecurityFtdcETFBasketField *pETFBasket,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	    		/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryOFInstrument)(CSecurityFtdcOFInstrumentField *pOFInstrument,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	    		/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQrySFInstrument)(CSecurityFtdcSFInstrumentField *pSFInstrument,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	    		/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryInstrumentUnitMargin)(CSecurityFtdcInstrumentUnitMarginField *pInstrumentUnitMargin,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	    		/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryPreDelivInfo)(CSecurityFtdcPreDelivInfoField *pPreDelivInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	    		/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryCreditStockAssignInfo)(CSecurityFtdcCreditStockAssignInfoField *pCreditStockAssignInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	    		/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryCreditCashAssignInfo)(CSecurityFtdcCreditCashAssignInfoField *pCreditCashAssignInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	    		/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryConversionRate)(CSecurityFtdcConversionRateField *pConversionRate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	    		/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryHisCreditDebtInfo)(CSecurityFtdcHisCreditDebtInfoField *pHisCreditDebtInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	    		/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryMarketDataStaticInfo)(CSecurityFtdcMarketDataStaticInfoField *pMarketDataStaticInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	    		/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryExpireRepurchInfo)(CSecurityFtdcExpireRepurchInfoField *pExpireRepurchInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	    		/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryBondPledgeRate)(CSecurityFtdcBondPledgeRateField *pBondPledgeRate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	    		/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryPledgeBond)(CSecurityFtdcPledgeBondField *pPledgeBond,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	    		/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryHKBasicInfo)(CSecurityFtdcHKBasicInfoField *pHKBasicInfo,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
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
	typedef void (__stdcall *Callback_OnRspQryFundTransferSerial)(CSecurityFtdcFundTransferField *pFundTransfer,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	    		/// <summary>
	/// 
	/// </summary>
	typedef void (__stdcall *Callback_OnRspQryFundInterTransferSerial)(CSecurityFtdcFundInterTransferSerialField *pFundInterTransferSerial,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	    	    	    	    	    	    	    	    	    	    	    	    	    	    	    	    	    	    	    	    	    	    	    	    	    	    	    	    	    	    	    	    
};

#endif
