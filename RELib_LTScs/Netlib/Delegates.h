
#pragma once

namespace RELib_LTScs
{

	// common deleagats
	///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
	public delegate  void FrontConnected();

	///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
	///@param nReason ����ԭ��
	///        0x1001 �����ʧ��
	///        0x1002 ����дʧ��
	///        0x2001 ����������ʱ
	///        0x2002 ��������ʧ��
	///        0x2003 �յ�������
	public delegate  void FrontDisconnected(int nReason);

	///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
	///@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��
	public delegate  void HeartBeatWarning(int nTimeLapse);



	

	///����Ӧ��
	public delegate void RspError(SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

	///��¼������Ӧ
	public delegate void RspUserLogin(SecurityFtdcRspUserLoginField^ pRspUserLogin, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

	///�ǳ�������Ӧ
	public delegate void RspUserLogout(SecurityFtdcUserLogoutField^ pUserLogout, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

	///��������Ӧ��
	public delegate void RspSubMarketData(SecurityFtdcSpecificInstrumentField^ pSpecificInstrument, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

	///ȡ����������Ӧ��
	public delegate void RspUnSubMarketData(SecurityFtdcSpecificInstrumentField^ pSpecificInstrument, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

	///�������֪ͨ
	public delegate void RtnDepthMarketData(SecurityFtdcDepthMarketDataField^ pDepthMarketData);

	///����¼��������Ӧ
	public delegate void RspOrderInsert(SecurityFtdcInputOrderField^ pInputOrder, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

	///��������������Ӧ
	public delegate void RspOrderAction(SecurityFtdcInputOrderActionField^ pInputOrderAction, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

	///�û��������������Ӧ
	public delegate void RspUserPasswordUpdate(SecurityFtdcUserPasswordUpdateField^ pUserPasswordUpdate, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

	///�ʽ��˻��������������Ӧ
	public delegate void RspTradingAccountPasswordUpdate(SecurityFtdcTradingAccountPasswordUpdateField^ pTradingAccountPasswordUpdate, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯ��������Ӧ
	public delegate void RspQryExchange(SecurityFtdcExchangeField^ pExchange, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯ��Լ��Ӧ
	public delegate void RspQryInstrument(SecurityFtdcInstrumentField^ pInstrument, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯͶ������Ӧ
	public delegate void RspQryInvestor(SecurityFtdcInvestorField^ pInvestor, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯ���ױ�����Ӧ
	public delegate void RspQryTradingCode(SecurityFtdcTradingCodeField^ pTradingCode, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯ�ʽ��˻���Ӧ
	public delegate void RspQryTradingAccount(SecurityFtdcTradingAccountField^ pTradingAccount, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯ������Ӧ
	public delegate void RspQryDepthMarketData(SecurityFtdcDepthMarketDataField^ pDepthMarketData, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯͶ���ֲ߳���ϸ��Ӧ
	public delegate void RspQryInvestorPositionDetail(SecurityFtdcInvestorPositionDetailField^ pInvestorPositionDetail, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯծȯ��Ϣ��Ӧ
	public delegate void RspQryBondInterest(SecurityFtdcBondInterestField^ pBondInterest, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯ������Ӧ
	public delegate void RspQryOrder(SecurityFtdcOrderField^ pOrder, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯ�ɽ���Ӧ
	public delegate void RspQryTrade(SecurityFtdcTradeField^ pTrade, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

	///�����ѯͶ���ֲ߳���Ӧ
	public delegate void RspQryInvestorPosition(SecurityFtdcInvestorPositionField^ pInvestorPosition, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

	///����֪ͨ
	public delegate void RtnOrder(SecurityFtdcOrderField^ pOrder);

	///�ɽ�֪ͨ
	public delegate void RtnTrade(SecurityFtdcTradeField^ pTrade);

	///����¼�����ر�
	public delegate void ErrRtnOrderInsert(SecurityFtdcInputOrderField^ pInputOrder, SecurityFtdcRspInfoField^ pRspInfo);

	///������������ر�
	public delegate void ErrRtnOrderAction(SecurityFtdcOrderActionField^ pOrderAction, SecurityFtdcRspInfoField^ pRspInfo);
};

#ifdef __CTP_MA__

namespace LTSNative
{

	///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
	delegate void Internal_FrontConnected();

	///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
	///@param nReason ����ԭ��
	///        0x1001 �����ʧ��
	///        0x1002 ����дʧ��
	///        0x2001 ����������ʱ
	///        0x2002 ��������ʧ��
	///        0x2003 �յ�������
	delegate void Internal_FrontDisconnected(int nReason);

	///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
	///@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��
	delegate void Internal_HeartBeatWarning(int nTimeLapse);

	///���Ļص���ʼ֪ͨ����API�յ�һ�����ĺ����ȵ��ñ�������Ȼ���Ǹ�������Ļص�������Ǳ��Ļص�����֪ͨ��
	///@param nTopicID ������루��˽���������������������ȣ�
	///@param nSequenceNo �������
	delegate void Internal_PackageStart(int nTopicID, int nSequenceNo);

	///���Ļص�����֪ͨ����API�յ�һ�����ĺ����ȵ��ñ��Ļص���ʼ֪ͨ��Ȼ���Ǹ�������Ļص��������ñ�������
	///@param nTopicID ������루��˽���������������������ȣ�
	///@param nSequenceNo �������
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
	delegate void Internal_RspQryDepthMarketData(CSecurityFtdcDepthMarketDataField *pDepthMarketData,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspQryInvestorPositionDetail(CSecurityFtdcInvestorPositionDetailField *pInvestorPositionDetail,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
	/// <summary>
	/// 
	/// </summary>
	delegate void Internal_RspQryBondInterest(CSecurityFtdcBondInterestField *pBondInterest,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
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
};

#endif
