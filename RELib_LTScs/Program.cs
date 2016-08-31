/*!
* \file Program.cs
* \brief 示例代码主程序接口
*
* 本项目是基于华宝技术LTS证券接口C#开发的示例程序，用于展示LTS如何在DoNet环境下用C#进行开发。示例代码演示了LTS各类接口C#的调用，在编写相关项目时可以参考。
* 由尔易信息提供开源，最新代码可从http://github.com/REInfo获取。
* 上海尔易信息科技有限公司提供证券、期货、期权、现货等市场交易、结算、 风控业务的客户化定制服务。
*
* \author wywty
* \version 1.1
* \date 2014-11-05
* LTS_C#用户群: 317176423
*/

using System;
using System.Windows.Forms;
using System.Configuration;

namespace RELib_LTScsDemo
{
    static class Program
    {
        /// <summary>
        /// 应用程序的主入口点。
        /// </summary>
        [STAThread]
        static void Main()
        {
            Application.EnableVisualStyles();
            Application.SetCompatibleTextRenderingDefault(false);

            ///初始化配置
            SysConst.MarketPassord = ConfigurationManager.AppSettings["MarketPassord"];
            int isReal = 0;
            Int32.TryParse(ConfigurationManager.AppSettings["isReal"], out isReal);
            ///实盘环境
            if (isReal != 1)
            {
                SysConst.IsReal = false;
            }

            SysConst.BrokerID = ConfigurationManager.AppSettings["BrokerID"];
            SysConst.ClientID = ConfigurationManager.AppSettings["ClientID"];
            SysConst.Password = ConfigurationManager.AppSettings["Password"];
            SysConst.AuthCode = ConfigurationManager.AppSettings["AuthCode"];
            SysConst.MarketDataFrontAddress = ConfigurationManager.AppSettings["MarketDataFrontAddress"];
            SysConst.TradeFrontAddress = ConfigurationManager.AppSettings["TradeFrontAddress"];
            SysConst.QueryFrontAddress = ConfigurationManager.AppSettings["QueryFrontAddress"];

            //单独测试行情
             // Application.Run(new LTSMarketDemo());
           Application.Run(new LTSDemo());
        }
    }
}
