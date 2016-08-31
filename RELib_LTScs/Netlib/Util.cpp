/*!
* \file Util.cpp
* \brief ʾ������������ӿ�
*
* ����Ŀ�ǻ��ڻ�������LTS֤ȯ�ӿ�C#������ʾ����������չʾLTS�����DoNet��������C#���п�����ʾ��������ʾ��LTS����ӿ�C#�ĵ��ã��ڱ�д�����Ŀʱ���Բο���
* �ɶ�����Ϣ�ṩ��Դ�����´���ɴ�http://github.com/REInfo��ȡ��
* �Ϻ�������Ϣ�Ƽ����޹�˾�ṩ֤ȯ���ڻ�����Ȩ���ֻ����г����ס����㡢 ���ҵ��Ŀͻ������Ʒ���
*
* \author wywty
* \version 1.0
* \date 2014-6-30
* 
*/

#include "StdAfx.h"
#include "Util.h"

#include <string.h>
#include <memory.h>
#include <stdlib.h>

using namespace System::Runtime::InteropServices;

namespace RELib_LTSNative
{
	CAutoStrPtr::CAutoStrPtr(String^ str)
	{
		if(str != nullptr)
		{
			//��string����ת��Ϊcharָ��
			m_pChar = (char*) Marshal::StringToHGlobalAnsi(str).ToPointer();
			//m_Length = strlen(m_pChar);
		}
		else
			 m_pChar = nullptr;//��ָ��
	}
	/*CAutoStrPtr::CAutoStrPtr(String^ str, void* pDst, int length)
	{
		if(str != nullptr && pDst!= nullptr)
		{
			m_pChar = (char*) Marshal::StringToHGlobalAnsi(str).ToPointer();
			m_Length = strlen(m_pChar);
			memcpy(pDst, m_pChar, __min(length, m_Length));
		}
		else
			 m_pChar = nullptr;
	}*/

	CAutoStrPtr::~CAutoStrPtr()
	{
		if(m_pChar != nullptr)
			//�ͷ���ǰ�ӽ��̵ķ��й��ڴ��з�����ڴ档
			Marshal::FreeHGlobal(IntPtr(m_pChar));
	}

	///��ʵֻҪ��ģ��������ͺ��ˣ����Util.h
	SecurityFtdcRspInfoField^ RspInfoField(CSecurityFtdcRspInfoField *pRspInfo)
	{
		//�ṩ��һ������������Щ�������ڷ�����й��ڴ桢���Ʒ��й��ڴ�顢���й�����ת��Ϊ���й����ͣ����⻹�ṩ��������йܴ��뽻��ʱʹ�õ������������
		//�����ݴӷ��й��ڴ����͵��·����ָ�����͵��йܶ���
		//IntPtr(pRspInfo) ָ����й��ڴ���ָ�롣
		// ThostFtdcRspInfoField::typeid =>Type
		//PtrToStructure ���ص���Object^, ����Ҫ��safe_cast�������ת��
		return safe_cast<SecurityFtdcRspInfoField^>(Marshal::PtrToStructure(IntPtr(pRspInfo), SecurityFtdcRspInfoField::typeid));
	}

}
/*
//�ͷŷ��й��ڴ��з�����ڴ档
static void Main()
{
	Console.WriteLine("\nStringToGlobalAnsi\n");

	// Create a managed string.
	String  managedString = "I am a managed String";
	Console.WriteLine("1) managedString = " + managedString );

	// Marshal the managed string to unmanaged memory.
	IntPtr stringPointer = (IntPtr)Marshal.StringToHGlobalAnsi(managedString);
	Console.WriteLine("2) stringPointer = {0}", stringPointer );

	// Get the string back from unmanaged memory
	String RetrievedString = Marshal.PtrToStringAnsi( stringPointer);
	Console.WriteLine("3) Retrieved from unmanaged memory = " + RetrievedString );

	// Always free the unmanaged string.
	Marshal.FreeHGlobal(stringPointer);

	// IntPtr handle value is still the same:
	Console.WriteLine("4) stringPointer = " + stringPointer );

	// However, it contains no data after being freed:
	String RetrievedString2 = Marshal.PtrToStringAnsi( stringPointer);
	Console.WriteLine("5) RetrievedString2 = " + RetrievedString2 );
}


using namespace System;
using namespace System::Runtime::InteropServices;

#include <iostream>                                                 // for printf


int main()
{
	// Create a managed string.
	String^ managedString = "Hello unmanaged world (from the managed world).";

	// Marshal the managed string to unmanaged memory.
	//�йܵ�string^ ת��Ϊ ���йܵ�char*����Ҫ�ֶ��ͷŸ��ڴ�ռ䣩
	char* stringPointer = (char*) Marshal::StringToHGlobalAnsi(managedString ).ToPointer();

	printf("stringPointer = %s\n", stringPointer);

	// Always free the unmanaged string.
	Marshal::FreeHGlobal(IntPtr(stringPointer));

	return 0;
}
*/