/*!
* \file SysConst.cs
* \brief 示例代码主程序接口
*
* 本项目是基于华宝技术LTS证券接口C#开发的示例程序，用于展示LTS如何在DoNet环境下用C#进行开发。示例代码演示了LTS各类接口C#的调用，在编写相关项目时可以参考。
* 由尔易信息提供开源，最新代码可从http://github.com/REInfo获取。
* 上海尔易信息科技有限公司提供证券、期货、期权、现货等市场交易、结算、 风控业务的客户化定制服务。
*
* \author wywty
* \version 1.1
* \date 2014-11-05
* 
*/

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using RELib_LTSNet;
using System.Threading;
using System.Diagnostics;

namespace RELib_LTScsDemo
{
    public class SysConst
    {
        /// <summary>
        /// 机构代码
        /// </summary>
        public static string BrokerID = "2011";
        /// <summary>
        /// 客户ID
        /// </summary>
        public static string ClientID = String.Empty;
        /// <summary>
        /// 账号密码
        /// </summary>
        public static string Password = String.Empty;
        /// <summary>
        /// 行情密码
        /// </summary>
        public static String MarketPassord = String.Empty;

        /// <summary>
        /// 行情前置地址
        /// </summary>
        public static string MarketDataFrontAddress =String.Empty;
        /// <summary>
        /// 交易前置地址
        /// </summary>
        public static string TradeFrontAddress =String.Empty;

        /// <summary>
        /// 查询前置地址
        /// </summary>
        public static string QueryFrontAddress = String.Empty;

        /// <summary>
        /// 强制认证码
        /// </summary>
        public static string AuthCode = string.Empty;

        /// <summary>
        /// 是否是实盘
        /// true.实盘，false.模拟盘
        /// </summary>
        public static bool IsReal = true;

        /// <summary>
        /// 报单
        /// </summary>
        public static Dictionary<SecurityFtdcInputOrderField, SecurityFtdcRspInfoField> SendOrders = new Dictionary<SecurityFtdcInputOrderField, SecurityFtdcRspInfoField>(0);
        /// <summary>
        /// 成功提交报单
        /// </summary>
        public static List<SecurityFtdcOrderField> Orders = new List<SecurityFtdcOrderField>(0);

        /// <summary>
        /// 成交回报
        /// </summary>
        public static List<SecurityFtdcTradeField> Trades = new List<SecurityFtdcTradeField>(0);

        /// <summary>
        /// 合约代码
        /// </summary>
        public static Dictionary<string, SecurityFtdcInstrumentField> Instruments = new Dictionary<string, SecurityFtdcInstrumentField>(0);

        public static readonly double MaxFloatExceed = 1.79E+308;
        public static Dictionary<string, SecurityFtdcInvestorPositionField> PositionDatas = new Dictionary<string, SecurityFtdcInvestorPositionField>(0);
        /// <summary>
        /// 用户登录信息
        /// </summary>
        public static SecurityFtdcReqUserLoginField User = new SecurityFtdcReqUserLoginField();
        /// <summary>
        /// 查询接口用户登录信息
        /// </summary>
        public static SecurityFtdcReqUserLoginField UserQuery = new SecurityFtdcReqUserLoginField();
        /// <summary>
        /// 用户资金信息
        /// </summary>
        public static Dictionary<string, SecurityFtdcTradingAccountField> Accounts = new Dictionary<string, SecurityFtdcTradingAccountField>(0);

        /// <summary>
        /// 最新行情列表
        /// </summary>
        public static Dictionary<string, SecurityFtdcDepthMarketDataField> MarketData = new Dictionary<string, SecurityFtdcDepthMarketDataField>(0);

        /// <summary>
        /// 产品列表
        /// </summary>
        public static Dictionary<string, SecurityFtdcInstrumentField> InstrumentData = new Dictionary<string, SecurityFtdcInstrumentField>(0);

        /// <summary>
        /// 感谢您的支持，请勿修改，谢谢！
        /// </summary>
        public readonly static String UserProductInfo = "RETrader";

        /// <summary>
        /// 行情Api
        /// </summary>
        public static LTSMDAdapter MarketDataApi = null;
        /// <summary>
        /// 交易Api
        /// </summary>
        public static CLTSTraderAdapter TraderApi = null;

        /// <summary>
        /// 查询Api
        /// </summary>
        public static CLTSQueryAdapter QueryApi = null;


        private static int requestID = 0;
        /// <summary>
        /// 请求编号
        /// </summary>
        /// <returns></returns>
        public static int GetRequestID()
        {
            Interlocked.Increment(ref requestID);
            return requestID;
        }
        /// <summary>
        /// 报单编号
        /// </summary>
        private static long orderID = 0;
        /// <summary>
        /// 报单编号
        /// </summary>
        public static string GetOrderID()
        {
            Interlocked.Increment(ref orderID);
            string v = string.Format("{0:D8}", orderID);
            return v;
        }

        public static bool IsErrorRspInfo(SecurityFtdcRspInfoField pRspInfo)
        {
            // 如果ErrorID != 0, 说明收到了错误的响应
            bool bResult = ((pRspInfo != null) && (pRspInfo.ErrorID != 0));
            if (bResult)
            {
                String msg = "\n--->>> ErrorID=" + pRspInfo.ErrorID + ", ErrorMsg=" + pRspInfo.ErrorMsg;

                Debug.WriteLine(msg);
            }
            return bResult;
        }
        /// <summary>
        /// 释放Api
        /// </summary>
        public static void Release()
        {
            if (SysConst.MarketDataApi != null)
            {
                ///取消行情订阅
                SysConst.MarketDataApi.Release();
            }
            if (SysConst.TraderApi != null)
            {
                SysConst.TraderApi.Release();
            }
            if (SysConst.QueryApi != null)
            {
                SysConst.QueryApi.Release();
            }
        }
    }
}
