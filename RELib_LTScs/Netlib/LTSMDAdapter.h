


#pragma once
#include "Util.h"


using namespace RELib_LTSNative;

namespace  RELib_LTSNative{
	class CLTSMdSpi;
};

namespace RELib_LTSNet
{

	/// <summary>
	/// 托管类,Marcket Data Adapter
	/// </summary>
	public ref class LTSMDAdapter
	{
	public:
		/// <summary>
		///创建LTSMDAdapter
		///存贮订阅信息文件的目录，默认为当前目录
		/// </summary>
		LTSMDAdapter(void);
		/// <summary>
		///创建LTSMDAdapter
		/// </summary>
		/// <param name="pszFlowPath">存贮订阅信息文件的目录，默认为当前目录</param>
		/// <param name="bIsUsingUdp">是否使用UDP协议</param>
		LTSMDAdapter(String^ pszFlowPath,  String^ pszUserApiType);
	private:
		~LTSMDAdapter(void);
		CSecurityFtdcMdApi* m_pApi;
		CLTSMdSpi* m_pSpi;
	public:
		///删除接口对象本身
	///@remark 不再使用本接口对象时,调用该函数删除接口对象
	void Release(void);
	
	///初始化
	///@remark 初始化运行环境,只有调用后,接口才开始工作
	void Init(void);
	
	///等待接口线程结束运行
	///@return 线程退出代码
	int Join();
	
	///获取当前交易日
	///@retrun 获取到的交易日
	///@remark 只有登录成功后,才能得到正确的交易日
	String^ GetTradingDay();
	
	///注册前置机网络地址
	///@param pszFrontAddress：前置机网络地址。
	///@remark 网络地址的格式为：“protocol://ipaddress:port”，如：”tcp://127.0.0.1:17001”。 
	///@remark “tcp”代表传输协议，“127.0.0.1”代表服务器地址。”17001”代表服务器端口号。
	void RegisterFront(String^  pszFrontAddress);

	
	
		

		///订阅市场行情。
		///@param nTopicID 市场行情主题  
		///@param nResumeType 市场行情重传方式  
		///        TERT_RESTART:从本交易日开始重传
		///        TERT_RESUME:从上次收到的续传
		///        TERT_QUICK:先传送当前行情快照,再传送登录后市场行情的内容
		///@remark 该方法要在Init方法前调用。若不调用则不会收到私有流的数据。
		int SubscribeMarketData(array<String^>^ ppInstrumentID, int nCount, String^ pExchageID);
		///退订行情。
		///@param ppInstrumentID 合约ID  
		///@param nCount 要订阅/退订行情的合约个数
		///@remark 
		int UnSubscribeMarketData(array<String^>^ ppInstrumentID, int nCount, String^ pExchageID);

		

		/// <summary>
		/// 用户登录请求
		/// </summary>
		int ReqUserLogin(SecurityFtdcReqUserLoginField^ pReqUserLoginField, int nRequestID);


		/// <summary>
		/// 
		/// </summary>
		int ReqUserLogout(SecurityFtdcUserLogoutField^ pUserLogout, int nRequestID);

		///订阅行情应答
		//void OnRspSubMarketData(SecurityFtdcSpecificInstrumentField^ pSpecificInstrument, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

		///取消订阅行情应答
		//void OnRspUnSubMarketData(SecurityFtdcSpecificInstrumentField^ pSpecificInstrument, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast);

		///深度行情通知
		//void OnRtnDepthMarketData(SecurityFtdcDepthMarketDataField^ pDepthMarketData);
	

	//events
	public:
	/// <summary>
		/// 当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
		/// </summary>
		event FrontConnected^ OnFrontConnected {
			void add(FrontConnected^ handler ) {
				OnFrontConnected_delegate += handler;
			}
			void remove(FrontConnected^ handler) {
				OnFrontConnected_delegate -= handler;
			}
			void raise() {
				if(OnFrontConnected_delegate)
					OnFrontConnected_delegate();
			}
		}
	/// <summary>
		/// 当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
		/// 错误原因
		/// 0x1001 网络读失败
		/// 0x1002 网络写失败
		/// 0x2001 接收心跳超时
		/// 0x2002 发送心跳失败
		/// 0x2003 收到错误报文
		/// </summary>
		event FrontDisconnected^ OnFrontDisconnected {
			void add(FrontDisconnected^ handler ) {
				OnFrontDisconnected_delegate += handler;
			}
			void remove(FrontDisconnected^ handler) {
				OnFrontDisconnected_delegate -= handler;
			}
			void raise(int nReason) {
				if(OnFrontDisconnected_delegate)
					OnFrontDisconnected_delegate(nReason);
			}
		}
	///心跳超时警告。当长时间未收到报文时，该方法被调用。
	///@param nTimeLapse 距离上次接收报文的时间
	event HeartBeatWarning^ OnHeartBeatWarning {
			void add(HeartBeatWarning^ handler ) {
				OnHeartBeatWarning_delegate += handler;
			}
			void remove(HeartBeatWarning^ handler) {
				OnHeartBeatWarning_delegate -= handler;
			}
			void raise(int nTimeLapse) {
				if(OnHeartBeatWarning_delegate)
					OnHeartBeatWarning_delegate(nTimeLapse);
			}
		}

		/// <summary>
	/// 订阅行情应答
	/// </summary>
	event RspSubMarketData^ OnRspSubMarketData {
		void add(RspSubMarketData^ handler ) {
			OnRspSubMarketData_delegate += handler;
		}
		void remove(RspSubMarketData^ handler) {
			OnRspSubMarketData_delegate -= handler;
		}
		void raise(SecurityFtdcSpecificInstrumentField^ pSpecificInstrument, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) { 
			if(OnRspSubMarketData_delegate)
				OnRspSubMarketData_delegate(pSpecificInstrument, pRspInfo, nRequestID, bIsLast);
		}
	}
	/// <summary>
	/// 取消订阅行情应答
	/// </summary>
	event RspUnSubMarketData^ OnRspUnSubMarketData {
		void add(RspUnSubMarketData^ handler ) {
			OnRspUnSubMarketData_delegate += handler;
		}
		void remove(RspUnSubMarketData^ handler) {
			OnRspUnSubMarketData_delegate -= handler;
		}
		void raise(SecurityFtdcSpecificInstrumentField^ pSpecificInstrument, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) { 
			if(OnRspUnSubMarketData_delegate)
				OnRspUnSubMarketData_delegate(pSpecificInstrument, pRspInfo, nRequestID, bIsLast);
		}
	}

	/// <summary>
	/// 深度行情通知
	/// </summary>
	event RtnDepthMarketData^ OnRtnDepthMarketData {
		void add(RtnDepthMarketData^ handler ) {
			OnRtnDepthMarketData_delegate += handler;
		}
		void remove(RtnDepthMarketData^ handler) {
			OnRtnDepthMarketData_delegate -= handler;
		}
		void raise(SecurityFtdcDepthMarketDataField^ pDepthMarketData) { 
			if(OnRtnDepthMarketData_delegate)
				OnRtnDepthMarketData_delegate(pDepthMarketData);
		}
	}

	
	

					/// <summary>
		/// 
		/// </summary>
		event RspError^ OnRspError{
			void add(RspError^ handler) { OnRspError_delegate += handler; }
			void remove(RspError^ handler) { OnRspError_delegate -= handler; }
			void raise(SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(OnRspError_delegate) OnRspError_delegate(pRspInfo,nRequestID,bIsLast);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event RspUserLogin^ OnRspUserLogin{
			void add(RspUserLogin^ handler) { OnRspUserLogin_delegate += handler; }
			void remove(RspUserLogin^ handler) { OnRspUserLogin_delegate -= handler; }
			void raise(SecurityFtdcRspUserLoginField^ pRspUserLogin,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(OnRspUserLogin_delegate) OnRspUserLogin_delegate(pRspUserLogin,pRspInfo,nRequestID,bIsLast);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event RspUserLogout^ OnRspUserLogout{
			void add(RspUserLogout^ handler) { OnRspUserLogout_delegate += handler; }
			void remove(RspUserLogout^ handler) { OnRspUserLogout_delegate -= handler; }
			void raise(SecurityFtdcUserLogoutField^ pUserLogout,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(OnRspUserLogout_delegate) OnRspUserLogout_delegate(pUserLogout,pRspInfo,nRequestID,bIsLast);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event RspFetchAuthRandCode^ OnRspFetchAuthRandCode{
			void add(RspFetchAuthRandCode^ handler) { OnRspFetchAuthRandCode_delegate += handler; }
			void remove(RspFetchAuthRandCode^ handler) { OnRspFetchAuthRandCode_delegate -= handler; }
			void raise(SecurityFtdcAuthRandCodeField^ pAuthRandCode,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(OnRspFetchAuthRandCode_delegate) OnRspFetchAuthRandCode_delegate(pAuthRandCode,pRspInfo,nRequestID,bIsLast);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event RspOrderInsert^ OnRspOrderInsert{
			void add(RspOrderInsert^ handler) { OnRspOrderInsert_delegate += handler; }
			void remove(RspOrderInsert^ handler) { OnRspOrderInsert_delegate -= handler; }
			void raise(SecurityFtdcInputOrderField^ pInputOrder,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(OnRspOrderInsert_delegate) OnRspOrderInsert_delegate(pInputOrder,pRspInfo,nRequestID,bIsLast);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event RspOrderAction^ OnRspOrderAction{
			void add(RspOrderAction^ handler) { OnRspOrderAction_delegate += handler; }
			void remove(RspOrderAction^ handler) { OnRspOrderAction_delegate -= handler; }
			void raise(SecurityFtdcInputOrderActionField^ pInputOrderAction,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(OnRspOrderAction_delegate) OnRspOrderAction_delegate(pInputOrderAction,pRspInfo,nRequestID,bIsLast);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event RspUserPasswordUpdate^ OnRspUserPasswordUpdate{
			void add(RspUserPasswordUpdate^ handler) { OnRspUserPasswordUpdate_delegate += handler; }
			void remove(RspUserPasswordUpdate^ handler) { OnRspUserPasswordUpdate_delegate -= handler; }
			void raise(SecurityFtdcUserPasswordUpdateField^ pUserPasswordUpdate,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(OnRspUserPasswordUpdate_delegate) OnRspUserPasswordUpdate_delegate(pUserPasswordUpdate,pRspInfo,nRequestID,bIsLast);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event RspTradingAccountPasswordUpdate^ OnRspTradingAccountPasswordUpdate{
			void add(RspTradingAccountPasswordUpdate^ handler) { OnRspTradingAccountPasswordUpdate_delegate += handler; }
			void remove(RspTradingAccountPasswordUpdate^ handler) { OnRspTradingAccountPasswordUpdate_delegate -= handler; }
			void raise(SecurityFtdcTradingAccountPasswordUpdateField^ pTradingAccountPasswordUpdate,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(OnRspTradingAccountPasswordUpdate_delegate) OnRspTradingAccountPasswordUpdate_delegate(pTradingAccountPasswordUpdate,pRspInfo,nRequestID,bIsLast);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event RtnOrder^ OnRtnOrder{
			void add(RtnOrder^ handler) { OnRtnOrder_delegate += handler; }
			void remove(RtnOrder^ handler) { OnRtnOrder_delegate -= handler; }
			void raise(SecurityFtdcOrderField^ pOrder) {
				if(OnRtnOrder_delegate) OnRtnOrder_delegate(pOrder);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event RtnTrade^ OnRtnTrade{
			void add(RtnTrade^ handler) { OnRtnTrade_delegate += handler; }
			void remove(RtnTrade^ handler) { OnRtnTrade_delegate -= handler; }
			void raise(SecurityFtdcTradeField^ pTrade) {
				if(OnRtnTrade_delegate) OnRtnTrade_delegate(pTrade);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event ErrRtnOrderInsert^ OnErrRtnOrderInsert{
			void add(ErrRtnOrderInsert^ handler) { OnErrRtnOrderInsert_delegate += handler; }
			void remove(ErrRtnOrderInsert^ handler) { OnErrRtnOrderInsert_delegate -= handler; }
			void raise(SecurityFtdcInputOrderField^ pInputOrder,SecurityFtdcRspInfoField^ pRspInfo) {
				if(OnErrRtnOrderInsert_delegate) OnErrRtnOrderInsert_delegate(pInputOrder,pRspInfo);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event ErrRtnOrderAction^ OnErrRtnOrderAction{
			void add(ErrRtnOrderAction^ handler) { OnErrRtnOrderAction_delegate += handler; }
			void remove(ErrRtnOrderAction^ handler) { OnErrRtnOrderAction_delegate -= handler; }
			void raise(SecurityFtdcOrderActionField^ pOrderAction,SecurityFtdcRspInfoField^ pRspInfo) {
				if(OnErrRtnOrderAction_delegate) OnErrRtnOrderAction_delegate(pOrderAction,pRspInfo);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event RspFundOutByLiber^ OnRspFundOutByLiber{
			void add(RspFundOutByLiber^ handler) { OnRspFundOutByLiber_delegate += handler; }
			void remove(RspFundOutByLiber^ handler) { OnRspFundOutByLiber_delegate -= handler; }
			void raise(SecurityFtdcInputFundTransferField^ pInputFundTransfer,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(OnRspFundOutByLiber_delegate) OnRspFundOutByLiber_delegate(pInputFundTransfer,pRspInfo,nRequestID,bIsLast);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event RtnFundOutByLiber^ OnRtnFundOutByLiber{
			void add(RtnFundOutByLiber^ handler) { OnRtnFundOutByLiber_delegate += handler; }
			void remove(RtnFundOutByLiber^ handler) { OnRtnFundOutByLiber_delegate -= handler; }
			void raise(SecurityFtdcFundTransferField^ pFundTransfer) {
				if(OnRtnFundOutByLiber_delegate) OnRtnFundOutByLiber_delegate(pFundTransfer);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event ErrRtnFundOutByLiber^ OnErrRtnFundOutByLiber{
			void add(ErrRtnFundOutByLiber^ handler) { OnErrRtnFundOutByLiber_delegate += handler; }
			void remove(ErrRtnFundOutByLiber^ handler) { OnErrRtnFundOutByLiber_delegate -= handler; }
			void raise(SecurityFtdcInputFundTransferField^ pInputFundTransfer,SecurityFtdcRspInfoField^ pRspInfo) {
				if(OnErrRtnFundOutByLiber_delegate) OnErrRtnFundOutByLiber_delegate(pInputFundTransfer,pRspInfo);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event RtnFundInByBank^ OnRtnFundInByBank{
			void add(RtnFundInByBank^ handler) { OnRtnFundInByBank_delegate += handler; }
			void remove(RtnFundInByBank^ handler) { OnRtnFundInByBank_delegate -= handler; }
			void raise(SecurityFtdcFundTransferField^ pFundTransfer) {
				if(OnRtnFundInByBank_delegate) OnRtnFundInByBank_delegate(pFundTransfer);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event RspFundInterTransfer^ OnRspFundInterTransfer{
			void add(RspFundInterTransfer^ handler) { OnRspFundInterTransfer_delegate += handler; }
			void remove(RspFundInterTransfer^ handler) { OnRspFundInterTransfer_delegate -= handler; }
			void raise(SecurityFtdcFundInterTransferField^ pFundInterTransfer,SecurityFtdcRspInfoField^ pRspInfo,int nRequestID, bool bIsLast) {
				if(OnRspFundInterTransfer_delegate) OnRspFundInterTransfer_delegate(pFundInterTransfer,pRspInfo,nRequestID,bIsLast);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event RtnFundInterTransferSerial^ OnRtnFundInterTransferSerial{
			void add(RtnFundInterTransferSerial^ handler) { OnRtnFundInterTransferSerial_delegate += handler; }
			void remove(RtnFundInterTransferSerial^ handler) { OnRtnFundInterTransferSerial_delegate -= handler; }
			void raise(SecurityFtdcFundInterTransferSerialField^ pFundInterTransferSerial) {
				if(OnRtnFundInterTransferSerial_delegate) OnRtnFundInterTransferSerial_delegate(pFundInterTransferSerial);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event ErrRtnFundInterTransfer^ OnErrRtnFundInterTransfer{
			void add(ErrRtnFundInterTransfer^ handler) { OnErrRtnFundInterTransfer_delegate += handler; }
			void remove(ErrRtnFundInterTransfer^ handler) { OnErrRtnFundInterTransfer_delegate -= handler; }
			void raise(SecurityFtdcFundInterTransferField^ pFundInterTransfer,SecurityFtdcRspInfoField^ pRspInfo) {
				if(OnErrRtnFundInterTransfer_delegate) OnErrRtnFundInterTransfer_delegate(pFundInterTransfer,pRspInfo);
			}
		}
							/// <summary>
		/// 
		/// </summary>
		event RtnPlatformStateInfo^ OnRtnPlatformStateInfo{
			void add(RtnPlatformStateInfo^ handler) { OnRtnPlatformStateInfo_delegate += handler; }
			void remove(RtnPlatformStateInfo^ handler) { OnRtnPlatformStateInfo_delegate -= handler; }
			void raise(SecurityFtdcPlatformStateInfoField^ pPlatformStateInfo) {
				if(OnRtnPlatformStateInfo_delegate) OnRtnPlatformStateInfo_delegate(pPlatformStateInfo);
			}
		}
																														
	// delegates
	private:
		///当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
		FrontConnected^ OnFrontConnected_delegate;
	
	///当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
	///@param nReason 错误原因
	///        0x1001 网络读失败
	///        0x1002 网络写失败
	///        0x2001 接收心跳超时
	///        0x2002 发送心跳失败
	///        0x2003 收到错误报文
	FrontDisconnected^ OnFrontDisconnected_delegate;
		
	///心跳超时警告。当长时间未收到报文时，该方法被调用。
	///@param nTimeLapse 距离上次接收报文的时间
	HeartBeatWarning^ OnHeartBeatWarning_delegate;
	
	RspSubMarketData^ OnRspSubMarketData_delegate;
	RspUnSubMarketData^ OnRspUnSubMarketData_delegate;
	RtnDepthMarketData^ OnRtnDepthMarketData_delegate;

						RspError^ OnRspError_delegate;
								RspUserLogin^ OnRspUserLogin_delegate;
								RspUserLogout^ OnRspUserLogout_delegate;
								RspFetchAuthRandCode^ OnRspFetchAuthRandCode_delegate;
								RspOrderInsert^ OnRspOrderInsert_delegate;
								RspOrderAction^ OnRspOrderAction_delegate;
								RspUserPasswordUpdate^ OnRspUserPasswordUpdate_delegate;
								RspTradingAccountPasswordUpdate^ OnRspTradingAccountPasswordUpdate_delegate;
								RtnOrder^ OnRtnOrder_delegate;
								RtnTrade^ OnRtnTrade_delegate;
								ErrRtnOrderInsert^ OnErrRtnOrderInsert_delegate;
								ErrRtnOrderAction^ OnErrRtnOrderAction_delegate;
								RspFundOutByLiber^ OnRspFundOutByLiber_delegate;
								RtnFundOutByLiber^ OnRtnFundOutByLiber_delegate;
								ErrRtnFundOutByLiber^ OnErrRtnFundOutByLiber_delegate;
								RtnFundInByBank^ OnRtnFundInByBank_delegate;
								RspFundInterTransfer^ OnRspFundInterTransfer_delegate;
								RtnFundInterTransferSerial^ OnRtnFundInterTransferSerial_delegate;
								ErrRtnFundInterTransfer^ OnErrRtnFundInterTransfer_delegate;
								RtnPlatformStateInfo^ OnRtnPlatformStateInfo_delegate;
																														#ifdef __LTS_MA__
		// callbacks for MA
	private:
	///默认
	///当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
	void cbk_OnFrontConnected();
	
	///当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
	///@param nReason 错误原因
	///        0x1001 网络读失败
	///        0x1002 网络写失败
	///        0x2001 接收心跳超时
	///        0x2002 发送心跳失败
	///        0x2003 收到错误报文
	void cbk_OnFrontDisconnected(int nReason);
		
	///心跳超时警告。当长时间未收到报文时，该方法被调用。
	///@param nTimeLapse 距离上次接收报文的时间
	void cbk_OnHeartBeatWarning(int nTimeLapse);
	
	


					/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspError(CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspUserLogin(CSecurityFtdcRspUserLoginField *pRspUserLogin,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspUserLogout(CSecurityFtdcUserLogoutField *pUserLogout,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspFetchAuthRandCode(CSecurityFtdcAuthRandCodeField *pAuthRandCode,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspOrderInsert(CSecurityFtdcInputOrderField *pInputOrder,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspOrderAction(CSecurityFtdcInputOrderActionField *pInputOrderAction,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspUserPasswordUpdate(CSecurityFtdcUserPasswordUpdateField *pUserPasswordUpdate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspTradingAccountPasswordUpdate(CSecurityFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnRtnOrder(CSecurityFtdcOrderField *pOrder);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnRtnTrade(CSecurityFtdcTradeField *pTrade);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnErrRtnOrderInsert(CSecurityFtdcInputOrderField *pInputOrder,CSecurityFtdcRspInfoField *pRspInfo);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnErrRtnOrderAction(CSecurityFtdcOrderActionField *pOrderAction,CSecurityFtdcRspInfoField *pRspInfo);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspFundOutByLiber(CSecurityFtdcInputFundTransferField *pInputFundTransfer,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnRtnFundOutByLiber(CSecurityFtdcFundTransferField *pFundTransfer);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnErrRtnFundOutByLiber(CSecurityFtdcInputFundTransferField *pInputFundTransfer,CSecurityFtdcRspInfoField *pRspInfo);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnRtnFundInByBank(CSecurityFtdcFundTransferField *pFundTransfer);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnRspFundInterTransfer(CSecurityFtdcFundInterTransferField *pFundInterTransfer,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnRtnFundInterTransferSerial(CSecurityFtdcFundInterTransferSerialField *pFundInterTransferSerial);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnErrRtnFundInterTransfer(CSecurityFtdcFundInterTransferField *pFundInterTransfer,CSecurityFtdcRspInfoField *pRspInfo);
							/// <summary>
		/// 
		/// </summary>
		void cbk_OnRtnPlatformStateInfo(CSecurityFtdcPlatformStateInfoField *pPlatformStateInfo);
																														
/// <summary>
		/// 将所有回调函数地址传递给SPI
		/// </summary>
		void RegisterCallbacks();
#endif
	};
}
