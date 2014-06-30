

#include "StdAfx.h"
#include "LTSTraderSpi.h"
#include "LTSTraderAdapter.h"
#include "Callbacks.h"


namespace LTSNative
{
	CLTSTraderSpi::CLTSTraderSpi(LTSTraderAdapter^ pAdapter) {
#ifndef __CTP_MA__
		m_pAdapter = pAdapter;
#endif
	};
#ifdef __CTP_MA__

	///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
	void CLTSTraderSpi::OnFrontConnected(){
		p_OnFrontConnected();
	};
	
	///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
	///@param nReason ����ԭ��
	///        0x1001 �����ʧ��
	///        0x1002 ����дʧ��
	///        0x2001 ����������ʱ
	///        0x2002 ��������ʧ��
	///        0x2003 �յ�������
	void CLTSTraderSpi::OnFrontDisconnected(int nReason){
		p_OnFrontDisconnected(nReason);
	};

	///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
	///@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��
	void CLTSTraderSpi::OnHeartBeatWarning(int nTimeLapse){
		p_OnHeartBeatWarning(nTimeLapse);
	};

	///�ͻ�����֤��Ӧ
	/*void CLTSTraderSpi::OnRspAuthenticate(CIndexFtdcRspAuthenticateField *pRspAuthenticateField, CIndexFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
	p_OnRspAuthenticate(MNConv<ThostFtdcRspAuthenticateField^,CIndexFtdcRspAuthenticateField>::N2M(pRspAuthenticateField), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};*/


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
	void CLTSTraderSpi::OnRspQryExchange(CSecurityFtdcExchangeField *pExchange,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryExchange(MNConv<SecurityFtdcExchangeField^, CSecurityFtdcExchangeField>::N2M(pExchange),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspQryInstrument(CSecurityFtdcInstrumentField *pInstrument,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryInstrument(MNConv<SecurityFtdcInstrumentField^, CSecurityFtdcInstrumentField>::N2M(pInstrument),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspQryInvestor(CSecurityFtdcInvestorField *pInvestor,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryInvestor(MNConv<SecurityFtdcInvestorField^, CSecurityFtdcInvestorField>::N2M(pInvestor),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspQryTradingCode(CSecurityFtdcTradingCodeField *pTradingCode,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryTradingCode(MNConv<SecurityFtdcTradingCodeField^, CSecurityFtdcTradingCodeField>::N2M(pTradingCode),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspQryTradingAccount(CSecurityFtdcTradingAccountField *pTradingAccount,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryTradingAccount(MNConv<SecurityFtdcTradingAccountField^, CSecurityFtdcTradingAccountField>::N2M(pTradingAccount),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspQryDepthMarketData(CSecurityFtdcDepthMarketDataField *pDepthMarketData,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryDepthMarketData(MNConv<SecurityFtdcDepthMarketDataField^, CSecurityFtdcDepthMarketDataField>::N2M(pDepthMarketData),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspQryInvestorPositionDetail(CSecurityFtdcInvestorPositionDetailField *pInvestorPositionDetail,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryInvestorPositionDetail(MNConv<SecurityFtdcInvestorPositionDetailField^, CSecurityFtdcInvestorPositionDetailField>::N2M(pInvestorPositionDetail),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspQryBondInterest(CSecurityFtdcBondInterestField *pBondInterest,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryBondInterest(MNConv<SecurityFtdcBondInterestField^, CSecurityFtdcBondInterestField>::N2M(pBondInterest),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspQryOrder(CSecurityFtdcOrderField *pOrder,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryOrder(MNConv<SecurityFtdcOrderField^, CSecurityFtdcOrderField>::N2M(pOrder),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspQryTrade(CSecurityFtdcTradeField *pTrade,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryTrade(MNConv<SecurityFtdcTradeField^, CSecurityFtdcTradeField>::N2M(pTrade),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspQryInvestorPosition(CSecurityFtdcInvestorPositionField *pInvestorPosition,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryInvestorPosition(MNConv<SecurityFtdcInvestorPositionField^, CSecurityFtdcInvestorPositionField>::N2M(pInvestorPosition),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRtnOrder(CSecurityFtdcOrderField *pOrder,CSecurityFtdcOrderField *pOrder){
		p_OnRtnOrder(MNConv<SecurityFtdcOrderField^, CSecurityFtdcOrderField>::N2M(pOrder),MNConv<SecurityFtdcOrderField^, CSecurityFtdcOrderField>::N2M(pOrder));
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRtnTrade(CSecurityFtdcTradeField *pTrade,CSecurityFtdcTradeField *pTrade){
		p_OnRtnTrade(MNConv<SecurityFtdcTradeField^, CSecurityFtdcTradeField>::N2M(pTrade),MNConv<SecurityFtdcTradeField^, CSecurityFtdcTradeField>::N2M(pTrade));
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

#else
	///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
	void CLTSTraderSpi::OnFrontConnected(){
		m_pAdapter->OnFrontConnected();
	};
	
	///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
	///@param nReason ����ԭ��
	///        0x1001 �����ʧ��
	///        0x1002 ����дʧ��
	///        0x2001 ����������ʱ
	///        0x2002 ��������ʧ��
	///        0x2003 �յ�������
	void CLTSTraderSpi::OnFrontDisconnected(int nReason){
		m_pAdapter->OnFrontDisconnected(nReason);
	};

	///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
	///@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��
	void CLTSTraderSpi::OnHeartBeatWarning(int nTimeLapse){
		m_pAdapter->OnHeartBeatWarning(nTimeLapse);
	};

	///�ͻ�����֤��Ӧ
	/*void CLTSTraderSpi::OnRspAuthenticate(CIndexFtdcRspAuthenticateField *pRspAuthenticateField, CIndexFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast) {
	m_pAdapter->OnRspAuthenticate(MNConv<ThostFtdcRspAuthenticateField^,CIndexFtdcRspAuthenticateField>::N2M(pRspAuthenticateField), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};*/


	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspError(CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		m_pAdapter->OnRspError(RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspUserLogin(CSecurityFtdcRspUserLoginField *pRspUserLogin,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		m_pAdapter->OnRspUserLogin(MNConv<SecurityFtdcRspUserLoginField^, CSecurityFtdcRspUserLoginField>::N2M(pRspUserLogin),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspUserLogout(CSecurityFtdcUserLogoutField *pUserLogout,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		m_pAdapter->OnRspUserLogout(MNConv<SecurityFtdcUserLogoutField^, CSecurityFtdcUserLogoutField>::N2M(pUserLogout),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspOrderInsert(CSecurityFtdcInputOrderField *pInputOrder,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		m_pAdapter->OnRspOrderInsert(MNConv<SecurityFtdcInputOrderField^, CSecurityFtdcInputOrderField>::N2M(pInputOrder),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspOrderAction(CSecurityFtdcInputOrderActionField *pInputOrderAction,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		m_pAdapter->OnRspOrderAction(MNConv<SecurityFtdcInputOrderActionField^, CSecurityFtdcInputOrderActionField>::N2M(pInputOrderAction),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspUserPasswordUpdate(CSecurityFtdcUserPasswordUpdateField *pUserPasswordUpdate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		m_pAdapter->OnRspUserPasswordUpdate(MNConv<SecurityFtdcUserPasswordUpdateField^, CSecurityFtdcUserPasswordUpdateField>::N2M(pUserPasswordUpdate),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspTradingAccountPasswordUpdate(CSecurityFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		m_pAdapter->OnRspTradingAccountPasswordUpdate(MNConv<SecurityFtdcTradingAccountPasswordUpdateField^, CSecurityFtdcTradingAccountPasswordUpdateField>::N2M(pTradingAccountPasswordUpdate),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspQryExchange(CSecurityFtdcExchangeField *pExchange,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryExchange(MNConv<SecurityFtdcExchangeField^, CSecurityFtdcExchangeField>::N2M(pExchange),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspQryInstrument(CSecurityFtdcInstrumentField *pInstrument,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryInstrument(MNConv<SecurityFtdcInstrumentField^, CSecurityFtdcInstrumentField>::N2M(pInstrument),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspQryInvestor(CSecurityFtdcInvestorField *pInvestor,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryInvestor(MNConv<SecurityFtdcInvestorField^, CSecurityFtdcInvestorField>::N2M(pInvestor),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspQryTradingCode(CSecurityFtdcTradingCodeField *pTradingCode,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryTradingCode(MNConv<SecurityFtdcTradingCodeField^, CSecurityFtdcTradingCodeField>::N2M(pTradingCode),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspQryTradingAccount(CSecurityFtdcTradingAccountField *pTradingAccount,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryTradingAccount(MNConv<SecurityFtdcTradingAccountField^, CSecurityFtdcTradingAccountField>::N2M(pTradingAccount),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspQryDepthMarketData(CSecurityFtdcDepthMarketDataField *pDepthMarketData,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryDepthMarketData(MNConv<SecurityFtdcDepthMarketDataField^, CSecurityFtdcDepthMarketDataField>::N2M(pDepthMarketData),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspQryInvestorPositionDetail(CSecurityFtdcInvestorPositionDetailField *pInvestorPositionDetail,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryInvestorPositionDetail(MNConv<SecurityFtdcInvestorPositionDetailField^, CSecurityFtdcInvestorPositionDetailField>::N2M(pInvestorPositionDetail),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspQryBondInterest(CSecurityFtdcBondInterestField *pBondInterest,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryBondInterest(MNConv<SecurityFtdcBondInterestField^, CSecurityFtdcBondInterestField>::N2M(pBondInterest),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspQryOrder(CSecurityFtdcOrderField *pOrder,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryOrder(MNConv<SecurityFtdcOrderField^, CSecurityFtdcOrderField>::N2M(pOrder),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspQryTrade(CSecurityFtdcTradeField *pTrade,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryTrade(MNConv<SecurityFtdcTradeField^, CSecurityFtdcTradeField>::N2M(pTrade),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnRspQryInvestorPosition(CSecurityFtdcInvestorPositionField *pInvestorPosition,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		m_pAdapter->OnRspQryInvestorPosition(MNConv<SecurityFtdcInvestorPositionField^, CSecurityFtdcInvestorPositionField>::N2M(pInvestorPosition),RspInfoField(pRspInfo),nRequestID,bIsLast);
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
	void CLTSTraderSpi::OnErrRtnOrderInsert(CSecurityFtdcInputOrderField *pInputOrder,CSecurityFtdcRspInfoField *pRspInfo){
		m_pAdapter->OnErrRtnOrderInsert(MNConv<SecurityFtdcInputOrderField^, CSecurityFtdcInputOrderField>::N2M(pInputOrder),RspInfoField(pRspInfo));
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderSpi::OnErrRtnOrderAction(CSecurityFtdcOrderActionField *pOrderAction,CSecurityFtdcRspInfoField *pRspInfo){
		m_pAdapter->OnErrRtnOrderAction(MNConv<SecurityFtdcOrderActionField^, CSecurityFtdcOrderActionField>::N2M(pOrderAction),RspInfoField(pRspInfo));
	};

#endif
};