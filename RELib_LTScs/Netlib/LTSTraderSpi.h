

#pragma once
#include "Util.h"
#include <vcclr.h>
#include "Callbacks.h"
#include "LTSTraderAdapter.h"

namespace RELib_LTSNative
{

	/// 非托管类
	class CLTSTraderSpi : public  CSecurityFtdcTraderSpi
	{
	public:
		/// 构造函数
		CLTSTraderSpi(CLTSTraderAdapter^ pAdapter);
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

		///订阅私有流。
		///@param nResumeType 私有流重传方式  
		///        SECURITY_TERT_RESTART:从本交易日开始重传
		///        SECURITY_TERT_RESUME:从上次收到的续传
		///        SECURITY_TERT_QUICK:只传送登录后私有流的内容
		///@remark 该方法要在Init方法前调用。若不调用则不会收到私有流的数据。
		void SubscribePrivateTopic(SECURITY_TE_RESUME_TYPE nResumeType);

		///订阅公共流。
		///@param nResumeType 公共流重传方式  
		///        SECURITY_TERT_RESTART:从本交易日开始重传
		///        SECURITY_TERT_RESUME:从上次收到的续传
		///        SECURITY_TERT_QUICK:只传送登录后公共流的内容
		///@remark 该方法要在Init方法前调用。若不调用则不会收到公共流的数据。
		void SubscribePublicTopic(SECURITY_TE_RESUME_TYPE nResumeType);


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
		virtual void OnRspOrderInsert(CSecurityFtdcInputOrderField *pInputOrder, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspOrderAction(CSecurityFtdcInputOrderActionField *pInputOrderAction, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspUserPasswordUpdate(CSecurityFtdcUserPasswordUpdateField *pUserPasswordUpdate, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspTradingAccountPasswordUpdate(CSecurityFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
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
		virtual void OnErrRtnOrderInsert(CSecurityFtdcInputOrderField *pInputOrder, CSecurityFtdcRspInfoField *pRspInfo);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnErrRtnOrderAction(CSecurityFtdcOrderActionField *pOrderAction, CSecurityFtdcRspInfoField *pRspInfo);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspFundOutByLiber(CSecurityFtdcInputFundTransferField *pInputFundTransfer, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRtnFundOutByLiber(CSecurityFtdcFundTransferField *pFundTransfer);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnErrRtnFundOutByLiber(CSecurityFtdcInputFundTransferField *pInputFundTransfer, CSecurityFtdcRspInfoField *pRspInfo);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRtnFundInByBank(CSecurityFtdcFundTransferField *pFundTransfer);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspFundInterTransfer(CSecurityFtdcFundInterTransferField *pFundInterTransfer, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRtnFundInterTransferSerial(CSecurityFtdcFundInterTransferSerialField *pFundInterTransferSerial);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnErrRtnFundInterTransfer(CSecurityFtdcFundInterTransferField *pFundInterTransfer, CSecurityFtdcRspInfoField *pRspInfo);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRtnPlatformStateInfo(CSecurityFtdcPlatformStateInfoField *pPlatformStateInfo);

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
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspFundOutByLiber	p_OnRspFundOutByLiber;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRtnFundOutByLiber	p_OnRtnFundOutByLiber;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnErrRtnFundOutByLiber	p_OnErrRtnFundOutByLiber;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRtnFundInByBank	p_OnRtnFundInByBank;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspFundInterTransfer	p_OnRspFundInterTransfer;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRtnFundInterTransferSerial	p_OnRtnFundInterTransferSerial;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnErrRtnFundInterTransfer	p_OnErrRtnFundInterTransfer;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRtnPlatformStateInfo	p_OnRtnPlatformStateInfo;

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
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspFundOutByLiber^> d_RspFundOutByLiber;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RtnFundOutByLiber^> d_RtnFundOutByLiber;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_ErrRtnFundOutByLiber^> d_ErrRtnFundOutByLiber;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RtnFundInByBank^> d_RtnFundInByBank;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspFundInterTransfer^> d_RspFundInterTransfer;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RtnFundInterTransferSerial^> d_RtnFundInterTransferSerial;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_ErrRtnFundInterTransfer^> d_ErrRtnFundInterTransfer;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RtnPlatformStateInfo^> d_RtnPlatformStateInfo;
#else
	private:
		gcroot<CLTSTraderAdapter^> m_pAdapter;
#endif

	};
};
