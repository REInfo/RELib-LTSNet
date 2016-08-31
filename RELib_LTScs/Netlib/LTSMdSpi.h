

#pragma once

#include <vcclr.h>
#include "util.h"
#include "Callbacks.h"
#include "LTSMdAdapter.h"

namespace RELib_LTSNative
{
	/// ���й���
	class CLTSMdSpi : public CSecurityFtdcMdSpi
	{
	public:
	/// ���캯��
	CLTSMdSpi(LTSMDAdapter^ pAdapter);

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
	

	///����Ӧ��
		virtual void OnRspError(CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///��¼������Ӧ
		virtual void OnRspUserLogin(CSecurityFtdcRspUserLoginField *pRspUserLogin, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�ǳ�������Ӧ
		virtual void OnRspUserLogout(CSecurityFtdcUserLogoutField *pUserLogout, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///��������Ӧ��
		virtual void OnRspSubMarketData(CSecurityFtdcSpecificInstrumentField *pSpecificInstrument, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///ȡ����������Ӧ��
		virtual void OnRspUnSubMarketData(CSecurityFtdcSpecificInstrumentField *pSpecificInstrument, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast);

		///�������֪ͨ
		virtual void OnRtnDepthMarketData(CSecurityFtdcDepthMarketDataField *pDepthMarketData);
	

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

#else
private:
		gcroot<LTSMDAdapter^> m_pAdapter;
#endif

};
};
