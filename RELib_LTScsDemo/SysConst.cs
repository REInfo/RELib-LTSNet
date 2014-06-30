///2014-06-12
///上海尔易信息科技有限公司
///

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using RELib_LTScs;
using System.Threading;
using System.Diagnostics;

namespace RELib_LTScsDemo
{
    public class SysConst
    {
        /// <summary>
        /// 机构代码
        /// </summary>
        //public static string BrokerID = "2011";
        /// <summary>
        /// 行情前置地址
        /// </summary>
        public static readonly string MarketDataFrontAddress = "tcp://211.144.195.163:34513";
        /// <summary>
        /// 交易前置地址
        /// </summary>
        public static readonly string TradeFrontAddress = "tcp://211.144.195.163:34505";
        /// <summary>
        /// 报单
        /// </summary>
        public static Dictionary<SecurityFtdcInputOrderField, SecurityFtdcRspInfoField> SendOrders = new Dictionary<SecurityFtdcInputOrderField, SecurityFtdcRspInfoField>();
        /// <summary>
        /// 成功提交报单
        /// </summary>
        public static List<SecurityFtdcOrderField> Orders = new List<SecurityFtdcOrderField>();

        /// <summary>
        /// 成交回报
        /// </summary>
        public static List<SecurityFtdcTradeField> Trades = new List<SecurityFtdcTradeField>();

        /// <summary>
        /// 合约代码
        /// </summary>
        public static Dictionary<string, SecurityFtdcInstrumentField> Instruments = new Dictionary<string, SecurityFtdcInstrumentField>();

        public static readonly double MaxFloatExceed = 1.79E+308;
        public static Dictionary<string, SecurityFtdcInvestorPositionField> PositionDatas = new Dictionary<string, SecurityFtdcInvestorPositionField>();
        /// <summary>
        /// 用户登录信息
        /// </summary>
        public static SecurityFtdcReqUserLoginField User = new SecurityFtdcReqUserLoginField();
        /// <summary>
        /// 用户资金信息
        /// </summary>
        public static Dictionary<string, SecurityFtdcTradingAccountField> Accounts = new Dictionary<string, SecurityFtdcTradingAccountField>();

        /// <summary>
        /// 最新行情列表
        /// </summary>
        public static Dictionary<string, SecurityFtdcDepthMarketDataField> MarketData = new Dictionary<string, SecurityFtdcDepthMarketDataField>();

        /// <summary>
        /// 产品列表
        /// </summary>
        public static Dictionary<string, SecurityFtdcInstrumentField> InstrumentData = new Dictionary<string, SecurityFtdcInstrumentField>();

        /// <summary>
        /// 行情Api
        /// </summary>
        public static LTSMDAdapter MarketDataApi = null;
        /// <summary>
        /// 交易Api
        /// </summary>
        public static LTSTraderAdapter TraderApi = null;


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
        }
    }
}
