

#pragma once
#include "Util.h"
#include <vcclr.h>
#include "Callbacks.h"
#include "LTSTraderAdapter.h"


namespace LTSNative
{

	/// 非托管类
	class CLTSTraderSpi : public  CSecurityFtdcTraderSpi
	{
	public:
		/// 构造函数
		CLTSTraderSpi(LTSTraderAdapter^ pAdapter);
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
		virtual void OnRspError(CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspUserLogin(CSecurityFtdcRspUserLoginField *pRspUserLogin,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspUserLogout(CSecurityFtdcUserLogoutField *pUserLogout,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspOrderInsert(CSecurityFtdcInputOrderField *pInputOrder,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspOrderAction(CSecurityFtdcInputOrderActionField *pInputOrderAction,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspUserPasswordUpdate(CSecurityFtdcUserPasswordUpdateField *pUserPasswordUpdate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspTradingAccountPasswordUpdate(CSecurityFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryExchange(CSecurityFtdcExchangeField *pExchange,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryInstrument(CSecurityFtdcInstrumentField *pInstrument,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryInvestor(CSecurityFtdcInvestorField *pInvestor,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryTradingCode(CSecurityFtdcTradingCodeField *pTradingCode,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryTradingAccount(CSecurityFtdcTradingAccountField *pTradingAccount,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryDepthMarketData(CSecurityFtdcDepthMarketDataField *pDepthMarketData,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryInvestorPositionDetail(CSecurityFtdcInvestorPositionDetailField *pInvestorPositionDetail,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryBondInterest(CSecurityFtdcBondInterestField *pBondInterest,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryOrder(CSecurityFtdcOrderField *pOrder,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryTrade(CSecurityFtdcTradeField *pTrade,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspQryInvestorPosition(CSecurityFtdcInvestorPositionField *pInvestorPosition,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRtnOrder(CSecurityFtdcOrderField *pOrder);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRtnTrade(CSecurityFtdcTradeField *pTrade);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnErrRtnOrderInsert(CSecurityFtdcInputOrderField *pInputOrder,CSecurityFtdcRspInfoField *pRspInfo);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnErrRtnOrderAction(CSecurityFtdcOrderActionField *pOrderAction,CSecurityFtdcRspInfoField *pRspInfo);

#ifdef __CTP_MA__
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
		Callback_OnRspOrderInsert	p_OnRspOrderInsert;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspOrderAction	p_OnRspOrderAction;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspUserPasswordUpdate	p_OnRspUserPasswordUpdate;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspTradingAccountPasswordUpdate	p_OnRspTradingAccountPasswordUpdate;
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
		Callback_OnRspQryDepthMarketData	p_OnRspQryDepthMarketData;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspQryInvestorPositionDetail	p_OnRspQryInvestorPositionDetail;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspQryBondInterest	p_OnRspQryBondInterest;
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
		Callback_OnRtnOrder	p_OnRtnOrder;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRtnTrade	p_OnRtnTrade;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnErrRtnOrderInsert	p_OnErrRtnOrderInsert;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnErrRtnOrderAction	p_OnErrRtnOrderAction;

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
		gcroot<Internal_RspOrderInsert^> d_RspOrderInsert;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspOrderAction^> d_RspOrderAction;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspUserPasswordUpdate^> d_RspUserPasswordUpdate;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspTradingAccountPasswordUpdate^> d_RspTradingAccountPasswordUpdate;
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
		gcroot<Internal_RspQryDepthMarketData^> d_RspQryDepthMarketData;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspQryInvestorPositionDetail^> d_RspQryInvestorPositionDetail;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspQryBondInterest^> d_RspQryBondInterest;
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
		gcroot<Internal_RtnOrder^> d_RtnOrder;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RtnTrade^> d_RtnTrade;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_ErrRtnOrderInsert^> d_ErrRtnOrderInsert;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_ErrRtnOrderAction^> d_ErrRtnOrderAction;
#else
	private:
		gcroot<LTSTraderAdapter^> m_pAdapter;
#endif

	};
};
