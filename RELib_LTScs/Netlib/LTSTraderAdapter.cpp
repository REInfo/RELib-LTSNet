

#include "StdAfx.h"
#include "LTSTraderSpi.h"
#include "LTSTraderAdapter.h"



using namespace RELib_LTSNative;

namespace RELib_LTSNet
{

	/// <summary>
	///托管类,TraderAPI Adapter 创建CTPMDAdapter
	///存贮订阅信息文件的目录，默认为当前目录
	/// </summary>
	CLTSTraderAdapter::CLTSTraderAdapter(void)
	{
		m_pApi = CSecurityFtdcTraderApi::CreateFtdcTraderApi();
		m_pSpi = new CLTSTraderSpi(this);
#ifdef __LTS_MA__
		RegisterCallbacks();
#endif
		m_pApi->RegisterSpi(m_pSpi);
	}

	/// <summary>
	///创建CTPMDAdapter
	/// </summary>
	/// <param name="pszFlowPath">存贮订阅信息文件的目录，默认为当前目录</param>
	/// <param name="bIsUsingUdp">是否使用UDP协议</param>
	CLTSTraderAdapter::CLTSTraderAdapter(String^ pszFlowPath, String^ pszUserApiType)
	{
		CAutoStrPtr asp(pszFlowPath);
		CAutoStrPtr arg2(pszUserApiType);

		m_pApi = CSecurityFtdcTraderApi::CreateFtdcTraderApi(asp.m_pChar);
		m_pSpi = new CLTSTraderSpi(this);
#ifdef __LTS_MA__
		RegisterCallbacks();
#endif	
		m_pApi->RegisterSpi(m_pSpi);
	}

	CLTSTraderAdapter::~CLTSTraderAdapter(void)
	{
		Release();
	}
	void CLTSTraderAdapter::Release(void)
	{
		if (m_pApi)
		{
			m_pApi->RegisterSpi(0);
			m_pApi->Release();
			m_pApi = nullptr;
			delete m_pSpi;
			m_pSpi = nullptr;
		}
	}
	///注册前置机网络地址
	void CLTSTraderAdapter::RegisterFront(String^  pszFrontAddress)
	{
		CAutoStrPtr asp = CAutoStrPtr(pszFrontAddress);
		m_pApi->RegisterFront(asp.m_pChar);
	}


	///订阅私有流。
	void CLTSTraderAdapter::SubscribePrivateTopic(EnumRESUMETYPE nResumeType)
	{
		m_pApi->SubscribePrivateTopic((SECURITY_TE_RESUME_TYPE)nResumeType);
	}
	///订阅公共流
	void CLTSTraderAdapter::SubscribePublicTopic(EnumRESUMETYPE nResumeType)
	{
		m_pApi->SubscribePublicTopic((SECURITY_TE_RESUME_TYPE)nResumeType);
	}

	void CLTSTraderAdapter::Init(void)
	{
		m_pApi->Init();
	}

	int CLTSTraderAdapter::Join(void)
	{
		return m_pApi->Join();
	}

	String^ CLTSTraderAdapter::GetTradingDay()
	{
		return gcnew String(m_pApi->GetTradingDay());
	}

	///用户登录请求
	int CLTSTraderAdapter::ReqUserLogin(SecurityFtdcReqUserLoginField^ pReqUserLoginField, int nRequestID)
	{
		CSecurityFtdcReqUserLoginField native;
		MNConv<SecurityFtdcReqUserLoginField^, CSecurityFtdcReqUserLoginField>::M2N(pReqUserLoginField, &native);
		return m_pApi->ReqUserLogin(&native, nRequestID);
	}


	/// <summary>
	/// 
	/// </summary>
	int CLTSTraderAdapter::ReqUserLogout(SecurityFtdcUserLogoutField^ pUserLogout, int nRequestID)
	{
		CSecurityFtdcUserLogoutField native0;
		MNConv<SecurityFtdcUserLogoutField^, CSecurityFtdcUserLogoutField>::M2N(pUserLogout, &native0);

		return m_pApi->ReqUserLogout(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSTraderAdapter::ReqFetchAuthRandCode(SecurityFtdcAuthRandCodeField^ pAuthRandCode, int nRequestID)
	{
		CSecurityFtdcAuthRandCodeField native0;
		MNConv<SecurityFtdcAuthRandCodeField^, CSecurityFtdcAuthRandCodeField>::M2N(pAuthRandCode, &native0);

		return m_pApi->ReqFetchAuthRandCode(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSTraderAdapter::ReqOrderInsert(SecurityFtdcInputOrderField^ pInputOrder, int nRequestID)
	{
		CSecurityFtdcInputOrderField native0;
		MNConv<SecurityFtdcInputOrderField^, CSecurityFtdcInputOrderField>::M2N(pInputOrder, &native0);

		return m_pApi->ReqOrderInsert(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSTraderAdapter::ReqOrderAction(SecurityFtdcInputOrderActionField^ pInputOrderAction, int nRequestID)
	{
		CSecurityFtdcInputOrderActionField native0;
		MNConv<SecurityFtdcInputOrderActionField^, CSecurityFtdcInputOrderActionField>::M2N(pInputOrderAction, &native0);

		return m_pApi->ReqOrderAction(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSTraderAdapter::ReqUserPasswordUpdate(SecurityFtdcUserPasswordUpdateField^ pUserPasswordUpdate, int nRequestID)
	{
		CSecurityFtdcUserPasswordUpdateField native0;
		MNConv<SecurityFtdcUserPasswordUpdateField^, CSecurityFtdcUserPasswordUpdateField>::M2N(pUserPasswordUpdate, &native0);

		return m_pApi->ReqUserPasswordUpdate(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSTraderAdapter::ReqTradingAccountPasswordUpdate(SecurityFtdcTradingAccountPasswordUpdateField^ pTradingAccountPasswordUpdate, int nRequestID)
	{
		CSecurityFtdcTradingAccountPasswordUpdateField native0;
		MNConv<SecurityFtdcTradingAccountPasswordUpdateField^, CSecurityFtdcTradingAccountPasswordUpdateField>::M2N(pTradingAccountPasswordUpdate, &native0);

		return m_pApi->ReqTradingAccountPasswordUpdate(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSTraderAdapter::ReqFundOutByLiber(SecurityFtdcInputFundTransferField^ pInputFundTransfer, int nRequestID)
	{
		CSecurityFtdcInputFundTransferField native0;
		MNConv<SecurityFtdcInputFundTransferField^, CSecurityFtdcInputFundTransferField>::M2N(pInputFundTransfer, &native0);

		return m_pApi->ReqFundOutByLiber(&native0, nRequestID);
	}
	/// <summary>
	/// 
	/// </summary>
	int CLTSTraderAdapter::ReqFundInterTransfer(SecurityFtdcFundInterTransferField^ pFundInterTransfer, int nRequestID)
	{
		CSecurityFtdcFundInterTransferField native0;
		MNConv<SecurityFtdcFundInterTransferField^, CSecurityFtdcFundInterTransferField>::M2N(pFundInterTransfer, &native0);

		return m_pApi->ReqFundInterTransfer(&native0, nRequestID);
	}

#ifdef __LTS_MA__

	//------------------------------------ Callbacks ------------------------------------
	void CLTSTraderAdapter::cbk_OnFrontConnected(){
		this->OnFrontConnected();
	}
	void CLTSTraderAdapter::cbk_OnFrontDisconnected(int nReason){
		this->OnFrontDisconnected(nReason);
	}
	void CLTSTraderAdapter::cbk_OnHeartBeatWarning(int nTimeLapse){
		this->OnHeartBeatWarning(nTimeLapse);
	}


	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderAdapter::cbk_OnRspError(CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspError(RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderAdapter::cbk_OnRspUserLogin(CSecurityFtdcRspUserLoginField *pRspUserLogin,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspUserLogin(MNConv<SecurityFtdcRspUserLoginField^, CSecurityFtdcRspUserLoginField>::N2M(pRspUserLogin),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderAdapter::cbk_OnRspUserLogout(CSecurityFtdcUserLogoutField *pUserLogout,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspUserLogout(MNConv<SecurityFtdcUserLogoutField^, CSecurityFtdcUserLogoutField>::N2M(pUserLogout),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderAdapter::cbk_OnRspFetchAuthRandCode(CSecurityFtdcAuthRandCodeField *pAuthRandCode,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspFetchAuthRandCode(MNConv<SecurityFtdcAuthRandCodeField^, CSecurityFtdcAuthRandCodeField>::N2M(pAuthRandCode),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderAdapter::cbk_OnRspOrderInsert(CSecurityFtdcInputOrderField *pInputOrder,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspOrderInsert(MNConv<SecurityFtdcInputOrderField^, CSecurityFtdcInputOrderField>::N2M(pInputOrder),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderAdapter::cbk_OnRspOrderAction(CSecurityFtdcInputOrderActionField *pInputOrderAction,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspOrderAction(MNConv<SecurityFtdcInputOrderActionField^, CSecurityFtdcInputOrderActionField>::N2M(pInputOrderAction),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderAdapter::cbk_OnRspUserPasswordUpdate(CSecurityFtdcUserPasswordUpdateField *pUserPasswordUpdate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspUserPasswordUpdate(MNConv<SecurityFtdcUserPasswordUpdateField^, CSecurityFtdcUserPasswordUpdateField>::N2M(pUserPasswordUpdate),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderAdapter::cbk_OnRspTradingAccountPasswordUpdate(CSecurityFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspTradingAccountPasswordUpdate(MNConv<SecurityFtdcTradingAccountPasswordUpdateField^, CSecurityFtdcTradingAccountPasswordUpdateField>::N2M(pTradingAccountPasswordUpdate),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderAdapter::cbk_OnRtnOrder(CSecurityFtdcOrderField *pOrder){
		this->OnRtnOrder(MNConv<SecurityFtdcOrderField^, CSecurityFtdcOrderField>::N2M(pOrder));
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderAdapter::cbk_OnRtnTrade(CSecurityFtdcTradeField *pTrade){
		this->OnRtnTrade(MNConv<SecurityFtdcTradeField^, CSecurityFtdcTradeField>::N2M(pTrade));
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderAdapter::cbk_OnErrRtnOrderInsert(CSecurityFtdcInputOrderField *pInputOrder,CSecurityFtdcRspInfoField *pRspInfo){
		this->OnErrRtnOrderInsert(MNConv<SecurityFtdcInputOrderField^, CSecurityFtdcInputOrderField>::N2M(pInputOrder),RspInfoField(pRspInfo));
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderAdapter::cbk_OnErrRtnOrderAction(CSecurityFtdcOrderActionField *pOrderAction,CSecurityFtdcRspInfoField *pRspInfo){
		this->OnErrRtnOrderAction(MNConv<SecurityFtdcOrderActionField^, CSecurityFtdcOrderActionField>::N2M(pOrderAction),RspInfoField(pRspInfo));
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderAdapter::cbk_OnRspFundOutByLiber(CSecurityFtdcInputFundTransferField *pInputFundTransfer,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspFundOutByLiber(MNConv<SecurityFtdcInputFundTransferField^, CSecurityFtdcInputFundTransferField>::N2M(pInputFundTransfer),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderAdapter::cbk_OnRtnFundOutByLiber(CSecurityFtdcFundTransferField *pFundTransfer){
		this->OnRtnFundOutByLiber(MNConv<SecurityFtdcFundTransferField^, CSecurityFtdcFundTransferField>::N2M(pFundTransfer));
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderAdapter::cbk_OnErrRtnFundOutByLiber(CSecurityFtdcInputFundTransferField *pInputFundTransfer,CSecurityFtdcRspInfoField *pRspInfo){
		this->OnErrRtnFundOutByLiber(MNConv<SecurityFtdcInputFundTransferField^, CSecurityFtdcInputFundTransferField>::N2M(pInputFundTransfer),RspInfoField(pRspInfo));
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderAdapter::cbk_OnRtnFundInByBank(CSecurityFtdcFundTransferField *pFundTransfer){
		this->OnRtnFundInByBank(MNConv<SecurityFtdcFundTransferField^, CSecurityFtdcFundTransferField>::N2M(pFundTransfer));
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderAdapter::cbk_OnRspFundInterTransfer(CSecurityFtdcFundInterTransferField *pFundInterTransfer,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		this->OnRspFundInterTransfer(MNConv<SecurityFtdcFundInterTransferField^, CSecurityFtdcFundInterTransferField>::N2M(pFundInterTransfer),RspInfoField(pRspInfo),nRequestID,bIsLast);
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderAdapter::cbk_OnRtnFundInterTransferSerial(CSecurityFtdcFundInterTransferSerialField *pFundInterTransferSerial){
		this->OnRtnFundInterTransferSerial(MNConv<SecurityFtdcFundInterTransferSerialField^, CSecurityFtdcFundInterTransferSerialField>::N2M(pFundInterTransferSerial));
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderAdapter::cbk_OnErrRtnFundInterTransfer(CSecurityFtdcFundInterTransferField *pFundInterTransfer,CSecurityFtdcRspInfoField *pRspInfo){
		this->OnErrRtnFundInterTransfer(MNConv<SecurityFtdcFundInterTransferField^, CSecurityFtdcFundInterTransferField>::N2M(pFundInterTransfer),RspInfoField(pRspInfo));
	}
	/// <summary>
	/// 
	/// </summary>
	void CLTSTraderAdapter::cbk_OnRtnPlatformStateInfo(CSecurityFtdcPlatformStateInfoField *pPlatformStateInfo){
		this->OnRtnPlatformStateInfo(MNConv<SecurityFtdcPlatformStateInfoField^, CSecurityFtdcPlatformStateInfoField>::N2M(pPlatformStateInfo));
	}

	// 将所有回调函数地址传递给SPI，并保存对delegate的引用
	void CLTSTraderAdapter::RegisterCallbacks()
	{
		m_pSpi->d_FrontConnected = gcnew Internal_FrontConnected(this, &CLTSTraderAdapter::cbk_OnFrontConnected);
		m_pSpi->p_OnFrontConnected = (Callback_OnFrontConnected)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_FrontConnected).ToPointer();

		m_pSpi->d_FrontDisconnected = gcnew Internal_FrontDisconnected(this, &CLTSTraderAdapter::cbk_OnFrontDisconnected);
		m_pSpi->p_OnFrontDisconnected = (Callback_OnFrontDisconnected)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_FrontDisconnected).ToPointer();

		m_pSpi->d_HeartBeatWarning = gcnew Internal_HeartBeatWarning(this, &CLTSTraderAdapter::cbk_OnHeartBeatWarning);
		m_pSpi->p_OnHeartBeatWarning = (Callback_OnHeartBeatWarning)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_HeartBeatWarning).ToPointer();

		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspError = gcnew Internal_RspError(this, &CLTSTraderAdapter::cbk_OnRspError);
		m_pSpi->p_OnRspError = (Callback_OnRspError)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspError).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspUserLogin = gcnew Internal_RspUserLogin(this, &CLTSTraderAdapter::cbk_OnRspUserLogin);
		m_pSpi->p_OnRspUserLogin = (Callback_OnRspUserLogin)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspUserLogin).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspUserLogout = gcnew Internal_RspUserLogout(this, &CLTSTraderAdapter::cbk_OnRspUserLogout);
		m_pSpi->p_OnRspUserLogout = (Callback_OnRspUserLogout)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspUserLogout).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspFetchAuthRandCode = gcnew Internal_RspFetchAuthRandCode(this, &CLTSTraderAdapter::cbk_OnRspFetchAuthRandCode);
		m_pSpi->p_OnRspFetchAuthRandCode = (Callback_OnRspFetchAuthRandCode)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspFetchAuthRandCode).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspOrderInsert = gcnew Internal_RspOrderInsert(this, &CLTSTraderAdapter::cbk_OnRspOrderInsert);
		m_pSpi->p_OnRspOrderInsert = (Callback_OnRspOrderInsert)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspOrderInsert).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspOrderAction = gcnew Internal_RspOrderAction(this, &CLTSTraderAdapter::cbk_OnRspOrderAction);
		m_pSpi->p_OnRspOrderAction = (Callback_OnRspOrderAction)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspOrderAction).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspUserPasswordUpdate = gcnew Internal_RspUserPasswordUpdate(this, &CLTSTraderAdapter::cbk_OnRspUserPasswordUpdate);
		m_pSpi->p_OnRspUserPasswordUpdate = (Callback_OnRspUserPasswordUpdate)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspUserPasswordUpdate).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspTradingAccountPasswordUpdate = gcnew Internal_RspTradingAccountPasswordUpdate(this, &CLTSTraderAdapter::cbk_OnRspTradingAccountPasswordUpdate);
		m_pSpi->p_OnRspTradingAccountPasswordUpdate = (Callback_OnRspTradingAccountPasswordUpdate)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspTradingAccountPasswordUpdate).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RtnOrder = gcnew Internal_RtnOrder(this, &CLTSTraderAdapter::cbk_OnRtnOrder);
		m_pSpi->p_OnRtnOrder = (Callback_OnRtnOrder)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RtnOrder).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RtnTrade = gcnew Internal_RtnTrade(this, &CLTSTraderAdapter::cbk_OnRtnTrade);
		m_pSpi->p_OnRtnTrade = (Callback_OnRtnTrade)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RtnTrade).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_ErrRtnOrderInsert = gcnew Internal_ErrRtnOrderInsert(this, &CLTSTraderAdapter::cbk_OnErrRtnOrderInsert);
		m_pSpi->p_OnErrRtnOrderInsert = (Callback_OnErrRtnOrderInsert)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_ErrRtnOrderInsert).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_ErrRtnOrderAction = gcnew Internal_ErrRtnOrderAction(this, &CLTSTraderAdapter::cbk_OnErrRtnOrderAction);
		m_pSpi->p_OnErrRtnOrderAction = (Callback_OnErrRtnOrderAction)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_ErrRtnOrderAction).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspFundOutByLiber = gcnew Internal_RspFundOutByLiber(this, &CLTSTraderAdapter::cbk_OnRspFundOutByLiber);
		m_pSpi->p_OnRspFundOutByLiber = (Callback_OnRspFundOutByLiber)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspFundOutByLiber).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RtnFundOutByLiber = gcnew Internal_RtnFundOutByLiber(this, &CLTSTraderAdapter::cbk_OnRtnFundOutByLiber);
		m_pSpi->p_OnRtnFundOutByLiber = (Callback_OnRtnFundOutByLiber)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RtnFundOutByLiber).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_ErrRtnFundOutByLiber = gcnew Internal_ErrRtnFundOutByLiber(this, &CLTSTraderAdapter::cbk_OnErrRtnFundOutByLiber);
		m_pSpi->p_OnErrRtnFundOutByLiber = (Callback_OnErrRtnFundOutByLiber)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_ErrRtnFundOutByLiber).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RtnFundInByBank = gcnew Internal_RtnFundInByBank(this, &CLTSTraderAdapter::cbk_OnRtnFundInByBank);
		m_pSpi->p_OnRtnFundInByBank = (Callback_OnRtnFundInByBank)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RtnFundInByBank).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RspFundInterTransfer = gcnew Internal_RspFundInterTransfer(this, &CLTSTraderAdapter::cbk_OnRspFundInterTransfer);
		m_pSpi->p_OnRspFundInterTransfer = (Callback_OnRspFundInterTransfer)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RspFundInterTransfer).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RtnFundInterTransferSerial = gcnew Internal_RtnFundInterTransferSerial(this, &CLTSTraderAdapter::cbk_OnRtnFundInterTransferSerial);
		m_pSpi->p_OnRtnFundInterTransferSerial = (Callback_OnRtnFundInterTransferSerial)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RtnFundInterTransferSerial).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_ErrRtnFundInterTransfer = gcnew Internal_ErrRtnFundInterTransfer(this, &CLTSTraderAdapter::cbk_OnErrRtnFundInterTransfer);
		m_pSpi->p_OnErrRtnFundInterTransfer = (Callback_OnErrRtnFundInterTransfer)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_ErrRtnFundInterTransfer).ToPointer();
		/// <summary>
		/// 
		/// </summary>
		m_pSpi->d_RtnPlatformStateInfo = gcnew Internal_RtnPlatformStateInfo(this, &CLTSTraderAdapter::cbk_OnRtnPlatformStateInfo);
		m_pSpi->p_OnRtnPlatformStateInfo = (Callback_OnRtnPlatformStateInfo)Marshal::GetFunctionPointerForDelegate(m_pSpi->d_RtnPlatformStateInfo).ToPointer();
	}
#endif

} // end of namespace
