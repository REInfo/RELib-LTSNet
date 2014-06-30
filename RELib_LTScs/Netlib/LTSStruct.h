/*!
* \file LTSStruct.h
* \brief ʾ������������ӿ�
*
* ����Ŀ�ǻ��ڻ�������LTS֤ȯ�ӿڿ�����ʾ����������չʾ�����LTS
* �����½��п�����ʾ��������ʾ��LTS����ӿڵĵ��ã��ڱ�д�����Ŀʱ
* ���Բο���
* �ɶ�����Ϣ�ṩ��Դ�����´���ɴ�http://github.com/REInfo��ȡ��
* �Ϻ�������Ϣ�Ƽ����޹�˾�ṩ֤ȯ���ڻ�����Ȩ���ֻ����г����ס����㡢
* ���ҵ��Ŀͻ������Ʒ���
*
* \author Christian
* \version 1.0
* \date 2014-6-16
* 
*/
#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace RELib_LTScs
{

	public enum struct EnumRESUMETYPE: Byte
	{
		TERT_RESTART = 0,
		TERT_RESUME,
		TERT_QUICK
	};
	/// <summary>
	/// ���������� CExchangePropertyType
	/// </summary>
	public enum struct EnumExchangePropertyType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Normal=(Byte)'0',
		/// <summary>
		/// ���ݳɽ����ɱ���
		/// </summary>
		GenOrderByTrade=(Byte)'1',
	};
	/// <summary>
	/// ����������״̬ CExchangeConnectStatusType
	/// </summary>
	public enum struct EnumExchangeConnectStatusType : Byte
	{
		/// <summary>
		/// û���κ�����
		/// </summary>
		NoConnection=(Byte)'1',
		/// <summary>
		/// �Ѿ�������Լ��ѯ����
		/// </summary>
		QryInstrumentSent=(Byte)'2',
		/// <summary>
		/// �Ѿ���ȡ��Ϣ
		/// </summary>
		GotInformation=(Byte)'9',
	};
	/// <summary>
	/// ��Ʒ���� CProductClassType
	/// </summary>
	public enum struct EnumProductClassType : Byte
	{
		/// <summary>
		/// �ڻ�
		/// </summary>
		Futures=(Byte)'1',
		/// <summary>
		/// ��Ȩ
		/// </summary>
		Options=(Byte)'2',
		/// <summary>
		/// ���
		/// </summary>
		Combination=(Byte)'3',
		/// <summary>
		/// ����
		/// </summary>
		Spot=(Byte)'4',
		/// <summary>
		/// ��ת��
		/// </summary>
		EFP=(Byte)'5',
		/// <summary>
		/// ֤ȯA��
		/// </summary>
		StockA=(Byte)'6',
		/// <summary>
		/// ֤ȯB��
		/// </summary>
		StockB=(Byte)'7',
		/// <summary>
		/// ETF
		/// </summary>
		ETF=(Byte)'8',
		/// <summary>
		/// ETF����
		/// </summary>
		ETFPurRed=(Byte)'9',
	};
	/// <summary>
	/// �ֲ����� CPositionTypeType
	/// </summary>
	public enum struct EnumPositionTypeType : Byte
	{
		/// <summary>
		/// ���ֲ�
		/// </summary>
		Net=(Byte)'1',
		/// <summary>
		/// �ۺϳֲ�
		/// </summary>
		Gross=(Byte)'2',
	};
	/// <summary>
	/// �ֲ��������� CPositionDateTypeType
	/// </summary>
	public enum struct EnumPositionDateTypeType : Byte
	{
		/// <summary>
		/// ʹ����ʷ�ֲ�
		/// </summary>
		UseHistory=(Byte)'1',
		/// <summary>
		/// ��ʹ����ʷ�ֲ�
		/// </summary>
		NoUseHistory=(Byte)'2',
	};
	/// <summary>
	/// ��Լ��������״̬ CInstLifePhaseType
	/// </summary>
	public enum struct EnumInstLifePhaseType : Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		NotStart=(Byte)'0',
		/// <summary>
		/// ����
		/// </summary>
		Started=(Byte)'1',
		/// <summary>
		/// ͣ��
		/// </summary>
		Pause=(Byte)'2',
		/// <summary>
		/// ����
		/// </summary>
		Expired=(Byte)'3',
	};
	/// <summary>
	/// �ֲֽ������� CPosTradeTypeType
	/// </summary>
	public enum struct EnumPosTradeTypeType : Byte
	{
		/// <summary>
		/// ���������ֲ�������
		/// </summary>
		CanSelTodayPos=(Byte)'1',
		/// <summary>
		/// ���������ֲֲ�������
		/// </summary>
		CannotSellTodayPos=(Byte)'2',
	};
	/// <summary>
	/// ֤������ CIdCardTypeType
	/// </summary>
	public enum struct EnumIdCardTypeType : Byte
	{
		/// <summary>
		/// ��֯��������
		/// </summary>
		EID=(Byte)'0',
		/// <summary>
		/// ���֤
		/// </summary>
		IDCard=(Byte)'1',
		/// <summary>
		/// ����֤
		/// </summary>
		OfficerIDCard=(Byte)'2',
		/// <summary>
		/// ����֤
		/// </summary>
		PoliceIDCard=(Byte)'3',
		/// <summary>
		/// ʿ��֤
		/// </summary>
		SoldierIDCard=(Byte)'4',
		/// <summary>
		/// ���ڲ�
		/// </summary>
		HouseholdRegister =(Byte)'5',
		/// <summary>
		/// ����
		/// </summary>
		Passport=(Byte)'6',
		/// <summary>
		/// ̨��֤
		/// </summary>
		TaiwanCompatriotIDCard =(Byte)'7',
		/// <summary>
		/// ����֤
		/// </summary>
		HomeComingCard=(Byte)'8',
		/// <summary>
		/// Ӫҵִ�պ�
		/// </summary>
		LicenseNo=(Byte)'9',
		/// <summary>
		/// ˰��ǼǺ�
		/// </summary>
		TaxNo=(Byte)'A',
		/// <summary>
		/// ����֤��
		/// </summary>
		OtherCard=(Byte)'x',
	};
	/// <summary>
	/// ���ױ������� CClientTypeType
	/// </summary>
	public enum struct EnumClientTypeType : Byte
	{
		/// <summary>
		/// ��ͨ
		/// </summary>
		Normal=(Byte)'1',
		/// <summary>
		/// ���ý���
		/// </summary>
		Credit=(Byte)'2',
		/// <summary>
		/// ����Ʒ�˻�
		/// </summary>
		Derive=(Byte)'3',
		/// <summary>
		/// ��������
		/// </summary>
		Other=(Byte)'4',
	};
	/// <summary>
	/// ���ܴ��� CFunctionCodeType
	/// </summary>
	public enum struct EnumFunctionCodeType : Byte
	{
		/// <summary>
		/// �����첽��
		/// </summary>
		DataAsync=(Byte)'1',
		/// <summary>
		/// ǿ���û��ǳ�
		/// </summary>
		ForceUserLogout=(Byte)'2',
		/// <summary>
		/// ��������û�����
		/// </summary>
		UserPasswordUpdate=(Byte)'3',
		/// <summary>
		/// ������͹�˾����
		/// </summary>
		BrokerPasswordUpdate=(Byte)'4',
		/// <summary>
		/// ���Ͷ���߿���
		/// </summary>
		InvestorPasswordUpdate=(Byte)'5',
		/// <summary>
		/// ��������
		/// </summary>
		OrderInsert=(Byte)'6',
		/// <summary>
		/// ��������
		/// </summary>
		OrderAction=(Byte)'7',
		/// <summary>
		/// ͬ��ϵͳ����
		/// </summary>
		SyncSystemData=(Byte)'8',
		/// <summary>
		/// ͬ�����͹�˾����
		/// </summary>
		SyncBrokerData=(Byte)'9',
		/// <summary>
		/// ����ͬ�����͹�˾����
		/// </summary>
		BachSyncBrokerData=(Byte)'A',
		/// <summary>
		/// ������ѯ
		/// </summary>
		SuperQuery=(Byte)'B',
		/// <summary>
		/// ��������
		/// </summary>
		ParkedOrderInsert=(Byte)'C',
		/// <summary>
		/// ��������
		/// </summary>
		ParkedOrderAction=(Byte)'D',
		/// <summary>
		/// ͬ����̬����
		/// </summary>
		SyncOTP=(Byte)'E',
		/// <summary>
		/// δ֪������
		/// </summary>
		UnkownOrderAction=(Byte)'F',
	};
	/// <summary>
	/// �û����� CUserTypeType
	/// </summary>
	public enum struct EnumUserTypeType : Byte
	{
		/// <summary>
		/// Ͷ����
		/// </summary>
		Investor=(Byte)'0',
		/// <summary>
		/// ����Ա
		/// </summary>
		Operator=(Byte)'1',
		/// <summary>
		/// ����Ա
		/// </summary>
		SuperUser=(Byte)'2',
	};
	/// <summary>
	/// ���͹�˾���ܴ��� CBrokerFunctionCodeType
	/// </summary>
	public enum struct EnumBrokerFunctionCodeType : Byte
	{
		/// <summary>
		/// ǿ���û��ǳ�
		/// </summary>
		ForceUserLogout=(Byte)'1',
		/// <summary>
		/// ����û�����
		/// </summary>
		UserPasswordUpdate=(Byte)'2',
		/// <summary>
		/// ͬ�����͹�˾����
		/// </summary>
		SyncBrokerData=(Byte)'3',
		/// <summary>
		/// ����ͬ�����͹�˾����
		/// </summary>
		BachSyncBrokerData=(Byte)'4',
		/// <summary>
		/// ��������
		/// </summary>
		OrderInsert=(Byte)'5',
		/// <summary>
		/// ��������
		/// </summary>
		OrderAction=(Byte)'6',
		/// <summary>
		/// ȫ����ѯ
		/// </summary>
		AllQuery=(Byte)'7',
		/// <summary>
		/// δ֪������
		/// </summary>
		UnkownOrderAction=(Byte)'8',
		/// <summary>
		/// ϵͳ���ܣ�����/�ǳ�/�޸������
		/// </summary>
		log=(Byte)'a',
		/// <summary>
		/// ������ѯ����ѯ�������ݣ����Լ���������ȳ���
		/// </summary>
		BaseQry=(Byte)'b',
		/// <summary>
		/// ���ײ�ѯ�����ɽ���ί��
		/// </summary>
		TradeQry=(Byte)'c',
		/// <summary>
		/// ���׹��ܣ�����������
		/// </summary>
		Trade=(Byte)'d',
		/// <summary>
		/// ����ת��
		/// </summary>
		Virement=(Byte)'e',
		/// <summary>
		/// ���ռ��
		/// </summary>
		Risk=(Byte)'f',
		/// <summary>
		/// ��ѯ/������ѯ�Ự�����˵�
		/// </summary>
		Session=(Byte)'g',
		/// <summary>
		/// ���֪ͨ����
		/// </summary>
		RiskNoticeCtl=(Byte)'h',
		/// <summary>
		/// ���֪ͨ����
		/// </summary>
		RiskNotice=(Byte)'i',
		/// <summary>
		/// �쿴���͹�˾�ʽ�Ȩ��
		/// </summary>
		BrokerDeposit=(Byte)'j',
		/// <summary>
		/// �ʽ��ѯ
		/// </summary>
		QueryFund=(Byte)'k',
		/// <summary>
		/// ������ѯ
		/// </summary>
		QueryOrder=(Byte)'l',
		/// <summary>
		/// �ɽ���ѯ
		/// </summary>
		QueryTrade=(Byte)'m',
		/// <summary>
		/// �ֲֲ�ѯ
		/// </summary>
		QueryPosition=(Byte)'n',
		/// <summary>
		/// �����ѯ
		/// </summary>
		QueryMarketData=(Byte)'o',
		/// <summary>
		/// �û��¼���ѯ
		/// </summary>
		QueryUserEvent=(Byte)'p',
		/// <summary>
		/// ����֪ͨ��ѯ
		/// </summary>
		QueryRiskNotify=(Byte)'q',
		/// <summary>
		/// ������ѯ
		/// </summary>
		QueryFundChange=(Byte)'r',
		/// <summary>
		/// Ͷ������Ϣ��ѯ
		/// </summary>
		QueryInvestor=(Byte)'s',
		/// <summary>
		/// ���ױ����ѯ
		/// </summary>
		QueryTradingCode=(Byte)'t',
		/// <summary>
		/// ǿƽ
		/// </summary>
		ForceClose=(Byte)'u',
		/// <summary>
		/// ѹ������
		/// </summary>
		PressTest=(Byte)'v',
		/// <summary>
		/// Ȩ�淴��
		/// </summary>
		RemainCalc=(Byte)'w',
		/// <summary>
		/// ���ֱֲ�֤��ָ��
		/// </summary>
		NetPositionInd=(Byte)'x',
		/// <summary>
		/// ����Ԥ��
		/// </summary>
		RiskPredict=(Byte)'y',
		/// <summary>
		/// ���ݵ���
		/// </summary>
		DataExport=(Byte)'z',
		/// <summary>
		/// ���ָ������
		/// </summary>
		RiskTargetSetup=(Byte)'A',
		/// <summary>
		/// ����Ԥ��
		/// </summary>
		MarketDataWarn=(Byte)'B',
		/// <summary>
		/// ҵ��֪ͨ��ѯ
		/// </summary>
		QryBizNotice=(Byte)'C',
		/// <summary>
		/// ҵ��֪ͨģ������
		/// </summary>
		CfgBizNotice=(Byte)'D',
		/// <summary>
		/// ͬ����̬����
		/// </summary>
		SyncOTP=(Byte)'E',
		/// <summary>
		/// ����ҵ��֪ͨ
		/// </summary>
		SendBizNotice=(Byte)'F',
		/// <summary>
		/// ���ռ����׼����
		/// </summary>
		CfgRiskLevelStd=(Byte)'G',
		/// <summary>
		/// �����ն�Ӧ������
		/// </summary>
		TbCommand=(Byte)'H',
	};
	/// <summary>
	/// �˻����� CAccountTypeType
	/// </summary>
	public enum struct EnumAccountTypeType : Byte
	{
		/// <summary>
		/// ��ͨ�˻�
		/// </summary>
		Normal=(Byte)'1',
		/// <summary>
		/// �����˻�
		/// </summary>
		Credit=(Byte)'2',
		/// <summary>
		/// ����Ʒ�˻�
		/// </summary>
		Derive=(Byte)'3',
		/// <summary>
		/// ��������
		/// </summary>
		Other=(Byte)'4',
	};
	/// <summary>
	/// Ͷ���߷�Χ CDepartmentRangeType
	/// </summary>
	public enum struct EnumDepartmentRangeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		All=(Byte)'1',
		/// <summary>
		/// ��֯�ܹ�
		/// </summary>
		Group=(Byte)'2',
		/// <summary>
		/// ��һͶ����
		/// </summary>
		Single=(Byte)'3',
	};
	/// <summary>
	/// �ͻ�Ȩ������ CUserRightTypeType
	/// </summary>
	public enum struct EnumUserRightTypeType : Byte
	{
		/// <summary>
		/// ��¼
		/// </summary>
		Logon=(Byte)'1',
		/// <summary>
		/// ����ת��
		/// </summary>
		Transfer=(Byte)'2',
		/// <summary>
		/// �ʼĽ��㵥
		/// </summary>
		EMail=(Byte)'3',
		/// <summary>
		/// ������㵥
		/// </summary>
		Fax=(Byte)'4',
		/// <summary>
		/// ������
		/// </summary>
		ConditionOrder=(Byte)'5',
	};
	/// <summary>
	/// Ͷ���ױ���־ CHedgeFlagType
	/// </summary>
	public enum struct EnumHedgeFlagType : Byte
	{
		/// <summary>
		/// Ͷ��
		/// </summary>
		Speculation=(Byte)'1',
		/// <summary>
		/// �ױ�
		/// </summary>
		Hedge=(Byte)'3',
	};
	/// <summary>
	/// �������� CDirectionType
	/// </summary>
	public enum struct EnumDirectionType : Byte
	{
		/// <summary>
		/// ��
		/// </summary>
		Buy=(Byte)'0',
		/// <summary>
		/// ��
		/// </summary>
		Sell=(Byte)'1',
		/// <summary>
		/// ETF�깺
		/// </summary>
		ETFPur=(Byte)'2',
		/// <summary>
		/// ETF���
		/// </summary>
		ETFRed=(Byte)'3',
		/// <summary>
		/// �ֽ������ֻ�����ر�
		/// </summary>
		CashIn=(Byte)'4',
		/// <summary>
		/// ծȯ���
		/// </summary>
		PledgeBondIn=(Byte)'5',
		/// <summary>
		/// ծȯ����
		/// </summary>
		PledgeBondOut=(Byte)'6',
		/// <summary>
		/// ����
		/// </summary>
		Covered=(Byte)'7',
		/// <summary>
		/// ʵ�ｻ�������걨
		/// </summary>
		Deliver=(Byte)'8',
		/// <summary>
		/// ֤ȯ����ⶳ,������,ƽ�ⶳ
		/// </summary>
		Freeze=(Byte)'9',
	};
	/// <summary>
	/// �ɽ����� CTradeTypeType
	/// </summary>
	public enum struct EnumTradeTypeType : Byte
	{
		/// <summary>
		/// ��ͨ�ɽ�
		/// </summary>
		Common=(Byte)'0',
		/// <summary>
		/// ��Ȩִ��
		/// </summary>
		OptionsExecution=(Byte)'1',
		/// <summary>
		/// OTC�ɽ�
		/// </summary>
		OTC=(Byte)'2',
		/// <summary>
		/// ��ת�������ɽ�
		/// </summary>
		EFPDerived=(Byte)'3',
		/// <summary>
		/// ��������ɽ�
		/// </summary>
		CombinationDerived=(Byte)'4',
		/// <summary>
		/// ETF�깺
		/// </summary>
		EFTPurchase=(Byte)'5',
		/// <summary>
		/// ETF���
		/// </summary>
		EFTRedem=(Byte)'6',
	};
	/// <summary>
	/// �������깺���״̬ CCreationredemptionStatusType
	/// </summary>
	public enum struct EnumCreationredemptionStatusType : Byte
	{
		/// <summary>
		/// �������깺���
		/// </summary>
		Forbidden=(Byte)'0',
		/// <summary>
		/// ��ʾ�����깺�����
		/// </summary>
		Allow=(Byte)'1',
		/// <summary>
		/// �����깺�����������
		/// </summary>
		OnlyPurchase=(Byte)'2',
		/// <summary>
		/// �������깺���������
		/// </summary>
		OnlyRedeem=(Byte)'3',
	};
	/// <summary>
	/// ETF�ֽ������־ CETFCurrenceReplaceStatusType
	/// </summary>
	public enum struct EnumETFCurrenceReplaceStatusType : Byte
	{
		/// <summary>
		/// ��ֹ�ֽ����
		/// </summary>
		Forbidden=(Byte)'0',
		/// <summary>
		/// �����ֽ����
		/// </summary>
		Allow=(Byte)'1',
		/// <summary>
		/// �����ֽ����
		/// </summary>
		Force=(Byte)'2',
	};
	/// <summary>
	/// �ɱ����� CCapitalStockTypeType
	/// </summary>
	public enum struct EnumCapitalStockTypeType : Byte
	{
		/// <summary>
		/// ��ͨ�ɱ�
		/// </summary>
		TOTALSTOCK=(Byte)'1',
		/// <summary>
		/// ��ͨ�ɱ�
		/// </summary>
		CIRCULATION=(Byte)'2',
	};
	/// <summary>
	/// ��֤��۸����� CMarginPriceTypeType
	/// </summary>
	public enum struct EnumMarginPriceTypeType : Byte
	{
		/// <summary>
		/// ������
		/// </summary>
		PreSettlementPrice=(Byte)'1',
		/// <summary>
		/// ���¼�
		/// </summary>
		SettlementPrice=(Byte)'2',
		/// <summary>
		/// �ɽ�����
		/// </summary>
		AveragePrice=(Byte)'3',
		/// <summary>
		/// ���ּ�
		/// </summary>
		OpenPrice=(Byte)'4',
	};
	/// <summary>
	/// ӯ���㷨 CAlgorithmType
	/// </summary>
	public enum struct EnumAlgorithmType : Byte
	{
		/// <summary>
		/// ��ӯ����������
		/// </summary>
		All=(Byte)'1',
		/// <summary>
		/// ��ӯ���ƣ�������
		/// </summary>
		OnlyLost=(Byte)'2',
		/// <summary>
		/// ��ӯ�ƣ���������
		/// </summary>
		OnlyGain=(Byte)'3',
		/// <summary>
		/// ��ӯ������������
		/// </summary>
		None=(Byte)'4',
	};
	/// <summary>
	/// �Ƿ����ƽ��ӯ�� CIncludeCloseProfitType
	/// </summary>
	public enum struct EnumIncludeCloseProfitType : Byte
	{
		/// <summary>
		/// ����ƽ��ӯ��
		/// </summary>
		Include=(Byte)'0',
		/// <summary>
		/// ������ƽ��ӯ��
		/// </summary>
		NotInclude=(Byte)'2',
	};
	/// <summary>
	/// �Ƿ��ܿ���������� CAllWithoutTradeType
	/// </summary>
	public enum struct EnumAllWithoutTradeType : Byte
	{
		/// <summary>
		/// ���ܿ����������
		/// </summary>
		Enable=(Byte)'0',
		/// <summary>
		/// �ܿ����������
		/// </summary>
		Disable=(Byte)'2',
		/// <summary>
		/// �޲ֲ��ܿ����������
		/// </summary>
		NoHoldEnable=(Byte)'3',
	};
	/// <summary>
	/// �ֲִ����㷨��� CHandlePositionAlgoIDType
	/// </summary>
	public enum struct EnumHandlePositionAlgoIDType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Base=(Byte)'1',
		/// <summary>
		/// �ǽ���
		/// </summary>
		NoneTrade=(Byte)'4',
		/// <summary>
		/// ֤ȯ
		/// </summary>
		Stock=(Byte)'5',
	};
	/// <summary>
	/// ����ϵͳ�������� CTradeParamIDType
	/// </summary>
	public enum struct EnumTradeParamIDType : Byte
	{
		/// <summary>
		/// ϵͳ�����㷨
		/// </summary>
		EncryptionStandard=(Byte)'E',
		/// <summary>
		/// �û����Ự��
		/// </summary>
		SingleUserSessionMaxNum=(Byte)'S',
		/// <summary>
		/// ���������¼ʧ����
		/// </summary>
		LoginFailMaxNum=(Byte)'L',
		/// <summary>
		/// �Ƿ�ǿ����֤
		/// </summary>
		IsAuthForce=(Byte)'A',
	};
	/// <summary>
	/// Ͷ���߷�Χ CInvestorRangeType
	/// </summary>
	public enum struct EnumInvestorRangeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		All=(Byte)'1',
		/// <summary>
		/// Ͷ������
		/// </summary>
		Group=(Byte)'2',
		/// <summary>
		/// ��һͶ����
		/// </summary>
		Single=(Byte)'3',
	};
	/// <summary>
	/// ����ͬ��״̬ CDataSyncStatusType
	/// </summary>
	public enum struct EnumDataSyncStatusType : Byte
	{
		/// <summary>
		/// δͬ��
		/// </summary>
		Asynchronous=(Byte)'1',
		/// <summary>
		/// ͬ����
		/// </summary>
		Synchronizing=(Byte)'2',
		/// <summary>
		/// ��ͬ��
		/// </summary>
		Synchronized=(Byte)'3',
	};
	/// <summary>
	/// ����������Ա����״̬ CTraderConnectStatusType
	/// </summary>
	public enum struct EnumTraderConnectStatusType : Byte
	{
		/// <summary>
		/// û���κ�����
		/// </summary>
		NotConnected=(Byte)'1',
		/// <summary>
		/// �Ѿ�����
		/// </summary>
		Connected=(Byte)'2',
		/// <summary>
		/// �Ѿ�������Լ��ѯ����
		/// </summary>
		QryInstrumentSent=(Byte)'3',
		/// <summary>
		/// ����˽����
		/// </summary>
		SubPrivateFlow=(Byte)'4',
	};
	/// <summary>
	/// ��������״̬ COrderActionStatusType
	/// </summary>
	public enum struct EnumOrderActionStatusType : Byte
	{
		/// <summary>
		/// �Ѿ��ύ
		/// </summary>
		Submitted=(Byte)'a',
		/// <summary>
		/// �Ѿ�����
		/// </summary>
		Accepted=(Byte)'b',
		/// <summary>
		/// �Ѿ����ܾ�
		/// </summary>
		Rejected=(Byte)'c',
	};
	/// <summary>
	/// ����״̬ COrderStatusType
	/// </summary>
	public enum struct EnumOrderStatusType : Byte
	{
		/// <summary>
		/// ȫ���ɽ�
		/// </summary>
		AllTraded=(Byte)'0',
		/// <summary>
		/// ���ֳɽ����ڶ�����
		/// </summary>
		PartTradedQueueing=(Byte)'1',
		/// <summary>
		/// ���ֳɽ����ڶ�����
		/// </summary>
		PartTradedNotQueueing=(Byte)'2',
		/// <summary>
		/// δ�ɽ����ڶ�����
		/// </summary>
		NoTradeQueueing=(Byte)'3',
		/// <summary>
		/// δ�ɽ����ڶ�����
		/// </summary>
		NoTradeNotQueueing=(Byte)'4',
		/// <summary>
		/// ����
		/// </summary>
		Canceled=(Byte)'5',
		/// <summary>
		/// δ֪
		/// </summary>
		Unknown=(Byte)'a',
		/// <summary>
		/// ��δ����
		/// </summary>
		NotTouched=(Byte)'b',
		/// <summary>
		/// �Ѵ���
		/// </summary>
		Touched=(Byte)'c',
	};
	/// <summary>
	/// �����ύ״̬ COrderSubmitStatusType
	/// </summary>
	public enum struct EnumOrderSubmitStatusType : Byte
	{
		/// <summary>
		/// �Ѿ��ύ
		/// </summary>
		InsertSubmitted=(Byte)'0',
		/// <summary>
		/// �����Ѿ��ύ
		/// </summary>
		CancelSubmitted=(Byte)'1',
		/// <summary>
		/// �޸��Ѿ��ύ
		/// </summary>
		ModifySubmitted=(Byte)'2',
		/// <summary>
		/// �Ѿ�����
		/// </summary>
		Accepted=(Byte)'3',
		/// <summary>
		/// �����Ѿ����ܾ�
		/// </summary>
		InsertRejected=(Byte)'4',
		/// <summary>
		/// �����Ѿ����ܾ�
		/// </summary>
		CancelRejected=(Byte)'5',
		/// <summary>
		/// �ĵ��Ѿ����ܾ�
		/// </summary>
		ModifyRejected=(Byte)'6',
	};
	/// <summary>
	/// �ֲ����� CPositionDateType
	/// </summary>
	public enum struct EnumPositionDateType : Byte
	{
		/// <summary>
		/// ���ճֲ�
		/// </summary>
		Today=(Byte)'1',
		/// <summary>
		/// ��ʷ�ֲ�
		/// </summary>
		History=(Byte)'2',
	};
	/// <summary>
	/// ���׽�ɫ CTradingRoleType
	/// </summary>
	public enum struct EnumTradingRoleType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Broker=(Byte)'1',
		/// <summary>
		/// ��Ӫ
		/// </summary>
		Host=(Byte)'2',
		/// <summary>
		/// ������
		/// </summary>
		Maker=(Byte)'3',
	};
	/// <summary>
	/// �ֲֶ�շ��� CPosiDirectionType
	/// </summary>
	public enum struct EnumPosiDirectionType : Byte
	{
		/// <summary>
		/// ��
		/// </summary>
		Net=(Byte)'1',
		/// <summary>
		/// ��ͷ
		/// </summary>
		Long=(Byte)'2',
		/// <summary>
		/// ��ͷ
		/// </summary>
		Short=(Byte)'3',
		/// <summary>
		/// ����
		/// </summary>
		Covered=(Byte)'4',
	};
	/// <summary>
	/// �����۸����� COrderPriceTypeType
	/// </summary>
	public enum struct EnumOrderPriceTypeType : Byte
	{
		/// <summary>
		/// �����
		/// </summary>
		AnyPrice=(Byte)'1',
		/// <summary>
		/// �޼�
		/// </summary>
		LimitPrice=(Byte)'2',
		/// <summary>
		/// ���ż�
		/// </summary>
		BestPrice=(Byte)'3',
		/// <summary>
		/// ���¼�
		/// </summary>
		LastPrice=(Byte)'4',
		/// <summary>
		/// �м�ת�޼�
		/// </summary>
		Any2LimitPrice=(Byte)'5',
		/// <summary>
		/// ����A����������������
		/// </summary>
		ActiveANetPassSvrCode=(Byte)'G',
		/// <summary>
		/// ע��A����������������
		/// </summary>
		InactiveANetPassSvrCode=(Byte)'H',
		/// <summary>
		/// ����B����������������
		/// </summary>
		ActiveBNetPassSvrCode=(Byte)'I',
		/// <summary>
		/// ע��B����������������
		/// </summary>
		InactiveBNetPassSvrCode=(Byte)'J',
		/// <summary>
		/// �ع�ע��
		/// </summary>
		Repurchase=(Byte)'K',
		/// <summary>
		/// ָ������
		/// </summary>
		DesignatedCancel=(Byte)'L',
		/// <summary>
		/// ָ���Ǽ�
		/// </summary>
		Designated=(Byte)'M',
		/// <summary>
		/// ֤ȯ�����깺
		/// </summary>
		SubscribingShares=(Byte)'N',
		/// <summary>
		/// ֤ȯ�������
		/// </summary>
		Split=(Byte)'O',
		/// <summary>
		/// ҪԼ�չ��Ǽ�
		/// </summary>
		TenderOffer=(Byte)'P',
		/// <summary>
		/// ҪԼ�չ�����
		/// </summary>
		TenderOfferCancel=(Byte)'Q',
		/// <summary>
		/// ֤ȯͶƱ
		/// </summary>
		Ballot=(Byte)'R',
		/// <summary>
		/// ��תծת���Ǽ�
		/// </summary>
		ConvertibleBondsConvet=(Byte)'S',
		/// <summary>
		/// ��תծ���۵Ǽ�
		/// </summary>
		ConvertibleBondsRepurchase=(Byte)'T',
		/// <summary>
		/// Ȩ֤��Ȩ
		/// </summary>
		Exercise=(Byte)'U',
		/// <summary>
		/// ����ʽ�����깺
		/// </summary>
		PurchasingFunds=(Byte)'V',
		/// <summary>
		/// ����ʽ�������
		/// </summary>
		RedemingFunds=(Byte)'W',
		/// <summary>
		/// ����ʽ�����Ϲ�
		/// </summary>
		SubscribingFunds=(Byte)'X',
		/// <summary>
		/// ����ʽ����ת�й�ת��
		/// </summary>
		LOFIssue=(Byte)'Y',
		/// <summary>
		/// ����ʽ�������÷ֺ췽ʽ
		/// </summary>
		LOFSetBonusType=(Byte)'Z',
		/// <summary>
		/// ����ʽ����ת��Ϊ��������
		/// </summary>
		LOFConvert=(Byte)'a',
		/// <summary>
		/// ծȯ���
		/// </summary>
		DebentureStockIn=(Byte)'b',
		/// <summary>
		/// ծȯ����
		/// </summary>
		DebentureStockOut=(Byte)'c',
		/// <summary>
		/// ETF�깺
		/// </summary>
		PurchasesETF =(Byte)'d',
		/// <summary>
		/// ETF���
		/// </summary>
		RedeemETF=(Byte)'e',
	};
	/// <summary>
	/// ��ƽ��־ COffsetFlagType
	/// </summary>
	public enum struct EnumOffsetFlagType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Open=(Byte)'0',
		/// <summary>
		/// ƽ��
		/// </summary>
		Close=(Byte)'1',
		/// <summary>
		/// ǿƽ
		/// </summary>
		ForceClose=(Byte)'2',
		/// <summary>
		/// ƽ��
		/// </summary>
		CloseToday=(Byte)'3',
		/// <summary>
		/// ƽ��
		/// </summary>
		CloseYesterday=(Byte)'4',
		/// <summary>
		/// ǿ��
		/// </summary>
		ForceOff=(Byte)'5',
		/// <summary>
		/// ����ǿƽ
		/// </summary>
		LocalForceClose=(Byte)'6',
		/// <summary>
		/// ��Ȩ
		/// </summary>
		Execute=(Byte)'7',
	};
	/// <summary>
	/// ǿƽԭ�� CForceCloseReasonType
	/// </summary>
	public enum struct EnumForceCloseReasonType : Byte
	{
		/// <summary>
		/// ��ǿƽ
		/// </summary>
		NotForceClose=(Byte)'0',
		/// <summary>
		/// �ʽ���
		/// </summary>
		LackDeposit=(Byte)'1',
		/// <summary>
		/// �ͻ�����
		/// </summary>
		ClientOverPositionLimit=(Byte)'2',
		/// <summary>
		/// ��Ա����
		/// </summary>
		MemberOverPositionLimit=(Byte)'3',
		/// <summary>
		/// �ֲַ�������
		/// </summary>
		NotMultiple=(Byte)'4',
		/// <summary>
		/// Υ��
		/// </summary>
		Violation=(Byte)'5',
		/// <summary>
		/// ����
		/// </summary>
		Other=(Byte)'6',
		/// <summary>
		/// ��Ȼ���ٽ�����
		/// </summary>
		PersonDeliv=(Byte)'7',
	};
	/// <summary>
	/// �������� COrderTypeType
	/// </summary>
	public enum struct EnumOrderTypeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Normal=(Byte)'0',
		/// <summary>
		/// ��������
		/// </summary>
		DeriveFromQuote=(Byte)'1',
		/// <summary>
		/// �������
		/// </summary>
		DeriveFromCombination=(Byte)'2',
		/// <summary>
		/// ��ϱ���
		/// </summary>
		Combination=(Byte)'3',
		/// <summary>
		/// ������
		/// </summary>
		ConditionalOrder=(Byte)'4',
		/// <summary>
		/// ������
		/// </summary>
		Swap=(Byte)'5',
	};
	/// <summary>
	/// ��Ч������ CTimeConditionType
	/// </summary>
	public enum struct EnumTimeConditionType : Byte
	{
		/// <summary>
		/// ������ɣ�������
		/// </summary>
		IOC=(Byte)'1',
		/// <summary>
		/// ������Ч
		/// </summary>
		GFS=(Byte)'2',
		/// <summary>
		/// ������Ч
		/// </summary>
		GFD=(Byte)'3',
		/// <summary>
		/// ָ������ǰ��Ч
		/// </summary>
		GTD=(Byte)'4',
		/// <summary>
		/// ����ǰ��Ч
		/// </summary>
		GTC=(Byte)'5',
		/// <summary>
		/// ���Ͼ�����Ч
		/// </summary>
		GFA=(Byte)'6',
	};
	/// <summary>
	/// �ɽ������� CVolumeConditionType
	/// </summary>
	public enum struct EnumVolumeConditionType : Byte
	{
		/// <summary>
		/// �κ�����
		/// </summary>
		AV=(Byte)'1',
		/// <summary>
		/// ��С����
		/// </summary>
		MV=(Byte)'2',
		/// <summary>
		/// ȫ������
		/// </summary>
		CV=(Byte)'3',
	};
	/// <summary>
	/// �������� CContingentConditionType
	/// </summary>
	public enum struct EnumContingentConditionType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Immediately=(Byte)'1',
		/// <summary>
		/// ֹ��
		/// </summary>
		Touch=(Byte)'2',
		/// <summary>
		/// ֹӮ
		/// </summary>
		TouchProfit=(Byte)'3',
		/// <summary>
		/// Ԥ��
		/// </summary>
		ParkedOrder=(Byte)'4',
		/// <summary>
		/// ���¼۴���������
		/// </summary>
		LastPriceGreaterThanStopPrice=(Byte)'5',
		/// <summary>
		/// ���¼۴��ڵ���������
		/// </summary>
		LastPriceGreaterEqualStopPrice=(Byte)'6',
		/// <summary>
		/// ���¼�С��������
		/// </summary>
		LastPriceLesserThanStopPrice=(Byte)'7',
		/// <summary>
		/// ���¼�С�ڵ���������
		/// </summary>
		LastPriceLesserEqualStopPrice=(Byte)'8',
		/// <summary>
		/// ��һ�۴���������
		/// </summary>
		AskPriceGreaterThanStopPrice=(Byte)'9',
		/// <summary>
		/// ��һ�۴��ڵ���������
		/// </summary>
		AskPriceGreaterEqualStopPrice=(Byte)'A',
		/// <summary>
		/// ��һ��С��������
		/// </summary>
		AskPriceLesserThanStopPrice=(Byte)'B',
		/// <summary>
		/// ��һ��С�ڵ���������
		/// </summary>
		AskPriceLesserEqualStopPrice=(Byte)'C',
		/// <summary>
		/// ��һ�۴���������
		/// </summary>
		BidPriceGreaterThanStopPrice=(Byte)'D',
		/// <summary>
		/// ��һ�۴��ڵ���������
		/// </summary>
		BidPriceGreaterEqualStopPrice=(Byte)'E',
		/// <summary>
		/// ��һ��С��������
		/// </summary>
		BidPriceLesserThanStopPrice=(Byte)'F',
		/// <summary>
		/// ��һ��С�ڵ���������
		/// </summary>
		BidPriceLesserEqualStopPrice=(Byte)'H',
	};
	/// <summary>
	/// ������־ CActionFlagType
	/// </summary>
	public enum struct EnumActionFlagType : Byte
	{
		/// <summary>
		/// ɾ��
		/// </summary>
		Delete=(Byte)'0',
		/// <summary>
		/// �޸�
		/// </summary>
		Modify=(Byte)'3',
	};
	/// <summary>
	/// ����Ȩ�� CTradingRightType
	/// </summary>
	public enum struct EnumTradingRightType : Byte
	{
		/// <summary>
		/// ���Խ���
		/// </summary>
		Allow=(Byte)'0',
		/// <summary>
		/// ���ܽ���
		/// </summary>
		Forbidden=(Byte)'2',
	};
	/// <summary>
	/// ������Դ COrderSourceType
	/// </summary>
	public enum struct EnumOrderSourceType : Byte
	{
		/// <summary>
		/// ���Բ�����
		/// </summary>
		Participant=(Byte)'0',
		/// <summary>
		/// ���Թ���Ա
		/// </summary>
		Administrator=(Byte)'1',
	};
	/// <summary>
	/// �ɽ�����Դ CPriceSourceType
	/// </summary>
	public enum struct EnumPriceSourceType : Byte
	{
		/// <summary>
		/// ǰ�ɽ���
		/// </summary>
		LastPrice=(Byte)'0',
		/// <summary>
		/// ��ί�м�
		/// </summary>
		Buy=(Byte)'1',
		/// <summary>
		/// ��ί�м�
		/// </summary>
		Sell=(Byte)'2',
	};
	/// <summary>
	/// �û��¼����� CUserEventTypeType
	/// </summary>
	public enum struct EnumUserEventTypeType : Byte
	{
		/// <summary>
		/// ��¼
		/// </summary>
		Login=(Byte)'1',
		/// <summary>
		/// �ǳ�
		/// </summary>
		Logout=(Byte)'2',
		/// <summary>
		/// ���׳ɹ�
		/// </summary>
		Trading=(Byte)'3',
		/// <summary>
		/// ����ʧ��
		/// </summary>
		TradingError=(Byte)'4',
		/// <summary>
		/// �޸�����
		/// </summary>
		UpdatePassword=(Byte)'5',
		/// <summary>
		/// �ͻ�����֤
		/// </summary>
		Authenticate=(Byte)'6',
		/// <summary>
		/// ����
		/// </summary>
		Other=(Byte)'9',
	};
	/// <summary>
	/// ��̬�������� COTPTypeType
	/// </summary>
	public enum struct EnumOTPTypeType : Byte
	{
		/// <summary>
		/// �޶�̬����
		/// </summary>
		NONE=(Byte)'0',
		/// <summary>
		/// ʱ������
		/// </summary>
		TOTP=(Byte)'1',
	};
	/// <summary>
	/// �ɽ���Դ CTradeSourceType
	/// </summary>
	public enum struct EnumTradeSourceType : Byte
	{
		/// <summary>
		/// ���Խ�������ͨ�ر�
		/// </summary>
		NORMAL=(Byte)'0',
		/// <summary>
		/// ���Բ�ѯ
		/// </summary>
		QUERY=(Byte)'1',
	};
	/// <summary>
	/// ��ƱȨ�޷��� CInstrumentRangeType
	/// </summary>
	public enum struct EnumInstrumentRangeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		All=(Byte)'1',
		/// <summary>
		/// ��Ʒ
		/// </summary>
		Product=(Byte)'2',
		/// <summary>
		/// ��ƱȨ��ģ��
		/// </summary>
		Model=(Byte)'3',
		/// <summary>
		/// ��Ʊ
		/// </summary>
		Stock=(Byte)'4',
		/// <summary>
		/// �г�
		/// </summary>
		Market=(Byte)'5',
	};
	/// <summary>
	/// ֤ȯ�������� CStockTradeTypeType
	/// </summary>
	public enum struct EnumStockTradeTypeType : Byte
	{
		/// <summary>
		/// �ɽ���֤ȯ
		/// </summary>
		Stock=(Byte)'0',
		/// <summary>
		/// ���������������
		/// </summary>
		BuyNetService=(Byte)'1',
		/// <summary>
		/// �ع�ע��
		/// </summary>
		CancelRepurchase=(Byte)'2',
		/// <summary>
		/// ָ������
		/// </summary>
		CancelRegister=(Byte)'3',
		/// <summary>
		/// ָ���Ǽ�
		/// </summary>
		Register=(Byte)'4',
		/// <summary>
		/// ���뷢���깺
		/// </summary>
		PurchaseIssue=(Byte)'5',
		/// <summary>
		/// �������
		/// </summary>
		Allotment=(Byte)'6',
		/// <summary>
		/// ����ҪԼ�չ�
		/// </summary>
		SellTender=(Byte)'7',
		/// <summary>
		/// ����ҪԼ�չ�
		/// </summary>
		BuyTender=(Byte)'8',
		/// <summary>
		/// ����ͶƱ
		/// </summary>
		NetVote=(Byte)'9',
		/// <summary>
		/// ������תծ����
		/// </summary>
		SellConvertibleBonds=(Byte)'a',
		/// <summary>
		/// Ȩ֤��Ȩ����
		/// </summary>
		OptionExecute=(Byte)'b',
		/// <summary>
		/// ����ʽ�����깺
		/// </summary>
		PurchaseOF=(Byte)'c',
		/// <summary>
		/// ����ʽ�������
		/// </summary>
		RedeemOF=(Byte)'d',
		/// <summary>
		/// ����ʽ�����Ϲ�
		/// </summary>
		SubscribeOF=(Byte)'e',
		/// <summary>
		/// ����ʽ����ת�й�ת��
		/// </summary>
		OFCustodianTranfer=(Byte)'f',
		/// <summary>
		/// ����ʽ����ֺ�����
		/// </summary>
		OFDividendConfig =(Byte)'g',
		/// <summary>
		/// ����ʽ����ת����������
		/// </summary>
		OFTransfer=(Byte)'h',
		/// <summary>
		/// ծȯ���
		/// </summary>
		BondsIn=(Byte)'i',
		/// <summary>
		/// ծȯ����
		/// </summary>
		BondsOut=(Byte)'j',
		/// <summary>
		/// EFT�깺
		/// </summary>
		PurchaseETF=(Byte)'k',
		/// <summary>
		/// EFT���
		/// </summary>
		RedeemETF=(Byte)'l',
		/// <summary>
		/// ��תծ���۵Ǽ�
		/// </summary>
		ConvertibleRegister=(Byte)'m',
	};
	/// <summary>
	/// �ʽ����㷨��� CHandleTradingAccountAlgoIDType
	/// </summary>
	public enum struct EnumHandleTradingAccountAlgoIDType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Base=(Byte)'1',
	};
	/// <summary>
	/// ��Ӧ��Ϣ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcRspInfoField
	{
		/// <summary>
		/// �������
		/// </summary>
		int ErrorID;
		/// <summary>
		/// ������Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};
	/// <summary>
	/// ������
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcExchangeField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeName;
		/// <summary>
		/// ����������
		/// </summary>
		EnumExchangePropertyType ExchangeProperty;
	};
	/// <summary>
	/// ��Ʒ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcProductField
	{
		/// <summary>
		/// ��Ʒ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ProductID;
		/// <summary>
		/// ��Ʒ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ProductName;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Ʒ����
		/// </summary>
		EnumProductClassType ProductClass;
		/// <summary>
		/// ��Լ��������
		/// </summary>
		int VolumeMultiple;
		/// <summary>
		/// ��С�䶯��λ
		/// </summary>
		double PriceTick;
		/// <summary>
		/// �м۵�����µ���
		/// </summary>
		int MaxMarketOrderVolume;
		/// <summary>
		/// �м۵���С�µ���
		/// </summary>
		int MinMarketOrderVolume;
		/// <summary>
		/// �޼۵�����µ���
		/// </summary>
		int MaxLimitOrderVolume;
		/// <summary>
		/// �޼۵���С�µ���
		/// </summary>
		int MinLimitOrderVolume;
		/// <summary>
		/// �ֲ�����
		/// </summary>
		EnumPositionTypeType PositionType;
		/// <summary>
		/// �ֲ���������
		/// </summary>
		EnumPositionDateTypeType PositionDateType;
		/// <summary>
		/// ETF��С���׵�λ
		/// </summary>
		int EFTMinTradeVolume;
	};
	/// <summary>
	/// ��Լ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcInstrumentField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ InstrumentName;
		/// <summary>
		/// ��Լ�ڽ������Ĵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// ��Ʒ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ProductID;
		/// <summary>
		/// ��Ʒ����
		/// </summary>
		EnumProductClassType ProductClass;
		/// <summary>
		/// �������
		/// </summary>
		int DeliveryYear;
		/// <summary>
		/// ������
		/// </summary>
		int DeliveryMonth;
		/// <summary>
		/// �м۵�����µ���
		/// </summary>
		int MaxMarketOrderVolume;
		/// <summary>
		/// �м۵���С�µ���
		/// </summary>
		int MinMarketOrderVolume;
		/// <summary>
		/// �޼۵�����µ���
		/// </summary>
		int MaxLimitOrderVolume;
		/// <summary>
		/// �޼۵���С�µ���
		/// </summary>
		int MinLimitOrderVolume;
		/// <summary>
		/// ��Լ��������
		/// </summary>
		int VolumeMultiple;
		/// <summary>
		/// ��С�䶯��λ
		/// </summary>
		double PriceTick;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CreateDate;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ OpenDate;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExpireDate;
		/// <summary>
		/// ��ʼ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ StartDelivDate;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ EndDelivDate;
		/// <summary>
		/// ��Լ��������״̬
		/// </summary>
		EnumInstLifePhaseType InstLifePhase;
		/// <summary>
		/// ��ǰ�Ƿ���
		/// </summary>
		int IsTrading;
		/// <summary>
		/// �ֲ�����
		/// </summary>
		EnumPositionTypeType PositionType;
		/// <summary>
		/// �����ܷ񳷵�
		/// </summary>
		int OrderCanBeWithdraw;
		/// <summary>
		/// ��С���µ���λ
		/// </summary>
		int MinBuyVolume;
		/// <summary>
		/// ��С���µ���λ
		/// </summary>
		int MinSellVolume;
		/// <summary>
		/// ��ƱȨ��ģ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ RightModelID;
		/// <summary>
		/// �ֲֽ�������
		/// </summary>
		EnumPosTradeTypeType PosTradeType;
		/// <summary>
		/// �г�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ MarketID;
		/// <summary>
		/// ��Ȩִ�м۸�
		/// </summary>
		double ExecPrice;
		/// <summary>
		/// �����ǰ����
		/// </summary>
		double UnderlyingPreclosPrice;
		/// <summary>
		/// Param1
		/// </summary>
		double OptionParam1;
		/// <summary>
		/// Param2
		/// </summary>
		double OptionParam2;
		/// <summary>
		/// UnitMargin
		/// </summary>
		double UnitMargin;
	};
	/// <summary>
	/// ����������Ա
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcTraderField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BranchPBU;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ��ʼ���ر������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ StartOrderLocalID;
	};
	/// <summary>
	/// ���͹�˾
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcBrokerField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ���͹�˾���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ BrokerAbbr;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ BrokerName;
		/// <summary>
		/// �Ƿ��Ծ
		/// </summary>
		int IsActive;
	};
	/// <summary>
	/// ��Ա����;��͹�˾������ձ�
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcPartBrokerField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// �Ƿ��Ծ
		/// </summary>
		int IsActive;
	};
	/// <summary>
	/// Ͷ����
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcInvestorField
	{
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���߷������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorGroupID;
		/// <summary>
		/// Ͷ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ InvestorName;
		/// <summary>
		/// ֤������
		/// </summary>
		EnumIdCardTypeType IdentifiedCardType;
		/// <summary>
		/// ֤������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ IdentifiedCardNo;
		/// <summary>
		/// �Ƿ��Ծ
		/// </summary>
		int IsActive;
		/// <summary>
		/// �Ϻ�Ӫҵ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ SHBranchID;
		/// <summary>
		/// ����Ӫҵ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ SZBranchID;
		/// <summary>
		/// Ͷ���������ʲ�
		/// </summary>
		double TotalBalance;
	};
	/// <summary>
	/// ���ױ���
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcTradingCodeField
	{
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ClientID;
		/// <summary>
		/// �Ƿ��Ծ
		/// </summary>
		int IsActive;
		/// <summary>
		/// AccountID
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ AccountID;
		/// <summary>
		/// ���׵�Ԫ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ PBU;
		/// <summary>
		/// ClientType
		/// </summary>
		EnumClientTypeType ClientType;
	};
	/// <summary>
	/// �����û�
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcSuperUserField
	{
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ UserName;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// �Ƿ��Ծ
		/// </summary>
		int IsActive;
	};
	/// <summary>
	/// �����û�����Ȩ��
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcSuperUserFunctionField
	{
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ���ܴ���
		/// </summary>
		EnumFunctionCodeType FunctionCode;
	};
	/// <summary>
	/// ���͹�˾�û�
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcBrokerUserField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ UserName;
		/// <summary>
		/// �û�����
		/// </summary>
		EnumUserTypeType UserType;
		/// <summary>
		/// �Ƿ��Ծ
		/// </summary>
		int IsActive;
		/// <summary>
		/// �Ƿ�ʹ������
		/// </summary>
		int IsUsingOTP;
	};
	/// <summary>
	/// ���͹�˾�û�����Ȩ��
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcBrokerUserFunctionField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ���͹�˾���ܴ���
		/// </summary>
		EnumBrokerFunctionCodeType BrokerFunctionCode;
	};
	/// <summary>
	/// �ʽ��˻�
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcTradingAccountField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ AccountID;
		/// <summary>
		/// �ϴ���Ѻ���
		/// </summary>
		double PreMortgage;
		/// <summary>
		/// �ϴ����ö��
		/// </summary>
		double PreCredit;
		/// <summary>
		/// �ϴδ���
		/// </summary>
		double PreDeposit;
		/// <summary>
		/// �ϴν���׼����
		/// </summary>
		double PreBalance;
		/// <summary>
		/// �ϴ�ռ�õı�֤��
		/// </summary>
		double PreMargin;
		/// <summary>
		/// ��Ϣ����
		/// </summary>
		double InterestBase;
		/// <summary>
		/// ��Ϣ����
		/// </summary>
		double Interest;
		/// <summary>
		/// �����
		/// </summary>
		double Deposit;
		/// <summary>
		/// ������
		/// </summary>
		double Withdraw;
		/// <summary>
		/// ����ı�֤��
		/// </summary>
		double FrozenMargin;
		/// <summary>
		/// ������ʽ�
		/// </summary>
		double FrozenCash;
		/// <summary>
		/// �����������
		/// </summary>
		double FrozenCommission;
		/// <summary>
		/// ��ǰ��֤���ܶ�
		/// </summary>
		double CurrMargin;
		/// <summary>
		/// ά�ֱ�֤��
		/// </summary>
		double MaintainMargin;
		/// <summary>
		/// �ʽ���
		/// </summary>
		double CashIn;
		/// <summary>
		/// ������
		/// </summary>
		double Commission;
		/// <summary>
		/// �ڻ�����׼����
		/// </summary>
		double Balance;
		/// <summary>
		/// �ֽ�
		/// </summary>
		double Available;
		/// <summary>
		/// ��ȡ�ʽ�
		/// </summary>
		double WithdrawQuota;
		/// <summary>
		/// ����׼����
		/// </summary>
		double Reserve;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ������
		/// </summary>
		int SettlementID;
		/// <summary>
		/// ���ö��
		/// </summary>
		double Credit;
		/// <summary>
		/// ��Ѻ���
		/// </summary>
		double Mortgage;
		/// <summary>
		/// ��������֤��
		/// </summary>
		double ExchangeMargin;
		/// <summary>
		/// Ͷ���߽��֤��
		/// </summary>
		double DeliveryMargin;
		/// <summary>
		/// ���������֤��
		/// </summary>
		double ExchangeDeliveryMargin;
		/// <summary>
		/// ����Ĺ�����
		/// </summary>
		double FrozenTransferFee;
		/// <summary>
		/// �����ӡ��˰
		/// </summary>
		double FrozenStampTax;
		/// <summary>
		/// ������
		/// </summary>
		double TransferFee;
		/// <summary>
		/// ӡ��˰
		/// </summary>
		double StampTax;
		/// <summary>
		/// ������
		/// </summary>
		double ConversionAmount;
		/// <summary>
		/// ���Ŷ��
		/// </summary>
		double CreditAmount;
		/// <summary>
		/// ֤ȯ�ܼ�ֵ
		/// </summary>
		double StockValue;
		/// <summary>
		/// ��ծ�ع�ռ���ʽ�
		/// </summary>
		double BondRepurchaseAmount;
		/// <summary>
		/// ��ծ��ع�ռ���ʽ�
		/// </summary>
		double ReverseRepurchaseAmount;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyCode;
		/// <summary>
		/// �˻�����
		/// </summary>
		EnumAccountTypeType AccountType;
		/// <summary>
		/// ������Ȩռ���ʽ�
		/// </summary>
		double OptionBuyAmount;
		/// <summary>
		/// ������Ȩ����ռ���ʽ�
		/// </summary>
		double OptionBuyFrozenAmount;
	};
	/// <summary>
	/// ��ֹ��¼�û�
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcLoginForbiddenUserField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
	};
	/// <summary>
	/// �������
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcDepthMarketDataField
	{
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Լ�ڽ������Ĵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// ���¼�
		/// </summary>
		double LastPrice;
		/// <summary>
		/// �ϴν����
		/// </summary>
		double PreSettlementPrice;
		/// <summary>
		/// ������
		/// </summary>
		double PreClosePrice;
		/// <summary>
		/// ��ֲ���
		/// </summary>
		double PreOpenInterest;
		/// <summary>
		/// ����
		/// </summary>
		double OpenPrice;
		/// <summary>
		/// ��߼�
		/// </summary>
		double HighestPrice;
		/// <summary>
		/// ��ͼ�
		/// </summary>
		double LowestPrice;
		/// <summary>
		/// ����
		/// </summary>
		int Volume;
		/// <summary>
		/// �ɽ����
		/// </summary>
		double Turnover;
		/// <summary>
		/// �ֲ���
		/// </summary>
		double OpenInterest;
		/// <summary>
		/// ������
		/// </summary>
		double ClosePrice;
		/// <summary>
		/// ���ν����
		/// </summary>
		double SettlementPrice;
		/// <summary>
		/// ��ͣ���
		/// </summary>
		double UpperLimitPrice;
		/// <summary>
		/// ��ͣ���
		/// </summary>
		double LowerLimitPrice;
		/// <summary>
		/// ����ʵ��
		/// </summary>
		double PreDelta;
		/// <summary>
		/// ����ʵ��
		/// </summary>
		double CurrDelta;
		/// <summary>
		/// ����޸�ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ UpdateTime;
		/// <summary>
		/// ����޸ĺ���
		/// </summary>
		int UpdateMillisec;
		/// <summary>
		/// �����һ
		/// </summary>
		double BidPrice1;
		/// <summary>
		/// ������һ
		/// </summary>
		int BidVolume1;
		/// <summary>
		/// ������һ
		/// </summary>
		double AskPrice1;
		/// <summary>
		/// ������һ
		/// </summary>
		int AskVolume1;
		/// <summary>
		/// ����۶�
		/// </summary>
		double BidPrice2;
		/// <summary>
		/// ��������
		/// </summary>
		int BidVolume2;
		/// <summary>
		/// �����۶�
		/// </summary>
		double AskPrice2;
		/// <summary>
		/// ��������
		/// </summary>
		int AskVolume2;
		/// <summary>
		/// �������
		/// </summary>
		double BidPrice3;
		/// <summary>
		/// ��������
		/// </summary>
		int BidVolume3;
		/// <summary>
		/// ��������
		/// </summary>
		double AskPrice3;
		/// <summary>
		/// ��������
		/// </summary>
		int AskVolume3;
		/// <summary>
		/// �������
		/// </summary>
		double BidPrice4;
		/// <summary>
		/// ��������
		/// </summary>
		int BidVolume4;
		/// <summary>
		/// ��������
		/// </summary>
		double AskPrice4;
		/// <summary>
		/// ��������
		/// </summary>
		int AskVolume4;
		/// <summary>
		/// �������
		/// </summary>
		double BidPrice5;
		/// <summary>
		/// ��������
		/// </summary>
		int BidVolume5;
		/// <summary>
		/// ��������
		/// </summary>
		double AskPrice5;
		/// <summary>
		/// ��������
		/// </summary>
		int AskVolume5;
		/// <summary>
		/// ���վ���
		/// </summary>
		double AveragePrice;
		/// <summary>
		/// ҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionDay;
	};
	/// <summary>
	/// Ͷ���ߺ�Լ����Ȩ��
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcInstrumentTradingRightField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// Ͷ���߷�Χ
		/// </summary>
		EnumInvestorRangeType InvestorRange;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// ����
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// ����Ȩ��
		/// </summary>
		EnumTradingRightType TradingRight;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��ƱȨ�޷���
		/// </summary>
		EnumInstrumentRangeType InstrumentRange;
	};
	/// <summary>
	/// Ͷ���ֲ߳���ϸ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcInvestorPositionDetailField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// ����
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ OpenDate;
		/// <summary>
		/// �ɽ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TradeID;
		/// <summary>
		/// ����
		/// </summary>
		int Volume;
		/// <summary>
		/// ���ּ�
		/// </summary>
		double OpenPrice;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ������
		/// </summary>
		int SettlementID;
		/// <summary>
		/// �ɽ�����
		/// </summary>
		EnumTradeTypeType TradeType;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// Ͷ���߱�֤��
		/// </summary>
		double Margin;
		/// <summary>
		/// ��������֤��
		/// </summary>
		double ExchMargin;
		/// <summary>
		/// ������
		/// </summary>
		double LastSettlementPrice;
		/// <summary>
		/// �����
		/// </summary>
		double SettlementPrice;
		/// <summary>
		/// ƽ����
		/// </summary>
		int CloseVolume;
		/// <summary>
		/// ƽ�ֽ��
		/// </summary>
		double CloseAmount;
		/// <summary>
		/// ������
		/// </summary>
		double TransferFee;
		/// <summary>
		/// ӡ��˰
		/// </summary>
		double StampTax;
		/// <summary>
		/// ������
		/// </summary>
		double Commission;
		/// <summary>
		/// AccountID
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ AccountID;
		/// <summary>
		/// ��Ȩ�Ƿ�����Ȩ
		/// </summary>
		int IsCall;
		/// <summary>
		/// ������Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ UnderLyingInstrumentID;
	};
	/// <summary>
	/// ծȯ��Ϣ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcBondInterestField
	{
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ��Ϣ
		/// </summary>
		double Interest;
	};
	/// <summary>
	/// ����������Ա���̻�
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcTraderOfferField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BranchPBU;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// ���ر������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// ����������Ա����״̬
		/// </summary>
		EnumTraderConnectStatusType TraderConnectStatus;
		/// <summary>
		/// �����������������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConnectRequestDate;
		/// <summary>
		/// �������������ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConnectRequestTime;
		/// <summary>
		/// �ϴα�������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LastReportDate;
		/// <summary>
		/// �ϴα���ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LastReportTime;
		/// <summary>
		/// �����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConnectDate;
		/// <summary>
		/// �������ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConnectTime;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ StartDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ StartTime;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
	};
	/// <summary>
	/// ���������鱨�̻�
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcMDTraderOfferField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BranchPBU;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// ���ر������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// ����������Ա����״̬
		/// </summary>
		EnumTraderConnectStatusType TraderConnectStatus;
		/// <summary>
		/// �����������������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConnectRequestDate;
		/// <summary>
		/// �������������ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConnectRequestTime;
		/// <summary>
		/// �ϴα�������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LastReportDate;
		/// <summary>
		/// �ϴα���ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LastReportTime;
		/// <summary>
		/// �����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConnectDate;
		/// <summary>
		/// �������ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConnectTime;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ StartDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ StartTime;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
	};
	/// <summary>
	/// ǰ��״̬
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcFrontStatusField
	{
		/// <summary>
		/// ǰ�ñ��
		/// </summary>
		int FrontID;
		/// <summary>
		/// �ϴα�������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LastReportDate;
		/// <summary>
		/// �ϴα���ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LastReportTime;
		/// <summary>
		/// �Ƿ��Ծ
		/// </summary>
		int IsActive;
	};
	/// <summary>
	/// �û��Ự
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcUserSessionField
	{
		/// <summary>
		/// ǰ�ñ��
		/// </summary>
		int FrontID;
		/// <summary>
		/// �Ự���
		/// </summary>
		int SessionID;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ��¼����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LoginDate;
		/// <summary>
		/// ��¼ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LoginTime;
		/// <summary>
		/// IP��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ IPAddress;
		/// <summary>
		/// �û��˲�Ʒ��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ UserProductInfo;
		/// <summary>
		/// �ӿڶ˲�Ʒ��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ InterfaceProductInfo;
		/// <summary>
		/// Э����Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ProtocolInfo;
		/// <summary>
		/// Mac��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ MacAddress;
	};
	/// <summary>
	/// ����
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcOrderField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �����۸�����
		/// </summary>
		EnumOrderPriceTypeType OrderPriceType;
		/// <summary>
		/// ��������
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// ��Ͽ�ƽ��־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombOffsetFlag;
		/// <summary>
		/// ���Ͷ���ױ���־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombHedgeFlag;
		/// <summary>
		/// �۸�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ LimitPrice;
		/// <summary>
		/// ����
		/// </summary>
		int VolumeTotalOriginal;
		/// <summary>
		/// ��Ч������
		/// </summary>
		EnumTimeConditionType TimeCondition;
		/// <summary>
		/// GTD����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ GTDDate;
		/// <summary>
		/// �ɽ�������
		/// </summary>
		EnumVolumeConditionType VolumeCondition;
		/// <summary>
		/// ��С�ɽ���
		/// </summary>
		int MinVolume;
		/// <summary>
		/// ��������
		/// </summary>
		EnumContingentConditionType ContingentCondition;
		/// <summary>
		/// ֹ���
		/// </summary>
		double StopPrice;
		/// <summary>
		/// ǿƽԭ��
		/// </summary>
		EnumForceCloseReasonType ForceCloseReason;
		/// <summary>
		/// �Զ������־
		/// </summary>
		int IsAutoSuspend;
		/// <summary>
		/// ҵ��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// ���ر������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ClientID;
		/// <summary>
		/// ��Լ�ڽ������Ĵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BranchPBU;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// �����ύ״̬
		/// </summary>
		EnumOrderSubmitStatusType OrderSubmitStatus;
		/// <summary>
		/// �˻���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ AccountID;
		/// <summary>
		/// ������ʾ���
		/// </summary>
		int NotifySequence;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ������
		/// </summary>
		int SettlementID;
		/// <summary>
		/// �������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// ������Դ
		/// </summary>
		EnumOrderSourceType OrderSource;
		/// <summary>
		/// ����״̬
		/// </summary>
		EnumOrderStatusType OrderStatus;
		/// <summary>
		/// ��������
		/// </summary>
		EnumOrderTypeType OrderType;
		/// <summary>
		/// ��ɽ�����
		/// </summary>
		int VolumeTraded;
		/// <summary>
		/// ʣ������
		/// </summary>
		int VolumeTotal;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertDate;
		/// <summary>
		/// ί��ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTime;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActiveTime;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ SuspendTime;
		/// <summary>
		/// ����޸�ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ UpdateTime;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CancelTime;
		/// <summary>
		/// ����޸Ľ���������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ActiveTraderID;
		/// <summary>
		/// �����Ա���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClearingPartID;
		/// <summary>
		/// ���
		/// </summary>
		int SequenceNo;
		/// <summary>
		/// ǰ�ñ��
		/// </summary>
		int FrontID;
		/// <summary>
		/// �Ự���
		/// </summary>
		int SessionID;
		/// <summary>
		/// �û��˲�Ʒ��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ UserProductInfo;
		/// <summary>
		/// ״̬��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ StatusMsg;
		/// <summary>
		/// �û�ǿ����־
		/// </summary>
		int UserForceClose;
		/// <summary>
		/// �����û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ ActiveUserID;
		/// <summary>
		/// ���͹�˾�������
		/// </summary>
		int BrokerOrderSeq;
		/// <summary>
		/// ��ر���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ RelativeOrderSysID;
		/// <summary>
		/// Ӫҵ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ BranchID;
		/// <summary>
		/// �ɽ�����
		/// </summary>
		double TradeAmount;
		/// <summary>
		/// �Ƿ�ETF
		/// </summary>
		int IsETF;
		/// <summary>
		/// �˻�����
		/// </summary>
		EnumAccountTypeType AccountType;
	};
	/// <summary>
	/// ��������
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcOrderActionField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// ������������
		/// </summary>
		int OrderActionRef;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// ǰ�ñ��
		/// </summary>
		int FrontID;
		/// <summary>
		/// �Ự���
		/// </summary>
		int SessionID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ������־
		/// </summary>
		EnumActionFlagType ActionFlag;
		/// <summary>
		/// �۸�
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// �����仯
		/// </summary>
		int VolumeChange;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionTime;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BranchPBU;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// ���ر������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// �������ر��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ ActionLocalID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ClientID;
		/// <summary>
		/// ҵ��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// ��������״̬
		/// </summary>
		EnumOrderActionStatusType OrderActionStatus;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// Ӫҵ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ BranchID;
		/// <summary>
		/// ״̬��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ StatusMsg;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// �˻�����
		/// </summary>
		EnumAccountTypeType AccountType;
	};
	/// <summary>
	/// ���󱨵�
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcErrOrderField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �����۸�����
		/// </summary>
		EnumOrderPriceTypeType OrderPriceType;
		/// <summary>
		/// ��������
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// ��Ͽ�ƽ��־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombOffsetFlag;
		/// <summary>
		/// ���Ͷ���ױ���־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombHedgeFlag;
		/// <summary>
		/// �۸�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ LimitPrice;
		/// <summary>
		/// ����
		/// </summary>
		int VolumeTotalOriginal;
		/// <summary>
		/// ��Ч������
		/// </summary>
		EnumTimeConditionType TimeCondition;
		/// <summary>
		/// GTD����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ GTDDate;
		/// <summary>
		/// �ɽ�������
		/// </summary>
		EnumVolumeConditionType VolumeCondition;
		/// <summary>
		/// ��С�ɽ���
		/// </summary>
		int MinVolume;
		/// <summary>
		/// ��������
		/// </summary>
		EnumContingentConditionType ContingentCondition;
		/// <summary>
		/// ֹ���
		/// </summary>
		double StopPrice;
		/// <summary>
		/// ǿƽԭ��
		/// </summary>
		EnumForceCloseReasonType ForceCloseReason;
		/// <summary>
		/// �Զ������־
		/// </summary>
		int IsAutoSuspend;
		/// <summary>
		/// ҵ��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// �û�ǿ����־
		/// </summary>
		int UserForceClose;
		/// <summary>
		/// �������
		/// </summary>
		int ErrorID;
		/// <summary>
		/// ������Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};
	/// <summary>
	/// ���󱨵�����
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcErrOrderActionField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// ������������
		/// </summary>
		int OrderActionRef;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// ǰ�ñ��
		/// </summary>
		int FrontID;
		/// <summary>
		/// �Ự���
		/// </summary>
		int SessionID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ������־
		/// </summary>
		EnumActionFlagType ActionFlag;
		/// <summary>
		/// �۸�
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// �����仯
		/// </summary>
		int VolumeChange;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionDate;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionTime;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BranchPBU;
		/// <summary>
		/// ��װ���
		/// </summary>
		int InstallID;
		/// <summary>
		/// ���ر������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// �������ر��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ ActionLocalID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ClientID;
		/// <summary>
		/// ҵ��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// ��������״̬
		/// </summary>
		EnumOrderActionStatusType OrderActionStatus;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// Ӫҵ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ BranchID;
		/// <summary>
		/// ״̬��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ StatusMsg;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// �˻�����
		/// </summary>
		EnumAccountTypeType AccountType;
		/// <summary>
		/// �������
		/// </summary>
		int ErrorID;
		/// <summary>
		/// ������Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};
	/// <summary>
	/// �ɽ�
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcTradeField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �ɽ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TradeID;
		/// <summary>
		/// ��������
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// �������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ClientID;
		/// <summary>
		/// ���׽�ɫ
		/// </summary>
		EnumTradingRoleType TradingRole;
		/// <summary>
		/// ��Լ�ڽ������Ĵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// ��ƽ��־
		/// </summary>
		EnumOffsetFlagType OffsetFlag;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// �۸�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ Price;
		/// <summary>
		/// ����
		/// </summary>
		int Volume;
		/// <summary>
		/// �ɽ�ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// �ɽ�ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// �ɽ�����
		/// </summary>
		EnumTradeTypeType TradeType;
		/// <summary>
		/// �ɽ�����Դ
		/// </summary>
		EnumPriceSourceType PriceSource;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BranchPBU;
		/// <summary>
		/// ���ر������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// �����Ա���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClearingPartID;
		/// <summary>
		/// ҵ��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// ���
		/// </summary>
		int SequenceNo;
		/// <summary>
		/// �ɽ���Դ
		/// </summary>
		EnumTradeSourceType TradeSource;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ������
		/// </summary>
		int SettlementID;
		/// <summary>
		/// ���͹�˾�������
		/// </summary>
		int BrokerOrderSeq;
	};
	/// <summary>
	/// Ͷ���ֲ߳�
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcInvestorPositionField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// �ֲֶ�շ���
		/// </summary>
		EnumPosiDirectionType PosiDirection;
		/// <summary>
		/// Ͷ���ױ���־
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// �ֲ�����
		/// </summary>
		EnumPositionDateType PositionDate;
		/// <summary>
		/// ���ճֲ�
		/// </summary>
		int YdPosition;
		/// <summary>
		/// ���ճֲ�
		/// </summary>
		int Position;
		/// <summary>
		/// ��ͷ����
		/// </summary>
		int LongFrozen;
		/// <summary>
		/// ��ͷ����
		/// </summary>
		int ShortFrozen;
		/// <summary>
		/// ���ֶ�����
		/// </summary>
		double LongFrozenAmount;
		/// <summary>
		/// ���ֶ�����
		/// </summary>
		double ShortFrozenAmount;
		/// <summary>
		/// ������
		/// </summary>
		int OpenVolume;
		/// <summary>
		/// ƽ����
		/// </summary>
		int CloseVolume;
		/// <summary>
		/// ���ֽ��
		/// </summary>
		double OpenAmount;
		/// <summary>
		/// ƽ�ֽ��
		/// </summary>
		double CloseAmount;
		/// <summary>
		/// �ֲֳɱ�
		/// </summary>
		double PositionCost;
		/// <summary>
		/// ������ʽ�
		/// </summary>
		double FrozenCash;
		/// <summary>
		/// �ʽ���
		/// </summary>
		double CashIn;
		/// <summary>
		/// ������
		/// </summary>
		double Commission;
		/// <summary>
		/// �ϴν����
		/// </summary>
		double PreSettlementPrice;
		/// <summary>
		/// ���ν����
		/// </summary>
		double SettlementPrice;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ������
		/// </summary>
		int SettlementID;
		/// <summary>
		/// ���ֳɱ�
		/// </summary>
		double OpenCost;
		/// <summary>
		/// ��������֤��
		/// </summary>
		double ExchangeMargin;
		/// <summary>
		/// ά�ֱ�֤��
		/// </summary>
		double MaintainMargin;
		/// <summary>
		/// ���ճֲ�
		/// </summary>
		int TodayPosition;
		/// <summary>
		/// ������
		/// </summary>
		double TransferFee;
		/// <summary>
		/// ӡ��˰
		/// </summary>
		double StampTax;
		/// <summary>
		/// �����깺�������
		/// </summary>
		int TodayPurRedVolume;
		/// <summary>
		/// ������
		/// </summary>
		double ConversionRate;
		/// <summary>
		/// ������
		/// </summary>
		double ConversionAmount;
		/// <summary>
		/// ֤ȯ��ֵ
		/// </summary>
		double StockValue;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// AccountID
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ AccountID;
		/// <summary>
		/// �����Ĳ�λ
		/// </summary>
		int LockPosition;
		/// <summary>
		/// ���Ҳ�λ
		/// </summary>
		int CoverPosition;
		/// <summary>
		/// ���������λ
		/// </summary>
		int LongLockFrozen;
		/// <summary>
		/// ���������λ
		/// </summary>
		int ShortLockFrozen;
		/// <summary>
		/// ���Ҷ����λ
		/// </summary>
		int CoverFrozen;
	};
	/// <summary>
	/// �����ͬ��
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcSyncDepositField
	{
		/// <summary>
		/// �������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ DepositSeqNo;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// �����
		/// </summary>
		double Deposit;
		/// <summary>
		/// �Ƿ�ǿ�ƽ���
		/// </summary>
		int IsForce;
		/// <summary>
		/// �˻���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ AccountID;
	};
	/// <summary>
	/// ��ѯ���͹�˾�û��¼�
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcBrokerUserEventField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// �û��¼�����
		/// </summary>
		EnumUserEventTypeType UserEventType;
		/// <summary>
		/// �û��¼����
		/// </summary>
		int EventSequenceNo;
		/// <summary>
		/// �¼���������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ EventDate;
		/// <summary>
		/// �¼�����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ EventTime;
		/// <summary>
		/// �û��¼���Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 1025)]
		String^ UserEventInfo;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};
	/// <summary>
	/// ��Լ��������
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcInstrumentCommissionRateField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// Ͷ���߷�Χ
		/// </summary>
		EnumInvestorRangeType InvestorRange;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// ��������
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// ӡ��˰��
		/// </summary>
		double StampTaxRateByMoney;
		/// <summary>
		/// ӡ��˰��(������)
		/// </summary>
		double StampTaxRateByVolume;
		/// <summary>
		/// ��������
		/// </summary>
		double TransferFeeRateByMoney;
		/// <summary>
		/// ��������(������)
		/// </summary>
		double TransferFeeRateByVolume;
		/// <summary>
		/// ���׷�
		/// </summary>
		double TradeFeeByMoney;
		/// <summary>
		/// ���׷�(������)
		/// </summary>
		double TradeFeeByVolume;
		/// <summary>
		/// ���׸��ӷ���
		/// </summary>
		double MarginByMoney;
		/// <summary>
		/// ��С������
		/// </summary>
		double MinTradeFee;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};
	/// <summary>
	/// ��ѯ������
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcQryExchangeField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};
	/// <summary>
	/// ��ѯ��Ʒ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcQryProductField
	{
		/// <summary>
		/// ��Ʒ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ProductID;
	};
	/// <summary>
	/// ��ѯ��Լ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcQryInstrumentField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Լ�ڽ������Ĵ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// ��Ʒ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ProductID;
	};
	/// <summary>
	/// ��ѯ����Ա
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcQryTraderField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BranchPBU;
	};
	/// <summary>
	/// ��ѯ���͹�˾
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcQryBrokerField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
	};
	/// <summary>
	/// ��ѯ���͹�˾��Ա����
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcQryPartBrokerField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
	};
	/// <summary>
	/// ��ѯͶ����
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcQryInvestorField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
	};
	/// <summary>
	/// ��ѯ���ױ���
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcQryTradingCodeField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �ͻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ClientID;
	};
	/// <summary>
	/// ��ѯ�����û�
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcQrySuperUserField
	{
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
	};
	/// <summary>
	/// ��ѯ�����û�����Ȩ��
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcQrySuperUserFunctionField
	{
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
	};
	/// <summary>
	/// ��ѯ���͹�˾�û�
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcQryBrokerUserField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
	};
	/// <summary>
	/// ��ѯ���͹�˾�û�Ȩ��
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcQryBrokerUserFunctionField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
	};
	/// <summary>
	/// ��ѯ�ʽ��˻�
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcQryTradingAccountField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
	};
	/// <summary>
	/// ��ѯ��ֹ��¼�û�
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcQryLoginForbiddenUserField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
	};
	/// <summary>
	/// ��ѯ����
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcQryDepthMarketDataField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};
	/// <summary>
	/// ��ѯ��Լ����Ȩ��
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcQryInstrumentTradingRightField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};
	/// <summary>
	/// ��ѯͶ���ֲ߳���ϸ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcQryInvestorPositionDetailField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};
	/// <summary>
	/// ��ѯծȯ��Ϣ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcQryBondInterestField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};
	/// <summary>
	/// ��ѯ����Ա���̻�
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcQryTraderOfferField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BranchPBU;
	};
	/// <summary>
	/// ��ѯ���鱨�̻�
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcQryMDTraderOfferField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ��Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BranchPBU;
	};
	/// <summary>
	/// ��ѯǰ��״̬
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcQryFrontStatusField
	{
		/// <summary>
		/// ǰ�ñ��
		/// </summary>
		int FrontID;
	};
	/// <summary>
	/// ��ѯ�û��Ự
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcQryUserSessionField
	{
		/// <summary>
		/// ǰ�ñ��
		/// </summary>
		int FrontID;
		/// <summary>
		/// �Ự���
		/// </summary>
		int SessionID;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
	};
	/// <summary>
	/// ��ѯ����
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcQryOrderField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// ��ʼʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTimeStart;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTimeEnd;
	};
	/// <summary>
	/// ��ѯ��������
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcQryOrderActionField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};
	/// <summary>
	/// ��ѯ���󱨵�
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcQryErrOrderField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
	};
	/// <summary>
	/// ��ѯ���󱨵�����
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcQryErrOrderActionField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
	};
	/// <summary>
	/// ��ѯ�ɽ�
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcQryTradeField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �ɽ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TradeID;
		/// <summary>
		/// ��ʼʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTimeStart;
		/// <summary>
		/// ����ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTimeEnd;
	};
	/// <summary>
	/// ��ѯͶ���ֲ߳�
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcQryInvestorPositionField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};
	/// <summary>
	/// ��ѯ�������ˮ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcQrySyncDepositField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ DepositSeqNo;
	};
	/// <summary>
	/// ��ѯ���͹�˾�û��¼�
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcQryBrokerUserEventField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// �û��¼�����
		/// </summary>
		EnumUserEventTypeType UserEventType;
	};
	/// <summary>
	/// ��ѯ��Լ��������
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcQryInstrumentCommissionRateField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ��������
		/// </summary>
		EnumDirectionType Direction;
	};
	/// <summary>
	/// �û�������
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcUserPasswordUpdateField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ԭ���Ŀ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ OldPassword;
		/// <summary>
		/// �µĿ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ NewPassword;
	};
	/// <summary>
	/// �ʽ��˻���������
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcTradingAccountPasswordUpdateField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ AccountID;
		/// <summary>
		/// ԭ���Ŀ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ OldPassword;
		/// <summary>
		/// �µĿ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ NewPassword;
	};
	/// <summary>
	/// �ֹ�ͬ���û���̬����
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcManualSyncBrokerUserOTPField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ��̬��������
		/// </summary>
		EnumOTPTypeType OTPType;
		/// <summary>
		/// ��һ����̬����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ FirstOTP;
		/// <summary>
		/// �ڶ�����̬����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ SecondOTP;
	};
	/// <summary>
	/// ���͹�˾�û�����
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcBrokerUserPasswordField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
	};
	/// <summary>
	/// �ʽ��˻�������
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcTradingAccountPasswordField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ AccountID;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
	};
	/// <summary>
	/// �û�Ȩ��
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcUserRightField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// �ͻ�Ȩ������
		/// </summary>
		EnumUserRightTypeType UserRightType;
		/// <summary>
		/// �Ƿ��ֹ
		/// </summary>
		int IsForbidden;
	};
	/// <summary>
	/// Ͷ�����˻�
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcInvestorAccountField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// Ͷ�����ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ AccountID;
		/// <summary>
		/// �˻�����
		/// </summary>
		EnumAccountTypeType AccountType;
		/// <summary>
		/// �Ƿ����˻�
		/// </summary>
		int IsDefault;
	};
	/// <summary>
	/// �û�IP
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcUserIPField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// IP��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ IPAddress;
		/// <summary>
		/// IP��ַ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ IPMask;
		/// <summary>
		/// Mac��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ MacAddress;
	};
	/// <summary>
	/// �û���̬���Ʋ���
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcBrokerUserOTPParamField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ��̬�����ṩ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 2)]
		String^ OTPVendorsID;
		/// <summary>
		/// ��̬�������к�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ SerialNumber;
		/// <summary>
		/// ������Կ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ AuthKey;
		/// <summary>
		/// Ư��ֵ
		/// </summary>
		int LastDrift;
		/// <summary>
		/// �ɹ�ֵ
		/// </summary>
		int LastSuccess;
		/// <summary>
		/// ��̬��������
		/// </summary>
		EnumOTPTypeType OTPType;
	};
	/// <summary>
	/// �û���¼����
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcReqUserLoginField
	{
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// �û��˲�Ʒ��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ UserProductInfo;
		/// <summary>
		/// �ӿڶ˲�Ʒ��Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ InterfaceProductInfo;
		/// <summary>
		/// Э����Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ProtocolInfo;
		/// <summary>
		/// Mac��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ MacAddress;
		/// <summary>
		/// ��̬����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ OneTimePassword;
		/// <summary>
		/// �ն�IP��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ ClientIPAddress;
		/// <summary>
		/// �ͻ�����֤��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ AuthCode;
	};
	/// <summary>
	/// �û���¼Ӧ��
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcRspUserLoginField
	{
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ��¼�ɹ�ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LoginTime;
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ����ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ SystemName;
		/// <summary>
		/// ǰ�ñ��
		/// </summary>
		int FrontID;
		/// <summary>
		/// �Ự���
		/// </summary>
		int SessionID;
		/// <summary>
		/// ��󱨵�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ MaxOrderRef;
	};
	/// <summary>
	/// �û��ǳ�����
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcUserLogoutField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
	};
	/// <summary>
	/// ȫ���ǳ���Ϣ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcLogoutAllField
	{
		/// <summary>
		/// ǰ�ñ��
		/// </summary>
		int FrontID;
		/// <summary>
		/// �Ự���
		/// </summary>
		int SessionID;
		/// <summary>
		/// ϵͳ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ SystemName;
	};
	/// <summary>
	/// ǿ�ƽ���Ա�˳�
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcForceUserLogoutField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
	};
	/// <summary>
	/// ���뱨��
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcInputOrderField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �����۸�����
		/// </summary>
		EnumOrderPriceTypeType OrderPriceType;
		/// <summary>
		/// ��������
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// ��Ͽ�ƽ��־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombOffsetFlag;
		/// <summary>
		/// ���Ͷ���ױ���־
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombHedgeFlag;
		/// <summary>
		/// �۸�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ LimitPrice;
		/// <summary>
		/// ����
		/// </summary>
		int VolumeTotalOriginal;
		/// <summary>
		/// ��Ч������
		/// </summary>
		EnumTimeConditionType TimeCondition;
		/// <summary>
		/// GTD����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ GTDDate;
		/// <summary>
		/// �ɽ�������
		/// </summary>
		EnumVolumeConditionType VolumeCondition;
		/// <summary>
		/// ��С�ɽ���
		/// </summary>
		int MinVolume;
		/// <summary>
		/// ��������
		/// </summary>
		EnumContingentConditionType ContingentCondition;
		/// <summary>
		/// ֹ���
		/// </summary>
		double StopPrice;
		/// <summary>
		/// ǿƽԭ��
		/// </summary>
		EnumForceCloseReasonType ForceCloseReason;
		/// <summary>
		/// �Զ������־
		/// </summary>
		int IsAutoSuspend;
		/// <summary>
		/// ҵ��Ԫ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// �û�ǿ����־
		/// </summary>
		int UserForceClose;
	};
	/// <summary>
	/// ���뱨������
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcInputOrderActionField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// ������������
		/// </summary>
		int OrderActionRef;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// ������
		/// </summary>
		int RequestID;
		/// <summary>
		/// ǰ�ñ��
		/// </summary>
		int FrontID;
		/// <summary>
		/// �Ự���
		/// </summary>
		int SessionID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ������־
		/// </summary>
		EnumActionFlagType ActionFlag;
		/// <summary>
		/// �۸�
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// �����仯
		/// </summary>
		int VolumeChange;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BranchPBU;
		/// <summary>
		/// ���ر������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
	};
	/// <summary>
	/// ָ���ĺ�Լ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcSpecificInstrumentField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};
	/// <summary>
	/// ָ���Ľ�����
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcSpecificExchangeField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};
	/// <summary>
	/// �����������
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcMarketDataBaseField
	{
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// �ϴν����
		/// </summary>
		double PreSettlementPrice;
		/// <summary>
		/// ������
		/// </summary>
		double PreClosePrice;
		/// <summary>
		/// ��ֲ���
		/// </summary>
		double PreOpenInterest;
		/// <summary>
		/// ����ʵ��
		/// </summary>
		double PreDelta;
	};
	/// <summary>
	/// ���龲̬����
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcMarketDataStaticField
	{
		/// <summary>
		/// ����
		/// </summary>
		double OpenPrice;
		/// <summary>
		/// ��߼�
		/// </summary>
		double HighestPrice;
		/// <summary>
		/// ��ͼ�
		/// </summary>
		double LowestPrice;
		/// <summary>
		/// ������
		/// </summary>
		double ClosePrice;
		/// <summary>
		/// ��ͣ���
		/// </summary>
		double UpperLimitPrice;
		/// <summary>
		/// ��ͣ���
		/// </summary>
		double LowerLimitPrice;
		/// <summary>
		/// ���ν����
		/// </summary>
		double SettlementPrice;
		/// <summary>
		/// ����ʵ��
		/// </summary>
		double CurrDelta;
	};
	/// <summary>
	/// �������³ɽ�����
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcMarketDataLastMatchField
	{
		/// <summary>
		/// ���¼�
		/// </summary>
		double LastPrice;
		/// <summary>
		/// ����
		/// </summary>
		int Volume;
		/// <summary>
		/// �ɽ����
		/// </summary>
		double Turnover;
		/// <summary>
		/// �ֲ���
		/// </summary>
		double OpenInterest;
	};
	/// <summary>
	/// �������ż�����
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcMarketDataBestPriceField
	{
		/// <summary>
		/// �����һ
		/// </summary>
		double BidPrice1;
		/// <summary>
		/// ������һ
		/// </summary>
		int BidVolume1;
		/// <summary>
		/// ������һ
		/// </summary>
		double AskPrice1;
		/// <summary>
		/// ������һ
		/// </summary>
		int AskVolume1;
	};
	/// <summary>
	/// �����������������
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcMarketDataBid23Field
	{
		/// <summary>
		/// ����۶�
		/// </summary>
		double BidPrice2;
		/// <summary>
		/// ��������
		/// </summary>
		int BidVolume2;
		/// <summary>
		/// �������
		/// </summary>
		double BidPrice3;
		/// <summary>
		/// ��������
		/// </summary>
		int BidVolume3;
	};
	/// <summary>
	/// ������������������
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcMarketDataAsk23Field
	{
		/// <summary>
		/// �����۶�
		/// </summary>
		double AskPrice2;
		/// <summary>
		/// ��������
		/// </summary>
		int AskVolume2;
		/// <summary>
		/// ��������
		/// </summary>
		double AskPrice3;
		/// <summary>
		/// ��������
		/// </summary>
		int AskVolume3;
	};
	/// <summary>
	/// ���������ġ�������
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcMarketDataBid45Field
	{
		/// <summary>
		/// �������
		/// </summary>
		double BidPrice4;
		/// <summary>
		/// ��������
		/// </summary>
		int BidVolume4;
		/// <summary>
		/// �������
		/// </summary>
		double BidPrice5;
		/// <summary>
		/// ��������
		/// </summary>
		int BidVolume5;
	};
	/// <summary>
	/// ���������ġ�������
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcMarketDataAsk45Field
	{
		/// <summary>
		/// ��������
		/// </summary>
		double AskPrice4;
		/// <summary>
		/// ��������
		/// </summary>
		int AskVolume4;
		/// <summary>
		/// ��������
		/// </summary>
		double AskPrice5;
		/// <summary>
		/// ��������
		/// </summary>
		int AskVolume5;
	};
	/// <summary>
	/// �������ʱ������
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcMarketDataUpdateTimeField
	{
		/// <summary>
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ����޸�ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ UpdateTime;
		/// <summary>
		/// ����޸ĺ���
		/// </summary>
		int UpdateMillisec;
		/// <summary>
		/// ҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionDay;
	};
	/// <summary>
	/// �ɽ�����
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcMarketDataAveragePriceField
	{
		/// <summary>
		/// ���վ���
		/// </summary>
		double AveragePrice;
	};
	/// <summary>
	/// ���齻������������
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcMarketDataExchangeField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};
	/// <summary>
	/// ��Ϣ�ַ�
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential)]
	public ref struct SecurityFtdcDisseminationField
	{
		/// <summary>
		/// ����ϵ�к�
		/// </summary>
		short SequenceSeries;
		/// <summary>
		/// ���к�
		/// </summary>
		int SequenceNo;
	};

};
