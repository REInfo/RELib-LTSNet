

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
	/// 交易所属性 CExchangePropertyType
	/// </summary>
	public enum struct EnumExchangePropertyType : Byte
	{
		/// <summary>
		/// 正常
		/// </summary>
		Normal = (Byte)'0',
		/// <summary>
		/// 根据成交生成报单
		/// </summary>
		GenOrderByTrade = (Byte)'1',
	};
	/// <summary>
	/// 交易所连接状态 CExchangeConnectStatusType
	/// </summary>
	public enum struct EnumExchangeConnectStatusType : Byte
	{
		/// <summary>
		/// 没有任何连接
		/// </summary>
		NoConnection = (Byte)'1',
		/// <summary>
		/// 已经发出合约查询请求
		/// </summary>
		QryInstrumentSent = (Byte)'2',
		/// <summary>
		/// 已经获取信息
		/// </summary>
		GotInformation = (Byte)'9',
	};
	/// <summary>
	/// 产品类型 CProductClassType
	/// </summary>
	public enum struct EnumProductClassType : Byte
	{
		/// <summary>
		/// 期货
		/// </summary>
		Futures = (Byte)'1',
		/// <summary>
		/// 期权
		/// </summary>
		Options = (Byte)'2',
		/// <summary>
		/// 组合
		/// </summary>
		Combination = (Byte)'3',
		/// <summary>
		/// 即期
		/// </summary>
		Spot = (Byte)'4',
		/// <summary>
		/// 期转现
		/// </summary>
		EFP = (Byte)'5',
		/// <summary>
		/// 证券A股
		/// </summary>
		StockA = (Byte)'6',
		/// <summary>
		/// 证券B股
		/// </summary>
		StockB = (Byte)'7',
		/// <summary>
		/// ETF
		/// </summary>
		ETF = (Byte)'8',
		/// <summary>
		/// ETF申赎
		/// </summary>
		ETFPurRed = (Byte)'9',
	};
	/// <summary>
	/// 持仓类型 CPositionTypeType
	/// </summary>
	public enum struct EnumPositionTypeType : Byte
	{
		/// <summary>
		/// 净持仓
		/// </summary>
		Net = (Byte)'1',
		/// <summary>
		/// 综合持仓
		/// </summary>
		Gross = (Byte)'2',
	};
	/// <summary>
	/// 持仓日期类型 CPositionDateTypeType
	/// </summary>
	public enum struct EnumPositionDateTypeType : Byte
	{
		/// <summary>
		/// 使用历史持仓
		/// </summary>
		UseHistory = (Byte)'1',
		/// <summary>
		/// 不使用历史持仓
		/// </summary>
		NoUseHistory = (Byte)'2',
	};
	/// <summary>
	/// 合约生命周期状态 CInstLifePhaseType
	/// </summary>
	public enum struct EnumInstLifePhaseType : Byte
	{
		/// <summary>
		/// 未上市
		/// </summary>
		NotStart = (Byte)'0',
		/// <summary>
		/// 上市
		/// </summary>
		Started = (Byte)'1',
		/// <summary>
		/// 停牌
		/// </summary>
		Pause = (Byte)'2',
		/// <summary>
		/// 到期
		/// </summary>
		Expired = (Byte)'3',
	};
	/// <summary>
	/// 持仓交易类型 CPosTradeTypeType
	/// </summary>
	public enum struct EnumPosTradeTypeType : Byte
	{
		/// <summary>
		/// 今日新增持仓能卖出
		/// </summary>
		CanSelTodayPos = (Byte)'1',
		/// <summary>
		/// 今日新增持仓不能卖出
		/// </summary>
		CannotSellTodayPos = (Byte)'2',
	};
	/// <summary>
	/// 证件类型 CIdCardTypeType
	/// </summary>
	public enum struct EnumIdCardTypeType : Byte
	{
		/// <summary>
		/// 组织机构代码
		/// </summary>
		EID = (Byte)'0',
		/// <summary>
		/// 身份证
		/// </summary>
		IDCard = (Byte)'1',
		/// <summary>
		/// 军官证
		/// </summary>
		OfficerIDCard = (Byte)'2',
		/// <summary>
		/// 警官证
		/// </summary>
		PoliceIDCard = (Byte)'3',
		/// <summary>
		/// 士兵证
		/// </summary>
		SoldierIDCard = (Byte)'4',
		/// <summary>
		/// 户口簿
		/// </summary>
		HouseholdRegister = (Byte)'5',
		/// <summary>
		/// 护照
		/// </summary>
		Passport = (Byte)'6',
		/// <summary>
		/// 台胞证
		/// </summary>
		TaiwanCompatriotIDCard = (Byte)'7',
		/// <summary>
		/// 回乡证
		/// </summary>
		HomeComingCard = (Byte)'8',
		/// <summary>
		/// 营业执照号
		/// </summary>
		LicenseNo = (Byte)'9',
		/// <summary>
		/// 税务登记号
		/// </summary>
		TaxNo = (Byte)'A',
		/// <summary>
		/// 其他证件
		/// </summary>
		OtherCard = (Byte)'x',
	};
	/// <summary>
	/// 交易编码类型 CClientTypeType
	/// </summary>
	public enum struct EnumClientTypeType : Byte
	{
		/// <summary>
		/// 普通
		/// </summary>
		Normal = (Byte)'1',
		/// <summary>
		/// 信用交易
		/// </summary>
		Credit = (Byte)'2',
		/// <summary>
		/// 衍生品账户
		/// </summary>
		Derive = (Byte)'3',
		/// <summary>
		/// 其他类型
		/// </summary>
		Other = (Byte)'4',
	};
	/// <summary>
	/// 功能代码 CFunctionCodeType
	/// </summary>
	public enum struct EnumFunctionCodeType : Byte
	{
		/// <summary>
		/// 强制用户登出
		/// </summary>
		ForceUserLogout = (Byte)'2',
		/// <summary>
		/// 变更管理用户口令
		/// </summary>
		UserPasswordUpdate = (Byte)'3',
		/// <summary>
		/// 变更经纪公司口令
		/// </summary>
		BrokerPasswordUpdate = (Byte)'4',
		/// <summary>
		/// 变更投资者口令
		/// </summary>
		InvestorPasswordUpdate = (Byte)'5',
		/// <summary>
		/// 报单插入
		/// </summary>
		OrderInsert = (Byte)'6',
		/// <summary>
		/// 报单操作
		/// </summary>
		OrderAction = (Byte)'7',
		/// <summary>
		/// 同步系统数据
		/// </summary>
		SyncSystemData = (Byte)'8',
		/// <summary>
		/// 同步经纪公司数据
		/// </summary>
		SyncBrokerData = (Byte)'9',
		/// <summary>
		/// 超级查询
		/// </summary>
		SuperQuery = (Byte)'B',
		/// <summary>
		/// 报单插入
		/// </summary>
		ParkedOrderInsert = (Byte)'C',
		/// <summary>
		/// 报单操作
		/// </summary>
		ParkedOrderAction = (Byte)'D',
		/// <summary>
		/// 同步动态令牌
		/// </summary>
		SyncOTP = (Byte)'E',
		/// <summary>
		/// 未知单操作
		/// </summary>
		UnkownOrderAction = (Byte)'F',
		/// <summary>
		/// 转托管
		/// </summary>
		DepositoryTransfer = (Byte)'G',
		/// <summary>
		/// 余券划转
		/// </summary>
		ExcessStockTransfer = (Byte)'H',
		/// <summary>
		/// 资金回拨
		/// </summary>
		FundBack = (Byte)'I',
	};
	/// <summary>
	/// 用户类型 CUserTypeType
	/// </summary>
	public enum struct EnumUserTypeType : Byte
	{
		/// <summary>
		/// 投资者
		/// </summary>
		Investor = (Byte)'0',
		/// <summary>
		/// 操作员
		/// </summary>
		Operator = (Byte)'1',
		/// <summary>
		/// 管理员
		/// </summary>
		SuperUser = (Byte)'2',
	};
	/// <summary>
	/// 经纪公司功能代码 CBrokerFunctionCodeType
	/// </summary>
	public enum struct EnumBrokerFunctionCodeType : Byte
	{
		/// <summary>
		/// 强制用户登出
		/// </summary>
		ForceUserLogout = (Byte)'1',
		/// <summary>
		/// 变更用户口令
		/// </summary>
		UserPasswordUpdate = (Byte)'2',
		/// <summary>
		/// 同步经纪公司数据
		/// </summary>
		SyncBrokerData = (Byte)'3',
		/// <summary>
		/// 报单插入
		/// </summary>
		OrderInsert = (Byte)'5',
		/// <summary>
		/// 报单操作
		/// </summary>
		OrderAction = (Byte)'6',
		/// <summary>
		/// 全部查询
		/// </summary>
		AllQuery = (Byte)'7',
		/// <summary>
		/// 未知单操作
		/// </summary>
		UnkownOrderAction = (Byte)'8',
		/// <summary>
		/// 转托管
		/// </summary>
		DepositoryTransfer = (Byte)'9',
		/// <summary>
		/// 余券划转
		/// </summary>
		ExcessStockTransfer = (Byte)'A',
		/// <summary>
		/// 资金内转
		/// </summary>
		FundInterTransfer = (Byte)'B',
		/// <summary>
		/// 资金回拨
		/// </summary>
		FundBack = (Byte)'C',
		/// <summary>
		/// 系统功能：登入/登出/修改密码等
		/// </summary>
		log = (Byte)'a',
		/// <summary>
		/// 基本查询：查询基础数据，如合约，交易所等常量
		/// </summary>
		BaseQry = (Byte)'b',
		/// <summary>
		/// 交易查询：如查成交，委托
		/// </summary>
		TradeQry = (Byte)'c',
		/// <summary>
		/// 交易功能：报单，撤单
		/// </summary>
		Trade = (Byte)'d',
		/// <summary>
		/// 转账
		/// </summary>
		Virement = (Byte)'e',
		/// <summary>
		/// 查询/管理：查询会话，踢人等
		/// </summary>
		Session = (Byte)'g',
		/// <summary>
		/// 同步动态令牌
		/// </summary>
		SyncOTP = (Byte)'E',
	};
	/// <summary>
	/// 账户类型 CAccountTypeType
	/// </summary>
	public enum struct EnumAccountTypeType : Byte
	{
		/// <summary>
		/// 普通账户
		/// </summary>
		Normal = (Byte)'1',
		/// <summary>
		/// 信用账户
		/// </summary>
		Credit = (Byte)'2',
		/// <summary>
		/// 衍生品账户
		/// </summary>
		Derive = (Byte)'3',
		/// <summary>
		/// 其他类型
		/// </summary>
		Other = (Byte)'4',
	};
	/// <summary>
	/// 投资者范围 CDepartmentRangeType
	/// </summary>
	public enum struct EnumDepartmentRangeType : Byte
	{
		/// <summary>
		/// 所有
		/// </summary>
		All = (Byte)'1',
		/// <summary>
		/// 组织架构
		/// </summary>
		Group = (Byte)'2',
		/// <summary>
		/// 单一投资者
		/// </summary>
		Single = (Byte)'3',
	};
	/// <summary>
	/// 客户权限类型 CUserRightTypeType
	/// </summary>
	public enum struct EnumUserRightTypeType : Byte
	{
		/// <summary>
		/// 登录
		/// </summary>
		Logon = (Byte)'1',
		/// <summary>
		/// 银期转帐
		/// </summary>
		Transfer = (Byte)'2',
		/// <summary>
		/// 邮寄结算单
		/// </summary>
		EMail = (Byte)'3',
		/// <summary>
		/// 传真结算单
		/// </summary>
		Fax = (Byte)'4',
		/// <summary>
		/// 条件单
		/// </summary>
		ConditionOrder = (Byte)'5',
	};
	/// <summary>
	/// 投机套保标志 CHedgeFlagType
	/// </summary>
	public enum struct EnumHedgeFlagType : Byte
	{
		/// <summary>
		/// 投机
		/// </summary>
		Speculation = (Byte)'1',
		/// <summary>
		/// 套保
		/// </summary>
		Hedge = (Byte)'3',
	};
	/// <summary>
	/// 买卖方向 CDirectionType
	/// </summary>
	public enum struct EnumDirectionType : Byte
	{
		/// <summary>
		/// 买
		/// </summary>
		Buy = (Byte)'0',
		/// <summary>
		/// 卖
		/// </summary>
		Sell = (Byte)'1',
		/// <summary>
		/// ETF申购
		/// </summary>
		ETFPur = (Byte)'2',
		/// <summary>
		/// ETF赎回
		/// </summary>
		ETFRed = (Byte)'3',
		/// <summary>
		/// 现金替代，只用作回报
		/// </summary>
		CashIn = (Byte)'4',
		/// <summary>
		/// 债券入库
		/// </summary>
		PledgeBondIn = (Byte)'5',
		/// <summary>
		/// 债券出库
		/// </summary>
		PledgeBondOut = (Byte)'6',
		/// <summary>
		/// 配股
		/// </summary>
		Rationed = (Byte)'7',
		/// <summary>
		/// 转托管
		/// </summary>
		DepositoryTransfer = (Byte)'8',
		/// <summary>
		/// 信用账户配股
		/// </summary>
		CreditRationed = (Byte)'9',
		/// <summary>
		/// 担保品买入
		/// </summary>
		BuyCollateral = (Byte)'A',
		/// <summary>
		/// 担保品卖出
		/// </summary>
		SellCollateral = (Byte)'B',
		/// <summary>
		/// 担保品转入
		/// </summary>
		CollateralTransferIn = (Byte)'C',
		/// <summary>
		/// 担保品转出
		/// </summary>
		CollateralTransferOut = (Byte)'D',
		/// <summary>
		/// 融资买入
		/// </summary>
		MarginTrade = (Byte)'E',
		/// <summary>
		/// 融券卖出
		/// </summary>
		ShortSell = (Byte)'F',
		/// <summary>
		/// 卖券还款
		/// </summary>
		RepayMargin = (Byte)'G',
		/// <summary>
		/// 买券还券
		/// </summary>
		RepayStock = (Byte)'H',
		/// <summary>
		/// 直接还款
		/// </summary>
		DirectRepayMargin = (Byte)'I',
		/// <summary>
		/// 直接还券
		/// </summary>
		DirectRepayStock = (Byte)'J',
		/// <summary>
		/// 余券划转
		/// </summary>
		ExcessStockTransfer = (Byte)'K',
		/// <summary>
		/// OF申购
		/// </summary>
		OFPur = (Byte)'L',
		/// <summary>
		/// OF赎回
		/// </summary>
		OFRed = (Byte)'M',
		/// <summary>
		/// SF拆分
		/// </summary>
		SFSplit = (Byte)'N',
		/// <summary>
		/// SF合并
		/// </summary>
		SFMerge = (Byte)'O',
		/// <summary>
		/// 备兑
		/// </summary>
		Covered = (Byte)'P',
		/// <summary>
		/// 证券冻结(开)/解冻(平)
		/// </summary>
		Freeze = (Byte)'Q',
		/// <summary>
		/// 行权
		/// </summary>
		Execute = (Byte)'R',
		/// <summary>
		/// CB回售
		/// </summary>
		CBRed = (Byte)'S',
		/// <summary>
		/// CB转股
		/// </summary>
		CBConv = (Byte)'T',
		/// <summary>
		/// OF认购
		/// </summary>
		OFSub = (Byte)'U',
		/// <summary>
		/// 场外申购
		/// </summary>
		OTCPur = (Byte)'V',
		/// <summary>
		/// 场外赎回
		/// </summary>
		OTCRed = (Byte)'W',
	};
	/// <summary>
	/// 成交类型 CTradeTypeType
	/// </summary>
	public enum struct EnumTradeTypeType : Byte
	{
		/// <summary>
		/// 普通成交
		/// </summary>
		Common = (Byte)'0',
		/// <summary>
		/// 期权执行
		/// </summary>
		OptionsExecution = (Byte)'1',
		/// <summary>
		/// OTC成交
		/// </summary>
		OTC = (Byte)'2',
		/// <summary>
		/// 期转现衍生成交
		/// </summary>
		EFPDerived = (Byte)'3',
		/// <summary>
		/// 组合衍生成交
		/// </summary>
		CombinationDerived = (Byte)'4',
		/// <summary>
		/// ETF申购
		/// </summary>
		EFTPurchase = (Byte)'5',
		/// <summary>
		/// ETF赎回
		/// </summary>
		EFTRedem = (Byte)'6',
	};
	/// <summary>
	/// 基金当天申购赎回状态 CCreationredemptionStatusType
	/// </summary>
	public enum struct EnumCreationredemptionStatusType : Byte
	{
		/// <summary>
		/// 不允许申购赎回
		/// </summary>
		Forbidden = (Byte)'0',
		/// <summary>
		/// 表示允许申购和赎回
		/// </summary>
		Allow = (Byte)'1',
		/// <summary>
		/// 允许申购、不允许赎回
		/// </summary>
		OnlyPurchase = (Byte)'2',
		/// <summary>
		/// 不允许申购、允许赎回
		/// </summary>
		OnlyRedeem = (Byte)'3',
	};
	/// <summary>
	/// ETF现金替代标志 CETFCurrenceReplaceStatusType
	/// </summary>
	public enum struct EnumETFCurrenceReplaceStatusType : Byte
	{
		/// <summary>
		/// 禁止现金替代
		/// </summary>
		Forbidden = (Byte)'0',
		/// <summary>
		/// 可以现金替代
		/// </summary>
		Allow = (Byte)'1',
		/// <summary>
		/// 必须现金替代
		/// </summary>
		Force = (Byte)'2',
		/// <summary>
		/// 跨市场股票退补现金替代
		/// </summary>
		CrossMarketComp = (Byte)'3',
		/// <summary>
		/// 跨市场必须现金替代
		/// </summary>
		CrossMarketFroce = (Byte)'4',
		/// <summary>
		/// 非沪深市场成分证券退补现金替代
		/// </summary>
		OtherMarketComp = (Byte)'5',
		/// <summary>
		/// 非沪深市场成份证券必须现金替代
		/// </summary>
		OtherMarketFroce = (Byte)'6',
	};
	/// <summary>
	/// 股本类型 CCapitalStockTypeType
	/// </summary>
	public enum struct EnumCapitalStockTypeType : Byte
	{
		/// <summary>
		/// 总通股本
		/// </summary>
		TOTALSTOCK = (Byte)'1',
		/// <summary>
		/// 流通股本
		/// </summary>
		CIRCULATION = (Byte)'2',
	};
	/// <summary>
	/// 保证金价格类型 CMarginPriceTypeType
	/// </summary>
	public enum struct EnumMarginPriceTypeType : Byte
	{
		/// <summary>
		/// 昨结算价
		/// </summary>
		PreSettlementPrice = (Byte)'1',
		/// <summary>
		/// 最新价
		/// </summary>
		SettlementPrice = (Byte)'2',
		/// <summary>
		/// 成交均价
		/// </summary>
		AveragePrice = (Byte)'3',
		/// <summary>
		/// 开仓价
		/// </summary>
		OpenPrice = (Byte)'4',
	};
	/// <summary>
	/// 盈亏算法 CAlgorithmType
	/// </summary>
	public enum struct EnumAlgorithmType : Byte
	{
		/// <summary>
		/// 浮盈浮亏都计算
		/// </summary>
		All = (Byte)'1',
		/// <summary>
		/// 浮盈不计，浮亏计
		/// </summary>
		OnlyLost = (Byte)'2',
		/// <summary>
		/// 浮盈计，浮亏不计
		/// </summary>
		OnlyGain = (Byte)'3',
		/// <summary>
		/// 浮盈浮亏都不计算
		/// </summary>
		None = (Byte)'4',
	};
	/// <summary>
	/// 是否包含平仓盈利 CIncludeCloseProfitType
	/// </summary>
	public enum struct EnumIncludeCloseProfitType : Byte
	{
		/// <summary>
		/// 包含平仓盈利
		/// </summary>
		Include = (Byte)'0',
		/// <summary>
		/// 不包含平仓盈利
		/// </summary>
		NotInclude = (Byte)'2',
	};
	/// <summary>
	/// 是否受可提比例限制 CAllWithoutTradeType
	/// </summary>
	public enum struct EnumAllWithoutTradeType : Byte
	{
		/// <summary>
		/// 不受可提比例限制
		/// </summary>
		Enable = (Byte)'0',
		/// <summary>
		/// 受可提比例限制
		/// </summary>
		Disable = (Byte)'2',
		/// <summary>
		/// 无仓不受可提比例限制
		/// </summary>
		NoHoldEnable = (Byte)'3',
	};
	/// <summary>
	/// 持仓处理算法编号 CHandlePositionAlgoIDType
	/// </summary>
	public enum struct EnumHandlePositionAlgoIDType : Byte
	{
		/// <summary>
		/// 基本
		/// </summary>
		Base = (Byte)'1',
		/// <summary>
		/// 非交易
		/// </summary>
		NoneTrade = (Byte)'4',
		/// <summary>
		/// 证券
		/// </summary>
		Stock = (Byte)'5',
	};
	/// <summary>
	/// 期权开仓限制类型 COpenRestrictTypeType
	/// </summary>
	public enum struct EnumOpenRestrictTypeType : Byte
	{
		/// <summary>
		/// 买入开仓
		/// </summary>
		BuyOpen = (Byte)'0',
		/// <summary>
		/// 所有开仓
		/// </summary>
		AllOpen = (Byte)'1',
	};
	/// <summary>
	/// 交易系统参数代码 CTradeParamIDType
	/// </summary>
	public enum struct EnumTradeParamIDType : Byte
	{
		/// <summary>
		/// 系统加密算法
		/// </summary>
		EncryptionStandard = (Byte)'E',
		/// <summary>
		/// 用户最大会话数
		/// </summary>
		SingleUserSessionMaxNum = (Byte)'S',
		/// <summary>
		/// 最大连续登录失败数
		/// </summary>
		LoginFailMaxNum = (Byte)'L',
		/// <summary>
		/// 是否强制认证
		/// </summary>
		IsAuthForce = (Byte)'A',
		/// <summary>
		/// 是否生成用户事件
		/// </summary>
		GenUserEvent = (Byte)'G',
		/// <summary>
		/// 起始报单本地编号
		/// </summary>
		StartOrderLocalID = (Byte)'O',
		/// <summary>
		/// 融资融券买券还券算法
		/// </summary>
		RepayStockAlgo = (Byte)'R',
		/// <summary>
		/// 衍生品账户资金提取线
		/// </summary>
		DeriveWithdrawRatio = (Byte)'D',
		/// <summary>
		/// 期权行权冻结可用起始时间
		/// </summary>
		ExecuteStartTime = (Byte)'T',
		/// <summary>
		/// 只可偿还历史融券负债
		/// </summary>
		OnlyRepayHisStock = (Byte)'H',
		/// <summary>
		/// 期权开仓限制类型
		/// </summary>
		OpenRestrictType = (Byte)'X',
		/// <summary>
		/// 市值配售是否冻结资金
		/// </summary>
		IPOFrozeCash = (Byte)'I',
		/// <summary>
		/// 资金回拨起始时间
		/// </summary>
		FundBackStartTime = (Byte)'F',
		/// <summary>
		/// 上交所起始系统编号
		/// </summary>
		SSEStartIndex = (Byte)'U',
		/// <summary>
		/// 深交所起始系统编号
		/// </summary>
		SZEStartIndex = (Byte)'V',
	};
	/// <summary>
	/// 投资者范围 CInvestorRangeType
	/// </summary>
	public enum struct EnumInvestorRangeType : Byte
	{
		/// <summary>
		/// 所有
		/// </summary>
		All = (Byte)'1',
		/// <summary>
		/// 投资者组
		/// </summary>
		Group = (Byte)'2',
		/// <summary>
		/// 单一投资者
		/// </summary>
		Single = (Byte)'3',
	};
	/// <summary>
	/// 数据同步状态 CDataSyncStatusType
	/// </summary>
	public enum struct EnumDataSyncStatusType : Byte
	{
		/// <summary>
		/// 未同步
		/// </summary>
		Asynchronous = (Byte)'1',
		/// <summary>
		/// 同步中
		/// </summary>
		Synchronizing = (Byte)'2',
		/// <summary>
		/// 已同步
		/// </summary>
		Synchronized = (Byte)'3',
	};
	/// <summary>
	/// 交易所交易员连接状态 CTraderConnectStatusType
	/// </summary>
	public enum struct EnumTraderConnectStatusType : Byte
	{
		/// <summary>
		/// 没有任何连接
		/// </summary>
		NotConnected = (Byte)'1',
		/// <summary>
		/// 已经连接
		/// </summary>
		Connected = (Byte)'2',
		/// <summary>
		/// 已经发出合约查询请求
		/// </summary>
		QryInstrumentSent = (Byte)'3',
		/// <summary>
		/// 订阅私有流
		/// </summary>
		SubPrivateFlow = (Byte)'4',
	};
	/// <summary>
	/// 报单操作状态 COrderActionStatusType
	/// </summary>
	public enum struct EnumOrderActionStatusType : Byte
	{
		/// <summary>
		/// 已经提交
		/// </summary>
		Submitted = (Byte)'a',
		/// <summary>
		/// 已经接受
		/// </summary>
		Accepted = (Byte)'b',
		/// <summary>
		/// 已经被拒绝
		/// </summary>
		Rejected = (Byte)'c',
	};
	/// <summary>
	/// 报单状态 COrderStatusType
	/// </summary>
	public enum struct EnumOrderStatusType : Byte
	{
		/// <summary>
		/// 全部成交
		/// </summary>
		AllTraded = (Byte)'0',
		/// <summary>
		/// 部分成交还在队列中
		/// </summary>
		PartTradedQueueing = (Byte)'1',
		/// <summary>
		/// 部分成交不在队列中
		/// </summary>
		PartTradedNotQueueing = (Byte)'2',
		/// <summary>
		/// 未成交还在队列中
		/// </summary>
		NoTradeQueueing = (Byte)'3',
		/// <summary>
		/// 未成交不在队列中
		/// </summary>
		NoTradeNotQueueing = (Byte)'4',
		/// <summary>
		/// 撤单
		/// </summary>
		Canceled = (Byte)'5',
		/// <summary>
		/// 未知
		/// </summary>
		Unknown = (Byte)'a',
		/// <summary>
		/// 尚未触发
		/// </summary>
		NotTouched = (Byte)'b',
		/// <summary>
		/// 已触发
		/// </summary>
		Touched = (Byte)'c',
	};
	/// <summary>
	/// 报单提交状态 COrderSubmitStatusType
	/// </summary>
	public enum struct EnumOrderSubmitStatusType : Byte
	{
		/// <summary>
		/// 已经提交
		/// </summary>
		InsertSubmitted = (Byte)'0',
		/// <summary>
		/// 撤单已经提交
		/// </summary>
		CancelSubmitted = (Byte)'1',
		/// <summary>
		/// 修改已经提交
		/// </summary>
		ModifySubmitted = (Byte)'2',
		/// <summary>
		/// 已经接受
		/// </summary>
		Accepted = (Byte)'3',
		/// <summary>
		/// 报单已经被拒绝
		/// </summary>
		InsertRejected = (Byte)'4',
		/// <summary>
		/// 撤单已经被拒绝
		/// </summary>
		CancelRejected = (Byte)'5',
		/// <summary>
		/// 改单已经被拒绝
		/// </summary>
		ModifyRejected = (Byte)'6',
	};
	/// <summary>
	/// 持仓日期 CPositionDateType
	/// </summary>
	public enum struct EnumPositionDateType : Byte
	{
		/// <summary>
		/// 今日持仓
		/// </summary>
		Today = (Byte)'1',
		/// <summary>
		/// 历史持仓
		/// </summary>
		History = (Byte)'2',
	};
	/// <summary>
	/// 交易角色 CTradingRoleType
	/// </summary>
	public enum struct EnumTradingRoleType : Byte
	{
		/// <summary>
		/// 代理
		/// </summary>
		Broker = (Byte)'1',
		/// <summary>
		/// 自营
		/// </summary>
		Host = (Byte)'2',
		/// <summary>
		/// 做市商
		/// </summary>
		Maker = (Byte)'3',
	};
	/// <summary>
	/// 持仓多空方向 CPosiDirectionType
	/// </summary>
	public enum struct EnumPosiDirectionType : Byte
	{
		/// <summary>
		/// 净
		/// </summary>
		Net = (Byte)'1',
		/// <summary>
		/// 多头
		/// </summary>
		Long = (Byte)'2',
		/// <summary>
		/// 空头
		/// </summary>
		Short = (Byte)'3',
		/// <summary>
		/// 备兑
		/// </summary>
		Covered = (Byte)'4',
	};
	/// <summary>
	/// 报单价格条件 COrderPriceTypeType
	/// </summary>
	public enum struct EnumOrderPriceTypeType : Byte
	{
		/// <summary>
		/// 即时成交剩余撤销市价单
		/// </summary>
		AnyPrice = (Byte)'1',
		/// <summary>
		/// 限价
		/// </summary>
		LimitPrice = (Byte)'2',
		/// <summary>
		/// 最优五档即时成交剩余撤销市价单
		/// </summary>
		BestPrice = (Byte)'3',
		/// <summary>
		/// 最优五档即时成交剩余转限价市价单
		/// </summary>
		BestLimitPrice = (Byte)'4',
		/// <summary>
		/// 全部成交或撤销市价单
		/// </summary>
		AllPrice = (Byte)'5',
		/// <summary>
		/// 本方最优价格市价单
		/// </summary>
		ForwardBestPrice = (Byte)'6',
		/// <summary>
		/// 对方最优价格市价单
		/// </summary>
		ReverseBestPrice = (Byte)'7',
		/// <summary>
		/// 即时成交剩余转限价市价单
		/// </summary>
		Any2LimitPrice = (Byte)'8',
		/// <summary>
		/// 全部成交或撤销限价单
		/// </summary>
		AllLimitPrice = (Byte)'9',
		/// <summary>
		/// 增强限价单
		/// </summary>
		EnhancedLimitPrice = (Byte)'A',
		/// <summary>
		/// 零股限价单
		/// </summary>
		FractionLimitPrice = (Byte)'B',
		/// <summary>
		/// 激活A股网络密码服务代码
		/// </summary>
		ActiveANetPassSvrCode = (Byte)'G',
		/// <summary>
		/// 注销A股网络密码服务代码
		/// </summary>
		InactiveANetPassSvrCode = (Byte)'H',
		/// <summary>
		/// 激活B股网络密码服务代码
		/// </summary>
		ActiveBNetPassSvrCode = (Byte)'I',
		/// <summary>
		/// 注销B股网络密码服务代码
		/// </summary>
		InactiveBNetPassSvrCode = (Byte)'J',
		/// <summary>
		/// 回购注销
		/// </summary>
		Repurchase = (Byte)'K',
		/// <summary>
		/// 指定撤销
		/// </summary>
		DesignatedCancel = (Byte)'L',
		/// <summary>
		/// 指定登记
		/// </summary>
		Designated = (Byte)'M',
		/// <summary>
		/// 证券参与申购
		/// </summary>
		SubscribingShares = (Byte)'N',
		/// <summary>
		/// 证券参与配股
		/// </summary>
		Split = (Byte)'O',
		/// <summary>
		/// 要约收购登记
		/// </summary>
		TenderOffer = (Byte)'P',
		/// <summary>
		/// 要约收购撤销
		/// </summary>
		TenderOfferCancel = (Byte)'Q',
		/// <summary>
		/// 证券投票
		/// </summary>
		Ballot = (Byte)'R',
		/// <summary>
		/// 可转债转换登记
		/// </summary>
		ConvertibleBondsConvet = (Byte)'S',
		/// <summary>
		/// 可转债回售登记
		/// </summary>
		ConvertibleBondsRepurchase = (Byte)'T',
		/// <summary>
		/// 权证行权
		/// </summary>
		Exercise = (Byte)'U',
		/// <summary>
		/// 开放式基金申购
		/// </summary>
		PurchasingFunds = (Byte)'V',
		/// <summary>
		/// 开放式基金赎回
		/// </summary>
		RedemingFunds = (Byte)'W',
		/// <summary>
		/// 开放式基金认购
		/// </summary>
		SubscribingFunds = (Byte)'X',
		/// <summary>
		/// 开放式基金转托管转出
		/// </summary>
		LOFIssue = (Byte)'Y',
		/// <summary>
		/// 开放式基金设置分红方式
		/// </summary>
		LOFSetBonusType = (Byte)'Z',
		/// <summary>
		/// 开放式基金转换为其他基金
		/// </summary>
		LOFConvert = (Byte)'a',
		/// <summary>
		/// 债券入库
		/// </summary>
		DebentureStockIn = (Byte)'b',
		/// <summary>
		/// 债券出库
		/// </summary>
		DebentureStockOut = (Byte)'c',
		/// <summary>
		/// ETF申购
		/// </summary>
		PurchasesETF = (Byte)'d',
		/// <summary>
		/// ETF赎回
		/// </summary>
		RedeemETF = (Byte)'e',
	};
	/// <summary>
	/// 开平标志 COffsetFlagType
	/// </summary>
	public enum struct EnumOffsetFlagType : Byte
	{
		/// <summary>
		/// 开仓
		/// </summary>
		Open = (Byte)'0',
		/// <summary>
		/// 平仓
		/// </summary>
		Close = (Byte)'1',
		/// <summary>
		/// 强平
		/// </summary>
		ForceClose = (Byte)'2',
		/// <summary>
		/// 平今
		/// </summary>
		CloseToday = (Byte)'3',
		/// <summary>
		/// 平昨
		/// </summary>
		CloseYesterday = (Byte)'4',
		/// <summary>
		/// 强减
		/// </summary>
		ForceOff = (Byte)'5',
		/// <summary>
		/// 本地强平
		/// </summary>
		LocalForceClose = (Byte)'6',
	};
	/// <summary>
	/// 强平原因 CForceCloseReasonType
	/// </summary>
	public enum struct EnumForceCloseReasonType : Byte
	{
		/// <summary>
		/// 非强平
		/// </summary>
		NotForceClose = (Byte)'0',
		/// <summary>
		/// 资金不足
		/// </summary>
		LackDeposit = (Byte)'1',
		/// <summary>
		/// 客户超仓
		/// </summary>
		ClientOverPositionLimit = (Byte)'2',
		/// <summary>
		/// 会员超仓
		/// </summary>
		MemberOverPositionLimit = (Byte)'3',
		/// <summary>
		/// 持仓非整数倍
		/// </summary>
		NotMultiple = (Byte)'4',
		/// <summary>
		/// 违规
		/// </summary>
		Violation = (Byte)'5',
		/// <summary>
		/// 其它
		/// </summary>
		Other = (Byte)'6',
		/// <summary>
		/// 自然人临近交割
		/// </summary>
		PersonDeliv = (Byte)'7',
	};
	/// <summary>
	/// 报单类型 COrderTypeType
	/// </summary>
	public enum struct EnumOrderTypeType : Byte
	{
		/// <summary>
		/// 正常
		/// </summary>
		Normal = (Byte)'0',
		/// <summary>
		/// 报价衍生
		/// </summary>
		DeriveFromQuote = (Byte)'1',
		/// <summary>
		/// 组合衍生
		/// </summary>
		DeriveFromCombination = (Byte)'2',
		/// <summary>
		/// 组合报单
		/// </summary>
		Combination = (Byte)'3',
		/// <summary>
		/// 条件单
		/// </summary>
		ConditionalOrder = (Byte)'4',
		/// <summary>
		/// 互换单
		/// </summary>
		Swap = (Byte)'5',
	};
	/// <summary>
	/// 有效期类型 CTimeConditionType
	/// </summary>
	public enum struct EnumTimeConditionType : Byte
	{
		/// <summary>
		/// 立即完成，否则撤销
		/// </summary>
		IOC = (Byte)'1',
		/// <summary>
		/// 本节有效
		/// </summary>
		GFS = (Byte)'2',
		/// <summary>
		/// 当日有效
		/// </summary>
		GFD = (Byte)'3',
		/// <summary>
		/// 指定日期前有效
		/// </summary>
		GTD = (Byte)'4',
		/// <summary>
		/// 撤销前有效
		/// </summary>
		GTC = (Byte)'5',
		/// <summary>
		/// 集合竞价有效
		/// </summary>
		GFA = (Byte)'6',
	};
	/// <summary>
	/// 成交量类型 CVolumeConditionType
	/// </summary>
	public enum struct EnumVolumeConditionType : Byte
	{
		/// <summary>
		/// 任何数量
		/// </summary>
		AV = (Byte)'1',
		/// <summary>
		/// 最小数量
		/// </summary>
		MV = (Byte)'2',
		/// <summary>
		/// 全部数量
		/// </summary>
		CV = (Byte)'3',
	};
	/// <summary>
	/// 触发条件 CContingentConditionType
	/// </summary>
	public enum struct EnumContingentConditionType : Byte
	{
		/// <summary>
		/// 立即
		/// </summary>
		Immediately = (Byte)'1',
		/// <summary>
		/// 止损
		/// </summary>
		Touch = (Byte)'2',
		/// <summary>
		/// 止赢
		/// </summary>
		TouchProfit = (Byte)'3',
		/// <summary>
		/// 预埋单
		/// </summary>
		ParkedOrder = (Byte)'4',
		/// <summary>
		/// 最新价大于条件价
		/// </summary>
		LastPriceGreaterThanStopPrice = (Byte)'5',
		/// <summary>
		/// 最新价大于等于条件价
		/// </summary>
		LastPriceGreaterEqualStopPrice = (Byte)'6',
		/// <summary>
		/// 最新价小于条件价
		/// </summary>
		LastPriceLesserThanStopPrice = (Byte)'7',
		/// <summary>
		/// 最新价小于等于条件价
		/// </summary>
		LastPriceLesserEqualStopPrice = (Byte)'8',
		/// <summary>
		/// 卖一价大于条件价
		/// </summary>
		AskPriceGreaterThanStopPrice = (Byte)'9',
		/// <summary>
		/// 卖一价大于等于条件价
		/// </summary>
		AskPriceGreaterEqualStopPrice = (Byte)'A',
		/// <summary>
		/// 卖一价小于条件价
		/// </summary>
		AskPriceLesserThanStopPrice = (Byte)'B',
		/// <summary>
		/// 卖一价小于等于条件价
		/// </summary>
		AskPriceLesserEqualStopPrice = (Byte)'C',
		/// <summary>
		/// 买一价大于条件价
		/// </summary>
		BidPriceGreaterThanStopPrice = (Byte)'D',
		/// <summary>
		/// 买一价大于等于条件价
		/// </summary>
		BidPriceGreaterEqualStopPrice = (Byte)'E',
		/// <summary>
		/// 买一价小于条件价
		/// </summary>
		BidPriceLesserThanStopPrice = (Byte)'F',
		/// <summary>
		/// 买一价小于等于条件价
		/// </summary>
		BidPriceLesserEqualStopPrice = (Byte)'H',
	};
	/// <summary>
	/// 操作标志 CActionFlagType
	/// </summary>
	public enum struct EnumActionFlagType : Byte
	{
		/// <summary>
		/// 删除
		/// </summary>
		Delete = (Byte)'0',
		/// <summary>
		/// 修改
		/// </summary>
		Modify = (Byte)'3',
	};
	/// <summary>
	/// 交易权限 CTradingRightType
	/// </summary>
	public enum struct EnumTradingRightType : Byte
	{
		/// <summary>
		/// 可以交易
		/// </summary>
		Allow = (Byte)'0',
		/// <summary>
		/// 不能交易
		/// </summary>
		Forbidden = (Byte)'2',
	};
	/// <summary>
	/// 报单来源 COrderSourceType
	/// </summary>
	public enum struct EnumOrderSourceType : Byte
	{
		/// <summary>
		/// 来自参与者
		/// </summary>
		Participant = (Byte)'0',
		/// <summary>
		/// 来自管理员
		/// </summary>
		Administrator = (Byte)'1',
	};
	/// <summary>
	/// 成交价来源 CPriceSourceType
	/// </summary>
	public enum struct EnumPriceSourceType : Byte
	{
		/// <summary>
		/// 前成交价
		/// </summary>
		LastPrice = (Byte)'0',
		/// <summary>
		/// 买委托价
		/// </summary>
		Buy = (Byte)'1',
		/// <summary>
		/// 卖委托价
		/// </summary>
		Sell = (Byte)'2',
	};
	/// <summary>
	/// 用户事件类型 CUserEventTypeType
	/// </summary>
	public enum struct EnumUserEventTypeType : Byte
	{
		/// <summary>
		/// 登录
		/// </summary>
		Login = (Byte)'1',
		/// <summary>
		/// 登出
		/// </summary>
		Logout = (Byte)'2',
		/// <summary>
		/// 交易成功
		/// </summary>
		Trading = (Byte)'3',
		/// <summary>
		/// 交易失败
		/// </summary>
		TradingError = (Byte)'4',
		/// <summary>
		/// 修改密码
		/// </summary>
		UpdatePassword = (Byte)'5',
		/// <summary>
		/// 客户端认证
		/// </summary>
		Authenticate = (Byte)'6',
		/// <summary>
		/// 其他
		/// </summary>
		Other = (Byte)'9',
	};
	/// <summary>
	/// 动态令牌类型 COTPTypeType
	/// </summary>
	public enum struct EnumOTPTypeType : Byte
	{
		/// <summary>
		/// 无动态令牌
		/// </summary>
		NONE = (Byte)'0',
		/// <summary>
		/// 时间令牌
		/// </summary>
		TOTP = (Byte)'1',
	};
	/// <summary>
	/// 成交来源 CTradeSourceType
	/// </summary>
	public enum struct EnumTradeSourceType : Byte
	{
		/// <summary>
		/// 来自交易所普通回报
		/// </summary>
		NORMAL = (Byte)'0',
		/// <summary>
		/// 来自查询
		/// </summary>
		QUERY = (Byte)'1',
	};
	/// <summary>
	/// 股票权限分类 CInstrumentRangeType
	/// </summary>
	public enum struct EnumInstrumentRangeType : Byte
	{
		/// <summary>
		/// 所有
		/// </summary>
		All = (Byte)'1',
		/// <summary>
		/// 产品
		/// </summary>
		Product = (Byte)'2',
		/// <summary>
		/// 股票权限模版
		/// </summary>
		Model = (Byte)'3',
		/// <summary>
		/// 股票
		/// </summary>
		Stock = (Byte)'4',
		/// <summary>
		/// 市场
		/// </summary>
		Market = (Byte)'5',
	};
	/// <summary>
	/// 证券交易类型 CStockTradeTypeType
	/// </summary>
	public enum struct EnumStockTradeTypeType : Byte
	{
		/// <summary>
		/// 可交易证券
		/// </summary>
		Stock = (Byte)'0',
		/// <summary>
		/// 买入网络密码服务
		/// </summary>
		BuyNetService = (Byte)'1',
		/// <summary>
		/// 回购注销
		/// </summary>
		CancelRepurchase = (Byte)'2',
		/// <summary>
		/// 指定撤销
		/// </summary>
		CancelRegister = (Byte)'3',
		/// <summary>
		/// 指定登记
		/// </summary>
		Register = (Byte)'4',
		/// <summary>
		/// 买入发行申购
		/// </summary>
		PurchaseIssue = (Byte)'5',
		/// <summary>
		/// 卖出配股
		/// </summary>
		Allotment = (Byte)'6',
		/// <summary>
		/// 卖出要约收购
		/// </summary>
		SellTender = (Byte)'7',
		/// <summary>
		/// 买入要约收购
		/// </summary>
		BuyTender = (Byte)'8',
		/// <summary>
		/// 网上投票
		/// </summary>
		NetVote = (Byte)'9',
		/// <summary>
		/// 卖出可转债回售
		/// </summary>
		SellConvertibleBonds = (Byte)'a',
		/// <summary>
		/// 权证行权代码
		/// </summary>
		OptionExecute = (Byte)'b',
		/// <summary>
		/// 开放式基金申购
		/// </summary>
		PurchaseOF = (Byte)'c',
		/// <summary>
		/// 开放式基金赎回
		/// </summary>
		RedeemOF = (Byte)'d',
		/// <summary>
		/// 开放式基金认购
		/// </summary>
		SubscribeOF = (Byte)'e',
		/// <summary>
		/// 开放式基金转托管转出
		/// </summary>
		OFCustodianTranfer = (Byte)'f',
		/// <summary>
		/// 开放式基金分红设置
		/// </summary>
		OFDividendConfig = (Byte)'g',
		/// <summary>
		/// 开放式基金转成其他基金
		/// </summary>
		OFTransfer = (Byte)'h',
		/// <summary>
		/// 债券入库
		/// </summary>
		BondsIn = (Byte)'i',
		/// <summary>
		/// 债券出库
		/// </summary>
		BondsOut = (Byte)'j',
		/// <summary>
		/// EFT申购
		/// </summary>
		PurchaseETF = (Byte)'k',
		/// <summary>
		/// EFT赎回
		/// </summary>
		RedeemETF = (Byte)'l',
		/// <summary>
		/// 可转债回售登记
		/// </summary>
		ConvertibleRegister = (Byte)'m',
	};
	/// <summary>
	/// 资金处理算法编号 CHandleTradingAccountAlgoIDType
	/// </summary>
	public enum struct EnumHandleTradingAccountAlgoIDType : Byte
	{
		/// <summary>
		/// 基本
		/// </summary>
		Base = (Byte)'1',
	};
	/// <summary>
	/// 出入金类型 CFundIOTypeType
	/// </summary>
	public enum struct EnumFundIOTypeType : Byte
	{
		/// <summary>
		/// 出入金
		/// </summary>
		FundIO = (Byte)'1',
		/// <summary>
		/// 银期转帐
		/// </summary>
		Transfer = (Byte)'2',
	};
	/// <summary>
	/// 资金类型 CFundTypeType
	/// </summary>
	public enum struct EnumFundTypeType : Byte
	{
		/// <summary>
		/// 银行存款
		/// </summary>
		Deposite = (Byte)'1',
		/// <summary>
		/// 分项资金
		/// </summary>
		ItemFund = (Byte)'2',
		/// <summary>
		/// 公司调整
		/// </summary>
		Company = (Byte)'3',
	};
	/// <summary>
	/// 出入金方向 CFundDirectionType
	/// </summary>
	public enum struct EnumFundDirectionType : Byte
	{
		/// <summary>
		/// 入金
		/// </summary>
		In = (Byte)'1',
		/// <summary>
		/// 出金
		/// </summary>
		Out = (Byte)'2',
	};
	/// <summary>
	/// 银行统一标识类型 CBankFlagType
	/// </summary>
	public enum struct EnumBankFlagType : Byte
	{
		/// <summary>
		/// 工商银行
		/// </summary>
		ICBC = (Byte)'1',
		/// <summary>
		/// 农业银行
		/// </summary>
		ABC = (Byte)'2',
		/// <summary>
		/// 中国银行
		/// </summary>
		BC = (Byte)'3',
		/// <summary>
		/// 建设银行
		/// </summary>
		CBC = (Byte)'4',
		/// <summary>
		/// 交通银行
		/// </summary>
		BOC = (Byte)'5',
		/// <summary>
		/// 其他银行
		/// </summary>
		Other = (Byte)'Z',
	};
	/// <summary>
	/// 资金状态 CFundStatusType
	/// </summary>
	public enum struct EnumFundStatusType : Byte
	{
		/// <summary>
		/// 已录入
		/// </summary>
		Record = (Byte)'1',
		/// <summary>
		/// 已复核
		/// </summary>
		Check = (Byte)'2',
		/// <summary>
		/// 已冲销
		/// </summary>
		Charge = (Byte)'3',
	};
	/// <summary>
	/// 最后分片标志 CLastFragmentType
	/// </summary>
	public enum struct EnumLastFragmentType : Byte
	{
		/// <summary>
		/// 是最后分片
		/// </summary>
		Yes = (Byte)'0',
		/// <summary>
		/// 不是最后分片
		/// </summary>
		No = (Byte)'1',
	};
	/// <summary>
	/// 客户类型 CCustTypeType
	/// </summary>
	public enum struct EnumCustTypeType : Byte
	{
		/// <summary>
		/// 自然人
		/// </summary>
		Person = (Byte)'0',
		/// <summary>
		/// 机构户
		/// </summary>
		Institution = (Byte)'1',
	};
	/// <summary>
	/// 是或否标识 CYesNoIndicatorType
	/// </summary>
	public enum struct EnumYesNoIndicatorType : Byte
	{
		/// <summary>
		/// 是
		/// </summary>
		Yes = (Byte)'0',
		/// <summary>
		/// 否
		/// </summary>
		No = (Byte)'1',
	};
	/// <summary>
	/// 费用支付标志 CFeePayFlagType
	/// </summary>
	public enum struct EnumFeePayFlagType : Byte
	{
		/// <summary>
		/// 由受益方支付费用
		/// </summary>
		BEN = (Byte)'0',
		/// <summary>
		/// 由发送方支付费用
		/// </summary>
		OUR = (Byte)'1',
		/// <summary>
		/// 由发送方支付发起的费用，受益方支付接受的费用
		/// </summary>
		SHA = (Byte)'2',
	};
	/// <summary>
	/// 银行帐号类型 CBankAccTypeType
	/// </summary>
	public enum struct EnumBankAccTypeType : Byte
	{
		/// <summary>
		/// 银行存折
		/// </summary>
		BankBook = (Byte)'1',
		/// <summary>
		/// 储蓄卡
		/// </summary>
		SavingCard = (Byte)'2',
		/// <summary>
		/// 信用卡
		/// </summary>
		CreditCard = (Byte)'3',
	};
	/// <summary>
	/// 密码核对标志 CPwdFlagType
	/// </summary>
	public enum struct EnumPwdFlagType : Byte
	{
		/// <summary>
		/// 不核对
		/// </summary>
		NoCheck = (Byte)'0',
		/// <summary>
		/// 明文核对
		/// </summary>
		BlankCheck = (Byte)'1',
		/// <summary>
		/// 密文核对
		/// </summary>
		EncryptCheck = (Byte)'2',
	};
	/// <summary>
	/// 转账交易状态 CTransferStatusType
	/// </summary>
	public enum struct EnumTransferStatusType : Byte
	{
		/// <summary>
		/// 正常
		/// </summary>
		Normal = (Byte)'0',
		/// <summary>
		/// 被冲正
		/// </summary>
		Repealed = (Byte)'1',
	};
	/// <summary>
	/// 有效标志 CAvailabilityFlagType
	/// </summary>
	public enum struct EnumAvailabilityFlagType : Byte
	{
		/// <summary>
		/// 未确认
		/// </summary>
		Invalid = (Byte)'0',
		/// <summary>
		/// 有效
		/// </summary>
		Valid = (Byte)'1',
		/// <summary>
		/// 冲正
		/// </summary>
		Repeal = (Byte)'2',
	};
	/// <summary>
	/// 买券还券算法 CRepayStockAlgoType
	/// </summary>
	public enum struct EnumRepayStockAlgoType : Byte
	{
		/// <summary>
		/// 默认算法
		/// </summary>
		Original = (Byte)'0',
		/// <summary>
		/// 按还券比例计算
		/// </summary>
		Ratio = (Byte)'1',
		/// <summary>
		/// Min[1,2]
		/// </summary>
		Min = (Byte)'2',
	};
	/// <summary>
	/// 交易时间段类型 CTradeSpanType
	/// </summary>
	public enum struct EnumTradeSpanType : Byte
	{
		/// <summary>
		/// 普通业务
		/// </summary>
		Common = (Byte)'1',
		/// <summary>
		/// 转账
		/// </summary>
		Transfer = (Byte)'2',
		/// <summary>
		/// 港股
		/// </summary>
		HK = (Byte)'3',
	};
	/// <summary>
	/// 所属结算系统类型 CSettleSystemTypeType
	/// </summary>
	public enum struct EnumSettleSystemTypeType : Byte
	{
		/// <summary>
		/// 顶点系统
		/// </summary>
		Aboss = (Byte)'1',
		/// <summary>
		/// 恒生系统
		/// </summary>
		HS = (Byte)'2',
	};
	/// <summary>
	/// 基金当天拆分合并状态 CSplitMergeStatusType
	/// </summary>
	public enum struct EnumSplitMergeStatusType : Byte
	{
		/// <summary>
		/// 表示允许拆分和合并
		/// </summary>
		Allow = (Byte)'0',
		/// <summary>
		/// 允许拆分、不允许合并
		/// </summary>
		OnlySplit = (Byte)'1',
		/// <summary>
		/// 不允许拆分、允许合并
		/// </summary>
		OnlyMerge = (Byte)'2',
		/// <summary>
		/// 不允许拆分和合并
		/// </summary>
		Forbidden = (Byte)'3',
	};
	/// <summary>
	/// 资金内转类型 CFundInterTransferTypeType
	/// </summary>
	public enum struct EnumFundInterTransferTypeType : Byte
	{
		/// <summary>
		/// 转入
		/// </summary>
		TransferIn = (Byte)'0',
		/// <summary>
		/// 转出
		/// </summary>
		TransferOut = (Byte)'1',
	};
	/// <summary>
	/// 合约类型 CInstrumentTypeType
	/// </summary>
	public enum struct EnumInstrumentTypeType : Byte
	{
		/// <summary>
		/// 普通
		/// </summary>
		Normal = (Byte)'0',
		/// <summary>
		/// 看涨期权
		/// </summary>
		CallOptions = (Byte)'1',
		/// <summary>
		/// 看跌期权
		/// </summary>
		PutOptions = (Byte)'2',
		/// <summary>
		/// 普通(STEP)
		/// </summary>
		Normal_STEP = (Byte)'3',
		/// <summary>
		/// 债券分销
		/// </summary>
		BondsRation = (Byte)'4',
		/// <summary>
		/// 质押式回购
		/// </summary>
		PledgedRep = (Byte)'5',
		/// <summary>
		/// 密码服务
		/// </summary>
		Password = (Byte)'6',
		/// <summary>
		/// 普通(DCOM)
		/// </summary>
		Normal_DCOM = (Byte)'7',
	};
	/// <summary>
	/// 投资者期权交易等级 CInvestorLevelType
	/// </summary>
	public enum struct EnumInvestorLevelType : Byte
	{
		/// <summary>
		/// 一级
		/// </summary>
		Level_1 = (Byte)'0',
		/// <summary>
		/// 二级
		/// </summary>
		Level_2 = (Byte)'1',
		/// <summary>
		/// 三级
		/// </summary>
		Level_3 = (Byte)'2',
	};
	/// <summary>
	/// 平仓方向 CCloseDirectionType
	/// </summary>
	public enum struct EnumCloseDirectionType : Byte
	{
		/// <summary>
		/// 买平仓
		/// </summary>
		CloseBuy = (Byte)'!',
		/// <summary>
		/// 卖平仓
		/// </summary>
		CloseSell = (Byte)'@',
		/// <summary>
		/// 备兑平仓
		/// </summary>
		CloseCover = (Byte)'#',
	};
	/// <summary>
	/// 交割类型 CDelivTypeType
	/// </summary>
	public enum struct EnumDelivTypeType : Byte
	{
		/// <summary>
		/// 看涨期权执行
		/// </summary>
		ExecCallOptions = (Byte)'0',
		/// <summary>
		/// 看跌期权执行
		/// </summary>
		ExecPutOptions = (Byte)'1',
		/// <summary>
		/// 在途证券
		/// </summary>
		UnavailStock = (Byte)'2',
		/// <summary>
		/// 赎回在途资金
		/// </summary>
		UnavailRedMoney = (Byte)'3',
	};
	/// <summary>
	/// 到期类型 CExpireTypeType
	/// </summary>
	public enum struct EnumExpireTypeType : Byte
	{
		/// <summary>
		/// 正回购到期
		/// </summary>
		Repurchase = (Byte)'0',
		/// <summary>
		/// 逆回购到期
		/// </summary>
		ReverseRepurch = (Byte)'1',
		/// <summary>
		/// 债券到期
		/// </summary>
		Bond = (Byte)'2',
	};
	/// <summary>
	/// 基金类别 CFundClassType
	/// </summary>
	public enum struct EnumFundClassType : Byte
	{
		/// <summary>
		/// 发行期
		/// </summary>
		Subscription = (Byte)'0',
		/// <summary>
		/// 普通型
		/// </summary>
		Normal = (Byte)'1',
		/// <summary>
		/// 货币型
		/// </summary>
		Monetary = (Byte)'2',
		/// <summary>
		/// 黄金ETF
		/// </summary>
		AuETF = (Byte)'3',
		/// <summary>
		/// 跨市场ETF
		/// </summary>
		CrossMarket = (Byte)'4',
	};
	/// <summary>
	/// 交易阶段 CTradingPhaseType
	/// </summary>
	public enum struct EnumTradingPhaseType : Byte
	{
		/// <summary>
		/// 非交易时段
		/// </summary>
		NonTrade = (Byte)'0',
		/// <summary>
		/// 集合竞价时段
		/// </summary>
		Bidding = (Byte)'1',
		/// <summary>
		/// 连续交易时段
		/// </summary>
		Continuous = (Byte)'2',
		/// <summary>
		/// 停牌时段
		/// </summary>
		Suspension = (Byte)'3',
		/// <summary>
		/// 波动性熔断时段
		/// </summary>
		Fuse = (Byte)'4',
		/// <summary>
		/// 可恢复熔断时段
		/// </summary>
		RecovFuse = (Byte)'5',
		/// <summary>
		/// 不可恢复熔断时段
		/// </summary>
		UnrecovFuse = (Byte)'6',
		/// <summary>
		/// 集合竞价结束时段
		/// </summary>
		BiddingOver = (Byte)'7',
		/// <summary>
		/// 临时停牌时段
		/// </summary>
		TempSuspension = (Byte)'8',
		/// <summary>
		/// 市调机制时段
		/// </summary>
		VCM = (Byte)'9',
	};
	/// <summary>
	/// 开仓限制 COpenRestrictionType
	/// </summary>
	public enum struct EnumOpenRestrictionType : Byte
	{
		/// <summary>
		/// 无开仓限制
		/// </summary>
		None = (Byte)'0',
		/// <summary>
		/// 限制备兑开仓
		/// </summary>
		NoCoverOpen = (Byte)'1',
		/// <summary>
		/// 限制卖出开仓
		/// </summary>
		NoSellOpen = (Byte)'2',
		/// <summary>
		/// 限制卖出开仓、备兑开仓
		/// </summary>
		NoSellAndCoverOpen = (Byte)'3',
		/// <summary>
		/// 限制买入开仓
		/// </summary>
		NoBuyOpen = (Byte)'4',
		/// <summary>
		/// 限制买入开仓、备兑开仓
		/// </summary>
		NoBuyAndCoverOpen = (Byte)'5',
		/// <summary>
		/// 限制买入开仓、卖出开仓
		/// </summary>
		NoBuyAndSellOpen = (Byte)'6',
		/// <summary>
		/// 限制买入开仓、卖出开仓、备兑开仓
		/// </summary>
		NoBuySellAndCoverOpen = (Byte)'7',
	};
	/// <summary>
	/// 报盘类型 COfferTypeType
	/// </summary>
	public enum struct EnumOfferTypeType : Byte
	{
		/// <summary>
		/// 普通报盘
		/// </summary>
		Normal = (Byte)'0',
		/// <summary>
		/// 期权报盘
		/// </summary>
		Options = (Byte)'1',
		/// <summary>
		/// 非交易报盘
		/// </summary>
		NonTrade = (Byte)'2',
	};
	/// <summary>
	/// 调整状态 CAdjustStatusType
	/// </summary>
	public enum struct EnumAdjustStatusType : Byte
	{
		/// <summary>
		/// 已录入
		/// </summary>
		Record = (Byte)'1',
		/// <summary>
		/// 已复核
		/// </summary>
		Check = (Byte)'2',
	};
	/// <summary>
	/// 终端交易标的 CTermTradeTargetType
	/// </summary>
	public enum struct EnumTermTradeTargetType : Byte
	{
		/// <summary>
		/// 无限制
		/// </summary>
		None = (Byte)'0',
		/// <summary>
		/// 仅期权交易
		/// </summary>
		OnlyOptions = (Byte)'1',
	};
	/// <summary>
	/// 平台编号 CPlatformIDType
	/// </summary>
	public enum struct EnumPlatformIDType : Byte
	{
		/// <summary>
		/// 现货集中竞价交易平台
		/// </summary>
		Spot = (Byte)'1',
		/// <summary>
		/// 综合金融服务平台
		/// </summary>
		CompFinancial = (Byte)'2',
		/// <summary>
		/// 非交易处理平台
		/// </summary>
		NonTrade = (Byte)'3',
		/// <summary>
		/// 衍生品集中竞价交易平台
		/// </summary>
		Derivative = (Byte)'4',
	};
	/// <summary>
	/// 平台状态 CPlatformStateType
	/// </summary>
	public enum struct EnumPlatformStateType : Byte
	{
		/// <summary>
		/// 未开放
		/// </summary>
		PreOpen = (Byte)'0',
		/// <summary>
		/// 即将开放
		/// </summary>
		OpenUpComing = (Byte)'1',
		/// <summary>
		/// 开放
		/// </summary>
		Open = (Byte)'2',
		/// <summary>
		/// 暂停开放
		/// </summary>
		Halt = (Byte)'3',
		/// <summary>
		/// 关闭
		/// </summary>
		Close = (Byte)'4',
	};
	/// <summary>
	/// 响应信息
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcRspInfoField
	{
		/// <summary>
		/// 错误代码
		/// </summary>
		int ErrorID;
		/// <summary>
		/// 错误信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};
	/// <summary>
	/// 交易所
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcExchangeField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 交易所名称
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeName;
		/// <summary>
		/// 交易所属性
		/// </summary>
		EnumExchangePropertyType ExchangeProperty;
	};
	/// <summary>
	/// 产品
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcProductField
	{
		/// <summary>
		/// 产品代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ProductID;
		/// <summary>
		/// 产品名称
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ProductName;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 产品类型
		/// </summary>
		EnumProductClassType ProductClass;
		/// <summary>
		/// 合约数量乘数
		/// </summary>
		int VolumeMultiple;
		/// <summary>
		/// 最小变动价位
		/// </summary>
		double PriceTick;
		/// <summary>
		/// 市价单最大下单量
		/// </summary>
		int MaxMarketOrderVolume;
		/// <summary>
		/// 市价单最小下单量
		/// </summary>
		int MinMarketOrderVolume;
		/// <summary>
		/// 限价单最大下单量
		/// </summary>
		int MaxLimitOrderVolume;
		/// <summary>
		/// 限价单最小下单量
		/// </summary>
		int MinLimitOrderVolume;
		/// <summary>
		/// 持仓类型
		/// </summary>
		EnumPositionTypeType PositionType;
		/// <summary>
		/// 持仓日期类型
		/// </summary>
		EnumPositionDateTypeType PositionDateType;
		/// <summary>
		/// ETF最小交易单位
		/// </summary>
		int EFTMinTradeVolume;
	};
	/// <summary>
	/// 合约
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcInstrumentField
	{
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 合约名称
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ InstrumentName;
		/// <summary>
		/// 合约在交易所的代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// 产品代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ProductID;
		/// <summary>
		/// 产品类型
		/// </summary>
		EnumProductClassType ProductClass;
		/// <summary>
		/// 交割年份
		/// </summary>
		int DeliveryYear;
		/// <summary>
		/// 交割月
		/// </summary>
		int DeliveryMonth;
		/// <summary>
		/// 市价单最大下单量
		/// </summary>
		int MaxMarketOrderVolume;
		/// <summary>
		/// 市价单最小下单量
		/// </summary>
		int MinMarketOrderVolume;
		/// <summary>
		/// 限价单最大下单量
		/// </summary>
		int MaxLimitOrderVolume;
		/// <summary>
		/// 限价单最小下单量
		/// </summary>
		int MinLimitOrderVolume;
		/// <summary>
		/// 合约数量乘数
		/// </summary>
		int VolumeMultiple;
		/// <summary>
		/// 最小变动价位
		/// </summary>
		double PriceTick;
		/// <summary>
		/// 创建日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CreateDate;
		/// <summary>
		/// 上市日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ OpenDate;
		/// <summary>
		/// 到期日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExpireDate;
		/// <summary>
		/// 开始交割日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ StartDelivDate;
		/// <summary>
		/// 结束交割日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ EndDelivDate;
		/// <summary>
		/// 合约生命周期状态
		/// </summary>
		EnumInstLifePhaseType InstLifePhase;
		/// <summary>
		/// 当前是否交易
		/// </summary>
		int IsTrading;
		/// <summary>
		/// 持仓类型
		/// </summary>
		EnumPositionTypeType PositionType;
		/// <summary>
		/// 报单能否撤单
		/// </summary>
		int OrderCanBeWithdraw;
		/// <summary>
		/// 最小买下单单位
		/// </summary>
		int MinBuyVolume;
		/// <summary>
		/// 最小卖下单单位
		/// </summary>
		int MinSellVolume;
		/// <summary>
		/// 股票权限模版代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ RightModelID;
		/// <summary>
		/// 持仓交易类型
		/// </summary>
		EnumPosTradeTypeType PosTradeType;
		/// <summary>
		/// 市场代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ MarketID;
		/// <summary>
		/// 期权执行价格
		/// </summary>
		double ExecPrice;
		/// <summary>
		/// 期权单手保证金
		/// </summary>
		double UnitMargin;
		/// <summary>
		/// 合约类型
		/// </summary>
		EnumInstrumentTypeType InstrumentType;
		/// <summary>
		/// 期权保证金参数1
		/// </summary>
		double OptionsMarginParam1;
		/// <summary>
		/// 期权保证金参数2
		/// </summary>
		double OptionsMarginParam2;
	};
	/// <summary>
	/// 经纪公司
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcBrokerField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 经纪公司简称
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ BrokerAbbr;
		/// <summary>
		/// 经纪公司名称
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ BrokerName;
		/// <summary>
		/// 是否活跃
		/// </summary>
		int IsActive;
	};
	/// <summary>
	/// 会员编码和经纪公司编码对照表
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcPartBrokerField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// 是否活跃
		/// </summary>
		int IsActive;
	};
	/// <summary>
	/// 投资者
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcInvestorField
	{
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者分组代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorGroupID;
		/// <summary>
		/// 投资者名称
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ InvestorName;
		/// <summary>
		/// 证件类型
		/// </summary>
		EnumIdCardTypeType IdentifiedCardType;
		/// <summary>
		/// 证件号码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 51)]
		String^ IdentifiedCardNo;
		/// <summary>
		/// 是否活跃
		/// </summary>
		int IsActive;
		/// <summary>
		/// 上海营业部编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ SHBranchID;
		/// <summary>
		/// 深圳营业部编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ SZBranchID;
		/// <summary>
		/// 所属结算系统类型
		/// </summary>
		EnumSettleSystemTypeType SettleSystemType;
		/// <summary>
		/// 投资者期权交易等级
		/// </summary>
		EnumInvestorLevelType InvestorLevel;
	};
	/// <summary>
	/// 交易编码
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcTradingCodeField
	{
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ClientID;
		/// <summary>
		/// 是否活跃
		/// </summary>
		int IsActive;
		/// <summary>
		/// AccountID
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ AccountID;
		/// <summary>
		/// 交易单元号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ PBU;
		/// <summary>
		/// ClientType
		/// </summary>
		EnumClientTypeType ClientType;
	};
	/// <summary>
	/// 管理用户
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcSuperUserField
	{
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 用户名称
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ UserName;
		/// <summary>
		/// 密码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// 是否活跃
		/// </summary>
		int IsActive;
	};
	/// <summary>
	/// 管理用户功能权限
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcSuperUserFunctionField
	{
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 功能代码
		/// </summary>
		EnumFunctionCodeType FunctionCode;
	};
	/// <summary>
	/// 经纪公司用户
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcBrokerUserField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 用户名称
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ UserName;
		/// <summary>
		/// 用户类型
		/// </summary>
		EnumUserTypeType UserType;
		/// <summary>
		/// 是否活跃
		/// </summary>
		int IsActive;
		/// <summary>
		/// 是否使用令牌
		/// </summary>
		int IsUsingOTP;
	};
	/// <summary>
	/// 经纪公司用户功能权限
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcBrokerUserFunctionField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 经纪公司功能代码
		/// </summary>
		EnumBrokerFunctionCodeType BrokerFunctionCode;
	};
	/// <summary>
	/// 资金账户
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcTradingAccountField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者帐号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ AccountID;
		/// <summary>
		/// 上次质押金额
		/// </summary>
		double PreMortgage;
		/// <summary>
		/// 上次信用额度
		/// </summary>
		double PreCredit;
		/// <summary>
		/// 上次存款额
		/// </summary>
		double PreDeposit;
		/// <summary>
		/// 上次结算准备金
		/// </summary>
		double PreBalance;
		/// <summary>
		/// 上次占用的保证金
		/// </summary>
		double PreMargin;
		/// <summary>
		/// 利息基数
		/// </summary>
		double InterestBase;
		/// <summary>
		/// 利息收入
		/// </summary>
		double Interest;
		/// <summary>
		/// 入金金额
		/// </summary>
		double Deposit;
		/// <summary>
		/// 出金金额
		/// </summary>
		double Withdraw;
		/// <summary>
		/// 冻结的保证金
		/// </summary>
		double FrozenMargin;
		/// <summary>
		/// 冻结的资金
		/// </summary>
		double FrozenCash;
		/// <summary>
		/// 冻结的手续费
		/// </summary>
		double FrozenCommission;
		/// <summary>
		/// 当前保证金总额
		/// </summary>
		double CurrMargin;
		/// <summary>
		/// 资金差额
		/// </summary>
		double CashIn;
		/// <summary>
		/// 手续费
		/// </summary>
		double Commission;
		/// <summary>
		/// 结算准备金
		/// </summary>
		double Balance;
		/// <summary>
		/// 现金
		/// </summary>
		double Available;
		/// <summary>
		/// 可取资金
		/// </summary>
		double WithdrawQuota;
		/// <summary>
		/// 基本准备金
		/// </summary>
		double Reserve;
		/// <summary>
		/// 交易日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// 保证金可用余额
		/// </summary>
		double Credit;
		/// <summary>
		/// 质押金额
		/// </summary>
		double Mortgage;
		/// <summary>
		/// 交易所保证金
		/// </summary>
		double ExchangeMargin;
		/// <summary>
		/// 投资者交割保证金
		/// </summary>
		double DeliveryMargin;
		/// <summary>
		/// 交易所交割保证金
		/// </summary>
		double ExchangeDeliveryMargin;
		/// <summary>
		/// 冻结的过户费
		/// </summary>
		double FrozenTransferFee;
		/// <summary>
		/// 冻结的印花税
		/// </summary>
		double FrozenStampTax;
		/// <summary>
		/// 过户费
		/// </summary>
		double TransferFee;
		/// <summary>
		/// 印花税
		/// </summary>
		double StampTax;
		/// <summary>
		/// 折算金额
		/// </summary>
		double ConversionAmount;
		/// <summary>
		/// 授信额度
		/// </summary>
		double CreditAmount;
		/// <summary>
		/// 证券总价值
		/// </summary>
		double StockValue;
		/// <summary>
		/// 国债回购占用资金
		/// </summary>
		double BondRepurchaseAmount;
		/// <summary>
		/// 国债逆回购占用资金
		/// </summary>
		double ReverseRepurchaseAmount;
		/// <summary>
		/// 币种
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 4)]
		String^ CurrencyCode;
		/// <summary>
		/// 账户类型
		/// </summary>
		EnumAccountTypeType AccountType;
		/// <summary>
		/// 融资买入金额
		/// </summary>
		double MarginTradeAmount;
		/// <summary>
		/// 融券卖出金额
		/// </summary>
		double ShortSellAmount;
		/// <summary>
		/// 融资持仓盈亏
		/// </summary>
		double MarginTradeProfit;
		/// <summary>
		/// 融券持仓盈亏
		/// </summary>
		double ShortSellProfit;
		/// <summary>
		/// 融券总市值
		/// </summary>
		double SSStockValue;
		/// <summary>
		/// 维持担保比例
		/// </summary>
		double CreditRatio;
		/// <summary>
		/// 行权冻结资金
		/// </summary>
		double FrozenExecCash;
		/// <summary>
		/// 期权买入资金(SSE)
		/// </summary>
		double SSEOptionsBuyAmount;
		/// <summary>
		/// 期权买入冻结资金(SSE)
		/// </summary>
		double SSEOptionsBuyFrozenAmount;
		/// <summary>
		/// 结算保证金总额
		/// </summary>
		double SettleMargin;
		/// <summary>
		/// 沪港通交易净资金
		/// </summary>
		double HGENetAmount;
	};
	/// <summary>
	/// 禁止登录用户
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcLoginForbiddenUserField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
	};
	/// <summary>
	/// 深度行情
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcDepthMarketDataField
	{
		/// <summary>
		/// 交易日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 合约在交易所的代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// 最新价
		/// </summary>
		double LastPrice;
		/// <summary>
		/// 上次结算价
		/// </summary>
		double PreSettlementPrice;
		/// <summary>
		/// 昨收盘
		/// </summary>
		double PreClosePrice;
		/// <summary>
		/// 昨持仓量
		/// </summary>
		double PreOpenInterest;
		/// <summary>
		/// 今开盘
		/// </summary>
		double OpenPrice;
		/// <summary>
		/// 最高价
		/// </summary>
		double HighestPrice;
		/// <summary>
		/// 最低价
		/// </summary>
		double LowestPrice;
		/// <summary>
		/// 数量
		/// </summary>
		double Volume;
		/// <summary>
		/// 成交金额
		/// </summary>
		double Turnover;
		/// <summary>
		/// 持仓量
		/// </summary>
		double OpenInterest;
		/// <summary>
		/// 今收盘
		/// </summary>
		double ClosePrice;
		/// <summary>
		/// 本次结算价
		/// </summary>
		double SettlementPrice;
		/// <summary>
		/// 涨停板价
		/// </summary>
		double UpperLimitPrice;
		/// <summary>
		/// 跌停板价
		/// </summary>
		double LowerLimitPrice;
		/// <summary>
		/// 昨虚实度
		/// </summary>
		double PreDelta;
		/// <summary>
		/// 今虚实度
		/// </summary>
		double CurrDelta;
		/// <summary>
		/// 昨日基金净值
		/// </summary>
		double PreIOPV;
		/// <summary>
		/// 基金净值
		/// </summary>
		double IOPV;
		/// <summary>
		/// 动态参考价格
		/// </summary>
		double AuctionPrice;
		/// <summary>
		/// 最后修改时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ UpdateTime;
		/// <summary>
		/// 最后修改毫秒
		/// </summary>
		int UpdateMillisec;
		/// <summary>
		/// 申买价一
		/// </summary>
		double BidPrice1;
		/// <summary>
		/// 申买量一
		/// </summary>
		double BidVolume1;
		/// <summary>
		/// 申卖价一
		/// </summary>
		double AskPrice1;
		/// <summary>
		/// 申卖量一
		/// </summary>
		double AskVolume1;
		/// <summary>
		/// 申买价二
		/// </summary>
		double BidPrice2;
		/// <summary>
		/// 申买量二
		/// </summary>
		double BidVolume2;
		/// <summary>
		/// 申卖价二
		/// </summary>
		double AskPrice2;
		/// <summary>
		/// 申卖量二
		/// </summary>
		double AskVolume2;
		/// <summary>
		/// 申买价三
		/// </summary>
		double BidPrice3;
		/// <summary>
		/// 申买量三
		/// </summary>
		double BidVolume3;
		/// <summary>
		/// 申卖价三
		/// </summary>
		double AskPrice3;
		/// <summary>
		/// 申卖量三
		/// </summary>
		double AskVolume3;
		/// <summary>
		/// 申买价四
		/// </summary>
		double BidPrice4;
		/// <summary>
		/// 申买量四
		/// </summary>
		double BidVolume4;
		/// <summary>
		/// 申卖价四
		/// </summary>
		double AskPrice4;
		/// <summary>
		/// 申卖量四
		/// </summary>
		double AskVolume4;
		/// <summary>
		/// 申买价五
		/// </summary>
		double BidPrice5;
		/// <summary>
		/// 申买量五
		/// </summary>
		double BidVolume5;
		/// <summary>
		/// 申卖价五
		/// </summary>
		double AskPrice5;
		/// <summary>
		/// 申卖量五
		/// </summary>
		double AskVolume5;
		/// <summary>
		/// 当日均价
		/// </summary>
		double AveragePrice;
		/// <summary>
		/// 业务日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionDay;
		/// <summary>
		/// 交易阶段
		/// </summary>
		EnumTradingPhaseType TradingPhase;
		/// <summary>
		/// 开仓限制
		/// </summary>
		EnumOpenRestrictionType OpenRestriction;
	};
	/// <summary>
	/// 投资者合约交易权限
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcInstrumentTradingRightField
	{
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 投资者范围
		/// </summary>
		EnumInvestorRangeType InvestorRange;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 买卖
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// 交易权限
		/// </summary>
		EnumTradingRightType TradingRight;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 股票权限分类
		/// </summary>
		EnumInstrumentRangeType InstrumentRange;
	};
	/// <summary>
	/// 投资者持仓明细
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcInvestorPositionDetailField
	{
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 投机套保标志
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// 买卖
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// 开仓日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ OpenDate;
		/// <summary>
		/// 成交编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TradeID;
		/// <summary>
		/// 数量
		/// </summary>
		double Volume;
		/// <summary>
		/// 开仓价
		/// </summary>
		double OpenPrice;
		/// <summary>
		/// 交易日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// 成交类型
		/// </summary>
		EnumTradeTypeType TradeType;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 投资者保证金
		/// </summary>
		double Margin;
		/// <summary>
		/// 交易所保证金
		/// </summary>
		double ExchMargin;
		/// <summary>
		/// 昨结算价
		/// </summary>
		double LastSettlementPrice;
		/// <summary>
		/// 结算价
		/// </summary>
		double SettlementPrice;
		/// <summary>
		/// 平仓量
		/// </summary>
		double CloseVolume;
		/// <summary>
		/// 平仓金额
		/// </summary>
		double CloseAmount;
		/// <summary>
		/// 过户费
		/// </summary>
		double TransferFee;
		/// <summary>
		/// 印花税
		/// </summary>
		double StampTax;
		/// <summary>
		/// 手续费
		/// </summary>
		double Commission;
		/// <summary>
		/// AccountID
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ AccountID;
		/// <summary>
		/// 质押入库数量
		/// </summary>
		double PledgeInPosition;
		/// <summary>
		/// 质押入库冻结数量
		/// </summary>
		double PledgeInFrozenPosition;
		/// <summary>
		/// 正回购使用的标准券数量
		/// </summary>
		double RepurchasePosition;
		/// <summary>
		/// 融资融券金额
		/// </summary>
		double Amount;
		/// <summary>
		/// 标的合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ UnderlyingInstrumentID;
	};
	/// <summary>
	/// 债券利息
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcBondInterestField
	{
		/// <summary>
		/// 交易日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 利息
		/// </summary>
		double Interest;
	};
	/// <summary>
	/// 市值配售信息
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcMarketRationInfoField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 可配售数量
		/// </summary>
		double RationVolume;
	};
	/// <summary>
	/// 合约手续费率
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcInstrumentCommissionRateField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 投资者范围
		/// </summary>
		EnumInvestorRangeType InvestorRange;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 买卖方向
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// 印花税率
		/// </summary>
		double StampTaxRateByMoney;
		/// <summary>
		/// 印花税率(按手数)
		/// </summary>
		double StampTaxRateByVolume;
		/// <summary>
		/// 过户费率
		/// </summary>
		double TransferFeeRateByMoney;
		/// <summary>
		/// 过户费率(按手数)
		/// </summary>
		double TransferFeeRateByVolume;
		/// <summary>
		/// 交易费
		/// </summary>
		double TradeFeeByMoney;
		/// <summary>
		/// 交易费(按手数)
		/// </summary>
		double TradeFeeByVolume;
		/// <summary>
		/// 交易附加费率
		/// </summary>
		double MarginByMoney;
		/// <summary>
		/// 最小交易费
		/// </summary>
		double MinTradeFee;
		/// <summary>
		/// 最小过户费
		/// </summary>
		double MinTransferFee;
	};
	/// <summary>
	/// 余券信息
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcExcessStockInfoField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 余券数量
		/// </summary>
		double ExcessVolume;
		/// <summary>
		/// 余券冻结数量
		/// </summary>
		double ExcessFrozenVolume;
	};
	/// <summary>
	/// ETF合约
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcETFInstrumentField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ETF证券代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ETFInstrumentID;
		/// <summary>
		/// ETF对应申赎代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ETFPurRedInstrumentID;
		/// <summary>
		/// 最小申购赎回单位对应的ETF份数
		/// </summary>
		int CreationRedemptionUnit;
		/// <summary>
		/// 最大现金替代比例
		/// </summary>
		double Maxcashratio;
		/// <summary>
		/// 基金当天申购赎回状态
		/// </summary>
		EnumCreationredemptionStatusType Creationredemption;
		/// <summary>
		/// 预估金额
		/// </summary>
		double EstimateCashComponent;
		/// <summary>
		/// 基金申赎单位净值
		/// </summary>
		double ETFNetValue;
		/// <summary>
		/// 基金类别
		/// </summary>
		EnumFundClassType FundClass;
	};
	/// <summary>
	/// ETF股票篮
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcETFBasketField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ETF证券代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ETFInstrumentID;
		/// <summary>
		/// 股票证券代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ StockInstrumentID;
		/// <summary>
		/// 股票证券名称
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ StockInstrumentName;
		/// <summary>
		/// 股票数量
		/// </summary>
		int Volume;
		/// <summary>
		/// 替代标志
		/// </summary>
		EnumETFCurrenceReplaceStatusType CurrenceReplaceStatus;
		/// <summary>
		/// 溢价比例
		/// </summary>
		double Premium;
		/// <summary>
		/// 总金额
		/// </summary>
		double Amount;
	};
	/// <summary>
	/// OF合约
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcOFInstrumentField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// OF基金代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 基金当天申购赎回状态
		/// </summary>
		EnumCreationredemptionStatusType Creationredemption;
		/// <summary>
		/// 基金净值
		/// </summary>
		double NetPrice;
		/// <summary>
		/// 基金类别
		/// </summary>
		EnumFundClassType FundClass;
		/// <summary>
		/// OF基金名称
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ InstrumentName;
	};
	/// <summary>
	/// SF合约
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcSFInstrumentField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 基金代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// SF基金代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ SFInstrumentID;
		/// <summary>
		/// 基金当天拆分合并状态
		/// </summary>
		EnumSplitMergeStatusType SplitMergeStatus;
		/// <summary>
		/// 最小拆分数量
		/// </summary>
		int MinSplitVolume;
		/// <summary>
		/// 最小合并数量
		/// </summary>
		int MinMergeVolume;
		/// <summary>
		/// 拆分/合并比例
		/// </summary>
		int VolumeRatio;
		/// <summary>
		/// 基金净值
		/// </summary>
		double NetPrice;
		/// <summary>
		/// 基金名称
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ InstrumentName;
	};
	/// <summary>
	/// 合约单手保证金
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcInstrumentUnitMarginField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 合约单手保证金
		/// </summary>
		double UnitMargin;
	};
	/// <summary>
	/// 期权资金限制参数
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcOptionsFundLimitParamField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 最大可买金额
		/// </summary>
		double MaxBuyAmount;
	};
	/// <summary>
	/// 投资者期权持仓
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcInvestorOptionsPositionField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者范围
		/// </summary>
		EnumInvestorRangeType InvestorRange;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// InstrumentID
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 最大多头仓位限制
		/// </summary>
		double MaxLongPositionLimit;
		/// <summary>
		/// 最大开仓量限制
		/// </summary>
		double MaxOpenVolLimit;
		/// <summary>
		/// 最大总仓位限制
		/// </summary>
		double MaxPositionLimit;
		/// <summary>
		/// 多头持仓
		/// </summary>
		double LongPosition;
		/// <summary>
		/// 空头持仓
		/// </summary>
		double ShortPosition;
		/// <summary>
		/// 当日开仓量
		/// </summary>
		double TodayOpenVolume;
		/// <summary>
		/// 当日开仓冻结量
		/// </summary>
		double TodayOpenFrozenVolume;
		/// <summary>
		/// 多头冻结持仓
		/// </summary>
		double LongFrozenPosition;
		/// <summary>
		/// 空头冻结持仓
		/// </summary>
		double ShortFrozenPosition;
	};
	/// <summary>
	/// 预交割信息
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcPreDelivInfoField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 交割类型
		/// </summary>
		EnumDelivTypeType DelivType;
		/// <summary>
		/// 标的合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ UnderlyingInstrumentID;
		/// <summary>
		/// 交割数量
		/// </summary>
		double DelivVolume;
		/// <summary>
		/// 交割金额
		/// </summary>
		double DelivAmount;
		/// <summary>
		/// 期权执行数量
		/// </summary>
		double ExecVolume;
		/// <summary>
		/// 买卖方向
		/// </summary>
		EnumDirectionType Direction;
	};
	/// <summary>
	/// 可融券分配信息
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcCreditStockAssignInfoField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 融券限量
		/// </summary>
		double LimitVolume;
		/// <summary>
		/// 上日融券数量
		/// </summary>
		double YDVolume;
		/// <summary>
		/// 剩余可融券数量
		/// </summary>
		double LeftVolume;
		/// <summary>
		/// 冻结融券数量
		/// </summary>
		double FrozenVolume;
	};
	/// <summary>
	/// 可融资分配信息
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcCreditCashAssignInfoField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 融资限额
		/// </summary>
		double LimitAmount;
		/// <summary>
		/// 上日融资金额
		/// </summary>
		double YDAmount;
		/// <summary>
		/// 剩余可融资金额
		/// </summary>
		double LeftAmount;
		/// <summary>
		/// 冻结融资金额
		/// </summary>
		double FrozenAmount;
	};
	/// <summary>
	/// 证券折算率
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcConversionRateField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 折算比率
		/// </summary>
		double ConversionRate;
		/// <summary>
		/// 当前是否支持融资交易
		/// </summary>
		int IsTradingForMargin;
		/// <summary>
		/// 当前是否支持融券交易
		/// </summary>
		int IsTradingForShort;
	};
	/// <summary>
	/// 历史信用负债信息
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcHisCreditDebtInfoField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 开仓日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ OpenDate;
		/// <summary>
		/// 负债类型
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// 开仓价
		/// </summary>
		double OpenPrice;
		/// <summary>
		/// 数量
		/// </summary>
		double Volume;
		/// <summary>
		/// 融资融券金额
		/// </summary>
		double Amount;
	};
	/// <summary>
	/// 行情静态信息
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcMarketDataStaticInfoField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 涨停板价
		/// </summary>
		double UpperLimitPrice;
		/// <summary>
		/// 跌停板价
		/// </summary>
		double LowerLimitPrice;
		/// <summary>
		/// 昨结算
		/// </summary>
		double PreSettlementPrice;
		/// <summary>
		/// 昨收盘
		/// </summary>
		double PreClosePrice;
		/// <summary>
		/// 昨日基金净值
		/// </summary>
		double PreIOPV;
		/// <summary>
		/// 是否非交易业务
		/// </summary>
		int IsNotTrade;
	};
	/// <summary>
	/// 到期回购信息
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcExpireRepurchInfoField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 资金账户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ AccountID;
		/// <summary>
		/// 到期类型
		/// </summary>
		EnumExpireTypeType ExpireType;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 数量
		/// </summary>
		double Volume;
		/// <summary>
		/// 金额
		/// </summary>
		double Amount;
		/// <summary>
		/// 利息
		/// </summary>
		double Interest;
	};
	/// <summary>
	/// 债券质押为标准券比例
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcBondPledgeRateField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 折算比率
		/// </summary>
		double Ratio;
	};
	/// <summary>
	/// 债券质押代码对照关系
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcPledgeBondField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 质押代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ PledgeID;
	};
	/// <summary>
	/// 港股基本信息
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcHKBasicInfoField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 参考汇率买入价
		/// </summary>
		double BuyPrice;
		/// <summary>
		/// 参考汇率卖出价
		/// </summary>
		double SellPrice;
		/// <summary>
		/// 日初额度
		/// </summary>
		double ThresholdAmount;
	};
	/// <summary>
	/// 平台状态信息
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcPlatformStateInfoField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 平台编号
		/// </summary>
		EnumPlatformIDType PlatformID;
		/// <summary>
		/// 平台状态
		/// </summary>
		EnumPlatformStateType PlatformState;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BranchPBU;
	};
	/// <summary>
	/// 交易所交易员报盘机
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcTraderOfferField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BranchPBU;
		/// <summary>
		/// 会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// 密码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// 报盘类型
		/// </summary>
		EnumOfferTypeType OfferType;
		/// <summary>
		/// 安装编号
		/// </summary>
		int InstallID;
		/// <summary>
		/// 本地报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// 交易所交易员连接状态
		/// </summary>
		EnumTraderConnectStatusType TraderConnectStatus;
		/// <summary>
		/// 发出连接请求的日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConnectRequestDate;
		/// <summary>
		/// 发出连接请求的时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConnectRequestTime;
		/// <summary>
		/// 上次报告日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LastReportDate;
		/// <summary>
		/// 上次报告时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LastReportTime;
		/// <summary>
		/// 完成连接日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConnectDate;
		/// <summary>
		/// 完成连接时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConnectTime;
		/// <summary>
		/// 启动日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ StartDate;
		/// <summary>
		/// 启动时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ StartTime;
		/// <summary>
		/// 交易日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
	};
	/// <summary>
	/// 交易所行情报盘机
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcMDTraderOfferField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BranchPBU;
		/// <summary>
		/// 会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// 密码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// 报盘类型
		/// </summary>
		EnumOfferTypeType OfferType;
		/// <summary>
		/// 安装编号
		/// </summary>
		int InstallID;
		/// <summary>
		/// 本地报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// 交易所交易员连接状态
		/// </summary>
		EnumTraderConnectStatusType TraderConnectStatus;
		/// <summary>
		/// 发出连接请求的日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConnectRequestDate;
		/// <summary>
		/// 发出连接请求的时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConnectRequestTime;
		/// <summary>
		/// 上次报告日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LastReportDate;
		/// <summary>
		/// 上次报告时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LastReportTime;
		/// <summary>
		/// 完成连接日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConnectDate;
		/// <summary>
		/// 完成连接时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ConnectTime;
		/// <summary>
		/// 启动日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ StartDate;
		/// <summary>
		/// 启动时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ StartTime;
		/// <summary>
		/// 交易日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
	};
	/// <summary>
	/// 前置状态
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcFrontStatusField
	{
		/// <summary>
		/// 前置编号
		/// </summary>
		int FrontID;
		/// <summary>
		/// 上次报告日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LastReportDate;
		/// <summary>
		/// 上次报告时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LastReportTime;
		/// <summary>
		/// 是否活跃
		/// </summary>
		int IsActive;
	};
	/// <summary>
	/// 用户会话
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcUserSessionField
	{
		/// <summary>
		/// 前置编号
		/// </summary>
		int FrontID;
		/// <summary>
		/// 会话编号
		/// </summary>
		int SessionID;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 登录日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LoginDate;
		/// <summary>
		/// 登录时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LoginTime;
		/// <summary>
		/// IP地址
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ IPAddress;
		/// <summary>
		/// 用户端产品信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ UserProductInfo;
		/// <summary>
		/// 接口端产品信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ InterfaceProductInfo;
		/// <summary>
		/// 协议信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ProtocolInfo;
		/// <summary>
		/// Mac地址
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ MacAddress;
	};
	/// <summary>
	/// 报单
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcOrderField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 报单引用
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 报单价格条件
		/// </summary>
		EnumOrderPriceTypeType OrderPriceType;
		/// <summary>
		/// 买卖方向
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// 组合开平标志
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombOffsetFlag;
		/// <summary>
		/// 组合投机套保标志
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombHedgeFlag;
		/// <summary>
		/// 价格
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ LimitPrice;
		/// <summary>
		/// 数量
		/// </summary>
		int VolumeTotalOriginal;
		/// <summary>
		/// 有效期类型
		/// </summary>
		EnumTimeConditionType TimeCondition;
		/// <summary>
		/// GTD日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ GTDDate;
		/// <summary>
		/// 成交量类型
		/// </summary>
		EnumVolumeConditionType VolumeCondition;
		/// <summary>
		/// 最小成交量
		/// </summary>
		int MinVolume;
		/// <summary>
		/// 触发条件
		/// </summary>
		EnumContingentConditionType ContingentCondition;
		/// <summary>
		/// 止损价
		/// </summary>
		double StopPrice;
		/// <summary>
		/// 强平原因
		/// </summary>
		EnumForceCloseReasonType ForceCloseReason;
		/// <summary>
		/// 自动挂起标志
		/// </summary>
		int IsAutoSuspend;
		/// <summary>
		/// 业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// 请求编号
		/// </summary>
		int RequestID;
		/// <summary>
		/// 本地报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// 会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// 客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ClientID;
		/// <summary>
		/// 合约在交易所的代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BranchPBU;
		/// <summary>
		/// 安装编号
		/// </summary>
		int InstallID;
		/// <summary>
		/// 报单提交状态
		/// </summary>
		EnumOrderSubmitStatusType OrderSubmitStatus;
		/// <summary>
		/// 账户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ AccountID;
		/// <summary>
		/// 报单提示序号
		/// </summary>
		int NotifySequence;
		/// <summary>
		/// 交易日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// 报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// 报单来源
		/// </summary>
		EnumOrderSourceType OrderSource;
		/// <summary>
		/// 报单状态
		/// </summary>
		EnumOrderStatusType OrderStatus;
		/// <summary>
		/// 报单类型
		/// </summary>
		EnumOrderTypeType OrderType;
		/// <summary>
		/// 今成交数量
		/// </summary>
		int VolumeTraded;
		/// <summary>
		/// 剩余数量
		/// </summary>
		int VolumeTotal;
		/// <summary>
		/// 报单日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertDate;
		/// <summary>
		/// 委托时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTime;
		/// <summary>
		/// 激活时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActiveTime;
		/// <summary>
		/// 挂起时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ SuspendTime;
		/// <summary>
		/// 最后修改时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ UpdateTime;
		/// <summary>
		/// 撤销时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ CancelTime;
		/// <summary>
		/// 最后修改交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ActiveTraderID;
		/// <summary>
		/// 结算会员编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClearingPartID;
		/// <summary>
		/// 序号
		/// </summary>
		int SequenceNo;
		/// <summary>
		/// 前置编号
		/// </summary>
		int FrontID;
		/// <summary>
		/// 会话编号
		/// </summary>
		int SessionID;
		/// <summary>
		/// 用户端产品信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ UserProductInfo;
		/// <summary>
		/// 状态信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ StatusMsg;
		/// <summary>
		/// 用户强评标志
		/// </summary>
		int UserForceClose;
		/// <summary>
		/// 操作用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ ActiveUserID;
		/// <summary>
		/// 经纪公司报单编号
		/// </summary>
		int BrokerOrderSeq;
		/// <summary>
		/// 相关报单
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ RelativeOrderSysID;
		/// <summary>
		/// 营业部编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ BranchID;
		/// <summary>
		/// 成交金额
		/// </summary>
		double TradeAmount;
		/// <summary>
		/// 是否ETF
		/// </summary>
		int IsETF;
		/// <summary>
		/// 合约类型
		/// </summary>
		EnumInstrumentTypeType InstrumentType;
	};
	/// <summary>
	/// 报单操作
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcOrderActionField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 报单操作引用
		/// </summary>
		int OrderActionRef;
		/// <summary>
		/// 报单引用
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// 请求编号
		/// </summary>
		int RequestID;
		/// <summary>
		/// 前置编号
		/// </summary>
		int FrontID;
		/// <summary>
		/// 会话编号
		/// </summary>
		int SessionID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 操作标志
		/// </summary>
		EnumActionFlagType ActionFlag;
		/// <summary>
		/// 价格
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// 数量变化
		/// </summary>
		int VolumeChange;
		/// <summary>
		/// 操作日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionDate;
		/// <summary>
		/// 操作时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionTime;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BranchPBU;
		/// <summary>
		/// 安装编号
		/// </summary>
		int InstallID;
		/// <summary>
		/// 本地报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// 操作本地编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ ActionLocalID;
		/// <summary>
		/// 会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// 客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ClientID;
		/// <summary>
		/// 业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// 报单操作状态
		/// </summary>
		EnumOrderActionStatusType OrderActionStatus;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 营业部编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ BranchID;
		/// <summary>
		/// 状态信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ StatusMsg;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 合约类型
		/// </summary>
		EnumInstrumentTypeType InstrumentType;
	};
	/// <summary>
	/// 错误报单
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcErrOrderField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 报单引用
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 报单价格条件
		/// </summary>
		EnumOrderPriceTypeType OrderPriceType;
		/// <summary>
		/// 买卖方向
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// 组合开平标志
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombOffsetFlag;
		/// <summary>
		/// 组合投机套保标志
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombHedgeFlag;
		/// <summary>
		/// 价格
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ LimitPrice;
		/// <summary>
		/// 数量
		/// </summary>
		int VolumeTotalOriginal;
		/// <summary>
		/// 有效期类型
		/// </summary>
		EnumTimeConditionType TimeCondition;
		/// <summary>
		/// GTD日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ GTDDate;
		/// <summary>
		/// 成交量类型
		/// </summary>
		EnumVolumeConditionType VolumeCondition;
		/// <summary>
		/// 最小成交量
		/// </summary>
		int MinVolume;
		/// <summary>
		/// 触发条件
		/// </summary>
		EnumContingentConditionType ContingentCondition;
		/// <summary>
		/// 止损价
		/// </summary>
		double StopPrice;
		/// <summary>
		/// 强平原因
		/// </summary>
		EnumForceCloseReasonType ForceCloseReason;
		/// <summary>
		/// 自动挂起标志
		/// </summary>
		int IsAutoSuspend;
		/// <summary>
		/// 业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// 请求编号
		/// </summary>
		int RequestID;
		/// <summary>
		/// 用户强评标志
		/// </summary>
		int UserForceClose;
		/// <summary>
		/// 错误代码
		/// </summary>
		int ErrorID;
		/// <summary>
		/// 错误信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};
	/// <summary>
	/// 错误报单操作
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcErrOrderActionField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 报单操作引用
		/// </summary>
		int OrderActionRef;
		/// <summary>
		/// 报单引用
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// 请求编号
		/// </summary>
		int RequestID;
		/// <summary>
		/// 前置编号
		/// </summary>
		int FrontID;
		/// <summary>
		/// 会话编号
		/// </summary>
		int SessionID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 操作标志
		/// </summary>
		EnumActionFlagType ActionFlag;
		/// <summary>
		/// 价格
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// 数量变化
		/// </summary>
		int VolumeChange;
		/// <summary>
		/// 操作日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionDate;
		/// <summary>
		/// 操作时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionTime;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BranchPBU;
		/// <summary>
		/// 安装编号
		/// </summary>
		int InstallID;
		/// <summary>
		/// 本地报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// 操作本地编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ ActionLocalID;
		/// <summary>
		/// 会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// 客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ClientID;
		/// <summary>
		/// 业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// 报单操作状态
		/// </summary>
		EnumOrderActionStatusType OrderActionStatus;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 营业部编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ BranchID;
		/// <summary>
		/// 状态信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ StatusMsg;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 错误代码
		/// </summary>
		int ErrorID;
		/// <summary>
		/// 错误信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
		/// <summary>
		/// 合约类型
		/// </summary>
		EnumInstrumentTypeType InstrumentType;
	};
	/// <summary>
	/// 成交
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcTradeField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 报单引用
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 成交编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TradeID;
		/// <summary>
		/// 买卖方向
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// 报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// 会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// 客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ClientID;
		/// <summary>
		/// 交易角色
		/// </summary>
		EnumTradingRoleType TradingRole;
		/// <summary>
		/// 合约在交易所的代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// 开平标志
		/// </summary>
		EnumOffsetFlagType OffsetFlag;
		/// <summary>
		/// 投机套保标志
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// 价格
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ Price;
		/// <summary>
		/// 数量
		/// </summary>
		int Volume;
		/// <summary>
		/// 成交时期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeDate;
		/// <summary>
		/// 成交时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// 成交类型
		/// </summary>
		EnumTradeTypeType TradeType;
		/// <summary>
		/// 成交价来源
		/// </summary>
		EnumPriceSourceType PriceSource;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BranchPBU;
		/// <summary>
		/// 本地报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
		/// <summary>
		/// 结算会员编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ClearingPartID;
		/// <summary>
		/// 业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// 序号
		/// </summary>
		int SequenceNo;
		/// <summary>
		/// 成交来源
		/// </summary>
		EnumTradeSourceType TradeSource;
		/// <summary>
		/// 交易日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// 经纪公司报单编号
		/// </summary>
		int BrokerOrderSeq;
		/// <summary>
		/// 成交金额
		/// </summary>
		double TradeAmount;
		/// <summary>
		/// 成交序号
		/// </summary>
		int TradeIndex;
	};
	/// <summary>
	/// 投资者持仓
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcInvestorPositionField
	{
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 持仓多空方向
		/// </summary>
		EnumPosiDirectionType PosiDirection;
		/// <summary>
		/// 投机套保标志
		/// </summary>
		EnumHedgeFlagType HedgeFlag;
		/// <summary>
		/// 持仓日期
		/// </summary>
		EnumPositionDateType PositionDate;
		/// <summary>
		/// 上日持仓
		/// </summary>
		double YdPosition;
		/// <summary>
		/// 总持仓
		/// </summary>
		double Position;
		/// <summary>
		/// 多头冻结
		/// </summary>
		double LongFrozen;
		/// <summary>
		/// 空头冻结
		/// </summary>
		double ShortFrozen;
		/// <summary>
		/// 开仓冻结金额
		/// </summary>
		double LongFrozenAmount;
		/// <summary>
		/// 开仓冻结金额
		/// </summary>
		double ShortFrozenAmount;
		/// <summary>
		/// 开仓量
		/// </summary>
		double OpenVolume;
		/// <summary>
		/// 平仓量
		/// </summary>
		double CloseVolume;
		/// <summary>
		/// 开仓金额
		/// </summary>
		double OpenAmount;
		/// <summary>
		/// 平仓金额
		/// </summary>
		double CloseAmount;
		/// <summary>
		/// 持仓成本
		/// </summary>
		double PositionCost;
		/// <summary>
		/// 冻结的资金
		/// </summary>
		double FrozenCash;
		/// <summary>
		/// 资金差额
		/// </summary>
		double CashIn;
		/// <summary>
		/// 手续费
		/// </summary>
		double Commission;
		/// <summary>
		/// 上次结算价
		/// </summary>
		double PreSettlementPrice;
		/// <summary>
		/// 本次结算价
		/// </summary>
		double SettlementPrice;
		/// <summary>
		/// 交易日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// 开仓成本
		/// </summary>
		double OpenCost;
		/// <summary>
		/// 交易所保证金
		/// </summary>
		double ExchangeMargin;
		/// <summary>
		/// 今日持仓
		/// </summary>
		double TodayPosition;
		/// <summary>
		/// 过户费
		/// </summary>
		double TransferFee;
		/// <summary>
		/// 印花税
		/// </summary>
		double StampTax;
		/// <summary>
		/// 今日申购赎回数量
		/// </summary>
		double TodayPurRedVolume;
		/// <summary>
		/// 折算率
		/// </summary>
		double ConversionRate;
		/// <summary>
		/// 折算金额
		/// </summary>
		double ConversionAmount;
		/// <summary>
		/// 证券价值
		/// </summary>
		double StockValue;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// AccountID
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ AccountID;
		/// <summary>
		/// 质押入库数量
		/// </summary>
		double PledgeInPosition;
		/// <summary>
		/// 正回购使用的标准券数量
		/// </summary>
		double RepurchasePosition;
		/// <summary>
		/// ETF申赎空头冻结
		/// </summary>
		double PurRedShortFrozen;
		/// <summary>
		/// 融资买入数量
		/// </summary>
		double MarginTradeVolume;
		/// <summary>
		/// 融资买入金额
		/// </summary>
		double MarginTradeAmount;
		/// <summary>
		/// 融资买入冻结数量
		/// </summary>
		double MarginTradeFrozenVolume;
		/// <summary>
		/// 融资买入冻结金额
		/// </summary>
		double MarginTradeFrozenAmount;
		/// <summary>
		/// 融资买入盈亏
		/// </summary>
		double MarginTradeConversionProfit;
		/// <summary>
		/// 融券卖出数量
		/// </summary>
		double ShortSellVolume;
		/// <summary>
		/// 融券卖出金额
		/// </summary>
		double ShortSellAmount;
		/// <summary>
		/// 融券卖出冻结数量
		/// </summary>
		double ShortSellFrozenVolume;
		/// <summary>
		/// 融券卖出冻结金额
		/// </summary>
		double ShortSellFrozenAmount;
		/// <summary>
		/// 融券卖出盈亏
		/// </summary>
		double ShortSellConversionProfit;
		/// <summary>
		/// 融券总市值
		/// </summary>
		double SSStockValue;
		/// <summary>
		/// 今日融资持仓
		/// </summary>
		double TodayMTPosition;
		/// <summary>
		/// 今日融券持仓
		/// </summary>
		double TodaySSPosition;
		/// <summary>
		/// 历史持仓开仓成本
		/// </summary>
		double YdOpenCost;
		/// <summary>
		/// 锁定仓位
		/// </summary>
		double LockPosition;
		/// <summary>
		/// 备兑仓位
		/// </summary>
		double CoverPosition;
		/// <summary>
		/// 锁定冻结仓位
		/// </summary>
		double LockFrozenPosition;
		/// <summary>
		/// 解锁冻结仓位
		/// </summary>
		double UnlockFrozenPosition;
		/// <summary>
		/// 备兑冻结仓位
		/// </summary>
		double CoverFrozenPosition;
		/// <summary>
		/// 行权冻结仓位
		/// </summary>
		double ExecFrozenPosition;
		/// <summary>
		/// 上日备兑仓位
		/// </summary>
		double YDCoverPosition;
	};
	/// <summary>
	/// 出入金同步
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcSyncDepositField
	{
		/// <summary>
		/// 出入金流水号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ DepositSeqNo;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 入金金额
		/// </summary>
		double Deposit;
		/// <summary>
		/// 是否强制进行
		/// </summary>
		int IsForce;
		/// <summary>
		/// 账户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ AccountID;
	};
	/// <summary>
	/// 投资者持仓调整
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcAdjustInvestorPositionField
	{
		/// <summary>
		/// 操作编号
		/// </summary>
		int OperateID;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 交易编码类型
		/// </summary>
		EnumClientTypeType ClientType;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 持仓多空方向
		/// </summary>
		EnumPosiDirectionType PosiDirection;
		/// <summary>
		/// 调整数量
		/// </summary>
		double AdjustVolume;
	};
	/// <summary>
	/// 停牌期权标的信息
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcHaltOptionsTargetField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};
	/// <summary>
	/// 查询交易所
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryExchangeField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};
	/// <summary>
	/// 查询产品
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryProductField
	{
		/// <summary>
		/// 产品代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ProductID;
	};
	/// <summary>
	/// 查询合约
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryInstrumentField
	{
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 合约在交易所的代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ExchangeInstID;
		/// <summary>
		/// 产品代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ProductID;
	};
	/// <summary>
	/// 查询经纪公司
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryBrokerField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
	};
	/// <summary>
	/// 查询经纪公司会员代码
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryPartBrokerField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
	};
	/// <summary>
	/// 查询投资者
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryInvestorField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
	};
	/// <summary>
	/// 查询交易编码
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryTradingCodeField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 客户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ ClientID;
	};
	/// <summary>
	/// 查询管理用户
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQrySuperUserField
	{
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
	};
	/// <summary>
	/// 查询管理用户功能权限
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQrySuperUserFunctionField
	{
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
	};
	/// <summary>
	/// 查询经纪公司用户
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryBrokerUserField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
	};
	/// <summary>
	/// 查询经纪公司用户权限
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryBrokerUserFunctionField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
	};
	/// <summary>
	/// 查询资金账户
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryTradingAccountField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
	};
	/// <summary>
	/// 查询禁止登录用户
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryLoginForbiddenUserField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
	};
	/// <summary>
	/// 查询行情
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryDepthMarketDataField
	{
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};
	/// <summary>
	/// 查询合约交易权限
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryInstrumentTradingRightField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};
	/// <summary>
	/// 查询投资者持仓明细
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryInvestorPositionDetailField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};
	/// <summary>
	/// 查询债券利息
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryBondInterestField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};
	/// <summary>
	/// 查询市值配售信息
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryMarketRationInfoField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者帐号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};
	/// <summary>
	/// 查询合约手续费率
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryInstrumentCommissionRateField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 买卖方向
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// 开平标志
		/// </summary>
		EnumOffsetFlagType OffsetFlag;
	};
	/// <summary>
	/// 查询余券信息
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryExcessStockInfoField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};
	/// <summary>
	/// 查询投资者帐户关系
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryInvestorAccountField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
	};
	/// <summary>
	/// 查询ETF合约
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryETFInstrumentField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ETF证券代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ETFInstrumentID;
	};
	/// <summary>
	/// 查询ETF股票篮
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryETFBasketField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// ETF证券代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ ETFInstrumentID;
	};
	/// <summary>
	/// 查询OF合约
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryOFInstrumentField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// OF证券代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};
	/// <summary>
	/// 查询SF合约
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQrySFInstrumentField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// SF证券代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ SFInstrumentID;
	};
	/// <summary>
	/// 查询合约单手保证金
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryInstrumentUnitMarginField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};
	/// <summary>
	/// 查询期权资金限制参数
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryOptionsFundLimitParamField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};
	/// <summary>
	/// 查询投资者期权持仓
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryInvestorOptionsPositionField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 标的合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};
	/// <summary>
	/// 查询预交割信息
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryPreDelivInfoField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};
	/// <summary>
	/// 查询可融券分配信息
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryCreditStockAssignInfoField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};
	/// <summary>
	/// 查询可融资分配信息
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryCreditCashAssignInfoField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
	};
	/// <summary>
	/// 查询证券折算率
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryConversionRateField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};
	/// <summary>
	/// 查询历史信用负债信息
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryHisCreditDebtInfoField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};
	/// <summary>
	/// 查询行情静态信息
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryMarketDataStaticInfoField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};
	/// <summary>
	/// 查询到期回购信息
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryExpireRepurchInfoField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
	};
	/// <summary>
	/// 查询债券质押为标准券比例
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryBondPledgeRateField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};
	/// <summary>
	/// 查询债券质押代码对照关系
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryPledgeBondField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};
	/// <summary>
	/// 查询港股基本信息
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryHKBasicInfoField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};
	/// <summary>
	/// 查询交易员报盘机
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryTraderOfferField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BranchPBU;
	};
	/// <summary>
	/// 查询行情报盘机
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryMDTraderOfferField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 会员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ParticipantID;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BranchPBU;
	};
	/// <summary>
	/// 查询前置状态
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryFrontStatusField
	{
		/// <summary>
		/// 前置编号
		/// </summary>
		int FrontID;
	};
	/// <summary>
	/// 查询用户会话
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryUserSessionField
	{
		/// <summary>
		/// 前置编号
		/// </summary>
		int FrontID;
		/// <summary>
		/// 会话编号
		/// </summary>
		int SessionID;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
	};
	/// <summary>
	/// 查询报单
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryOrderField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ OrderSysID;
		/// <summary>
		/// 开始时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTimeStart;
		/// <summary>
		/// 结束时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ InsertTimeEnd;
	};
	/// <summary>
	/// 查询报单操作
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryOrderActionField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};
	/// <summary>
	/// 查询错误报单
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryErrOrderField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
	};
	/// <summary>
	/// 查询错误报单操作
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryErrOrderActionField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
	};
	/// <summary>
	/// 查询成交
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryTradeField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 成交编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ TradeID;
		/// <summary>
		/// 开始时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTimeStart;
		/// <summary>
		/// 结束时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTimeEnd;
	};
	/// <summary>
	/// 查询投资者持仓
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryInvestorPositionField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
	};
	/// <summary>
	/// 查询出入金流水
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQrySyncDepositField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 出入金流水号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ DepositSeqNo;
	};
	/// <summary>
	/// 用户口令变更
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcUserPasswordUpdateField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 原来的口令
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ OldPassword;
		/// <summary>
		/// 新的口令
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ NewPassword;
	};
	/// <summary>
	/// 资金账户口令变更域
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcTradingAccountPasswordUpdateField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者帐号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ AccountID;
		/// <summary>
		/// 原来的口令
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ OldPassword;
		/// <summary>
		/// 新的口令
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ NewPassword;
	};
	/// <summary>
	/// 手工同步用户动态令牌
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcManualSyncBrokerUserOTPField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 动态令牌类型
		/// </summary>
		EnumOTPTypeType OTPType;
		/// <summary>
		/// 第一个动态密码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ FirstOTP;
		/// <summary>
		/// 第二个动态密码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ SecondOTP;
	};
	/// <summary>
	/// 经纪公司用户口令
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcBrokerUserPasswordField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 密码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
	};
	/// <summary>
	/// 资金账户口令域
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcTradingAccountPasswordField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者帐号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ AccountID;
		/// <summary>
		/// 密码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
	};
	/// <summary>
	/// 用户权限
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcUserRightField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 客户权限类型
		/// </summary>
		EnumUserRightTypeType UserRightType;
		/// <summary>
		/// 是否禁止
		/// </summary>
		int IsForbidden;
	};
	/// <summary>
	/// 投资者账户
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcInvestorAccountField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 投资者帐号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ AccountID;
		/// <summary>
		/// 是否主账户
		/// </summary>
		int IsDefault;
		/// <summary>
		/// 账户类型
		/// </summary>
		EnumAccountTypeType AccountType;
		/// <summary>
		/// 是否活跃
		/// </summary>
		int IsActive;
		/// <summary>
		/// 上交所交易单元号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ SHBranchPBU;
		/// <summary>
		/// 深交所交易单元号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ SZBranchPBU;
	};
	/// <summary>
	/// 用户IP
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcUserIPField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// IP地址
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ IPAddress;
		/// <summary>
		/// IP地址掩码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ IPMask;
		/// <summary>
		/// Mac地址
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ MacAddress;
	};
	/// <summary>
	/// 用户动态令牌参数
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcBrokerUserOTPParamField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 动态令牌提供商
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 2)]
		String^ OTPVendorsID;
		/// <summary>
		/// 动态令牌序列号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ SerialNumber;
		/// <summary>
		/// 令牌密钥
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ AuthKey;
		/// <summary>
		/// 漂移值
		/// </summary>
		int LastDrift;
		/// <summary>
		/// 成功值
		/// </summary>
		int LastSuccess;
		/// <summary>
		/// 动态令牌类型
		/// </summary>
		EnumOTPTypeType OTPType;
	};
	/// <summary>
	/// 用户登录请求
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcReqUserLoginField
	{
		/// <summary>
		/// 交易日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 密码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// 用户端产品信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ UserProductInfo;
		/// <summary>
		/// 接口端产品信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ InterfaceProductInfo;
		/// <summary>
		/// 协议信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ ProtocolInfo;
		/// <summary>
		/// Mac地址
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ MacAddress;
		/// <summary>
		/// 动态密码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ OneTimePassword;
		/// <summary>
		/// 终端IP地址
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ ClientIPAddress;
		/// <summary>
		/// 客户端认证码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ AuthCode;
		/// <summary>
		/// 随机码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ RandCode;
		/// <summary>
		/// 硬盘序列号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ HDSerialNumber;
	};
	/// <summary>
	/// 用户登录应答
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcRspUserLoginField
	{
		/// <summary>
		/// 交易日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// 登录成功时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ LoginTime;
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 交易系统名称
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ SystemName;
		/// <summary>
		/// 前置编号
		/// </summary>
		int FrontID;
		/// <summary>
		/// 会话编号
		/// </summary>
		int SessionID;
		/// <summary>
		/// 最大报单引用
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ MaxOrderRef;
	};
	/// <summary>
	/// 用户登出请求
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcUserLogoutField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
	};
	/// <summary>
	/// 全部登出信息
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcLogoutAllField
	{
		/// <summary>
		/// 前置编号
		/// </summary>
		int FrontID;
		/// <summary>
		/// 会话编号
		/// </summary>
		int SessionID;
		/// <summary>
		/// 系统名称
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ SystemName;
	};
	/// <summary>
	/// 强制交易员退出
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcForceUserLogoutField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
	};
	/// <summary>
	/// 经纪公司用户激活
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcActivateBrokerUserField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
	};
	/// <summary>
	/// 认证随机码
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcAuthRandCodeField
	{
		/// <summary>
		/// 随机码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 17)]
		String^ RandCode;
	};
	/// <summary>
	/// 输入报单
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcInputOrderField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 报单引用
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 报单价格条件
		/// </summary>
		EnumOrderPriceTypeType OrderPriceType;
		/// <summary>
		/// 买卖方向
		/// </summary>
		EnumDirectionType Direction;
		/// <summary>
		/// 组合开平标志
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombOffsetFlag;
		/// <summary>
		/// 组合投机套保标志
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 5)]
		String^ CombHedgeFlag;
		/// <summary>
		/// 价格
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ LimitPrice;
		/// <summary>
		/// 数量
		/// </summary>
		int VolumeTotalOriginal;
		/// <summary>
		/// 有效期类型
		/// </summary>
		EnumTimeConditionType TimeCondition;
		/// <summary>
		/// GTD日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ GTDDate;
		/// <summary>
		/// 成交量类型
		/// </summary>
		EnumVolumeConditionType VolumeCondition;
		/// <summary>
		/// 最小成交量
		/// </summary>
		int MinVolume;
		/// <summary>
		/// 触发条件
		/// </summary>
		EnumContingentConditionType ContingentCondition;
		/// <summary>
		/// 止损价
		/// </summary>
		double StopPrice;
		/// <summary>
		/// 强平原因
		/// </summary>
		EnumForceCloseReasonType ForceCloseReason;
		/// <summary>
		/// 自动挂起标志
		/// </summary>
		int IsAutoSuspend;
		/// <summary>
		/// 业务单元
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BusinessUnit;
		/// <summary>
		/// 请求编号
		/// </summary>
		int RequestID;
		/// <summary>
		/// 用户强评标志
		/// </summary>
		int UserForceClose;
	};
	/// <summary>
	/// 输入报单操作
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcInputOrderActionField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 报单操作引用
		/// </summary>
		int OrderActionRef;
		/// <summary>
		/// 报单引用
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderRef;
		/// <summary>
		/// 请求编号
		/// </summary>
		int RequestID;
		/// <summary>
		/// 前置编号
		/// </summary>
		int FrontID;
		/// <summary>
		/// 会话编号
		/// </summary>
		int SessionID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
		/// <summary>
		/// 操作标志
		/// </summary>
		EnumActionFlagType ActionFlag;
		/// <summary>
		/// 价格
		/// </summary>
		double LimitPrice;
		/// <summary>
		/// 数量变化
		/// </summary>
		int VolumeChange;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 交易所交易员代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 21)]
		String^ BranchPBU;
		/// <summary>
		/// 本地报单编号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ OrderLocalID;
	};
	/// <summary>
	/// 指定的合约
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcSpecificInstrumentField
	{
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};
	/// <summary>
	/// 指定的交易所
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcSpecificExchangeField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};
	/// <summary>
	/// 行情基础属性
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcMarketDataBaseField
	{
		/// <summary>
		/// 交易日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// 上次结算价
		/// </summary>
		double PreSettlementPrice;
		/// <summary>
		/// 昨收盘
		/// </summary>
		double PreClosePrice;
		/// <summary>
		/// 昨持仓量
		/// </summary>
		double PreOpenInterest;
		/// <summary>
		/// 昨虚实度
		/// </summary>
		double PreDelta;
		/// <summary>
		/// 昨日基金净值
		/// </summary>
		double PreIOPV;
	};
	/// <summary>
	/// 行情静态属性
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcMarketDataStaticField
	{
		/// <summary>
		/// 今开盘
		/// </summary>
		double OpenPrice;
		/// <summary>
		/// 最高价
		/// </summary>
		double HighestPrice;
		/// <summary>
		/// 最低价
		/// </summary>
		double LowestPrice;
		/// <summary>
		/// 今收盘
		/// </summary>
		double ClosePrice;
		/// <summary>
		/// 涨停板价
		/// </summary>
		double UpperLimitPrice;
		/// <summary>
		/// 跌停板价
		/// </summary>
		double LowerLimitPrice;
		/// <summary>
		/// 本次结算价
		/// </summary>
		double SettlementPrice;
		/// <summary>
		/// 今虚实度
		/// </summary>
		double CurrDelta;
		/// <summary>
		/// 基金净值
		/// </summary>
		double IOPV;
		/// <summary>
		/// 动态参考价格
		/// </summary>
		double AuctionPrice;
	};
	/// <summary>
	/// 行情最新成交属性
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcMarketDataLastMatchField
	{
		/// <summary>
		/// 最新价
		/// </summary>
		double LastPrice;
		/// <summary>
		/// 数量
		/// </summary>
		double Volume;
		/// <summary>
		/// 成交金额
		/// </summary>
		double Turnover;
		/// <summary>
		/// 持仓量
		/// </summary>
		double OpenInterest;
	};
	/// <summary>
	/// 行情最优价属性
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcMarketDataBestPriceField
	{
		/// <summary>
		/// 申买价一
		/// </summary>
		double BidPrice1;
		/// <summary>
		/// 申买量一
		/// </summary>
		double BidVolume1;
		/// <summary>
		/// 申卖价一
		/// </summary>
		double AskPrice1;
		/// <summary>
		/// 申卖量一
		/// </summary>
		double AskVolume1;
	};
	/// <summary>
	/// 行情申买二、三属性
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcMarketDataBid23Field
	{
		/// <summary>
		/// 申买价二
		/// </summary>
		double BidPrice2;
		/// <summary>
		/// 申买量二
		/// </summary>
		double BidVolume2;
		/// <summary>
		/// 申买价三
		/// </summary>
		double BidPrice3;
		/// <summary>
		/// 申买量三
		/// </summary>
		double BidVolume3;
	};
	/// <summary>
	/// 行情申卖二、三属性
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcMarketDataAsk23Field
	{
		/// <summary>
		/// 申卖价二
		/// </summary>
		double AskPrice2;
		/// <summary>
		/// 申卖量二
		/// </summary>
		double AskVolume2;
		/// <summary>
		/// 申卖价三
		/// </summary>
		double AskPrice3;
		/// <summary>
		/// 申卖量三
		/// </summary>
		double AskVolume3;
	};
	/// <summary>
	/// 行情申买四、五属性
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcMarketDataBid45Field
	{
		/// <summary>
		/// 申买价四
		/// </summary>
		double BidPrice4;
		/// <summary>
		/// 申买量四
		/// </summary>
		double BidVolume4;
		/// <summary>
		/// 申买价五
		/// </summary>
		double BidPrice5;
		/// <summary>
		/// 申买量五
		/// </summary>
		double BidVolume5;
	};
	/// <summary>
	/// 行情申卖四、五属性
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcMarketDataAsk45Field
	{
		/// <summary>
		/// 申卖价四
		/// </summary>
		double AskPrice4;
		/// <summary>
		/// 申卖量四
		/// </summary>
		double AskVolume4;
		/// <summary>
		/// 申卖价五
		/// </summary>
		double AskPrice5;
		/// <summary>
		/// 申卖量五
		/// </summary>
		double AskVolume5;
	};
	/// <summary>
	/// 行情更新时间属性
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcMarketDataUpdateTimeField
	{
		/// <summary>
		/// 合约代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 31)]
		String^ InstrumentID;
		/// <summary>
		/// 最后修改时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ UpdateTime;
		/// <summary>
		/// 最后修改毫秒
		/// </summary>
		int UpdateMillisec;
		/// <summary>
		/// 业务日期
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ActionDay;
		/// <summary>
		/// 交易阶段
		/// </summary>
		EnumTradingPhaseType TradingPhase;
		/// <summary>
		/// 开仓限制
		/// </summary>
		EnumOpenRestrictionType OpenRestriction;
	};
	/// <summary>
	/// 成交均价
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcMarketDataAveragePriceField
	{
		/// <summary>
		/// 当日均价
		/// </summary>
		double AveragePrice;
	};
	/// <summary>
	/// 行情交易所代码属性
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcMarketDataExchangeField
	{
		/// <summary>
		/// 交易所代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ ExchangeID;
	};
	/// <summary>
	/// 信息分发
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcDisseminationField
	{
		/// <summary>
		/// 序列系列号
		/// </summary>
		short SequenceSeries;
		/// <summary>
		/// 序列号
		/// </summary>
		int SequenceNo;
	};
	/// <summary>
	/// 资金转账输入
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcInputFundTransferField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 投资者资金帐号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ AccountID;
		/// <summary>
		/// 资金帐户密码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 交易金额
		/// </summary>
		double TradeAmount;
		/// <summary>
		/// 摘要
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^ Digest;
		/// <summary>
		/// 账户类型
		/// </summary>
		EnumAccountTypeType AccountType;
	};
	/// <summary>
	/// 资金转账
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcFundTransferField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 投资者资金帐号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ AccountID;
		/// <summary>
		/// 资金帐户密码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 交易金额
		/// </summary>
		double TradeAmount;
		/// <summary>
		/// 摘要
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 36)]
		String^ Digest;
		/// <summary>
		/// 会话编号
		/// </summary>
		int SessionID;
		/// <summary>
		/// Liber核心流水号
		/// </summary>
		int LiberSerial;
		/// <summary>
		/// 转账平台流水号
		/// </summary>
		int PlateSerial;
		/// <summary>
		/// 第三方流水号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 13)]
		String^ TransferSerial;
		/// <summary>
		/// 交易日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// 转账时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradeTime;
		/// <summary>
		/// 出入金方向
		/// </summary>
		EnumFundDirectionType FundDirection;
		/// <summary>
		/// 错误代码
		/// </summary>
		int ErrorID;
		/// <summary>
		/// 错误信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};
	/// <summary>
	/// 资金转账查询请求
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryFundTransferSerialField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者资金帐号
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ AccountID;
		/// <summary>
		/// 账户类型
		/// </summary>
		EnumAccountTypeType AccountType;
	};
	/// <summary>
	/// 资金内转
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcFundInterTransferField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 资金账户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ AccountID;
		/// <summary>
		/// 资金账户密码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// 金额
		/// </summary>
		double TradeAmount;
		/// <summary>
		/// 内转类型
		/// </summary>
		EnumFundInterTransferTypeType TransferType;
		/// <summary>
		/// 资金内转编号
		/// </summary>
		int SerialID;
	};
	/// <summary>
	/// 资金内转流水
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcFundInterTransferSerialField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 资金账户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ AccountID;
		/// <summary>
		/// 资金账户密码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// 金额
		/// </summary>
		double TradeAmount;
		/// <summary>
		/// 内转类型
		/// </summary>
		EnumFundInterTransferTypeType TransferType;
		/// <summary>
		/// 资金内转编号
		/// </summary>
		int SerialID;
		/// <summary>
		/// 转账时间
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TransferTime;
		/// <summary>
		/// 错误代码
		/// </summary>
		int ErrorID;
		/// <summary>
		/// 错误信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};
	/// <summary>
	/// 资金内转流水查询请求
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcQryFundInterTransferSerialField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
	};
	/// <summary>
	/// 资金回拨输入信息
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcInputFundBackInfoField
	{
		/// <summary>
		/// 经纪公司编码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 账户类型
		/// </summary>
		EnumAccountTypeType AccountType;
	};
	/// <summary>
	/// 资金回拨信息
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcFundBackInfoField
	{
		/// <summary>
		/// 交易日
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 9)]
		String^ TradingDay;
		/// <summary>
		/// 经纪公司编码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 投资者代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ InvestorID;
		/// <summary>
		/// 账户类型
		/// </summary>
		EnumAccountTypeType AccountType;
		/// <summary>
		/// 资金账户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 15)]
		String^ AccountID;
		/// <summary>
		/// 回拨金额
		/// </summary>
		double Amount;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 错误代码
		/// </summary>
		int ErrorID;
		/// <summary>
		/// 错误信息
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ ErrorMsg;
	};
	/// <summary>
	/// 获取数据库信息
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcFetchDBInfoField
	{
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 密码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// 数据库索引
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ DBIndex;
		/// <summary>
		/// 数据库IP地址
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ IPAddress;
		/// <summary>
		/// 数据库IP端口
		/// </summary>
		int IPPort;
		/// <summary>
		/// 数据库名称
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ DBName;
		/// <summary>
		/// 数据库用户名
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ DBUserID;
		/// <summary>
		/// 数据库密码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ DBPassword;
	};
	/// <summary>
	/// MD用户信息
	///顺序布局
	/// </summary>
	[StructLayout(LayoutKind::Sequential, Pack = 1)]
	public ref struct SecurityFtdcMDUserInfoField
	{
		/// <summary>
		/// 经纪公司代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 11)]
		String^ BrokerID;
		/// <summary>
		/// 用户代码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 16)]
		String^ UserID;
		/// <summary>
		/// 用户名称
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 81)]
		String^ UserName;
		/// <summary>
		/// 密码
		/// </summary>
		[MarshalAs(UnmanagedType::ByValTStr, SizeConst = 41)]
		String^ Password;
		/// <summary>
		/// 行情系统编号
		/// </summary>
		int MDSysID;
		/// <summary>
		/// 股票最大订阅数量
		/// </summary>
		int MaxStockCount;
		/// <summary>
		/// 期权最大订阅数量
		/// </summary>
		int MaxOptionsCount;
	};

}
