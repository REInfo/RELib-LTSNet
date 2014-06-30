

#include "StdAfx.h"

#include <vcclr.h>
#include "util.h"
#include "Callbacks.h"
#include "LTSMdSpi.h"


namespace LTSNative
{
	CLTSMdSpi::CLTSMdSpi(LTSMDAdapter^ pAdapter) {
#ifndef __CTP_MA__
		m_pAdapter = pAdapter;
#endif

	};

#ifdef __CTP_MA__

	///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
	void CLTSMdSpi::OnFrontConnected(){
		p_OnFrontConnected();
	};

	///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
	///@param nReason ����ԭ��
	///        0x1001 �����ʧ��
	///        0x1002 ����дʧ��
	///        0x2001 ����������ʱ
	///        0x2002 ��������ʧ��
	///        0x2003 �յ�������
	void CLTSMdSpi::OnFrontDisconnected(int nReason){
		p_OnFrontDisconnected(nReason);
	};

	///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
	///@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��
	void CLTSMdSpi::OnHeartBeatWarning(int nTimeLapse){
		p_OnHeartBeatWarning(nTimeLapse);
	};


	

	/// <summary>
	/// 
	/// </summary>
	void CLTSMdSpi::OnRspError(CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspError(pRspInfo,nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSMdSpi::OnRspUserLogin(CSecurityFtdcRspUserLoginField *pRspUserLogin,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspUserLogin(pRspUserLogin,pRspInfo,nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSMdSpi::OnRspUserLogout(CSecurityFtdcUserLogoutField *pUserLogout,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspUserLogout(pUserLogout,pRspInfo,nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSMdSpi::OnRspOrderInsert(CSecurityFtdcInputOrderField *pInputOrder,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspOrderInsert(pInputOrder,pRspInfo,nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSMdSpi::OnRspOrderAction(CSecurityFtdcInputOrderActionField *pInputOrderAction,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspOrderAction(pInputOrderAction,pRspInfo,nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSMdSpi::OnRspUserPasswordUpdate(CSecurityFtdcUserPasswordUpdateField *pUserPasswordUpdate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspUserPasswordUpdate(pUserPasswordUpdate,pRspInfo,nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSMdSpi::OnRspTradingAccountPasswordUpdate(CSecurityFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspTradingAccountPasswordUpdate(pTradingAccountPasswordUpdate,pRspInfo,nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSMdSpi::OnRspQryExchange(CSecurityFtdcExchangeField *pExchange,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryExchange(pExchange,pRspInfo,nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSMdSpi::OnRspQryInstrument(CSecurityFtdcInstrumentField *pInstrument,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryInstrument(pInstrument,pRspInfo,nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSMdSpi::OnRspQryInvestor(CSecurityFtdcInvestorField *pInvestor,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryInvestor(pInvestor,pRspInfo,nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSMdSpi::OnRspQryTradingCode(CSecurityFtdcTradingCodeField *pTradingCode,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryTradingCode(pTradingCode,pRspInfo,nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSMdSpi::OnRspQryTradingAccount(CSecurityFtdcTradingAccountField *pTradingAccount,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryTradingAccount(pTradingAccount,pRspInfo,nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSMdSpi::OnRspQryDepthMarketData(CSecurityFtdcDepthMarketDataField *pDepthMarketData,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryDepthMarketData(pDepthMarketData,pRspInfo,nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSMdSpi::OnRspQryInvestorPositionDetail(CSecurityFtdcInvestorPositionDetailField *pInvestorPositionDetail,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryInvestorPositionDetail(pInvestorPositionDetail,pRspInfo,nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSMdSpi::OnRspQryBondInterest(CSecurityFtdcBondInterestField *pBondInterest,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryBondInterest(pBondInterest,pRspInfo,nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSMdSpi::OnRspQryOrder(CSecurityFtdcOrderField *pOrder,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryOrder(pOrder,pRspInfo,nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSMdSpi::OnRspQryTrade(CSecurityFtdcTradeField *pTrade,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryTrade(pTrade,pRspInfo,nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSMdSpi::OnRspQryInvestorPosition(CSecurityFtdcInvestorPositionField *pInvestorPosition,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspQryInvestorPosition(pInvestorPosition,pRspInfo,nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSMdSpi::OnRtnOrder(CSecurityFtdcOrderField *pOrder,CSecurityFtdcOrderField *pOrder){
		p_OnRtnOrder(pOrder,pOrder);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSMdSpi::OnRtnTrade(CSecurityFtdcTradeField *pTrade,CSecurityFtdcTradeField *pTrade){
		p_OnRtnTrade(pTrade,pTrade);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSMdSpi::OnErrRtnOrderInsert(CSecurityFtdcInputOrderField *pInputOrder,CSecurityFtdcRspInfoField *pRspInfo){
		p_OnErrRtnOrderInsert(pInputOrder,pRspInfo);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSMdSpi::OnErrRtnOrderAction(CSecurityFtdcOrderActionField *pOrderAction,CSecurityFtdcRspInfoField *pRspInfo){
		p_OnErrRtnOrderAction(pOrderAction,pRspInfo);
	};
#else
	///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
	void CLTSMdSpi::OnFrontConnected(){
		m_pAdapter->OnFrontConnected();
	};

	///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
	///@param nReason ����ԭ��
	///        0x1001 �����ʧ��
	///        0x1002 ����дʧ��
	///        0x2001 ����������ʱ
	///        0x2002 ��������ʧ��
	///        0x2003 �յ�������
	void CLTSMdSpi::OnFrontDisconnected(int nReason){
		m_pAdapter->OnFrontDisconnected(nReason);
	};

	///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
	///@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��
	void CLTSMdSpi::OnHeartBeatWarning(int nTimeLapse){
		m_pAdapter->OnHeartBeatWarning(nTimeLapse);
	};
	

	/// <summary>
	/// 
	/// </summary>
	void CLTSMdSpi::OnRspError(CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		m_pAdapter->OnRspError(RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSMdSpi::OnRspUserLogin(CSecurityFtdcRspUserLoginField *pRspUserLogin,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		m_pAdapter->OnRspUserLogin(MNConv<SecurityFtdcRspUserLoginField^, CSecurityFtdcRspUserLoginField>::N2M(pRspUserLogin),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSMdSpi::OnRspUserLogout(CSecurityFtdcUserLogoutField *pUserLogout,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		m_pAdapter->OnRspUserLogout(MNConv<SecurityFtdcUserLogoutField^, CSecurityFtdcUserLogoutField>::N2M(pUserLogout),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	
	

	///��������Ӧ��
	void CLTSMdSpi::OnRspSubMarketData(CSecurityFtdcSpecificInstrumentField *pSpecificInstrument, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspSubMarketData(MNConv<SecurityFtdcSpecificInstrumentField^, CSecurityFtdcSpecificInstrumentField>::N2M(pSpecificInstrument), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///ȡ����������Ӧ��
	void CLTSMdSpi::OnRspUnSubMarketData(CSecurityFtdcSpecificInstrumentField *pSpecificInstrument, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspUnSubMarketData(MNConv<SecurityFtdcSpecificInstrumentField^, CSecurityFtdcSpecificInstrumentField>::N2M(pSpecificInstrument), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�������֪ͨ
	void CLTSMdSpi::OnRtnDepthMarketData(CSecurityFtdcDepthMarketDataField *pDepthMarketData){
		/*SecurityFtdcDepthMarketDataField^ field = safe_cast<SecurityFtdcDepthMarketDataField^>(Marshal::PtrToStructure(IntPtr(pDepthMarketData), SecurityFtdcDepthMarketDataField::typeid));
		m_pAdapter->OnRtnDepthMarketData(field);*/
		m_pAdapter->OnRtnDepthMarketData(MNConv<SecurityFtdcDepthMarketDataField^, CSecurityFtdcDepthMarketDataField>::N2M(pDepthMarketData));
	};

#endif

};
