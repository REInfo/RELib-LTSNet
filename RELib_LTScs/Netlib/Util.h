/*!
* \file Util.h
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

#include "..\apilib\include\SecurityFtdcTraderApi.h"
#include "..\apilib\include\SecurityFtdcMdApi.h"
#include "LTSStruct.h"
#include "Delegates.h"

using namespace RELib_LTScs;
namespace LTSNative
{
	/// ���й���,�Զ��ͷ��ַ���ָ���ڴ�
	class CAutoStrPtr
	{
	public:
		char* m_pChar;
		//int m_Length;
		CAutoStrPtr(String^ str);
		//CAutoStrPtr(String^ str, void* pDst, int length);
		~CAutoStrPtr();
	};


	/// ���й���, �Զ�ת�� Managed <==> Native 
	// M: managed
	// N: native
	template<typename M, typename N> 
	class MNConv
	{
	public:
		// ģ�����ʵ�ֲ��ֱ������ͷ�ļ���������ӻ����
		/// Native to Managed
		static M N2M(N* pNative){
			//����ת��
			return safe_cast<M>(Marshal::PtrToStructure(IntPtr(pNative), M::typeid));
		};
		// Managed to Native
		static void M2N(M managed, N* pNative){
			Marshal::StructureToPtr(managed, IntPtr(pNative), true);
		};
	};

	/// ȫ�ֺ���
	SecurityFtdcRspInfoField^ RspInfoField(CSecurityFtdcRspInfoField *pRspInfo);

};