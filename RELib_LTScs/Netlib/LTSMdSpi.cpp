

#include "StdAfx.h"

#include <vcclr.h>
#include "util.h"
#include "Callbacks.h"
#include "LTSMdSpi.h"




namespace RELib_LTSNative
{
	CLTSMdSpi::CLTSMdSpi(LTSMDAdapter^ pAdapter) {
#ifndef __LTS_MA__
		m_pAdapter = pAdapter;
#endif

	};

#ifdef __LTS_MA__

	///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
	void CLTSMdSpi::OnFrontConnected(){
		p_OnFrontConnected();
	};

	///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
	///@param nReason ����ԭ��
	///        0x1001 �����ʧ��
	///        0x1002 ����дʧ��
	///        0x2001 ����������ʱ
	///        0x2002 ��������ʧ��
	///        0x2003 �յ�������
	void CLTSMdSpi::OnFrontDisconnected(int nReason){
		p_OnFrontDisconnected(nReason);
	};

	///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
	///@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��
	void CLTSMdSpi::OnHeartBeatWarning(int nTimeLapse){
		p_OnHeartBeatWarning(nTimeLapse);
	};
	

	/// <summary>
	/// 
	/// </summary>
	void CLTSMdSpi::OnRspError(CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspError(pRspInfo,nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSMdSpi::OnRspUserLogin(CSecurityFtdcRspUserLoginField *pRspUserLogin,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspUserLogin(pRspUserLogin,pRspInfo,nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSMdSpi::OnRspUserLogout(CSecurityFtdcUserLogoutField *pUserLogout,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		p_OnRspUserLogout(pUserLogout,pRspInfo,nRequestID,bIsLast);
	};


	///��������Ӧ��
	void CLTSMdSpi::OnRspSubMarketData(CSecurityFtdcSpecificInstrumentField *pSpecificInstrument, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		p_OnRspSubMarketData(pSpecificInstrument,pRspInfo, nRequestID, bIsLast);
	};

	///ȡ����������Ӧ��
	void CLTSMdSpi::OnRspUnSubMarketData(CSecurityFtdcSpecificInstrumentField *pSpecificInstrument, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		p_OnRspUnSubMarketData(pSpecificInstrument, pRspInfo, nRequestID, bIsLast);
	};

	///�������֪ͨ
	void CLTSMdSpi::OnRtnDepthMarketData(CSecurityFtdcDepthMarketDataField *pDepthMarketData){
		p_OnRtnDepthMarketData(pDepthMarketData);
	};
	
	

									   #else
	///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
	void CLTSMdSpi::OnFrontConnected(){
		m_pAdapter->OnFrontConnected();
	};

	///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
	///@param nReason ����ԭ��
	///        0x1001 �����ʧ��
	///        0x1002 ����дʧ��
	///        0x2001 ����������ʱ
	///        0x2002 ��������ʧ��
	///        0x2003 �յ�������
	void CLTSMdSpi::OnFrontDisconnected(int nReason){
		m_pAdapter->OnFrontDisconnected(nReason);
	};

	///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
	///@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��
	void CLTSMdSpi::OnHeartBeatWarning(int nTimeLapse){
		m_pAdapter->OnHeartBeatWarning(nTimeLapse);
	};
	

			///��������Ӧ��
	void CLTSMdSpi::OnRspSubMarketData(CSecurityFtdcSpecificInstrumentField *pSpecificInstrument, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspSubMarketData(MNConv<SecurityFtdcSpecificInstrumentField^, CSecurityFtdcSpecificInstrumentField>::N2M(pSpecificInstrument), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///ȡ����������Ӧ��
	void CLTSMdSpi::OnRspUnSubMarketData(CSecurityFtdcSpecificInstrumentField *pSpecificInstrument, CSecurityFtdcRspInfoField *pRspInfo, int nRequestID, bool bIsLast){
		m_pAdapter->OnRspUnSubMarketData(MNConv<SecurityFtdcSpecificInstrumentField^, CSecurityFtdcSpecificInstrumentField>::N2M(pSpecificInstrument), RspInfoField(pRspInfo), nRequestID, bIsLast);
	};

	///�������֪ͨ
	void CLTSMdSpi::OnRtnDepthMarketData(CSecurityFtdcDepthMarketDataField *pDepthMarketData){
		/*SecurityFtdcDepthMarketDataField^ field = safe_cast<SecurityFtdcDepthMarketDataField^>(Marshal::PtrToStructure(IntPtr(pDepthMarketData), SecurityFtdcDepthMarketDataField::typeid));
		m_pAdapter->OnRtnDepthMarketData(field);*/
		m_pAdapter->OnRtnDepthMarketData(MNConv<SecurityFtdcDepthMarketDataField^, CSecurityFtdcDepthMarketDataField>::N2M(pDepthMarketData));
	};

	/// <summary>
	/// 
	/// </summary>
	void CLTSMdSpi::OnRspError(CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		m_pAdapter->OnRspError(RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSMdSpi::OnRspUserLogin(CSecurityFtdcRspUserLoginField *pRspUserLogin,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		m_pAdapter->OnRspUserLogin(MNConv<SecurityFtdcRspUserLoginField^, CSecurityFtdcRspUserLoginField>::N2M(pRspUserLogin),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};
	/// <summary>
	/// 
	/// </summary>
	void CLTSMdSpi::OnRspUserLogout(CSecurityFtdcUserLogoutField *pUserLogout,CSecurityFtdcRspInfoField *pRspInfo,int nRequestID, bool bIsLast){
		m_pAdapter->OnRspUserLogout(MNConv<SecurityFtdcUserLogoutField^, CSecurityFtdcUserLogoutField>::N2M(pUserLogout),RspInfoField(pRspInfo),nRequestID,bIsLast);
	};

									   
	
#endif

};
