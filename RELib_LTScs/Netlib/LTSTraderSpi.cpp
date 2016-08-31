

#include "StdAfx.h"
#include "LTSTraderSpi.h"
#include "LTSTraderAdapter.h"
#include "Callbacks.h"


namespace RELib_LTSNative
{
	CLTSTraderSpi::CLTSTraderSpi(CLTSTraderAdapter^ pAdapter) {
#ifndef __LTS_MA__
		m_pAdapter = pAdapter;
#endif
	};
#ifdef __LTS_MA__

	///当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
	void CLTSTraderSpi::OnFrontConnected(){
		p_OnFrontConnected();
	};

	///当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
	///@param nReason 错误原因
	///        0x1001 网络读失败
	///        0x1002 网络写失败
	///        0x2001 接收心跳超时
	///        0x2002 发送心跳失败
	///        0x2003 收到错误报文
	void CLTSTraderSpi::OnFrontDisconnected(int nReason){
		p_OnFrontDisconnected(nReason);
	};

	///心跳超时警告。当长时间未收到报文时，该方法被调用。
	///@param nTimeLapse 距离上次接收报文的时间
	void CLTSTraderSpi::OnHeartBeatWarning(int nTimeLapse){
		p_OnHeartBeatWarning(nTimeLapse);
	};




	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspError(CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspError(RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspUserLogin(CSecurityFtdcRspUserLoginField *pRspUserLogin,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspUserLogin(MNConv<SecurityFtdcRspUserLoginField^, CSecurityFtdcRspUserLoginField>::N2M(pRspUserLogin),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspUserLogout(CSecurityFtdcUserLogoutField *pUserLogout,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspUserLogout(MNConv<SecurityFtdcUserLogoutField^, CSecurityFtdcUserLogoutField>::N2M(pUserLogout),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspFetchAuthRandCode(CSecurityFtdcAuthRandCodeField *pAuthRandCode,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspFetchAuthRandCode(MNConv<SecurityFtdcAuthRandCodeField^, CSecurityFtdcAuthRandCodeField>::N2M(pAuthRandCode),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspOrderInsert(CSecurityFtdcInputOrderField *pInputOrder,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspOrderInsert(MNConv<SecurityFtdcInputOrderField^, CSecurityFtdcInputOrderField>::N2M(pInputOrder),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspOrderAction(CSecurityFtdcInputOrderActionField *pInputOrderAction,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspOrderAction(MNConv<SecurityFtdcInputOrderActionField^, CSecurityFtdcInputOrderActionField>::N2M(pInputOrderAction),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspUserPasswordUpdate(CSecurityFtdcUserPasswordUpdateField *pUserPasswordUpdate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspUserPasswordUpdate(MNConv<SecurityFtdcUserPasswordUpdateField^, CSecurityFtdcUserPasswordUpdateField>::N2M(pUserPasswordUpdate),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspTradingAccountPasswordUpdate(CSecurityFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspTradingAccountPasswordUpdate(MNConv<SecurityFtdcTradingAccountPasswordUpdateField^, CSecurityFtdcTradingAccountPasswordUpdateField>::N2M(pTradingAccountPasswordUpdate),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRtnOrder(CSecurityFtdcOrderField *pOrder){
		p_OnRtnOrder(MNConv<SecurityFtdcOrderField^, CSecurityFtdcOrderField>::N2M(pOrder));
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRtnTrade(CSecurityFtdcTradeField *pTrade){
		p_OnRtnTrade(MNConv<SecurityFtdcTradeField^, CSecurityFtdcTradeField>::N2M(pTrade));
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnErrRtnOrderInsert(CSecurityFtdcInputOrderField *pInputOrder,CSecurityFtdcRspInfoField *pRspInfo){
		p_OnErrRtnOrderInsert(MNConv<SecurityFtdcInputOrderField^, CSecurityFtdcInputOrderField>::N2M(pInputOrder),RspInfoField(pRspInfo));
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnErrRtnOrderAction(CSecurityFtdcOrderActionField *pOrderAction,CSecurityFtdcRspInfoField *pRspInfo){
		p_OnErrRtnOrderAction(MNConv<SecurityFtdcOrderActionField^, CSecurityFtdcOrderActionField>::N2M(pOrderAction),RspInfoField(pRspInfo));
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspFundOutByLiber(CSecurityFtdcInputFundTransferField *pInputFundTransfer,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspFundOutByLiber(MNConv<SecurityFtdcInputFundTransferField^, CSecurityFtdcInputFundTransferField>::N2M(pInputFundTransfer),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRtnFundOutByLiber(CSecurityFtdcFundTransferField *pFundTransfer){
		p_OnRtnFundOutByLiber(MNConv<SecurityFtdcFundTransferField^, CSecurityFtdcFundTransferField>::N2M(pFundTransfer));
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnErrRtnFundOutByLiber(CSecurityFtdcInputFundTransferField *pInputFundTransfer,CSecurityFtdcRspInfoField *pRspInfo){
		p_OnErrRtnFundOutByLiber(MNConv<SecurityFtdcInputFundTransferField^, CSecurityFtdcInputFundTransferField>::N2M(pInputFundTransfer),RspInfoField(pRspInfo));
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRtnFundInByBank(CSecurityFtdcFundTransferField *pFundTransfer){
		p_OnRtnFundInByBank(MNConv<SecurityFtdcFundTransferField^, CSecurityFtdcFundTransferField>::N2M(pFundTransfer));
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspFundInterTransfer(CSecurityFtdcFundInterTransferField *pFundInterTransfer,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspFundInterTransfer(MNConv<SecurityFtdcFundInterTransferField^, CSecurityFtdcFundInterTransferField>::N2M(pFundInterTransfer),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRtnFundInterTransferSerial(CSecurityFtdcFundInterTransferSerialField *pFundInterTransferSerial){
		p_OnRtnFundInterTransferSerial(MNConv<SecurityFtdcFundInterTransferSerialField^, CSecurityFtdcFundInterTransferSerialField>::N2M(pFundInterTransferSerial));
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnErrRtnFundInterTransfer(CSecurityFtdcFundInterTransferField *pFundInterTransfer,CSecurityFtdcRspInfoField *pRspInfo){
		p_OnErrRtnFundInterTransfer(MNConv<SecurityFtdcFundInterTransferField^, CSecurityFtdcFundInterTransferField>::N2M(pFundInterTransfer),RspInfoField(pRspInfo));
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRtnPlatformStateInfo(CSecurityFtdcPlatformStateInfoField *pPlatformStateInfo){
		p_OnRtnPlatformStateInfo(MNConv<SecurityFtdcPlatformStateInfoField^, CSecurityFtdcPlatformStateInfoField>::N2M(pPlatformStateInfo));
	};

#else
	///当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
	void CLTSTraderSpi::OnFrontConnected(){
		m_pAdapter->OnFrontConnected();
	};

	///当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
	///@param nReason 错误原因
	///        0x1001 网络读失败
	///        0x1002 网络写失败
	///        0x2001 接收心跳超时
	///        0x2002 发送心跳失败
	///        0x2003 收到错误报文
	void CLTSTraderSpi::OnFrontDisconnected(int nReason){
		m_pAdapter->OnFrontDisconnected(nReason);
	};

	///心跳超时警告。当长时间未收到报文时，该方法被调用。
	///@param nTimeLapse 距离上次接收报文的时间
	void CLTSTraderSpi::OnHeartBeatWarning(int nTimeLapse){
		m_pAdapter->OnHeartBeatWarning(nTimeLapse);
	};

	///客户端认证响应
	/*void CLTSTraderSpi::OnRspAuthenticate(CIndexFtdcRspAuthenticateField *pRspAuthenticateField, CIndexFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
	m_pAdapter->OnRspAuthenticate(MNConv<ThostFtdcRspAuthenticateField^,CIndexFtdcRspAuthenticateField>::N2M(pRspAuthenticateField), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};*/


	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspError(CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspError(RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspUserLogin(CSecurityFtdcRspUserLoginField *pRspUserLogin, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspUserLogin(MNConv<SecurityFtdcRspUserLoginField^, CSecurityFtdcRspUserLoginField>::N2M(pRspUserLogin), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspUserLogout(CSecurityFtdcUserLogoutField *pUserLogout, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspUserLogout(MNConv<SecurityFtdcUserLogoutField^, CSecurityFtdcUserLogoutField>::N2M(pUserLogout), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspFetchAuthRandCode(CSecurityFtdcAuthRandCodeField *pAuthRandCode, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspFetchAuthRandCode(MNConv<SecurityFtdcAuthRandCodeField^, CSecurityFtdcAuthRandCodeField>::N2M(pAuthRandCode), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspOrderInsert(CSecurityFtdcInputOrderField *pInputOrder, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspOrderInsert(MNConv<SecurityFtdcInputOrderField^, CSecurityFtdcInputOrderField>::N2M(pInputOrder), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspOrderAction(CSecurityFtdcInputOrderActionField *pInputOrderAction, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspOrderAction(MNConv<SecurityFtdcInputOrderActionField^, CSecurityFtdcInputOrderActionField>::N2M(pInputOrderAction), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspUserPasswordUpdate(CSecurityFtdcUserPasswordUpdateField *pUserPasswordUpdate, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspUserPasswordUpdate(MNConv<SecurityFtdcUserPasswordUpdateField^, CSecurityFtdcUserPasswordUpdateField>::N2M(pUserPasswordUpdate), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspTradingAccountPasswordUpdate(CSecurityFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspTradingAccountPasswordUpdate(MNConv<SecurityFtdcTradingAccountPasswordUpdateField^, CSecurityFtdcTradingAccountPasswordUpdateField>::N2M(pTradingAccountPasswordUpdate), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRtnOrder(CSecurityFtdcOrderField *pOrder){
		m_pAdapter->OnRtnOrder(MNConv<SecurityFtdcOrderField^, CSecurityFtdcOrderField>::N2M(pOrder));
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRtnTrade(CSecurityFtdcTradeField *pTrade){
		m_pAdapter->OnRtnTrade(MNConv<SecurityFtdcTradeField^, CSecurityFtdcTradeField>::N2M(pTrade));
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnErrRtnOrderInsert(CSecurityFtdcInputOrderField *pInputOrder, CSecurityFtdcRspInfoField *pRspInfo){
		m_pAdapter->OnErrRtnOrderInsert(MNConv<SecurityFtdcInputOrderField^, CSecurityFtdcInputOrderField>::N2M(pInputOrder), RspInfoField(pRspInfo));
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnErrRtnOrderAction(CSecurityFtdcOrderActionField *pOrderAction, CSecurityFtdcRspInfoField *pRspInfo){
		m_pAdapter->OnErrRtnOrderAction(MNConv<SecurityFtdcOrderActionField^, CSecurityFtdcOrderActionField>::N2M(pOrderAction), RspInfoField(pRspInfo));
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspFundOutByLiber(CSecurityFtdcInputFundTransferField *pInputFundTransfer, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspFundOutByLiber(MNConv<SecurityFtdcInputFundTransferField^, CSecurityFtdcInputFundTransferField>::N2M(pInputFundTransfer), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRtnFundOutByLiber(CSecurityFtdcFundTransferField *pFundTransfer){
		m_pAdapter->OnRtnFundOutByLiber(MNConv<SecurityFtdcFundTransferField^, CSecurityFtdcFundTransferField>::N2M(pFundTransfer));
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnErrRtnFundOutByLiber(CSecurityFtdcInputFundTransferField *pInputFundTransfer, CSecurityFtdcRspInfoField *pRspInfo){
		m_pAdapter->OnErrRtnFundOutByLiber(MNConv<SecurityFtdcInputFundTransferField^, CSecurityFtdcInputFundTransferField>::N2M(pInputFundTransfer), RspInfoField(pRspInfo));
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRtnFundInByBank(CSecurityFtdcFundTransferField *pFundTransfer){
		m_pAdapter->OnRtnFundInByBank(MNConv<SecurityFtdcFundTransferField^, CSecurityFtdcFundTransferField>::N2M(pFundTransfer));
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspFundInterTransfer(CSecurityFtdcFundInterTransferField *pFundInterTransfer, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspFundInterTransfer(MNConv<SecurityFtdcFundInterTransferField^, CSecurityFtdcFundInterTransferField>::N2M(pFundInterTransfer), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRtnFundInterTransferSerial(CSecurityFtdcFundInterTransferSerialField *pFundInterTransferSerial){
		m_pAdapter->OnRtnFundInterTransferSerial(MNConv<SecurityFtdcFundInterTransferSerialField^, CSecurityFtdcFundInterTransferSerialField>::N2M(pFundInterTransferSerial));
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnErrRtnFundInterTransfer(CSecurityFtdcFundInterTransferField *pFundInterTransfer, CSecurityFtdcRspInfoField *pRspInfo){
		m_pAdapter->OnErrRtnFundInterTransfer(MNConv<SecurityFtdcFundInterTransferField^, CSecurityFtdcFundInterTransferField>::N2M(pFundInterTransfer), RspInfoField(pRspInfo));
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRtnPlatformStateInfo(CSecurityFtdcPlatformStateInfoField *pPlatformStateInfo){
		m_pAdapter->OnRtnPlatformStateInfo(MNConv<SecurityFtdcPlatformStateInfoField^, CSecurityFtdcPlatformStateInfoField>::N2M(pPlatformStateInfo));
	};

#endif
}