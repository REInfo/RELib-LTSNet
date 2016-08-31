
#pragma once

namespace RELib_LTSNet
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

	///���Ļص���ʼ֪ͨ����API�յ�һ�����ĺ����ȵ��ñ�������Ȼ���Ǹ�������Ļص�������Ǳ��Ļص�����֪ͨ��
	///@param nTopicID ������루��˽���������������������ȣ�
	///@param nSequenceNo �������
	public delegate  void PackageStart(int nTopicID, int nSequenceNo);

	///���Ļص�����֪ͨ����API�յ�һ�����ĺ����ȵ��ñ��Ļص���ʼ֪ͨ��Ȼ���Ǹ�������Ļص��������ñ�������
	///@param nTopicID ������루��˽���������������������ȣ�
	///@param nSequenceNo �������
	public delegate  void PackageEnd(int nTopicID, int nSequenceNo);

	///��������Ӧ��
	public delegate void RspSubMarketData(SecurityFtdcSpecificInstrumentField^ pSpecificInstrument, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

	///ȡ����������Ӧ��
	public delegate void RspUnSubMarketData(SecurityFtdcSpecificInstrumentField^ pSpecificInstrument, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

	///�������֪ͨ
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
