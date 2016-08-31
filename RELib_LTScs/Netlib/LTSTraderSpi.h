

#pragma once
#include "Util.h"
#include <vcclr.h>
#include "Callbacks.h"
#include "LTSTraderAdapter.h"

namespace RELib_LTSNative
{

	/// ���й���
	class CLTSTraderSpi : public  CSecurityFtdcTraderSpi
	{
	public:
		/// ���캯��
		CLTSTraderSpi(CLTSTraderAdapter^ pAdapter);
		///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
		virtual void OnFrontConnected();

		///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
		///@param nReason ����ԭ��
		///        0x1001 �����ʧ��
		///        0x1002 ����дʧ��
		///        0x2001 ����������ʱ
		///        0x2002 ��������ʧ��
		///        0x2003 �յ�������
		virtual void OnFrontDisconnected(int nReason);

		///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
		///@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��
		virtual void OnHeartBeatWarning(int nTimeLapse);

		///����˽������
		///@param nResumeType ˽�����ش���ʽ  
		///        SECURITY_TERT_RESTART:�ӱ������տ�ʼ�ش�
		///        SECURITY_TERT_RESUME:���ϴ��յ�������
		///        SECURITY_TERT_QUICK:ֻ���͵�¼��˽����������
		///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ�˽���������ݡ�
		void SubscribePrivateTopic(SECURITY_TE_RESUME_TYPE nResumeType);

		///���Ĺ�������
		///@param nResumeType �������ش���ʽ  
		///        SECURITY_TERT_RESTART:�ӱ������տ�ʼ�ش�
		///        SECURITY_TERT_RESUME:���ϴ��յ�������
		///        SECURITY_TERT_QUICK:ֻ���͵�¼�󹫹���������
		///@remark �÷���Ҫ��Init����ǰ���á����������򲻻��յ������������ݡ�
		void SubscribePublicTopic(SECURITY_TE_RESUME_TYPE nResumeType);


		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspError(CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspUserLogin(CSecurityFtdcRspUserLoginField *pRspUserLogin, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspUserLogout(CSecurityFtdcUserLogoutField *pUserLogout, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspFetchAuthRandCode(CSecurityFtdcAuthRandCodeField *pAuthRandCode, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspOrderInsert(CSecurityFtdcInputOrderField *pInputOrder, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspOrderAction(CSecurityFtdcInputOrderActionField *pInputOrderAction, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspUserPasswordUpdate(CSecurityFtdcUserPasswordUpdateField *pUserPasswordUpdate, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspTradingAccountPasswordUpdate(CSecurityFtdcTradingAccountPasswordUpdateField *pTradingAccountPasswordUpdate, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRtnOrder(CSecurityFtdcOrderField *pOrder);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRtnTrade(CSecurityFtdcTradeField *pTrade);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnErrRtnOrderInsert(CSecurityFtdcInputOrderField *pInputOrder, CSecurityFtdcRspInfoField *pRspInfo);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnErrRtnOrderAction(CSecurityFtdcOrderActionField *pOrderAction, CSecurityFtdcRspInfoField *pRspInfo);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspFundOutByLiber(CSecurityFtdcInputFundTransferField *pInputFundTransfer, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRtnFundOutByLiber(CSecurityFtdcFundTransferField *pFundTransfer);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnErrRtnFundOutByLiber(CSecurityFtdcInputFundTransferField *pInputFundTransfer, CSecurityFtdcRspInfoField *pRspInfo);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRtnFundInByBank(CSecurityFtdcFundTransferField *pFundTransfer);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRspFundInterTransfer(CSecurityFtdcFundInterTransferField *pFundInterTransfer, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRtnFundInterTransferSerial(CSecurityFtdcFundInterTransferSerialField *pFundInterTransferSerial);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnErrRtnFundInterTransfer(CSecurityFtdcFundInterTransferField *pFundInterTransfer, CSecurityFtdcRspInfoField *pRspInfo);
		/// <summary>
		/// 
		/// </summary>
		virtual void OnRtnPlatformStateInfo(CSecurityFtdcPlatformStateInfoField *pPlatformStateInfo);

#ifdef __LTS_MA__
		// �ص�����
	public:
		Callback_OnFrontConnected p_OnFrontConnected;
		Callback_OnFrontDisconnected p_OnFrontDisconnected;
		Callback_OnHeartBeatWarning p_OnHeartBeatWarning;


		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspError	p_OnRspError;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspUserLogin	p_OnRspUserLogin;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspUserLogout	p_OnRspUserLogout;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspFetchAuthRandCode	p_OnRspFetchAuthRandCode;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspOrderInsert	p_OnRspOrderInsert;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspOrderAction	p_OnRspOrderAction;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspUserPasswordUpdate	p_OnRspUserPasswordUpdate;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspTradingAccountPasswordUpdate	p_OnRspTradingAccountPasswordUpdate;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRtnOrder	p_OnRtnOrder;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRtnTrade	p_OnRtnTrade;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnErrRtnOrderInsert	p_OnErrRtnOrderInsert;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnErrRtnOrderAction	p_OnErrRtnOrderAction;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspFundOutByLiber	p_OnRspFundOutByLiber;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRtnFundOutByLiber	p_OnRtnFundOutByLiber;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnErrRtnFundOutByLiber	p_OnErrRtnFundOutByLiber;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRtnFundInByBank	p_OnRtnFundInByBank;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRspFundInterTransfer	p_OnRspFundInterTransfer;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRtnFundInterTransferSerial	p_OnRtnFundInterTransferSerial;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnErrRtnFundInterTransfer	p_OnErrRtnFundInterTransfer;
		/// <summary>
		/// 
		/// </summary>
		Callback_OnRtnPlatformStateInfo	p_OnRtnPlatformStateInfo;

		// �ص�������Ӧ��delegate�����뱣��һ�ݶԸ�deleage�����ã�����GC���Զ����ո�deleage����������Ļص�����ʧЧ
		gcroot<Internal_FrontConnected^> d_FrontConnected;
		gcroot<Internal_FrontDisconnected^> d_FrontDisconnected;
		gcroot<Internal_HeartBeatWarning^> d_HeartBeatWarning;

		gcroot<Internal_PackageStart^> d_PackageStart;
		gcroot<Internal_PackageEnd^> d_PackageEnd;

		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspError^> d_RspError;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspUserLogin^> d_RspUserLogin;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspUserLogout^> d_RspUserLogout;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspFetchAuthRandCode^> d_RspFetchAuthRandCode;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspOrderInsert^> d_RspOrderInsert;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspOrderAction^> d_RspOrderAction;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspUserPasswordUpdate^> d_RspUserPasswordUpdate;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspTradingAccountPasswordUpdate^> d_RspTradingAccountPasswordUpdate;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RtnOrder^> d_RtnOrder;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RtnTrade^> d_RtnTrade;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_ErrRtnOrderInsert^> d_ErrRtnOrderInsert;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_ErrRtnOrderAction^> d_ErrRtnOrderAction;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspFundOutByLiber^> d_RspFundOutByLiber;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RtnFundOutByLiber^> d_RtnFundOutByLiber;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_ErrRtnFundOutByLiber^> d_ErrRtnFundOutByLiber;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RtnFundInByBank^> d_RtnFundInByBank;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RspFundInterTransfer^> d_RspFundInterTransfer;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RtnFundInterTransferSerial^> d_RtnFundInterTransferSerial;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_ErrRtnFundInterTransfer^> d_ErrRtnFundInterTransfer;
		/// <summary>
		/// 
		/// </summary>
		gcroot<Internal_RtnPlatformStateInfo^> d_RtnPlatformStateInfo;
#else
	private:
		gcroot<CLTSTraderAdapter^> m_pAdapter;
#endif

	};
};
