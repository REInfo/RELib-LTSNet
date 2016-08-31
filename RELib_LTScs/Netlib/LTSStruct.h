

#pragma once

using namespace System;
using namespace System::Runtime::InteropServices;

namespace RELib_LTSNet
{

	public enum struct EnumRESUMETYPE : Byte
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
		Normal = (Byte)'0',
		/// <summary>
		/// ���ݳɽ����ɱ���
		/// </summary>
		GenOrderByTrade = (Byte)'1',
	};
	/// <summary>
	/// ����������״̬ CExchangeConnectStatusType
	/// </summary>
	public enum struct EnumExchangeConnectStatusType : Byte
	{
		/// <summary>
		/// û���κ�����
		/// </summary>
		NoConnection = (Byte)'1',
		/// <summary>
		/// �Ѿ�������Լ��ѯ����
		/// </summary>
		QryInstrumentSent = (Byte)'2',
		/// <summary>
		/// �Ѿ���ȡ��Ϣ
		/// </summary>
		GotInformation = (Byte)'9',
	};
	/// <summary>
	/// ��Ʒ���� CProductClassType
	/// </summary>
	public enum struct EnumProductClassType : Byte
	{
		/// <summary>
		/// �ڻ�
		/// </summary>
		Futures = (Byte)'1',
		/// <summary>
		/// ��Ȩ
		/// </summary>
		Options = (Byte)'2',
		/// <summary>
		/// ���
		/// </summary>
		Combination = (Byte)'3',
		/// <summary>
		/// ����
		/// </summary>
		Spot = (Byte)'4',
		/// <summary>
		/// ��ת��
		/// </summary>
		EFP = (Byte)'5',
		/// <summary>
		/// ֤ȯA��
		/// </summary>
		StockA = (Byte)'6',
		/// <summary>
		/// ֤ȯB��
		/// </summary>
		StockB = (Byte)'7',
		/// <summary>
		/// ETF
		/// </summary>
		ETF = (Byte)'8',
		/// <summary>
		/// ETF����
		/// </summary>
		ETFPurRed = (Byte)'9',
	};
	/// <summary>
	/// �ֲ����� CPositionTypeType
	/// </summary>
	public enum struct EnumPositionTypeType : Byte
	{
		/// <summary>
		/// ���ֲ�
		/// </summary>
		Net = (Byte)'1',
		/// <summary>
		/// �ۺϳֲ�
		/// </summary>
		Gross = (Byte)'2',
	};
	/// <summary>
	/// �ֲ��������� CPositionDateTypeType
	/// </summary>
	public enum struct EnumPositionDateTypeType : Byte
	{
		/// <summary>
		/// ʹ����ʷ�ֲ�
		/// </summary>
		UseHistory = (Byte)'1',
		/// <summary>
		/// ��ʹ����ʷ�ֲ�
		/// </summary>
		NoUseHistory = (Byte)'2',
	};
	/// <summary>
	/// ��Լ��������״̬ CInstLifePhaseType
	/// </summary>
	public enum struct EnumInstLifePhaseType : Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		NotStart = (Byte)'0',
		/// <summary>
		/// ����
		/// </summary>
		Started = (Byte)'1',
		/// <summary>
		/// ͣ��
		/// </summary>
		Pause = (Byte)'2',
		/// <summary>
		/// ����
		/// </summary>
		Expired = (Byte)'3',
	};
	/// <summary>
	/// �ֲֽ������� CPosTradeTypeType
	/// </summary>
	public enum struct EnumPosTradeTypeType : Byte
	{
		/// <summary>
		/// ���������ֲ�������
		/// </summary>
		CanSelTodayPos = (Byte)'1',
		/// <summary>
		/// ���������ֲֲ�������
		/// </summary>
		CannotSellTodayPos = (Byte)'2',
	};
	/// <summary>
	/// ֤������ CIdCardTypeType
	/// </summary>
	public enum struct EnumIdCardTypeType : Byte
	{
		/// <summary>
		/// ��֯��������
		/// </summary>
		EID = (Byte)'0',
		/// <summary>
		/// ���֤
		/// </summary>
		IDCard = (Byte)'1',
		/// <summary>
		/// ����֤
		/// </summary>
		OfficerIDCard = (Byte)'2',
		/// <summary>
		/// ����֤
		/// </summary>
		PoliceIDCard = (Byte)'3',
		/// <summary>
		/// ʿ��֤
		/// </summary>
		SoldierIDCard = (Byte)'4',
		/// <summary>
		/// ���ڲ�
		/// </summary>
		HouseholdRegister = (Byte)'5',
		/// <summary>
		/// ����
		/// </summary>
		Passport = (Byte)'6',
		/// <summary>
		/// ̨��֤
		/// </summary>
		TaiwanCompatriotIDCard = (Byte)'7',
		/// <summary>
		/// ����֤
		/// </summary>
		HomeComingCard = (Byte)'8',
		/// <summary>
		/// Ӫҵִ�պ�
		/// </summary>
		LicenseNo = (Byte)'9',
		/// <summary>
		/// ˰��ǼǺ�
		/// </summary>
		TaxNo = (Byte)'A',
		/// <summary>
		/// ����֤��
		/// </summary>
		OtherCard = (Byte)'x',
	};
	/// <summary>
	/// ���ױ������� CClientTypeType
	/// </summary>
	public enum struct EnumClientTypeType : Byte
	{
		/// <summary>
		/// ��ͨ
		/// </summary>
		Normal = (Byte)'1',
		/// <summary>
		/// ���ý���
		/// </summary>
		Credit = (Byte)'2',
		/// <summary>
		/// ����Ʒ�˻�
		/// </summary>
		Derive = (Byte)'3',
		/// <summary>
		/// ��������
		/// </summary>
		Other = (Byte)'4',
	};
	/// <summary>
	/// ���ܴ��� CFunctionCodeType
	/// </summary>
	public enum struct EnumFunctionCodeType : Byte
	{
		/// <summary>
		/// ǿ���û��ǳ�
		/// </summary>
		ForceUserLogout = (Byte)'2',
		/// <summary>
		/// ��������û�����
		/// </summary>
		UserPasswordUpdate = (Byte)'3',
		/// <summary>
		/// ������͹�˾����
		/// </summary>
		BrokerPasswordUpdate = (Byte)'4',
		/// <summary>
		/// ���Ͷ���߿���
		/// </summary>
		InvestorPasswordUpdate = (Byte)'5',
		/// <summary>
		/// ��������
		/// </summary>
		OrderInsert = (Byte)'6',
		/// <summary>
		/// ��������
		/// </summary>
		OrderAction = (Byte)'7',
		/// <summary>
		/// ͬ��ϵͳ����
		/// </summary>
		SyncSystemData = (Byte)'8',
		/// <summary>
		/// ͬ�����͹�˾����
		/// </summary>
		SyncBrokerData = (Byte)'9',
		/// <summary>
		/// ������ѯ
		/// </summary>
		SuperQuery = (Byte)'B',
		/// <summary>
		/// ��������
		/// </summary>
		ParkedOrderInsert = (Byte)'C',
		/// <summary>
		/// ��������
		/// </summary>
		ParkedOrderAction = (Byte)'D',
		/// <summary>
		/// ͬ����̬����
		/// </summary>
		SyncOTP = (Byte)'E',
		/// <summary>
		/// δ֪������
		/// </summary>
		UnkownOrderAction = (Byte)'F',
		/// <summary>
		/// ת�й�
		/// </summary>
		DepositoryTransfer = (Byte)'G',
		/// <summary>
		/// ��ȯ��ת
		/// </summary>
		ExcessStockTransfer = (Byte)'H',
		/// <summary>
		/// �ʽ�ز�
		/// </summary>
		FundBack = (Byte)'I',
	};
	/// <summary>
	/// �û����� CUserTypeType
	/// </summary>
	public enum struct EnumUserTypeType : Byte
	{
		/// <summary>
		/// Ͷ����
		/// </summary>
		Investor = (Byte)'0',
		/// <summary>
		/// ����Ա
		/// </summary>
		Operator = (Byte)'1',
		/// <summary>
		/// ����Ա
		/// </summary>
		SuperUser = (Byte)'2',
	};
	/// <summary>
	/// ���͹�˾���ܴ��� CBrokerFunctionCodeType
	/// </summary>
	public enum struct EnumBrokerFunctionCodeType : Byte
	{
		/// <summary>
		/// ǿ���û��ǳ�
		/// </summary>
		ForceUserLogout = (Byte)'1',
		/// <summary>
		/// ����û�����
		/// </summary>
		UserPasswordUpdate = (Byte)'2',
		/// <summary>
		/// ͬ�����͹�˾����
		/// </summary>
		SyncBrokerData = (Byte)'3',
		/// <summary>
		/// ��������
		/// </summary>
		OrderInsert = (Byte)'5',
		/// <summary>
		/// ��������
		/// </summary>
		OrderAction = (Byte)'6',
		/// <summary>
		/// ȫ����ѯ
		/// </summary>
		AllQuery = (Byte)'7',
		/// <summary>
		/// δ֪������
		/// </summary>
		UnkownOrderAction = (Byte)'8',
		/// <summary>
		/// ת�й�
		/// </summary>
		DepositoryTransfer = (Byte)'9',
		/// <summary>
		/// ��ȯ��ת
		/// </summary>
		ExcessStockTransfer = (Byte)'A',
		/// <summary>
		/// �ʽ���ת
		/// </summary>
		FundInterTransfer = (Byte)'B',
		/// <summary>
		/// �ʽ�ز�
		/// </summary>
		FundBack = (Byte)'C',
		/// <summary>
		/// ϵͳ���ܣ�����/�ǳ�/�޸������
		/// </summary>
		log = (Byte)'a',
		/// <summary>
		/// ������ѯ����ѯ�������ݣ����Լ���������ȳ���
		/// </summary>
		BaseQry = (Byte)'b',
		/// <summary>
		/// ���ײ�ѯ�����ɽ���ί��
		/// </summary>
		TradeQry = (Byte)'c',
		/// <summary>
		/// ���׹��ܣ�����������
		/// </summary>
		Trade = (Byte)'d',
		/// <summary>
		/// ת��
		/// </summary>
		Virement = (Byte)'e',
		/// <summary>
		/// ��ѯ/������ѯ�Ự�����˵�
		/// </summary>
		Session = (Byte)'g',
		/// <summary>
		/// ͬ����̬����
		/// </summary>
		SyncOTP = (Byte)'E',
	};
	/// <summary>
	/// �˻����� CAccountTypeType
	/// </summary>
	public enum struct EnumAccountTypeType : Byte
	{
		/// <summary>
		/// ��ͨ�˻�
		/// </summary>
		Normal = (Byte)'1',
		/// <summary>
		/// �����˻�
		/// </summary>
		Credit = (Byte)'2',
		/// <summary>
		/// ����Ʒ�˻�
		/// </summary>
		Derive = (Byte)'3',
		/// <summary>
		/// ��������
		/// </summary>
		Other = (Byte)'4',
	};
	/// <summary>
	/// Ͷ���߷�Χ CDepartmentRangeType
	/// </summary>
	public enum struct EnumDepartmentRangeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		All = (Byte)'1',
		/// <summary>
		/// ��֯�ܹ�
		/// </summary>
		Group = (Byte)'2',
		/// <summary>
		/// ��һͶ����
		/// </summary>
		Single = (Byte)'3',
	};
	/// <summary>
	/// �ͻ�Ȩ������ CUserRightTypeType
	/// </summary>
	public enum struct EnumUserRightTypeType : Byte
	{
		/// <summary>
		/// ��¼
		/// </summary>
		Logon = (Byte)'1',
		/// <summary>
		/// ����ת��
		/// </summary>
		Transfer = (Byte)'2',
		/// <summary>
		/// �ʼĽ��㵥
		/// </summary>
		EMail = (Byte)'3',
		/// <summary>
		/// ������㵥
		/// </summary>
		Fax = (Byte)'4',
		/// <summary>
		/// ������
		/// </summary>
		ConditionOrder = (Byte)'5',
	};
	/// <summary>
	/// Ͷ���ױ���־ CHedgeFlagType
	/// </summary>
	public enum struct EnumHedgeFlagType : Byte
	{
		/// <summary>
		/// Ͷ��
		/// </summary>
		Speculation = (Byte)'1',
		/// <summary>
		/// �ױ�
		/// </summary>
		Hedge = (Byte)'3',
	};
	/// <summary>
	/// �������� CDirectionType
	/// </summary>
	public enum struct EnumDirectionType : Byte
	{
		/// <summary>
		/// ��
		/// </summary>
		Buy = (Byte)'0',
		/// <summary>
		/// ��
		/// </summary>
		Sell = (Byte)'1',
		/// <summary>
		/// ETF�깺
		/// </summary>
		ETFPur = (Byte)'2',
		/// <summary>
		/// ETF���
		/// </summary>
		ETFRed = (Byte)'3',
		/// <summary>
		/// �ֽ������ֻ�����ر�
		/// </summary>
		CashIn = (Byte)'4',
		/// <summary>
		/// ծȯ���
		/// </summary>
		PledgeBondIn = (Byte)'5',
		/// <summary>
		/// ծȯ����
		/// </summary>
		PledgeBondOut = (Byte)'6',
		/// <summary>
		/// ���
		/// </summary>
		Rationed = (Byte)'7',
		/// <summary>
		/// ת�й�
		/// </summary>
		DepositoryTransfer = (Byte)'8',
		/// <summary>
		/// �����˻����
		/// </summary>
		CreditRationed = (Byte)'9',
		/// <summary>
		/// ����Ʒ����
		/// </summary>
		BuyCollateral = (Byte)'A',
		/// <summary>
		/// ����Ʒ����
		/// </summary>
		SellCollateral = (Byte)'B',
		/// <summary>
		/// ����Ʒת��
		/// </summary>
		CollateralTransferIn = (Byte)'C',
		/// <summary>
		/// ����Ʒת��
		/// </summary>
		CollateralTransferOut = (Byte)'D',
		/// <summary>
		/// ��������
		/// </summary>
		MarginTrade = (Byte)'E',
		/// <summary>
		/// ��ȯ����
		/// </summary>
		ShortSell = (Byte)'F',
		/// <summary>
		/// ��ȯ����
		/// </summary>
		RepayMargin = (Byte)'G',
		/// <summary>
		/// ��ȯ��ȯ
		/// </summary>
		RepayStock = (Byte)'H',
		/// <summary>
		/// ֱ�ӻ���
		/// </summary>
		DirectRepayMargin = (Byte)'I',
		/// <summary>
		/// ֱ�ӻ�ȯ
		/// </summary>
		DirectRepayStock = (Byte)'J',
		/// <summary>
		/// ��ȯ��ת
		/// </summary>
		ExcessStockTransfer = (Byte)'K',
		/// <summary>
		/// OF�깺
		/// </summary>
		OFPur = (Byte)'L',
		/// <summary>
		/// OF���
		/// </summary>
		OFRed = (Byte)'M',
		/// <summary>
		/// SF���
		/// </summary>
		SFSplit = (Byte)'N',
		/// <summary>
		/// SF�ϲ�
		/// </summary>
		SFMerge = (Byte)'O',
		/// <summary>
		/// ����
		/// </summary>
		Covered = (Byte)'P',
		/// <summary>
		/// ֤ȯ����(��)/�ⶳ(ƽ)
		/// </summary>
		Freeze = (Byte)'Q',
		/// <summary>
		/// ��Ȩ
		/// </summary>
		Execute = (Byte)'R',
		/// <summary>
		/// CB����
		/// </summary>
		CBRed = (Byte)'S',
		/// <summary>
		/// CBת��
		/// </summary>
		CBConv = (Byte)'T',
		/// <summary>
		/// OF�Ϲ�
		/// </summary>
		OFSub = (Byte)'U',
		/// <summary>
		/// �����깺
		/// </summary>
		OTCPur = (Byte)'V',
		/// <summary>
		/// �������
		/// </summary>
		OTCRed = (Byte)'W',
	};
	/// <summary>
	/// �ɽ����� CTradeTypeType
	/// </summary>
	public enum struct EnumTradeTypeType : Byte
	{
		/// <summary>
		/// ��ͨ�ɽ�
		/// </summary>
		Common = (Byte)'0',
		/// <summary>
		/// ��Ȩִ��
		/// </summary>
		OptionsExecution = (Byte)'1',
		/// <summary>
		/// OTC�ɽ�
		/// </summary>
		OTC = (Byte)'2',
		/// <summary>
		/// ��ת�������ɽ�
		/// </summary>
		EFPDerived = (Byte)'3',
		/// <summary>
		/// ��������ɽ�
		/// </summary>
		CombinationDerived = (Byte)'4',
		/// <summary>
		/// ETF�깺
		/// </summary>
		EFTPurchase = (Byte)'5',
		/// <summary>
		/// ETF���
		/// </summary>
		EFTRedem = (Byte)'6',
	};
	/// <summary>
	/// �������깺���״̬ CCreationredemptionStatusType
	/// </summary>
	public enum struct EnumCreationredemptionStatusType : Byte
	{
		/// <summary>
		/// �������깺���
		/// </summary>
		Forbidden = (Byte)'0',
		/// <summary>
		/// ��ʾ�����깺�����
		/// </summary>
		Allow = (Byte)'1',
		/// <summary>
		/// �����깺�����������
		/// </summary>
		OnlyPurchase = (Byte)'2',
		/// <summary>
		/// �������깺���������
		/// </summary>
		OnlyRedeem = (Byte)'3',
	};
	/// <summary>
	/// ETF�ֽ������־ CETFCurrenceReplaceStatusType
	/// </summary>
	public enum struct EnumETFCurrenceReplaceStatusType : Byte
	{
		/// <summary>
		/// ��ֹ�ֽ����
		/// </summary>
		Forbidden = (Byte)'0',
		/// <summary>
		/// �����ֽ����
		/// </summary>
		Allow = (Byte)'1',
		/// <summary>
		/// �����ֽ����
		/// </summary>
		Force = (Byte)'2',
		/// <summary>
		/// ���г���Ʊ�˲��ֽ����
		/// </summary>
		CrossMarketComp = (Byte)'3',
		/// <summary>
		/// ���г������ֽ����
		/// </summary>
		CrossMarketFroce = (Byte)'4',
		/// <summary>
		/// �ǻ����г��ɷ�֤ȯ�˲��ֽ����
		/// </summary>
		OtherMarketComp = (Byte)'5',
		/// <summary>
		/// �ǻ����г��ɷ�֤ȯ�����ֽ����
		/// </summary>
		OtherMarketFroce = (Byte)'6',
	};
	/// <summary>
	/// �ɱ����� CCapitalStockTypeType
	/// </summary>
	public enum struct EnumCapitalStockTypeType : Byte
	{
		/// <summary>
		/// ��ͨ�ɱ�
		/// </summary>
		TOTALSTOCK = (Byte)'1',
		/// <summary>
		/// ��ͨ�ɱ�
		/// </summary>
		CIRCULATION = (Byte)'2',
	};
	/// <summary>
	/// ��֤��۸����� CMarginPriceTypeType
	/// </summary>
	public enum struct EnumMarginPriceTypeType : Byte
	{
		/// <summary>
		/// ������
		/// </summary>
		PreSettlementPrice = (Byte)'1',
		/// <summary>
		/// ���¼�
		/// </summary>
		SettlementPrice = (Byte)'2',
		/// <summary>
		/// �ɽ�����
		/// </summary>
		AveragePrice = (Byte)'3',
		/// <summary>
		/// ���ּ�
		/// </summary>
		OpenPrice = (Byte)'4',
	};
	/// <summary>
	/// ӯ���㷨 CAlgorithmType
	/// </summary>
	public enum struct EnumAlgorithmType : Byte
	{
		/// <summary>
		/// ��ӯ����������
		/// </summary>
		All = (Byte)'1',
		/// <summary>
		/// ��ӯ���ƣ�������
		/// </summary>
		OnlyLost = (Byte)'2',
		/// <summary>
		/// ��ӯ�ƣ���������
		/// </summary>
		OnlyGain = (Byte)'3',
		/// <summary>
		/// ��ӯ������������
		/// </summary>
		None = (Byte)'4',
	};
	/// <summary>
	/// �Ƿ����ƽ��ӯ�� CIncludeCloseProfitType
	/// </summary>
	public enum struct EnumIncludeCloseProfitType : Byte
	{
		/// <summary>
		/// ����ƽ��ӯ��
		/// </summary>
		Include = (Byte)'0',
		/// <summary>
		/// ������ƽ��ӯ��
		/// </summary>
		NotInclude = (Byte)'2',
	};
	/// <summary>
	/// �Ƿ��ܿ���������� CAllWithoutTradeType
	/// </summary>
	public enum struct EnumAllWithoutTradeType : Byte
	{
		/// <summary>
		/// ���ܿ����������
		/// </summary>
		Enable = (Byte)'0',
		/// <summary>
		/// �ܿ����������
		/// </summary>
		Disable = (Byte)'2',
		/// <summary>
		/// �޲ֲ��ܿ����������
		/// </summary>
		NoHoldEnable = (Byte)'3',
	};
	/// <summary>
	/// �ֲִ����㷨��� CHandlePositionAlgoIDType
	/// </summary>
	public enum struct EnumHandlePositionAlgoIDType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Base = (Byte)'1',
		/// <summary>
		/// �ǽ���
		/// </summary>
		NoneTrade = (Byte)'4',
		/// <summary>
		/// ֤ȯ
		/// </summary>
		Stock = (Byte)'5',
	};
	/// <summary>
	/// ��Ȩ������������ COpenRestrictTypeType
	/// </summary>
	public enum struct EnumOpenRestrictTypeType : Byte
	{
		/// <summary>
		/// ���뿪��
		/// </summary>
		BuyOpen = (Byte)'0',
		/// <summary>
		/// ���п���
		/// </summary>
		AllOpen = (Byte)'1',
	};
	/// <summary>
	/// ����ϵͳ�������� CTradeParamIDType
	/// </summary>
	public enum struct EnumTradeParamIDType : Byte
	{
		/// <summary>
		/// ϵͳ�����㷨
		/// </summary>
		EncryptionStandard = (Byte)'E',
		/// <summary>
		/// �û����Ự��
		/// </summary>
		SingleUserSessionMaxNum = (Byte)'S',
		/// <summary>
		/// ���������¼ʧ����
		/// </summary>
		LoginFailMaxNum = (Byte)'L',
		/// <summary>
		/// �Ƿ�ǿ����֤
		/// </summary>
		IsAuthForce = (Byte)'A',
		/// <summary>
		/// �Ƿ������û��¼�
		/// </summary>
		GenUserEvent = (Byte)'G',
		/// <summary>
		/// ��ʼ�������ر��
		/// </summary>
		StartOrderLocalID = (Byte)'O',
		/// <summary>
		/// ������ȯ��ȯ��ȯ�㷨
		/// </summary>
		RepayStockAlgo = (Byte)'R',
		/// <summary>
		/// ����Ʒ�˻��ʽ���ȡ��
		/// </summary>
		DeriveWithdrawRatio = (Byte)'D',
		/// <summary>
		/// ��Ȩ��Ȩ���������ʼʱ��
		/// </summary>
		ExecuteStartTime = (Byte)'T',
		/// <summary>
		/// ֻ�ɳ�����ʷ��ȯ��ծ
		/// </summary>
		OnlyRepayHisStock = (Byte)'H',
		/// <summary>
		/// ��Ȩ������������
		/// </summary>
		OpenRestrictType = (Byte)'X',
		/// <summary>
		/// ��ֵ�����Ƿ񶳽��ʽ�
		/// </summary>
		IPOFrozeCash = (Byte)'I',
		/// <summary>
		/// �ʽ�ز���ʼʱ��
		/// </summary>
		FundBackStartTime = (Byte)'F',
		/// <summary>
		/// �Ͻ�����ʼϵͳ���
		/// </summary>
		SSEStartIndex = (Byte)'U',
		/// <summary>
		/// �����ʼϵͳ���
		/// </summary>
		SZEStartIndex = (Byte)'V',
	};
	/// <summary>
	/// Ͷ���߷�Χ CInvestorRangeType
	/// </summary>
	public enum struct EnumInvestorRangeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		All = (Byte)'1',
		/// <summary>
		/// Ͷ������
		/// </summary>
		Group = (Byte)'2',
		/// <summary>
		/// ��һͶ����
		/// </summary>
		Single = (Byte)'3',
	};
	/// <summary>
	/// ����ͬ��״̬ CDataSyncStatusType
	/// </summary>
	public enum struct EnumDataSyncStatusType : Byte
	{
		/// <summary>
		/// δͬ��
		/// </summary>
		Asynchronous = (Byte)'1',
		/// <summary>
		/// ͬ����
		/// </summary>
		Synchronizing = (Byte)'2',
		/// <summary>
		/// ��ͬ��
		/// </summary>
		Synchronized = (Byte)'3',
	};
	/// <summary>
	/// ����������Ա����״̬ CTraderConnectStatusType
	/// </summary>
	public enum struct EnumTraderConnectStatusType : Byte
	{
		/// <summary>
		/// û���κ�����
		/// </summary>
		NotConnected = (Byte)'1',
		/// <summary>
		/// �Ѿ�����
		/// </summary>
		Connected = (Byte)'2',
		/// <summary>
		/// �Ѿ�������Լ��ѯ����
		/// </summary>
		QryInstrumentSent = (Byte)'3',
		/// <summary>
		/// ����˽����
		/// </summary>
		SubPrivateFlow = (Byte)'4',
	};
	/// <summary>
	/// ��������״̬ COrderActionStatusType
	/// </summary>
	public enum struct EnumOrderActionStatusType : Byte
	{
		/// <summary>
		/// �Ѿ��ύ
		/// </summary>
		Submitted = (Byte)'a',
		/// <summary>
		/// �Ѿ�����
		/// </summary>
		Accepted = (Byte)'b',
		/// <summary>
		/// �Ѿ����ܾ�
		/// </summary>
		Rejected = (Byte)'c',
	};
	/// <summary>
	/// ����״̬ COrderStatusType
	/// </summary>
	public enum struct EnumOrderStatusType : Byte
	{
		/// <summary>
		/// ȫ���ɽ�
		/// </summary>
		AllTraded = (Byte)'0',
		/// <summary>
		/// ���ֳɽ����ڶ�����
		/// </summary>
		PartTradedQueueing = (Byte)'1',
		/// <summary>
		/// ���ֳɽ����ڶ�����
		/// </summary>
		PartTradedNotQueueing = (Byte)'2',
		/// <summary>
		/// δ�ɽ����ڶ�����
		/// </summary>
		NoTradeQueueing = (Byte)'3',
		/// <summary>
		/// δ�ɽ����ڶ�����
		/// </summary>
		NoTradeNotQueueing = (Byte)'4',
		/// <summary>
		/// ����
		/// </summary>
		Canceled = (Byte)'5',
		/// <summary>
		/// δ֪
		/// </summary>
		Unknown = (Byte)'a',
		/// <summary>
		/// ��δ����
		/// </summary>
		NotTouched = (Byte)'b',
		/// <summary>
		/// �Ѵ���
		/// </summary>
		Touched = (Byte)'c',
	};
	/// <summary>
	/// �����ύ״̬ COrderSubmitStatusType
	/// </summary>
	public enum struct EnumOrderSubmitStatusType : Byte
	{
		/// <summary>
		/// �Ѿ��ύ
		/// </summary>
		InsertSubmitted = (Byte)'0',
		/// <summary>
		/// �����Ѿ��ύ
		/// </summary>
		CancelSubmitted = (Byte)'1',
		/// <summary>
		/// �޸��Ѿ��ύ
		/// </summary>
		ModifySubmitted = (Byte)'2',
		/// <summary>
		/// �Ѿ�����
		/// </summary>
		Accepted = (Byte)'3',
		/// <summary>
		/// �����Ѿ����ܾ�
		/// </summary>
		InsertRejected = (Byte)'4',
		/// <summary>
		/// �����Ѿ����ܾ�
		/// </summary>
		CancelRejected = (Byte)'5',
		/// <summary>
		/// �ĵ��Ѿ����ܾ�
		/// </summary>
		ModifyRejected = (Byte)'6',
	};
	/// <summary>
	/// �ֲ����� CPositionDateType
	/// </summary>
	public enum struct EnumPositionDateType : Byte
	{
		/// <summary>
		/// ���ճֲ�
		/// </summary>
		Today = (Byte)'1',
		/// <summary>
		/// ��ʷ�ֲ�
		/// </summary>
		History = (Byte)'2',
	};
	/// <summary>
	/// ���׽�ɫ CTradingRoleType
	/// </summary>
	public enum struct EnumTradingRoleType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Broker = (Byte)'1',
		/// <summary>
		/// ��Ӫ
		/// </summary>
		Host = (Byte)'2',
		/// <summary>
		/// ������
		/// </summary>
		Maker = (Byte)'3',
	};
	/// <summary>
	/// �ֲֶ�շ��� CPosiDirectionType
	/// </summary>
	public enum struct EnumPosiDirectionType : Byte
	{
		/// <summary>
		/// ��
		/// </summary>
		Net = (Byte)'1',
		/// <summary>
		/// ��ͷ
		/// </summary>
		Long = (Byte)'2',
		/// <summary>
		/// ��ͷ
		/// </summary>
		Short = (Byte)'3',
		/// <summary>
		/// ����
		/// </summary>
		Covered = (Byte)'4',
	};
	/// <summary>
	/// �����۸����� COrderPriceTypeType
	/// </summary>
	public enum struct EnumOrderPriceTypeType : Byte
	{
		/// <summary>
		/// ��ʱ�ɽ�ʣ�೷���м۵�
		/// </summary>
		AnyPrice = (Byte)'1',
		/// <summary>
		/// �޼�
		/// </summary>
		LimitPrice = (Byte)'2',
		/// <summary>
		/// �����嵵��ʱ�ɽ�ʣ�೷���м۵�
		/// </summary>
		BestPrice = (Byte)'3',
		/// <summary>
		/// �����嵵��ʱ�ɽ�ʣ��ת�޼��м۵�
		/// </summary>
		BestLimitPrice = (Byte)'4',
		/// <summary>
		/// ȫ���ɽ������м۵�
		/// </summary>
		AllPrice = (Byte)'5',
		/// <summary>
		/// �������ż۸��м۵�
		/// </summary>
		ForwardBestPrice = (Byte)'6',
		/// <summary>
		/// �Է����ż۸��м۵�
		/// </summary>
		ReverseBestPrice = (Byte)'7',
		/// <summary>
		/// ��ʱ�ɽ�ʣ��ת�޼��м۵�
		/// </summary>
		Any2LimitPrice = (Byte)'8',
		/// <summary>
		/// ȫ���ɽ������޼۵�
		/// </summary>
		AllLimitPrice = (Byte)'9',
		/// <summary>
		/// ��ǿ�޼۵�
		/// </summary>
		EnhancedLimitPrice = (Byte)'A',
		/// <summary>
		/// ����޼۵�
		/// </summary>
		FractionLimitPrice = (Byte)'B',
		/// <summary>
		/// ����A����������������
		/// </summary>
		ActiveANetPassSvrCode = (Byte)'G',
		/// <summary>
		/// ע��A����������������
		/// </summary>
		InactiveANetPassSvrCode = (Byte)'H',
		/// <summary>
		/// ����B����������������
		/// </summary>
		ActiveBNetPassSvrCode = (Byte)'I',
		/// <summary>
		/// ע��B����������������
		/// </summary>
		InactiveBNetPassSvrCode = (Byte)'J',
		/// <summary>
		/// �ع�ע��
		/// </summary>
		Repurchase = (Byte)'K',
		/// <summary>
		/// ָ������
		/// </summary>
		DesignatedCancel = (Byte)'L',
		/// <summary>
		/// ָ���Ǽ�
		/// </summary>
		Designated = (Byte)'M',
		/// <summary>
		/// ֤ȯ�����깺
		/// </summary>
		SubscribingShares = (Byte)'N',
		/// <summary>
		/// ֤ȯ�������
		/// </summary>
		Split = (Byte)'O',
		/// <summary>
		/// ҪԼ�չ��Ǽ�
		/// </summary>
		TenderOffer = (Byte)'P',
		/// <summary>
		/// ҪԼ�չ�����
		/// </summary>
		TenderOfferCancel = (Byte)'Q',
		/// <summary>
		/// ֤ȯͶƱ
		/// </summary>
		Ballot = (Byte)'R',
		/// <summary>
		/// ��תծת���Ǽ�
		/// </summary>
		ConvertibleBondsConvet = (Byte)'S',
		/// <summary>
		/// ��תծ���۵Ǽ�
		/// </summary>
		ConvertibleBondsRepurchase = (Byte)'T',
		/// <summary>
		/// Ȩ֤��Ȩ
		/// </summary>
		Exercise = (Byte)'U',
		/// <summary>
		/// ����ʽ�����깺
		/// </summary>
		PurchasingFunds = (Byte)'V',
		/// <summary>
		/// ����ʽ�������
		/// </summary>
		RedemingFunds = (Byte)'W',
		/// <summary>
		/// ����ʽ�����Ϲ�
		/// </summary>
		SubscribingFunds = (Byte)'X',
		/// <summary>
		/// ����ʽ����ת�й�ת��
		/// </summary>
		LOFIssue = (Byte)'Y',
		/// <summary>
		/// ����ʽ�������÷ֺ췽ʽ
		/// </summary>
		LOFSetBonusType = (Byte)'Z',
		/// <summary>
		/// ����ʽ����ת��Ϊ��������
		/// </summary>
		LOFConvert = (Byte)'a',
		/// <summary>
		/// ծȯ���
		/// </summary>
		DebentureStockIn = (Byte)'b',
		/// <summary>
		/// ծȯ����
		/// </summary>
		DebentureStockOut = (Byte)'c',
		/// <summary>
		/// ETF�깺
		/// </summary>
		PurchasesETF = (Byte)'d',
		/// <summary>
		/// ETF���
		/// </summary>
		RedeemETF = (Byte)'e',
	};
	/// <summary>
	/// ��ƽ��־ COffsetFlagType
	/// </summary>
	public enum struct EnumOffsetFlagType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Open = (Byte)'0',
		/// <summary>
		/// ƽ��
		/// </summary>
		Close = (Byte)'1',
		/// <summary>
		/// ǿƽ
		/// </summary>
		ForceClose = (Byte)'2',
		/// <summary>
		/// ƽ��
		/// </summary>
		CloseToday = (Byte)'3',
		/// <summary>
		/// ƽ��
		/// </summary>
		CloseYesterday = (Byte)'4',
		/// <summary>
		/// ǿ��
		/// </summary>
		ForceOff = (Byte)'5',
		/// <summary>
		/// ����ǿƽ
		/// </summary>
		LocalForceClose = (Byte)'6',
	};
	/// <summary>
	/// ǿƽԭ�� CForceCloseReasonType
	/// </summary>
	public enum struct EnumForceCloseReasonType : Byte
	{
		/// <summary>
		/// ��ǿƽ
		/// </summary>
		NotForceClose = (Byte)'0',
		/// <summary>
		/// �ʽ���
		/// </summary>
		LackDeposit = (Byte)'1',
		/// <summary>
		/// �ͻ�����
		/// </summary>
		ClientOverPositionLimit = (Byte)'2',
		/// <summary>
		/// ��Ա����
		/// </summary>
		MemberOverPositionLimit = (Byte)'3',
		/// <summary>
		/// �ֲַ�������
		/// </summary>
		NotMultiple = (Byte)'4',
		/// <summary>
		/// Υ��
		/// </summary>
		Violation = (Byte)'5',
		/// <summary>
		/// ����
		/// </summary>
		Other = (Byte)'6',
		/// <summary>
		/// ��Ȼ���ٽ�����
		/// </summary>
		PersonDeliv = (Byte)'7',
	};
	/// <summary>
	/// �������� COrderTypeType
	/// </summary>
	public enum struct EnumOrderTypeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Normal = (Byte)'0',
		/// <summary>
		/// ��������
		/// </summary>
		DeriveFromQuote = (Byte)'1',
		/// <summary>
		/// �������
		/// </summary>
		DeriveFromCombination = (Byte)'2',
		/// <summary>
		/// ��ϱ���
		/// </summary>
		Combination = (Byte)'3',
		/// <summary>
		/// ������
		/// </summary>
		ConditionalOrder = (Byte)'4',
		/// <summary>
		/// ������
		/// </summary>
		Swap = (Byte)'5',
	};
	/// <summary>
	/// ��Ч������ CTimeConditionType
	/// </summary>
	public enum struct EnumTimeConditionType : Byte
	{
		/// <summary>
		/// ������ɣ�������
		/// </summary>
		IOC = (Byte)'1',
		/// <summary>
		/// ������Ч
		/// </summary>
		GFS = (Byte)'2',
		/// <summary>
		/// ������Ч
		/// </summary>
		GFD = (Byte)'3',
		/// <summary>
		/// ָ������ǰ��Ч
		/// </summary>
		GTD = (Byte)'4',
		/// <summary>
		/// ����ǰ��Ч
		/// </summary>
		GTC = (Byte)'5',
		/// <summary>
		/// ���Ͼ�����Ч
		/// </summary>
		GFA = (Byte)'6',
	};
	/// <summary>
	/// �ɽ������� CVolumeConditionType
	/// </summary>
	public enum struct EnumVolumeConditionType : Byte
	{
		/// <summary>
		/// �κ�����
		/// </summary>
		AV = (Byte)'1',
		/// <summary>
		/// ��С����
		/// </summary>
		MV = (Byte)'2',
		/// <summary>
		/// ȫ������
		/// </summary>
		CV = (Byte)'3',
	};
	/// <summary>
	/// �������� CContingentConditionType
	/// </summary>
	public enum struct EnumContingentConditionType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Immediately = (Byte)'1',
		/// <summary>
		/// ֹ��
		/// </summary>
		Touch = (Byte)'2',
		/// <summary>
		/// ֹӮ
		/// </summary>
		TouchProfit = (Byte)'3',
		/// <summary>
		/// Ԥ��
		/// </summary>
		ParkedOrder = (Byte)'4',
		/// <summary>
		/// ���¼۴���������
		/// </summary>
		LastPriceGreaterThanStopPrice = (Byte)'5',
		/// <summary>
		/// ���¼۴��ڵ���������
		/// </summary>
		LastPriceGreaterEqualStopPrice = (Byte)'6',
		/// <summary>
		/// ���¼�С��������
		/// </summary>
		LastPriceLesserThanStopPrice = (Byte)'7',
		/// <summary>
		/// ���¼�С�ڵ���������
		/// </summary>
		LastPriceLesserEqualStopPrice = (Byte)'8',
		/// <summary>
		/// ��һ�۴���������
		/// </summary>
		AskPriceGreaterThanStopPrice = (Byte)'9',
		/// <summary>
		/// ��һ�۴��ڵ���������
		/// </summary>
		AskPriceGreaterEqualStopPrice = (Byte)'A',
		/// <summary>
		/// ��һ��С��������
		/// </summary>
		AskPriceLesserThanStopPrice = (Byte)'B',
		/// <summary>
		/// ��һ��С�ڵ���������
		/// </summary>
		AskPriceLesserEqualStopPrice = (Byte)'C',
		/// <summary>
		/// ��һ�۴���������
		/// </summary>
		BidPriceGreaterThanStopPrice = (Byte)'D',
		/// <summary>
		/// ��һ�۴��ڵ���������
		/// </summary>
		BidPriceGreaterEqualStopPrice = (Byte)'E',
		/// <summary>
		/// ��һ��С��������
		/// </summary>
		BidPriceLesserThanStopPrice = (Byte)'F',
		/// <summary>
		/// ��һ��С�ڵ���������
		/// </summary>
		BidPriceLesserEqualStopPrice = (Byte)'H',
	};
	/// <summary>
	/// ������־ CActionFlagType
	/// </summary>
	public enum struct EnumActionFlagType : Byte
	{
		/// <summary>
		/// ɾ��
		/// </summary>
		Delete = (Byte)'0',
		/// <summary>
		/// �޸�
		/// </summary>
		Modify = (Byte)'3',
	};
	/// <summary>
	/// ����Ȩ�� CTradingRightType
	/// </summary>
	public enum struct EnumTradingRightType : Byte
	{
		/// <summary>
		/// ���Խ���
		/// </summary>
		Allow = (Byte)'0',
		/// <summary>
		/// ���ܽ���
		/// </summary>
		Forbidden = (Byte)'2',
	};
	/// <summary>
	/// ������Դ COrderSourceType
	/// </summary>
	public enum struct EnumOrderSourceType : Byte
	{
		/// <summary>
		/// ���Բ�����
		/// </summary>
		Participant = (Byte)'0',
		/// <summary>
		/// ���Թ���Ա
		/// </summary>
		Administrator = (Byte)'1',
	};
	/// <summary>
	/// �ɽ�����Դ CPriceSourceType
	/// </summary>
	public enum struct EnumPriceSourceType : Byte
	{
		/// <summary>
		/// ǰ�ɽ���
		/// </summary>
		LastPrice = (Byte)'0',
		/// <summary>
		/// ��ί�м�
		/// </summary>
		Buy = (Byte)'1',
		/// <summary>
		/// ��ί�м�
		/// </summary>
		Sell = (Byte)'2',
	};
	/// <summary>
	/// �û��¼����� CUserEventTypeType
	/// </summary>
	public enum struct EnumUserEventTypeType : Byte
	{
		/// <summary>
		/// ��¼
		/// </summary>
		Login = (Byte)'1',
		/// <summary>
		/// �ǳ�
		/// </summary>
		Logout = (Byte)'2',
		/// <summary>
		/// ���׳ɹ�
		/// </summary>
		Trading = (Byte)'3',
		/// <summary>
		/// ����ʧ��
		/// </summary>
		TradingError = (Byte)'4',
		/// <summary>
		/// �޸�����
		/// </summary>
		UpdatePassword = (Byte)'5',
		/// <summary>
		/// �ͻ�����֤
		/// </summary>
		Authenticate = (Byte)'6',
		/// <summary>
		/// ����
		/// </summary>
		Other = (Byte)'9',
	};
	/// <summary>
	/// ��̬�������� COTPTypeType
	/// </summary>
	public enum struct EnumOTPTypeType : Byte
	{
		/// <summary>
		/// �޶�̬����
		/// </summary>
		NONE = (Byte)'0',
		/// <summary>
		/// ʱ������
		/// </summary>
		TOTP = (Byte)'1',
	};
	/// <summary>
	/// �ɽ���Դ CTradeSourceType
	/// </summary>
	public enum struct EnumTradeSourceType : Byte
	{
		/// <summary>
		/// ���Խ�������ͨ�ر�
		/// </summary>
		NORMAL = (Byte)'0',
		/// <summary>
		/// ���Բ�ѯ
		/// </summary>
		QUERY = (Byte)'1',
	};
	/// <summary>
	/// ��ƱȨ�޷��� CInstrumentRangeType
	/// </summary>
	public enum struct EnumInstrumentRangeType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		All = (Byte)'1',
		/// <summary>
		/// ��Ʒ
		/// </summary>
		Product = (Byte)'2',
		/// <summary>
		/// ��ƱȨ��ģ��
		/// </summary>
		Model = (Byte)'3',
		/// <summary>
		/// ��Ʊ
		/// </summary>
		Stock = (Byte)'4',
		/// <summary>
		/// �г�
		/// </summary>
		Market = (Byte)'5',
	};
	/// <summary>
	/// ֤ȯ�������� CStockTradeTypeType
	/// </summary>
	public enum struct EnumStockTradeTypeType : Byte
	{
		/// <summary>
		/// �ɽ���֤ȯ
		/// </summary>
		Stock = (Byte)'0',
		/// <summary>
		/// ���������������
		/// </summary>
		BuyNetService = (Byte)'1',
		/// <summary>
		/// �ع�ע��
		/// </summary>
		CancelRepurchase = (Byte)'2',
		/// <summary>
		/// ָ������
		/// </summary>
		CancelRegister = (Byte)'3',
		/// <summary>
		/// ָ���Ǽ�
		/// </summary>
		Register = (Byte)'4',
		/// <summary>
		/// ���뷢���깺
		/// </summary>
		PurchaseIssue = (Byte)'5',
		/// <summary>
		/// �������
		/// </summary>
		Allotment = (Byte)'6',
		/// <summary>
		/// ����ҪԼ�չ�
		/// </summary>
		SellTender = (Byte)'7',
		/// <summary>
		/// ����ҪԼ�չ�
		/// </summary>
		BuyTender = (Byte)'8',
		/// <summary>
		/// ����ͶƱ
		/// </summary>
		NetVote = (Byte)'9',
		/// <summary>
		/// ������תծ����
		/// </summary>
		SellConvertibleBonds = (Byte)'a',
		/// <summary>
		/// Ȩ֤��Ȩ����
		/// </summary>
		OptionExecute = (Byte)'b',
		/// <summary>
		/// ����ʽ�����깺
		/// </summary>
		PurchaseOF = (Byte)'c',
		/// <summary>
		/// ����ʽ�������
		/// </summary>
		RedeemOF = (Byte)'d',
		/// <summary>
		/// ����ʽ�����Ϲ�
		/// </summary>
		SubscribeOF = (Byte)'e',
		/// <summary>
		/// ����ʽ����ת�й�ת��
		/// </summary>
		OFCustodianTranfer = (Byte)'f',
		/// <summary>
		/// ����ʽ����ֺ�����
		/// </summary>
		OFDividendConfig = (Byte)'g',
		/// <summary>
		/// ����ʽ����ת����������
		/// </summary>
		OFTransfer = (Byte)'h',
		/// <summary>
		/// ծȯ���
		/// </summary>
		BondsIn = (Byte)'i',
		/// <summary>
		/// ծȯ����
		/// </summary>
		BondsOut = (Byte)'j',
		/// <summary>
		/// EFT�깺
		/// </summary>
		PurchaseETF = (Byte)'k',
		/// <summary>
		/// EFT���
		/// </summary>
		RedeemETF = (Byte)'l',
		/// <summary>
		/// ��תծ���۵Ǽ�
		/// </summary>
		ConvertibleRegister = (Byte)'m',
	};
	/// <summary>
	/// �ʽ����㷨��� CHandleTradingAccountAlgoIDType
	/// </summary>
	public enum struct EnumHandleTradingAccountAlgoIDType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Base = (Byte)'1',
	};
	/// <summary>
	/// ��������� CFundIOTypeType
	/// </summary>
	public enum struct EnumFundIOTypeType : Byte
	{
		/// <summary>
		/// �����
		/// </summary>
		FundIO = (Byte)'1',
		/// <summary>
		/// ����ת��
		/// </summary>
		Transfer = (Byte)'2',
	};
	/// <summary>
	/// �ʽ����� CFundTypeType
	/// </summary>
	public enum struct EnumFundTypeType : Byte
	{
		/// <summary>
		/// ���д��
		/// </summary>
		Deposite = (Byte)'1',
		/// <summary>
		/// �����ʽ�
		/// </summary>
		ItemFund = (Byte)'2',
		/// <summary>
		/// ��˾����
		/// </summary>
		Company = (Byte)'3',
	};
	/// <summary>
	/// ������� CFundDirectionType
	/// </summary>
	public enum struct EnumFundDirectionType : Byte
	{
		/// <summary>
		/// ���
		/// </summary>
		In = (Byte)'1',
		/// <summary>
		/// ����
		/// </summary>
		Out = (Byte)'2',
	};
	/// <summary>
	/// ����ͳһ��ʶ���� CBankFlagType
	/// </summary>
	public enum struct EnumBankFlagType : Byte
	{
		/// <summary>
		/// ��������
		/// </summary>
		ICBC = (Byte)'1',
		/// <summary>
		/// ũҵ����
		/// </summary>
		ABC = (Byte)'2',
		/// <summary>
		/// �й�����
		/// </summary>
		BC = (Byte)'3',
		/// <summary>
		/// ��������
		/// </summary>
		CBC = (Byte)'4',
		/// <summary>
		/// ��ͨ����
		/// </summary>
		BOC = (Byte)'5',
		/// <summary>
		/// ��������
		/// </summary>
		Other = (Byte)'Z',
	};
	/// <summary>
	/// �ʽ�״̬ CFundStatusType
	/// </summary>
	public enum struct EnumFundStatusType : Byte
	{
		/// <summary>
		/// ��¼��
		/// </summary>
		Record = (Byte)'1',
		/// <summary>
		/// �Ѹ���
		/// </summary>
		Check = (Byte)'2',
		/// <summary>
		/// �ѳ���
		/// </summary>
		Charge = (Byte)'3',
	};
	/// <summary>
	/// ����Ƭ��־ CLastFragmentType
	/// </summary>
	public enum struct EnumLastFragmentType : Byte
	{
		/// <summary>
		/// ������Ƭ
		/// </summary>
		Yes = (Byte)'0',
		/// <summary>
		/// ��������Ƭ
		/// </summary>
		No = (Byte)'1',
	};
	/// <summary>
	/// �ͻ����� CCustTypeType
	/// </summary>
	public enum struct EnumCustTypeType : Byte
	{
		/// <summary>
		/// ��Ȼ��
		/// </summary>
		Person = (Byte)'0',
		/// <summary>
		/// ������
		/// </summary>
		Institution = (Byte)'1',
	};
	/// <summary>
	/// �ǻ���ʶ CYesNoIndicatorType
	/// </summary>
	public enum struct EnumYesNoIndicatorType : Byte
	{
		/// <summary>
		/// ��
		/// </summary>
		Yes = (Byte)'0',
		/// <summary>
		/// ��
		/// </summary>
		No = (Byte)'1',
	};
	/// <summary>
	/// ����֧����־ CFeePayFlagType
	/// </summary>
	public enum struct EnumFeePayFlagType : Byte
	{
		/// <summary>
		/// �����淽֧������
		/// </summary>
		BEN = (Byte)'0',
		/// <summary>
		/// �ɷ��ͷ�֧������
		/// </summary>
		OUR = (Byte)'1',
		/// <summary>
		/// �ɷ��ͷ�֧������ķ��ã����淽֧�����ܵķ���
		/// </summary>
		SHA = (Byte)'2',
	};
	/// <summary>
	/// �����ʺ����� CBankAccTypeType
	/// </summary>
	public enum struct EnumBankAccTypeType : Byte
	{
		/// <summary>
		/// ���д���
		/// </summary>
		BankBook = (Byte)'1',
		/// <summary>
		/// ���
		/// </summary>
		SavingCard = (Byte)'2',
		/// <summary>
		/// ���ÿ�
		/// </summary>
		CreditCard = (Byte)'3',
	};
	/// <summary>
	/// ����˶Ա�־ CPwdFlagType
	/// </summary>
	public enum struct EnumPwdFlagType : Byte
	{
		/// <summary>
		/// ���˶�
		/// </summary>
		NoCheck = (Byte)'0',
		/// <summary>
		/// ���ĺ˶�
		/// </summary>
		BlankCheck = (Byte)'1',
		/// <summary>
		/// ���ĺ˶�
		/// </summary>
		EncryptCheck = (Byte)'2',
	};
	/// <summary>
	/// ת�˽���״̬ CTransferStatusType
	/// </summary>
	public enum struct EnumTransferStatusType : Byte
	{
		/// <summary>
		/// ����
		/// </summary>
		Normal = (Byte)'0',
		/// <summary>
		/// ������
		/// </summary>
		Repealed = (Byte)'1',
	};
	/// <summary>
	/// ��Ч��־ CAvailabilityFlagType
	/// </summary>
	public enum struct EnumAvailabilityFlagType : Byte
	{
		/// <summary>
		/// δȷ��
		/// </summary>
		Invalid = (Byte)'0',
		/// <summary>
		/// ��Ч
		/// </summary>
		Valid = (Byte)'1',
		/// <summary>
		/// ����
		/// </summary>
		Repeal = (Byte)'2',
	};
	/// <summary>
	/// ��ȯ��ȯ�㷨 CRepayStockAlgoType
	/// </summary>
	public enum struct EnumRepayStockAlgoType : Byte
	{
		/// <summary>
		/// Ĭ���㷨
		/// </summary>
		Original = (Byte)'0',
		/// <summary>
		/// ����ȯ��������
		/// </summary>
		Ratio = (Byte)'1',
		/// <summary>
		/// Min[1,2]
		/// </summary>
		Min = (Byte)'2',
	};
	/// <summary>
	/// ����ʱ������� CTradeSpanType
	/// </summary>
	public enum struct EnumTradeSpanType : Byte
	{
		/// <summary>
		/// ��ͨҵ��
		/// </summary>
		Common = (Byte)'1',
		/// <summary>
		/// ת��
		/// </summary>
		Transfer = (Byte)'2',
		/// <summary>
		/// �۹�
		/// </summary>
		HK = (Byte)'3',
	};
	/// <summary>
	/// ��������ϵͳ���� CSettleSystemTypeType
	/// </summary>
	public enum struct EnumSettleSystemTypeType : Byte
	{
		/// <summary>
		/// ����ϵͳ
		/// </summary>
		Aboss = (Byte)'1',
		/// <summary>
		/// ����ϵͳ
		/// </summary>
		HS = (Byte)'2',
	};
	/// <summary>
	/// �������ֺϲ�״̬ CSplitMergeStatusType
	/// </summary>
	public enum struct EnumSplitMergeStatusType : Byte
	{
		/// <summary>
		/// ��ʾ�����ֺͺϲ�
		/// </summary>
		Allow = (Byte)'0',
		/// <summary>
		/// �����֡�������ϲ�
		/// </summary>
		OnlySplit = (Byte)'1',
		/// <summary>
		/// �������֡�����ϲ�
		/// </summary>
		OnlyMerge = (Byte)'2',
		/// <summary>
		/// �������ֺͺϲ�
		/// </summary>
		Forbidden = (Byte)'3',
	};
	/// <summary>
	/// �ʽ���ת���� CFundInterTransferTypeType
	/// </summary>
	public enum struct EnumFundInterTransferTypeType : Byte
	{
		/// <summary>
		/// ת��
		/// </summary>
		TransferIn = (Byte)'0',
		/// <summary>
		/// ת��
		/// </summary>
		TransferOut = (Byte)'1',
	};
	/// <summary>
	/// ��Լ���� CInstrumentTypeType
	/// </summary>
	public enum struct EnumInstrumentTypeType : Byte
	{
		/// <summary>
		/// ��ͨ
		/// </summary>
		Normal = (Byte)'0',
		/// <summary>
		/// ������Ȩ
		/// </summary>
		CallOptions = (Byte)'1',
		/// <summary>
		/// ������Ȩ
		/// </summary>
		PutOptions = (Byte)'2',
		/// <summary>
		/// ��ͨ(STEP)
		/// </summary>
		Normal_STEP = (Byte)'3',
		/// <summary>
		/// ծȯ����
		/// </summary>
		BondsRation = (Byte)'4',
		/// <summary>
		/// ��Ѻʽ�ع�
		/// </summary>
		PledgedRep = (Byte)'5',
		/// <summary>
		/// �������
		/// </summary>
		Password = (Byte)'6',
		/// <summary>
		/// ��ͨ(DCOM)
		/// </summary>
		Normal_DCOM = (Byte)'7',
	};
	/// <summary>
	/// Ͷ������Ȩ���׵ȼ� CInvestorLevelType
	/// </summary>
	public enum struct EnumInvestorLevelType : Byte
	{
		/// <summary>
		/// һ��
		/// </summary>
		Level_1 = (Byte)'0',
		/// <summary>
		/// ����
		/// </summary>
		Level_2 = (Byte)'1',
		/// <summary>
		/// ����
		/// </summary>
		Level_3 = (Byte)'2',
	};
	/// <summary>
	/// ƽ�ַ��� CCloseDirectionType
	/// </summary>
	public enum struct EnumCloseDirectionType : Byte
	{
		/// <summary>
		/// ��ƽ��
		/// </summary>
		CloseBuy = (Byte)'!',
		/// <summary>
		/// ��ƽ��
		/// </summary>
		CloseSell = (Byte)'@',
		/// <summary>
		/// ����ƽ��
		/// </summary>
		CloseCover = (Byte)'#',
	};
	/// <summary>
	/// �������� CDelivTypeType
	/// </summary>
	public enum struct EnumDelivTypeType : Byte
	{
		/// <summary>
		/// ������Ȩִ��
		/// </summary>
		ExecCallOptions = (Byte)'0',
		/// <summary>
		/// ������Ȩִ��
		/// </summary>
		ExecPutOptions = (Byte)'1',
		/// <summary>
		/// ��;֤ȯ
		/// </summary>
		UnavailStock = (Byte)'2',
		/// <summary>
		/// �����;�ʽ�
		/// </summary>
		UnavailRedMoney = (Byte)'3',
	};
	/// <summary>
	/// �������� CExpireTypeType
	/// </summary>
	public enum struct EnumExpireTypeType : Byte
	{
		/// <summary>
		/// ���ع�����
		/// </summary>
		Repurchase = (Byte)'0',
		/// <summary>
		/// ��ع�����
		/// </summary>
		ReverseRepurch = (Byte)'1',
		/// <summary>
		/// ծȯ����
		/// </summary>
		Bond = (Byte)'2',
	};
	/// <summary>
	/// ������� CFundClassType
	/// </summary>
	public enum struct EnumFundClassType : Byte
	{
		/// <summary>
		/// ������
		/// </summary>
		Subscription = (Byte)'0',
		/// <summary>
		/// ��ͨ��
		/// </summary>
		Normal = (Byte)'1',
		/// <summary>
		/// ������
		/// </summary>
		Monetary = (Byte)'2',
		/// <summary>
		/// �ƽ�ETF
		/// </summary>
		AuETF = (Byte)'3',
		/// <summary>
		/// ���г�ETF
		/// </summary>
		CrossMarket = (Byte)'4',
	};
	/// <summary>
	/// ���׽׶� CTradingPhaseType
	/// </summary>
	public enum struct EnumTradingPhaseType : Byte
	{
		/// <summary>
		/// �ǽ���ʱ��
		/// </summary>
		NonTrade = (Byte)'0',
		/// <summary>
		/// ���Ͼ���ʱ��
		/// </summary>
		Bidding = (Byte)'1',
		/// <summary>
		/// ��������ʱ��
		/// </summary>
		Continuous = (Byte)'2',
		/// <summary>
		/// ͣ��ʱ��
		/// </summary>
		Suspension = (Byte)'3',
		/// <summary>
		/// �������۶�ʱ��
		/// </summary>
		Fuse = (Byte)'4',
		/// <summary>
		/// �ɻָ��۶�ʱ��
		/// </summary>
		RecovFuse = (Byte)'5',
		/// <summary>
		/// ���ɻָ��۶�ʱ��
		/// </summary>
		UnrecovFuse = (Byte)'6',
		/// <summary>
		/// ���Ͼ��۽���ʱ��
		/// </summary>
		BiddingOver = (Byte)'7',
		/// <summary>
		/// ��ʱͣ��ʱ��
		/// </summary>
		TempSuspension = (Byte)'8',
		/// <summary>
		/// �е�����ʱ��
		/// </summary>
		VCM = (Byte)'9',
	};
	/// <summary>
	/// �������� COpenRestrictionType
	/// </summary>
	public enum struct EnumOpenRestrictionType : Byte
	{
		/// <summary>
		/// �޿�������
		/// </summary>
		None = (Byte)'0',
		/// <summary>
		/// ���Ʊ��ҿ���
		/// </summary>
		NoCoverOpen = (Byte)'1',
		/// <summary>
		/// ������������
		/// </summary>
		NoSellOpen = (Byte)'2',
		/// <summary>
		/// �����������֡����ҿ���
		/// </summary>
		NoSellAndCoverOpen = (Byte)'3',
		/// <summary>
		/// �������뿪��
		/// </summary>
		NoBuyOpen = (Byte)'4',
		/// <summary>
		/// �������뿪�֡����ҿ���
		/// </summary>
		NoBuyAndCoverOpen = (Byte)'5',
		/// <summary>
		/// �������뿪�֡���������
		/// </summary>
		NoBuyAndSellOpen = (Byte)'6',
		/// <summary>
		/// �������뿪�֡��������֡����ҿ���
		/// </summary>
		NoBuySellAndCoverOpen = (Byte)'7',
	};
	/// <summary>
	/// �������� COfferTypeType
	/// </summary>
	public enum struct EnumOfferTypeType : Byte
	{
		/// <summary>
		/// ��ͨ����
		/// </summary>
		Normal = (Byte)'0',
		/// <summary>
		/// ��Ȩ����
		/// </summary>
		Options = (Byte)'1',
		/// <summary>
		/// �ǽ��ױ���
		/// </summary>
		NonTrade = (Byte)'2',
	};
	/// <summary>
	/// ����״̬ CAdjustStatusType
	/// </summary>
	public enum struct EnumAdjustStatusType : Byte
	{
		/// <summary>
		/// ��¼��
		/// </summary>
		Record = (Byte)'1',
		/// <summary>
		/// �Ѹ���
		/// </summary>
		Check = (Byte)'2',
	};
	/// <summary>
	/// �ն˽��ױ�� CTermTradeTargetType
	/// </summary>
	public enum struct EnumTermTradeTargetType : Byte
	{
		/// <summary>
		/// ������
		/// </summary>
		None = (Byte)'0',
		/// <summary>
		/// ����Ȩ����
		/// </summary>
		OnlyOptions = (Byte)'1',
	};
	/// <summary>
	/// ƽ̨��� CPlatformIDType
	/// </summary>
	public enum struct EnumPlatformIDType : Byte
	{
		/// <summary>
		/// �ֻ����о��۽���ƽ̨
		/// </summary>
		Spot = (Byte)'1',
		/// <summary>
		/// �ۺϽ��ڷ���ƽ̨
		/// </summary>
		CompFinancial = (Byte)'2',
		/// <summary>
		/// �ǽ��״���ƽ̨
		/// </summary>
		NonTrade = (Byte)'3',
		/// <summary>
		/// ����Ʒ���о��۽���ƽ̨
		/// </summary>
		Derivative = (Byte)'4',
	};
	/// <summary>
	/// ƽ̨״̬ CPlatformStateType
	/// </summary>
	public enum struct EnumPlatformStateType : Byte
	{
		/// <summary>
		/// δ����
		/// </summary>
		PreOpen = (Byte)'0',
		/// <summary>
		/// ��������
		/// </summary>
		OpenUpComing = (Byte)'1',
		/// <summary>
		/// ����
		/// </summary>
		Open = (Byte)'2',
		/// <summary>
		/// ��ͣ����
		/// </summary>
		Halt = (Byte)'3',
		/// <summary>
		/// �ر�
		/// </summary>
		Close = (Byte)'4',
	};
	/// <summary>
	/// ��Ӧ��Ϣ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
		/// ��Ȩ���ֱ�֤��
		/// </summary>
		double UnitMargin;
		/// <summary>
		/// ��Լ����
		/// </summary>
		EnumInstrumentTypeType InstrumentType;
		/// <summary>
		/// ��Ȩ��֤�����1
		/// </summary>
		double OptionsMarginParam1;
		/// <summary>
		/// ��Ȩ��֤�����2
		/// </summary>
		double OptionsMarginParam2;
	};
	/// <summary>
	/// ���͹�˾
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
		/// ��������ϵͳ����
		/// </summary>
		EnumSettleSystemTypeType SettleSystemType;
		/// <summary>
		/// Ͷ������Ȩ���׵ȼ�
		/// </summary>
		EnumInvestorLevelType InvestorLevel;
	};
	/// <summary>
	/// ���ױ���
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
		/// �ʽ���
		/// </summary>
		double CashIn;
		/// <summary>
		/// ������
		/// </summary>
		double Commission;
		/// <summary>
		/// ����׼����
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
		/// ��֤��������
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
		/// ����������
		/// </summary>
		double MarginTradeAmount;
		/// <summary>
		/// ��ȯ�������
		/// </summary>
		double ShortSellAmount;
		/// <summary>
		/// ���ʳֲ�ӯ��
		/// </summary>
		double MarginTradeProfit;
		/// <summary>
		/// ��ȯ�ֲ�ӯ��
		/// </summary>
		double ShortSellProfit;
		/// <summary>
		/// ��ȯ����ֵ
		/// </summary>
		double SSStockValue;
		/// <summary>
		/// ά�ֵ�������
		/// </summary>
		double CreditRatio;
		/// <summary>
		/// ��Ȩ�����ʽ�
		/// </summary>
		double FrozenExecCash;
		/// <summary>
		/// ��Ȩ�����ʽ�(SSE)
		/// </summary>
		double SSEOptionsBuyAmount;
		/// <summary>
		/// ��Ȩ���붳���ʽ�(SSE)
		/// </summary>
		double SSEOptionsBuyFrozenAmount;
		/// <summary>
		/// ���㱣֤���ܶ�
		/// </summary>
		double SettleMargin;
		/// <summary>
		/// ����ͨ���׾��ʽ�
		/// </summary>
		double HGENetAmount;
	};
	/// <summary>
	/// ��ֹ��¼�û�
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
		double Volume;
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
		/// ���ջ���ֵ
		/// </summary>
		double PreIOPV;
		/// <summary>
		/// ����ֵ
		/// </summary>
		double IOPV;
		/// <summary>
		/// ��̬�ο��۸�
		/// </summary>
		double AuctionPrice;
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
		double BidVolume1;
		/// <summary>
		/// ������һ
		/// </summary>
		double AskPrice1;
		/// <summary>
		/// ������һ
		/// </summary>
		double AskVolume1;
		/// <summary>
		/// ����۶�
		/// </summary>
		double BidPrice2;
		/// <summary>
		/// ��������
		/// </summary>
		double BidVolume2;
		/// <summary>
		/// �����۶�
		/// </summary>
		double AskPrice2;
		/// <summary>
		/// ��������
		/// </summary>
		double AskVolume2;
		/// <summary>
		/// �������
		/// </summary>
		double BidPrice3;
		/// <summary>
		/// ��������
		/// </summary>
		double BidVolume3;
		/// <summary>
		/// ��������
		/// </summary>
		double AskPrice3;
		/// <summary>
		/// ��������
		/// </summary>
		double AskVolume3;
		/// <summary>
		/// �������
		/// </summary>
		double BidPrice4;
		/// <summary>
		/// ��������
		/// </summary>
		double BidVolume4;
		/// <summary>
		/// ��������
		/// </summary>
		double AskPrice4;
		/// <summary>
		/// ��������
		/// </summary>
		double AskVolume4;
		/// <summary>
		/// �������
		/// </summary>
		double BidPrice5;
		/// <summary>
		/// ��������
		/// </summary>
		double BidVolume5;
		/// <summary>
		/// ��������
		/// </summary>
		double AskPrice5;
		/// <summary>
		/// ��������
		/// </summary>
		double AskVolume5;
		/// <summary>
		/// ���վ���
		/// </summary>
		double AveragePrice;
		/// <summary>
		/// ҵ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionDay;
		/// <summary>
		/// ���׽׶�
		/// </summary>
		EnumTradingPhaseType TradingPhase;
		/// <summary>
		/// ��������
		/// </summary>
		EnumOpenRestrictionType OpenRestriction;
	};
	/// <summary>
	/// Ͷ���ߺ�Լ����Ȩ��
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
		double Volume;
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
		double CloseVolume;
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
		/// ��Ѻ�������
		/// </summary>
		double PledgeInPosition;
		/// <summary>
		/// ��Ѻ��ⶳ������
		/// </summary>
		double PledgeInFrozenPosition;
		/// <summary>
		/// ���ع�ʹ�õı�׼ȯ����
		/// </summary>
		double RepurchasePosition;
		/// <summary>
		/// ������ȯ���
		/// </summary>
		double Amount;
		/// <summary>
		/// ��ĺ�Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ UnderlyingInstrumentID;
	};
	/// <summary>
	/// ծȯ��Ϣ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	/// ��ֵ������Ϣ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcMarketRationInfoField
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
		/// ����������
		/// </summary>
		double RationVolume;
	};
	/// <summary>
	/// ��Լ��������
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcInstrumentCommissionRateField
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
		/// ��С���׷�
		/// </summary>
		double MinTradeFee;
		/// <summary>
		/// ��С������
		/// </summary>
		double MinTransferFee;
	};
	/// <summary>
	/// ��ȯ��Ϣ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcExcessStockInfoField
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
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ��ȯ����
		/// </summary>
		double ExcessVolume;
		/// <summary>
		/// ��ȯ��������
		/// </summary>
		double ExcessFrozenVolume;
	};
	/// <summary>
	/// ETF��Լ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcETFInstrumentField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ETF֤ȯ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ETFInstrumentID;
		/// <summary>
		/// ETF��Ӧ�������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ETFPurRedInstrumentID;
		/// <summary>
		/// ��С�깺��ص�λ��Ӧ��ETF����
		/// </summary>
		int CreationRedemptionUnit;
		/// <summary>
		/// ����ֽ��������
		/// </summary>
		double Maxcashratio;
		/// <summary>
		/// �������깺���״̬
		/// </summary>
		EnumCreationredemptionStatusType Creationredemption;
		/// <summary>
		/// Ԥ�����
		/// </summary>
		double EstimateCashComponent;
		/// <summary>
		/// �������굥λ��ֵ
		/// </summary>
		double ETFNetValue;
		/// <summary>
		/// �������
		/// </summary>
		EnumFundClassType FundClass;
	};
	/// <summary>
	/// ETF��Ʊ��
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcETFBasketField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ETF֤ȯ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ETFInstrumentID;
		/// <summary>
		/// ��Ʊ֤ȯ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ StockInstrumentID;
		/// <summary>
		/// ��Ʊ֤ȯ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ StockInstrumentName;
		/// <summary>
		/// ��Ʊ����
		/// </summary>
		int Volume;
		/// <summary>
		/// �����־
		/// </summary>
		EnumETFCurrenceReplaceStatusType CurrenceReplaceStatus;
		/// <summary>
		/// ��۱���
		/// </summary>
		double Premium;
		/// <summary>
		/// �ܽ��
		/// </summary>
		double Amount;
	};
	/// <summary>
	/// OF��Լ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcOFInstrumentField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// OF�������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// �������깺���״̬
		/// </summary>
		EnumCreationredemptionStatusType Creationredemption;
		/// <summary>
		/// ����ֵ
		/// </summary>
		double NetPrice;
		/// <summary>
		/// �������
		/// </summary>
		EnumFundClassType FundClass;
		/// <summary>
		/// OF��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ InstrumentName;
	};
	/// <summary>
	/// SF��Լ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcSFInstrumentField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// SF�������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ SFInstrumentID;
		/// <summary>
		/// �������ֺϲ�״̬
		/// </summary>
		EnumSplitMergeStatusType SplitMergeStatus;
		/// <summary>
		/// ��С�������
		/// </summary>
		int MinSplitVolume;
		/// <summary>
		/// ��С�ϲ�����
		/// </summary>
		int MinMergeVolume;
		/// <summary>
		/// ���/�ϲ�����
		/// </summary>
		int VolumeRatio;
		/// <summary>
		/// ����ֵ
		/// </summary>
		double NetPrice;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ InstrumentName;
	};
	/// <summary>
	/// ��Լ���ֱ�֤��
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcInstrumentUnitMarginField
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
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ��Լ���ֱ�֤��
		/// </summary>
		double UnitMargin;
	};
	/// <summary>
	/// ��Ȩ�ʽ����Ʋ���
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcOptionsFundLimitParamField
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
		/// ��������
		/// </summary>
		double MaxBuyAmount;
	};
	/// <summary>
	/// Ͷ������Ȩ�ֲ�
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcInvestorOptionsPositionField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ���߷�Χ
		/// </summary>
		EnumInvestorRangeType InvestorRange;
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
		/// InstrumentID
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ����ͷ��λ����
		/// </summary>
		double MaxLongPositionLimit;
		/// <summary>
		/// ��󿪲�������
		/// </summary>
		double MaxOpenVolLimit;
		/// <summary>
		/// ����ܲ�λ����
		/// </summary>
		double MaxPositionLimit;
		/// <summary>
		/// ��ͷ�ֲ�
		/// </summary>
		double LongPosition;
		/// <summary>
		/// ��ͷ�ֲ�
		/// </summary>
		double ShortPosition;
		/// <summary>
		/// ���տ�����
		/// </summary>
		double TodayOpenVolume;
		/// <summary>
		/// ���տ��ֶ�����
		/// </summary>
		double TodayOpenFrozenVolume;
		/// <summary>
		/// ��ͷ����ֲ�
		/// </summary>
		double LongFrozenPosition;
		/// <summary>
		/// ��ͷ����ֲ�
		/// </summary>
		double ShortFrozenPosition;
	};
	/// <summary>
	/// Ԥ������Ϣ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcPreDelivInfoField
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
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ��������
		/// </summary>
		EnumDelivTypeType DelivType;
		/// <summary>
		/// ��ĺ�Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ UnderlyingInstrumentID;
		/// <summary>
		/// ��������
		/// </summary>
		double DelivVolume;
		/// <summary>
		/// ������
		/// </summary>
		double DelivAmount;
		/// <summary>
		/// ��Ȩִ������
		/// </summary>
		double ExecVolume;
		/// <summary>
		/// ��������
		/// </summary>
		EnumDirectionType Direction;
	};
	/// <summary>
	/// ����ȯ������Ϣ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcCreditStockAssignInfoField
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
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ��ȯ����
		/// </summary>
		double LimitVolume;
		/// <summary>
		/// ������ȯ����
		/// </summary>
		double YDVolume;
		/// <summary>
		/// ʣ�����ȯ����
		/// </summary>
		double LeftVolume;
		/// <summary>
		/// ������ȯ����
		/// </summary>
		double FrozenVolume;
	};
	/// <summary>
	/// �����ʷ�����Ϣ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcCreditCashAssignInfoField
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
		/// �����޶�
		/// </summary>
		double LimitAmount;
		/// <summary>
		/// �������ʽ��
		/// </summary>
		double YDAmount;
		/// <summary>
		/// ʣ������ʽ��
		/// </summary>
		double LeftAmount;
		/// <summary>
		/// �������ʽ��
		/// </summary>
		double FrozenAmount;
	};
	/// <summary>
	/// ֤ȯ������
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcConversionRateField
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
		/// <summary>
		/// �������
		/// </summary>
		double ConversionRate;
		/// <summary>
		/// ��ǰ�Ƿ�֧�����ʽ���
		/// </summary>
		int IsTradingForMargin;
		/// <summary>
		/// ��ǰ�Ƿ�֧����ȯ����
		/// </summary>
		int IsTradingForShort;
	};
	/// <summary>
	/// ��ʷ���ø�ծ��Ϣ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcHisCreditDebtInfoField
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
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// ��������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ OpenDate;
		/// <summary>
		/// ��ծ����
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// ���ּ�
		/// </summary>
		double OpenPrice;
		/// <summary>
		/// ����
		/// </summary>
		double Volume;
		/// <summary>
		/// ������ȯ���
		/// </summary>
		double Amount;
	};
	/// <summary>
	/// ���龲̬��Ϣ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcMarketDataStaticInfoField
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
		/// <summary>
		/// ��ͣ���
		/// </summary>
		double UpperLimitPrice;
		/// <summary>
		/// ��ͣ���
		/// </summary>
		double LowerLimitPrice;
		/// <summary>
		/// �����
		/// </summary>
		double PreSettlementPrice;
		/// <summary>
		/// ������
		/// </summary>
		double PreClosePrice;
		/// <summary>
		/// ���ջ���ֵ
		/// </summary>
		double PreIOPV;
		/// <summary>
		/// �Ƿ�ǽ���ҵ��
		/// </summary>
		int IsNotTrade;
	};
	/// <summary>
	/// ���ڻع���Ϣ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcExpireRepurchInfoField
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
		/// �ʽ��˻�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ AccountID;
		/// <summary>
		/// ��������
		/// </summary>
		EnumExpireTypeType ExpireType;
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
		/// ����
		/// </summary>
		double Volume;
		/// <summary>
		/// ���
		/// </summary>
		double Amount;
		/// <summary>
		/// ��Ϣ
		/// </summary>
		double Interest;
	};
	/// <summary>
	/// ծȯ��ѺΪ��׼ȯ����
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcBondPledgeRateField
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
		/// <summary>
		/// �������
		/// </summary>
		double Ratio;
	};
	/// <summary>
	/// ծȯ��Ѻ������չ�ϵ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcPledgeBondField
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
		/// <summary>
		/// ��Ѻ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ PledgeID;
	};
	/// <summary>
	/// �۹ɻ�����Ϣ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcHKBasicInfoField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// �ο����������
		/// </summary>
		double BuyPrice;
		/// <summary>
		/// �ο�����������
		/// </summary>
		double SellPrice;
		/// <summary>
		/// �ճ����
		/// </summary>
		double ThresholdAmount;
	};
	/// <summary>
	/// ƽ̨״̬��Ϣ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcPlatformStateInfoField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ƽ̨���
		/// </summary>
		EnumPlatformIDType PlatformID;
		/// <summary>
		/// ƽ̨״̬
		/// </summary>
		EnumPlatformStateType PlatformState;
		/// <summary>
		/// ����������Ա����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BranchPBU;
	};
	/// <summary>
	/// ����������Ա���̻�
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
		/// ��������
		/// </summary>
		EnumOfferTypeType OfferType;
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
		/// ��������
		/// </summary>
		EnumOfferTypeType OfferType;
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
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
		/// �˻�����
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
		/// �ɽ����
		/// </summary>
		double TradeAmount;
		/// <summary>
		/// �Ƿ�ETF
		/// </summary>
		int IsETF;
		/// <summary>
		/// ��Լ����
		/// </summary>
		EnumInstrumentTypeType InstrumentType;
	};
	/// <summary>
	/// ��������
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
		/// ��Լ����
		/// </summary>
		EnumInstrumentTypeType InstrumentType;
	};
	/// <summary>
	/// ���󱨵�
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
		/// �������
		/// </summary>
		int ErrorID;
		/// <summary>
		/// ������Ϣ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
		/// <summary>
		/// ��Լ����
		/// </summary>
		EnumInstrumentTypeType InstrumentType;
	};
	/// <summary>
	/// �ɽ�
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
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
		/// ���͹�˾�������
		/// </summary>
		int BrokerOrderSeq;
		/// <summary>
		/// �ɽ����
		/// </summary>
		double TradeAmount;
		/// <summary>
		/// �ɽ����
		/// </summary>
		int TradeIndex;
	};
	/// <summary>
	/// Ͷ���ֲ߳�
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
		double YdPosition;
		/// <summary>
		/// �ֲܳ�
		/// </summary>
		double Position;
		/// <summary>
		/// ��ͷ����
		/// </summary>
		double LongFrozen;
		/// <summary>
		/// ��ͷ����
		/// </summary>
		double ShortFrozen;
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
		double OpenVolume;
		/// <summary>
		/// ƽ����
		/// </summary>
		double CloseVolume;
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
		/// ���ֳɱ�
		/// </summary>
		double OpenCost;
		/// <summary>
		/// ��������֤��
		/// </summary>
		double ExchangeMargin;
		/// <summary>
		/// ���ճֲ�
		/// </summary>
		double TodayPosition;
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
		double TodayPurRedVolume;
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
		/// ��Ѻ�������
		/// </summary>
		double PledgeInPosition;
		/// <summary>
		/// ���ع�ʹ�õı�׼ȯ����
		/// </summary>
		double RepurchasePosition;
		/// <summary>
		/// ETF�����ͷ����
		/// </summary>
		double PurRedShortFrozen;
		/// <summary>
		/// ������������
		/// </summary>
		double MarginTradeVolume;
		/// <summary>
		/// ����������
		/// </summary>
		double MarginTradeAmount;
		/// <summary>
		/// �������붳������
		/// </summary>
		double MarginTradeFrozenVolume;
		/// <summary>
		/// �������붳����
		/// </summary>
		double MarginTradeFrozenAmount;
		/// <summary>
		/// ��������ӯ��
		/// </summary>
		double MarginTradeConversionProfit;
		/// <summary>
		/// ��ȯ��������
		/// </summary>
		double ShortSellVolume;
		/// <summary>
		/// ��ȯ�������
		/// </summary>
		double ShortSellAmount;
		/// <summary>
		/// ��ȯ������������
		/// </summary>
		double ShortSellFrozenVolume;
		/// <summary>
		/// ��ȯ����������
		/// </summary>
		double ShortSellFrozenAmount;
		/// <summary>
		/// ��ȯ����ӯ��
		/// </summary>
		double ShortSellConversionProfit;
		/// <summary>
		/// ��ȯ����ֵ
		/// </summary>
		double SSStockValue;
		/// <summary>
		/// �������ʳֲ�
		/// </summary>
		double TodayMTPosition;
		/// <summary>
		/// ������ȯ�ֲ�
		/// </summary>
		double TodaySSPosition;
		/// <summary>
		/// ��ʷ�ֲֿ��ֳɱ�
		/// </summary>
		double YdOpenCost;
		/// <summary>
		/// ������λ
		/// </summary>
		double LockPosition;
		/// <summary>
		/// ���Ҳ�λ
		/// </summary>
		double CoverPosition;
		/// <summary>
		/// ���������λ
		/// </summary>
		double LockFrozenPosition;
		/// <summary>
		/// ���������λ
		/// </summary>
		double UnlockFrozenPosition;
		/// <summary>
		/// ���Ҷ����λ
		/// </summary>
		double CoverFrozenPosition;
		/// <summary>
		/// ��Ȩ�����λ
		/// </summary>
		double ExecFrozenPosition;
		/// <summary>
		/// ���ձ��Ҳ�λ
		/// </summary>
		double YDCoverPosition;
	};
	/// <summary>
	/// �����ͬ��
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
		/// �˻�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ AccountID;
	};
	/// <summary>
	/// Ͷ���ֲֵ߳���
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcAdjustInvestorPositionField
	{
		/// <summary>
		/// �������
		/// </summary>
		int OperateID;
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
		/// ���ױ�������
		/// </summary>
		EnumClientTypeType ClientType;
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
		/// �ֲֶ�շ���
		/// </summary>
		EnumPosiDirectionType PosiDirection;
		/// <summary>
		/// ��������
		/// </summary>
		double AdjustVolume;
	};
	/// <summary>
	/// ͣ����Ȩ�����Ϣ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcHaltOptionsTargetField
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
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};
	/// <summary>
	/// ��ѯ������
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	/// ��ѯ���͹�˾
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	/// ��ѯ��ֵ������Ϣ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryMarketRationInfoField
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
		String^ InvestorID;
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};
	/// <summary>
	/// ��ѯ��Լ��������
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
		/// <summary>
		/// ��ƽ��־
		/// </summary>
		EnumOffsetFlagType OffsetFlag;
	};
	/// <summary>
	/// ��ѯ��ȯ��Ϣ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryExcessStockInfoField
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
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};
	/// <summary>
	/// ��ѯͶ�����ʻ���ϵ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryInvestorAccountField
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
	/// ��ѯETF��Լ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryETFInstrumentField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ETF֤ȯ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ETFInstrumentID;
	};
	/// <summary>
	/// ��ѯETF��Ʊ��
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryETFBasketField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ETF֤ȯ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ETFInstrumentID;
	};
	/// <summary>
	/// ��ѯOF��Լ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryOFInstrumentField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// OF֤ȯ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};
	/// <summary>
	/// ��ѯSF��Լ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQrySFInstrumentField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// SF֤ȯ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ SFInstrumentID;
	};
	/// <summary>
	/// ��ѯ��Լ���ֱ�֤��
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryInstrumentUnitMarginField
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
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};
	/// <summary>
	/// ��ѯ��Ȩ�ʽ����Ʋ���
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryOptionsFundLimitParamField
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
	/// ��ѯͶ������Ȩ�ֲ�
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryInvestorOptionsPositionField
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
		/// ��ĺ�Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};
	/// <summary>
	/// ��ѯԤ������Ϣ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryPreDelivInfoField
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
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};
	/// <summary>
	/// ��ѯ����ȯ������Ϣ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryCreditStockAssignInfoField
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
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};
	/// <summary>
	/// ��ѯ�����ʷ�����Ϣ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryCreditCashAssignInfoField
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
	/// ��ѯ֤ȯ������
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryConversionRateField
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
	/// ��ѯ��ʷ���ø�ծ��Ϣ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryHisCreditDebtInfoField
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
		/// ��Լ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};
	/// <summary>
	/// ��ѯ���龲̬��Ϣ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryMarketDataStaticInfoField
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
	/// ��ѯ���ڻع���Ϣ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryExpireRepurchInfoField
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
	/// ��ѯծȯ��ѺΪ��׼ȯ����
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryBondPledgeRateField
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
	/// ��ѯծȯ��Ѻ������չ�ϵ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryPledgeBondField
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
	/// ��ѯ�۹ɻ�����Ϣ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryHKBasicInfoField
	{
		/// <summary>
		/// ����������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};
	/// <summary>
	/// ��ѯ����Ա���̻�
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	/// �û�������
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
		/// �Ƿ����˻�
		/// </summary>
		int IsDefault;
		/// <summary>
		/// �˻�����
		/// </summary>
		EnumAccountTypeType AccountType;
		/// <summary>
		/// �Ƿ��Ծ
		/// </summary>
		int IsActive;
		/// <summary>
		/// �Ͻ������׵�Ԫ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ SHBranchPBU;
		/// <summary>
		/// ������׵�Ԫ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ SZBranchPBU;
	};
	/// <summary>
	/// �û�IP
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
		/// <summary>
		/// �����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ RandCode;
		/// <summary>
		/// Ӳ�����к�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ HDSerialNumber;
	};
	/// <summary>
	/// �û���¼Ӧ��
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	/// ���͹�˾�û�����
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcActivateBrokerUserField
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
	/// ��֤�����
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcAuthRandCodeField
	{
		/// <summary>
		/// �����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ RandCode;
	};
	/// <summary>
	/// ���뱨��
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
		/// <summary>
		/// ���ջ���ֵ
		/// </summary>
		double PreIOPV;
	};
	/// <summary>
	/// ���龲̬����
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
		/// <summary>
		/// ����ֵ
		/// </summary>
		double IOPV;
		/// <summary>
		/// ��̬�ο��۸�
		/// </summary>
		double AuctionPrice;
	};
	/// <summary>
	/// �������³ɽ�����
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcMarketDataLastMatchField
	{
		/// <summary>
		/// ���¼�
		/// </summary>
		double LastPrice;
		/// <summary>
		/// ����
		/// </summary>
		double Volume;
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcMarketDataBestPriceField
	{
		/// <summary>
		/// �����һ
		/// </summary>
		double BidPrice1;
		/// <summary>
		/// ������һ
		/// </summary>
		double BidVolume1;
		/// <summary>
		/// ������һ
		/// </summary>
		double AskPrice1;
		/// <summary>
		/// ������һ
		/// </summary>
		double AskVolume1;
	};
	/// <summary>
	/// �����������������
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcMarketDataBid23Field
	{
		/// <summary>
		/// ����۶�
		/// </summary>
		double BidPrice2;
		/// <summary>
		/// ��������
		/// </summary>
		double BidVolume2;
		/// <summary>
		/// �������
		/// </summary>
		double BidPrice3;
		/// <summary>
		/// ��������
		/// </summary>
		double BidVolume3;
	};
	/// <summary>
	/// ������������������
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcMarketDataAsk23Field
	{
		/// <summary>
		/// �����۶�
		/// </summary>
		double AskPrice2;
		/// <summary>
		/// ��������
		/// </summary>
		double AskVolume2;
		/// <summary>
		/// ��������
		/// </summary>
		double AskPrice3;
		/// <summary>
		/// ��������
		/// </summary>
		double AskVolume3;
	};
	/// <summary>
	/// ���������ġ�������
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcMarketDataBid45Field
	{
		/// <summary>
		/// �������
		/// </summary>
		double BidPrice4;
		/// <summary>
		/// ��������
		/// </summary>
		double BidVolume4;
		/// <summary>
		/// �������
		/// </summary>
		double BidPrice5;
		/// <summary>
		/// ��������
		/// </summary>
		double BidVolume5;
	};
	/// <summary>
	/// ���������ġ�������
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcMarketDataAsk45Field
	{
		/// <summary>
		/// ��������
		/// </summary>
		double AskPrice4;
		/// <summary>
		/// ��������
		/// </summary>
		double AskVolume4;
		/// <summary>
		/// ��������
		/// </summary>
		double AskPrice5;
		/// <summary>
		/// ��������
		/// </summary>
		double AskVolume5;
	};
	/// <summary>
	/// �������ʱ������
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
		/// <summary>
		/// ���׽׶�
		/// </summary>
		EnumTradingPhaseType TradingPhase;
		/// <summary>
		/// ��������
		/// </summary>
		EnumOpenRestrictionType OpenRestriction;
	};
	/// <summary>
	/// �ɽ�����
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
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
	/// <summary>
	/// �ʽ�ת������
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcInputFundTransferField
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
		/// Ͷ�����ʽ��ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ AccountID;
		/// <summary>
		/// �ʽ��ʻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ���׽��
		/// </summary>
		double TradeAmount;
		/// <summary>
		/// ժҪ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^ Digest;
		/// <summary>
		/// �˻�����
		/// </summary>
		EnumAccountTypeType AccountType;
	};
	/// <summary>
	/// �ʽ�ת��
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcFundTransferField
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
		/// Ͷ�����ʽ��ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ AccountID;
		/// <summary>
		/// �ʽ��ʻ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// ���׽��
		/// </summary>
		double TradeAmount;
		/// <summary>
		/// ժҪ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^ Digest;
		/// <summary>
		/// �Ự���
		/// </summary>
		int SessionID;
		/// <summary>
		/// Liber������ˮ��
		/// </summary>
		int LiberSerial;
		/// <summary>
		/// ת��ƽ̨��ˮ��
		/// </summary>
		int PlateSerial;
		/// <summary>
		/// ��������ˮ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ TransferSerial;
		/// <summary>
		/// ������
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// ת��ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// �������
		/// </summary>
		EnumFundDirectionType FundDirection;
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
	/// �ʽ�ת�˲�ѯ����
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryFundTransferSerialField
	{
		/// <summary>
		/// ���͹�˾����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// Ͷ�����ʽ��ʺ�
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ AccountID;
		/// <summary>
		/// �˻�����
		/// </summary>
		EnumAccountTypeType AccountType;
	};
	/// <summary>
	/// �ʽ���ת
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcFundInterTransferField
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
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// �ʽ��˻�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ AccountID;
		/// <summary>
		/// �ʽ��˻�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// ���
		/// </summary>
		double TradeAmount;
		/// <summary>
		/// ��ת����
		/// </summary>
		EnumFundInterTransferTypeType TransferType;
		/// <summary>
		/// �ʽ���ת���
		/// </summary>
		int SerialID;
	};
	/// <summary>
	/// �ʽ���ת��ˮ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcFundInterTransferSerialField
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
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// �ʽ��˻�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ AccountID;
		/// <summary>
		/// �ʽ��˻�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// ���
		/// </summary>
		double TradeAmount;
		/// <summary>
		/// ��ת����
		/// </summary>
		EnumFundInterTransferTypeType TransferType;
		/// <summary>
		/// �ʽ���ת���
		/// </summary>
		int SerialID;
		/// <summary>
		/// ת��ʱ��
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TransferTime;
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
	/// �ʽ���ת��ˮ��ѯ����
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryFundInterTransferSerialField
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
	/// �ʽ�ز�������Ϣ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcInputFundBackInfoField
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
		/// �˻�����
		/// </summary>
		EnumAccountTypeType AccountType;
	};
	/// <summary>
	/// �ʽ�ز���Ϣ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcFundBackInfoField
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
		/// Ͷ���ߴ���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// �˻�����
		/// </summary>
		EnumAccountTypeType AccountType;
		/// <summary>
		/// �ʽ��˻�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ AccountID;
		/// <summary>
		/// �ز����
		/// </summary>
		double Amount;
		/// <summary>
		/// �û�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
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
	/// ��ȡ���ݿ���Ϣ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcFetchDBInfoField
	{
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
		/// ���ݿ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ DBIndex;
		/// <summary>
		/// ���ݿ�IP��ַ
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ IPAddress;
		/// <summary>
		/// ���ݿ�IP�˿�
		/// </summary>
		int IPPort;
		/// <summary>
		/// ���ݿ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ DBName;
		/// <summary>
		/// ���ݿ��û���
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ DBUserID;
		/// <summary>
		/// ���ݿ�����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ DBPassword;
	};
	/// <summary>
	/// MD�û���Ϣ
	///˳�򲼾�
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcMDUserInfoField
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
		/// ����
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// ����ϵͳ���
		/// </summary>
		int MDSysID;
		/// <summary>
		/// ��Ʊ���������
		/// </summary>
		int MaxStockCount;
		/// <summary>
		/// ��Ȩ���������
		/// </summary>
		int MaxOptionsCount;
	};

}
