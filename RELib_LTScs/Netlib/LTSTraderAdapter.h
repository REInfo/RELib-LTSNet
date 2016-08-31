

#pragma once
#include "Util.h"
#include "LTSTraderSpi.h"


using namespace RELib_LTSNative;

namespace  RELib_LTSNative{
	class CLTSTraderSpi;
};


namespace RELib_LTSNet
{

	/// <summary>
	/// 托管类,TraderAPI Adapter
	/// </summary>
	public ref class CLTSTraderAdapter
	{
	public:
		/// <summary>
		///创建CTPTraderAdapter
		///存贮订阅信息文件的目录，默认为当前目录
		/// </summary>
		CLTSTraderAdapter(void);
		/// <summary>
		///创建CTPTraderAdapter
		/// </summary>
		/// <param name="pszFlowPath">存贮订阅信息文件的目录，默认为当前目录</param>
		/// <param name="bIsUsingUdp">是否使用UDP协议</param>
		CLTSTraderAdapter(String^ pszFlowPath, String^ pszUserApiType);
	private:
		~CLTSTraderAdapter(void);
		CSecurityFtdcTraderApi* m_pApi;
		CLTSTraderSpi* m_pSpi;
	public:
		///删除接口对象本身
		///@remark 不再使用本接口对象时,调用该函数删除接口对象
		void Release();

		///初始化
		///@remark 初始化运行环境,只有调用后,接口才开始工作
		void Init();

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
		void RegisterFront(String^ pszFrontAddress);



		///订阅私有流。
		///@param nResumeType 私有流重传方式  
		///        TERT_RESTART:从本交易日开始重传
		///        TERT_RESUME:从上次收到的续传
		///        TERT_QUICK:只传送登录后私有流的内容
		///@remark 该方法要在Init方法前调用。若不调用则不会收到私有流的数据。
		void SubscribePrivateTopic(EnumRESUMETYPE nResumeType);

		///订阅公共流。
		///@param nResumeType 公共流重传方式  
		///        TERT_RESTART:从本交易日开始重传
		///        TERT_RESUME:从上次收到的续传
		///        TERT_QUICK:只传送登录后公共流的内容
		///@remark 该方法要在Init方法前调用。若不调用则不会收到公共流的数据。
		void SubscribePublicTopic(EnumRESUMETYPE nResumeType);

		///订阅交易员流。
		///@param nResumeType 交易员流重传方式  
		///        TERT_RESTART:从本交易日开始重传
		///        TERT_RESUME:从上次收到的续传
		///        TERT_QUICK:只传送登录后交易员流的内容
		///@remark 该方法要在Init方法前调用。若不调用则不会收到交易员流的数据。
		//void SubscribeUserTopic(EnumRESUMETYPE nResumeType);



		///用户登录请求
		int ReqUserLogin(SecurityFtdcReqUserLoginField^ pReqUserLoginField, int nRequestID);


		/// <summary>
		/// 
		/// </summary>
		int  ReqUserLogout(SecurityFtdcUserLogoutField^ pUserLogout, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqFetchAuthRandCode(SecurityFtdcAuthRandCodeField^ pAuthRandCode, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqOrderInsert(SecurityFtdcInputOrderField^ pInputOrder, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqOrderAction(SecurityFtdcInputOrderActionField^ pInputOrderAction, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqUserPasswordUpdate(SecurityFtdcUserPasswordUpdateField^ pUserPasswordUpdate, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqTradingAccountPasswordUpdate(SecurityFtdcTradingAccountPasswordUpdateField^ pTradingAccountPasswordUpdate, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqFundOutByLiber(SecurityFtdcInputFundTransferField^ pInputFundTransfer, int nRequestID);
		/// <summary>
		/// 
		/// </summary>
		int  ReqFundInterTransfer(SecurityFtdcFundInterTransferField^ pFundInterTransfer, int nRequestID);

		//events
	public:
		/// <summary>
		/// 当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
		/// </summary>
		event FrontConnected^ OnFrontConnected {
			void add(FrontConnected^ handler) {
				FrontConnected_delegate += handler;
			}
			void remove(FrontConnected^ handler) {
				FrontConnected_delegate -= handler;
			}
			void raise() {
				if (FrontConnected_delegate)
					FrontConnected_delegate();
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
			void add(FrontDisconnected^ handler) {
				FrontDisconnected_delegate += handler;
			}
			void remove(FrontDisconnected^ handler) {
				FrontDisconnected_delegate -= handler;
			}
			void raise(int nReason) {
				if (FrontDisconnected_delegate)
					FrontDisconnected_delegate(nReason);
			}
		}
		///心跳超时警告。当长时间未收到报文时，该方法被调用。
		///@param nTimeLapse 距离上次接收报文的时间
		event HeartBeatWarning^ OnHeartBeatWarning{
			void add(HeartBeatWarning^ handler) {
				HeartBeatWarning_delegate += handler;
			}
			void remove(HeartBeatWarning^ handler) {
				HeartBeatWarning_delegate -= handler;
			}
			void raise(int nTimeLapse) {
				if (HeartBeatWarning_delegate)
					HeartBeatWarning_delegate(nTimeLapse);
			}
		}




		/// <summary>
		/// 
		/// </summary>
		event RspError^ OnRspError{
			void add(RspError^ handler) { RspError_delegate += handler; }
			void remove(RspError^ handler) { RspError_delegate -= handler; }
			void raise(SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspError_delegate) RspError_delegate(pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspUserLogin^ OnRspUserLogin{
			void add(RspUserLogin^ handler) { RspUserLogin_delegate += handler; }
			void remove(RspUserLogin^ handler) { RspUserLogin_delegate -= handler; }
			void raise(SecurityFtdcRspUserLoginField^ pRspUserLogin, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspUserLogin_delegate) RspUserLogin_delegate(pRspUserLogin, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspUserLogout^ OnRspUserLogout{
			void add(RspUserLogout^ handler) { RspUserLogout_delegate += handler; }
			void remove(RspUserLogout^ handler) { RspUserLogout_delegate -= handler; }
			void raise(SecurityFtdcUserLogoutField^ pUserLogout, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspUserLogout_delegate) RspUserLogout_delegate(pUserLogout, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspFetchAuthRandCode^ OnRspFetchAuthRandCode{
			void add(RspFetchAuthRandCode^ handler) { RspFetchAuthRandCode_delegate += handler; }
			void remove(RspFetchAuthRandCode^ handler) { RspFetchAuthRandCode_delegate -= handler; }
			void raise(SecurityFtdcAuthRandCodeField^ pAuthRandCode, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspFetchAuthRandCode_delegate) RspFetchAuthRandCode_delegate(pAuthRandCode, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspOrderInsert^ OnRspOrderInsert{
			void add(RspOrderInsert^ handler) { RspOrderInsert_delegate += handler; }
			void remove(RspOrderInsert^ handler) { RspOrderInsert_delegate -= handler; }
			void raise(SecurityFtdcInputOrderField^ pInputOrder, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspOrderInsert_delegate) RspOrderInsert_delegate(pInputOrder, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspOrderAction^ OnRspOrderAction{
			void add(RspOrderAction^ handler) { RspOrderAction_delegate += handler; }
			void remove(RspOrderAction^ handler) { RspOrderAction_delegate -= handler; }
			void raise(SecurityFtdcInputOrderActionField^ pInputOrderAction, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspOrderAction_delegate) RspOrderAction_delegate(pInputOrderAction, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspUserPasswordUpdate^ OnRspUserPasswordUpdate{
			void add(RspUserPasswordUpdate^ handler) { RspUserPasswordUpdate_delegate += handler; }
			void remove(RspUserPasswordUpdate^ handler) { RspUserPasswordUpdate_delegate -= handler; }
			void raise(SecurityFtdcUserPasswordUpdateField^ pUserPasswordUpdate, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspUserPasswordUpdate_delegate) RspUserPasswordUpdate_delegate(pUserPasswordUpdate, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspTradingAccountPasswordUpdate^ OnRspTradingAccountPasswordUpdate{
			void add(RspTradingAccountPasswordUpdate^ handler) { RspTradingAccountPasswordUpdate_delegate += handler; }
			void remove(RspTradingAccountPasswordUpdate^ handler) { RspTradingAccountPasswordUpdate_delegate -= handler; }
			void raise(SecurityFtdcTradingAccountPasswordUpdateField^ pTradingAccountPasswordUpdate, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspTradingAccountPasswordUpdate_delegate) RspTradingAccountPasswordUpdate_delegate(pTradingAccountPasswordUpdate, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RtnOrder^ OnRtnOrder{
			void add(RtnOrder^ handler) { RtnOrder_delegate += handler; }
			void remove(RtnOrder^ handler) { RtnOrder_delegate -= handler; }
			void raise(SecurityFtdcOrderField^ pOrder) {
				if (RtnOrder_delegate) RtnOrder_delegate(pOrder);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RtnTrade^ OnRtnTrade{
			void add(RtnTrade^ handler) { RtnTrade_delegate += handler; }
			void remove(RtnTrade^ handler) { RtnTrade_delegate -= handler; }
			void raise(SecurityFtdcTradeField^ pTrade) {
				if (RtnTrade_delegate) RtnTrade_delegate(pTrade);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event ErrRtnOrderInsert^ OnErrRtnOrderInsert{
			void add(ErrRtnOrderInsert^ handler) { ErrRtnOrderInsert_delegate += handler; }
			void remove(ErrRtnOrderInsert^ handler) { ErrRtnOrderInsert_delegate -= handler; }
			void raise(SecurityFtdcInputOrderField^ pInputOrder, SecurityFtdcRspInfoField^ pRspInfo) {
				if (ErrRtnOrderInsert_delegate) ErrRtnOrderInsert_delegate(pInputOrder, pRspInfo);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event ErrRtnOrderAction^ OnErrRtnOrderAction{
			void add(ErrRtnOrderAction^ handler) { ErrRtnOrderAction_delegate += handler; }
			void remove(ErrRtnOrderAction^ handler) { ErrRtnOrderAction_delegate -= handler; }
			void raise(SecurityFtdcOrderActionField^ pOrderAction, SecurityFtdcRspInfoField^ pRspInfo) {
				if (ErrRtnOrderAction_delegate) ErrRtnOrderAction_delegate(pOrderAction, pRspInfo);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspFundOutByLiber^ OnRspFundOutByLiber{
			void add(RspFundOutByLiber^ handler) { RspFundOutByLiber_delegate += handler; }
			void remove(RspFundOutByLiber^ handler) { RspFundOutByLiber_delegate -= handler; }
			void raise(SecurityFtdcInputFundTransferField^ pInputFundTransfer, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspFundOutByLiber_delegate) RspFundOutByLiber_delegate(pInputFundTransfer, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RtnFundOutByLiber^ OnRtnFundOutByLiber{
			void add(RtnFundOutByLiber^ handler) { RtnFundOutByLiber_delegate += handler; }
			void remove(RtnFundOutByLiber^ handler) { RtnFundOutByLiber_delegate -= handler; }
			void raise(SecurityFtdcFundTransferField^ pFundTransfer) {
				if (RtnFundOutByLiber_delegate) RtnFundOutByLiber_delegate(pFundTransfer);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event ErrRtnFundOutByLiber^ OnErrRtnFundOutByLiber{
			void add(ErrRtnFundOutByLiber^ handler) { ErrRtnFundOutByLiber_delegate += handler; }
			void remove(ErrRtnFundOutByLiber^ handler) { ErrRtnFundOutByLiber_delegate -= handler; }
			void raise(SecurityFtdcInputFundTransferField^ pInputFundTransfer, SecurityFtdcRspInfoField^ pRspInfo) {
				if (ErrRtnFundOutByLiber_delegate) ErrRtnFundOutByLiber_delegate(pInputFundTransfer, pRspInfo);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RtnFundInByBank^ OnRtnFundInByBank{
			void add(RtnFundInByBank^ handler) { RtnFundInByBank_delegate += handler; }
			void remove(RtnFundInByBank^ handler) { RtnFundInByBank_delegate -= handler; }
			void raise(SecurityFtdcFundTransferField^ pFundTransfer) {
				if (RtnFundInByBank_delegate) RtnFundInByBank_delegate(pFundTransfer);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RspFundInterTransfer^ OnRspFundInterTransfer{
			void add(RspFundInterTransfer^ handler) { RspFundInterTransfer_delegate += handler; }
			void remove(RspFundInterTransfer^ handler) { RspFundInterTransfer_delegate -= handler; }
			void raise(SecurityFtdcFundInterTransferField^ pFundInterTransfer, SecurityFtdcRspInfoField^ pRspInfo, int nRequestID, bool bIsLast) {
				if (RspFundInterTransfer_delegate) RspFundInterTransfer_delegate(pFundInterTransfer, pRspInfo, nRequestID, bIsLast);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RtnFundInterTransferSerial^ OnRtnFundInterTransferSerial{
			void add(RtnFundInterTransferSerial^ handler) { RtnFundInterTransferSerial_delegate += handler; }
			void remove(RtnFundInterTransferSerial^ handler) { RtnFundInterTransferSerial_delegate -= handler; }
			void raise(SecurityFtdcFundInterTransferSerialField^ pFundInterTransferSerial) {
				if (RtnFundInterTransferSerial_delegate) RtnFundInterTransferSerial_delegate(pFundInterTransferSerial);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event ErrRtnFundInterTransfer^ OnErrRtnFundInterTransfer{
			void add(ErrRtnFundInterTransfer^ handler) { ErrRtnFundInterTransfer_delegate += handler; }
			void remove(ErrRtnFundInterTransfer^ handler) { ErrRtnFundInterTransfer_delegate -= handler; }
			void raise(SecurityFtdcFundInterTransferField^ pFundInterTransfer, SecurityFtdcRspInfoField^ pRspInfo) {
				if (ErrRtnFundInterTransfer_delegate) ErrRtnFundInterTransfer_delegate(pFundInterTransfer, pRspInfo);
			}
		}
		/// <summary>
		/// 
		/// </summary>
		event RtnPlatformStateInfo^ OnRtnPlatformStateInfo{
			void add(RtnPlatformStateInfo^ handler) { RtnPlatformStateInfo_delegate += handler; }
			void remove(RtnPlatformStateInfo^ handler) { RtnPlatformStateInfo_delegate -= handler; }
			void raise(SecurityFtdcPlatformStateInfoField^ pPlatformStateInfo) {
				if (RtnPlatformStateInfo_delegate) RtnPlatformStateInfo_delegate(pPlatformStateInfo);
			}
		}

		// delegates
	private:
		///当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
		FrontConnected^ FrontConnected_delegate;

		///当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
		///@param nReason 错误原因
		///        0x1001 网络读失败
		///        0x1002 网络写失败
		///        0x2001 接收心跳超时
		///        0x2002 发送心跳失败
		///        0x2003 收到错误报文
		FrontDisconnected^ FrontDisconnected_delegate;

		///心跳超时警告。当长时间未收到报文时，该方法被调用。
		///@param nTimeLapse 距离上次接收报文的时间
		HeartBeatWarning^ HeartBeatWarning_delegate;



		RspError^ RspError_delegate;
		RspUserLogin^ RspUserLogin_delegate;
		RspUserLogout^ RspUserLogout_delegate;
		RspFetchAuthRandCode^ RspFetchAuthRandCode_delegate;
		RspOrderInsert^ RspOrderInsert_delegate;
		RspOrderAction^ RspOrderAction_delegate;
		RspUserPasswordUpdate^ RspUserPasswordUpdate_delegate;
		RspTradingAccountPasswordUpdate^ RspTradingAccountPasswordUpdate_delegate;
		RtnOrder^ RtnOrder_delegate;
		RtnTrade^ RtnTrade_delegate;
		ErrRtnOrderInsert^ ErrRtnOrderInsert_delegate;
		ErrRtnOrderAction^ ErrRtnOrderAction_delegate;
		RspFundOutByLiber^ RspFundOutByLiber_delegate;
		RtnFundOutByLiber^ RtnFundOutByLiber_delegate;
		ErrRtnFundOutByLiber^ ErrRtnFundOutByLiber_delegate;
		RtnFundInByBank^ RtnFundInByBank_delegate;
		RspFundInterTransfer^ RspFundInterTransfer_delegate;
		RtnFundInterTransferSerial^ RtnFundInterTransferSerial_delegate;
		ErrRtnFundInterTransfer^ ErrRtnFundInterTransfer_delegate;
		RtnPlatformStateInfo^ RtnPlatformStateInfo_delegate;
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
