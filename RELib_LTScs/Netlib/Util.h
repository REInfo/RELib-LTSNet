/*!
* \file Util.h
* \brief 示例代码主程序接口
*
* 本项目是基于华宝技术LTS证券接口开发的示例程序，用于展示如何在LTS
* 环境下进行开发。示例代码演示了LTS各类接口的调用，在编写相关项目时
* 可以参考。
* 由尔易信息提供开源，最新代码可从http://github.com/REInfo获取。
* 上海尔易信息科技有限公司提供证券、期货、期权、现货等市场交易、结算、
* 风控业务的客户化定制服务。
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
	/// 非托管类,自动释放字符串指针内存
	class CAutoStrPtr
	{
	public:
		char* m_pChar;
		//int m_Length;
		CAutoStrPtr(String^ str);
		//CAutoStrPtr(String^ str, void* pDst, int length);
		~CAutoStrPtr();
	};


	/// 非托管类, 自动转换 Managed <==> Native 
	// M: managed
	// N: native
	template<typename M, typename N> 
	class MNConv
	{
	public:
		// 模版类的实现部分必须放在头文件里，否则链接会出错
		/// Native to Managed
		static M N2M(N* pNative){
			//类型转换
			return safe_cast<M>(Marshal::PtrToStructure(IntPtr(pNative), M::typeid));
		};
		// Managed to Native
		static void M2N(M managed, N* pNative){
			Marshal::StructureToPtr(managed, IntPtr(pNative), true);
		};
	};

	/// 全局函数
	SecurityFtdcRspInfoField^ RspInfoField(CSecurityFtdcRspInfoField *pRspInfo);

};