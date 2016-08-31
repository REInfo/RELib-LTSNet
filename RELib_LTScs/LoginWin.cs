/*!
* \file LTSDemo.cs
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
* 
*/

using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using RELib_LTSNet;
using System.Diagnostics;
using System.Threading;

namespace RELib_LTScsDemo
{
    public partial class LoginWin : Form
    {
        private LTSDemo parent = null;
        //  private AsyncShowCallbackData asyncMsg = null;
        public LoginWin(LTSDemo parent)
        {
            this.parent = parent;
            InitializeComponent();
            this.parent.AsyncMsg = AsyncShowCallbackExtendHelper.MakeAsyncShowCallback(this, msglabel, null);
            this.textBoxBrokerID.Text = SysConst.BrokerID;// "";
            this.textBoxClientID.Text = SysConst.ClientID;// 
            this.textBoxPassword.Text = SysConst.Password;// 
            this.textBoxAuthCode.Text = SysConst.AuthCode;

            if (callbackUpdateButtonEnbled == null)
                callbackUpdateButtonEnbled += new UpdateButtonEnbled(setLoginButtonEnabled);
            //Init();
        }
        protected override void OnLoad(EventArgs e)
        {
            base.OnLoad(e);


        }
        protected override void OnClosed(EventArgs e)
        {
            base.OnClosed(e);

            Debug.WriteLine("LoginWin 退出！");
        }
        private void button1_Click(object sender, EventArgs e)
        {
            AsycUpdateLoginButtonEnabled(false);
            if (!CheckForm())
            {
                AsycUpdateLoginButtonEnabled(true);
                return;
            }
            //登录失败 继续停留在这个登录窗口
            if (!Login())
            {
                AsycUpdateLoginButtonEnabled(true);
                return;
            }
        }
        /// <summary>
        /// 验证表单
        /// </summary>
        /// <returns></returns
        private bool CheckForm()
        {
            bool isOk = true;

            if (textBoxBrokerID.Text == "")
            {
                MessageBox.Show("机构代码不能为空！");
                textBoxBrokerID.Focus();
                isOk = false;
            }
            else if (textBoxClientID.Text == "")
            {
                MessageBox.Show("账号不能为空！");
                textBoxClientID.Focus();
                isOk = false;
            }
            else if (textBoxPassword.Text == "")
            {
                MessageBox.Show("密码不能为空！");
                textBoxPassword.Focus();
                isOk = false;
            }
            else if (this.textBoxAuthCode.Text == "")
            {
                MessageBox.Show("认证码不能为空！");
                textBoxAuthCode.Focus();
                isOk = false;
            }


            return isOk;
        }
        /// <summary>
        /// 交易接口登录请求
        /// </summary>
        /// <returns></returns>
        private bool Login()
        {
            bool isLogin = false;
            SysConst.User.BrokerID = textBoxBrokerID.Text.Trim();
            SysConst.User.UserID = textBoxClientID.Text.Trim();
            SysConst.User.Password = textBoxPassword.Text.Trim();
            SysConst.User.AuthCode = this.textBoxAuthCode.Text.Trim();
            SysConst.User.UserProductInfo = "LTS-Test";// SysConst.UserProductInfo;
            SysConst.User.ProtocolInfo = SysConst.UserProductInfo;

            int result = SysConst.TraderApi.ReqUserLogin(SysConst.User, SysConst.GetRequestID());
            if (result == 0)
            {
                isLogin = true;
                ///交易发送成功后
                //QueryLogin();

            }

            String msg = "--->>> 发送交易登录请求: " + ((result == 0) ? "成功" : "失败");
            parent.AsyncMsg.ShowMsg(msg);
            Debug.WriteLine(msg);
            return isLogin;
        }

        /// <summary>
        /// 查询接口登录请求
        /// </summary>
        /// <returns></returns>
        private bool QueryLogin()
        {
            bool isLogin = false;
            SysConst.UserQuery.BrokerID = textBoxBrokerID.Text.Trim();
            SysConst.UserQuery.UserID = textBoxClientID.Text.Trim();
            SysConst.UserQuery.Password = textBoxPassword.Text.Trim();
            SysConst.UserQuery.AuthCode = this.textBoxAuthCode.Text.Trim();
            SysConst.UserQuery.UserProductInfo = "LTS-Test";// SysConst.UserProductInfo;
            SysConst.UserQuery.ProtocolInfo = SysConst.UserProductInfo;

            int result = SysConst.QueryApi.ReqUserLogin(SysConst.UserQuery, SysConst.GetRequestID());
            if (result == 0) isLogin = true;
            String msg = "--->>> 发送查询登录请求: " + ((result == 0) ? "成功" : "失败");
            parent.AsyncMsg.ShowMsg(msg);
            Debug.WriteLine(msg);
            return isLogin;
        }



        /// <summary>
        /// 关闭登陆窗口
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void button2_Click(object sender, EventArgs e)
        {
            SysConst.Release();
            DialogResult = System.Windows.Forms.DialogResult.Cancel;
        }

        /// <summary>
        /// 登录回调函数
        /// </summary>
        /// <param name="pRspUserLogin"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        public void OnRspUserLogin(SecurityFtdcRspUserLoginField pRspUserLogin, SecurityFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {

            if (bIsLast && !SysConst.IsErrorRspInfo(pRspInfo))
            {

                ///获取当前交易日,说明登录成功了
                String msg = "\n--->>> 获取当前交易日 = " + SysConst.TraderApi.GetTradingDay();
                //Console.WriteLine(msg);

                Debug.WriteLine(msg);
                // 请求订阅行情
                //SubscribeMarketData();
                parent.AsyncMsg.ShowMsg("交易账号登录成功！");

                {
                    SecurityFtdcReqUserLoginField req = new SecurityFtdcReqUserLoginField();
                    req.BrokerID = SysConst.User.BrokerID;
                    req.UserID = SysConst.User.UserID;
                    req.Password = SysConst.MarketPassord;
                    int iResult = SysConst.MarketDataApi.ReqUserLogin(req, SysConst.GetRequestID());

                    msg = "\n--->>> 发送行情用户登录请求: " + ((iResult == 0) ? "成功" : "失败");
                    parent.AsyncMsg.AppendMsg(msg);
                    Debug.WriteLine(msg);
                }
                {
                    //SecurityFtdcReqUserLoginField req = new SecurityFtdcReqUserLoginField();
                    //req.BrokerID = SysConst.User.BrokerID;
                    //req.UserID = SysConst.User.UserID;
                    //req.Password = SysConst.User.Password;
                    //req.AuthCode = SysConst.UserQuery.AuthCode;
                    //int iResult = SysConst.QueryApi.ReqUserLogin(req, SysConst.GetRequestID());

                    //msg = "\n--->>> 发送查询用户登录请求: " + ((iResult == 0) ? "成功" : "失败");
                    //parent.AsyncMsg.AppendMsg(msg);
                    //Debug.WriteLine(msg);
                    QueryLogin();
                }
                ///留点行情处理时间
                ///


                Thread.Sleep(1000);
                parent.AsyncMsg.ShowMsg("查询合约");

                //DialogResult = System.Windows.Forms.DialogResult.OK;

            }
            else
            {
                if (String.IsNullOrEmpty(pRspInfo.ErrorMsg))
                {
                    parent.AsyncMsg.ShowMsg("登录失败：账号或者密码错误！");
                }
                else
                {
                    parent.AsyncMsg.ShowMsg(pRspInfo.ErrorMsg);
                }

                Debug.WriteLine(pRspInfo.ErrorMsg);
                AsycUpdateLoginButtonEnabled(true);

            }
        }
        /// <summary>
        /// 登录回调函数
        /// </summary>
        /// <param name="pRspUserLogin"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        public void OnRspUserLoginQuery(SecurityFtdcRspUserLoginField pRspUserLogin, SecurityFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {

            if (bIsLast && !SysConst.IsErrorRspInfo(pRspInfo))
            {
                parent.QryInstrument();
                parent.AsyncMsg.ShowMsg("查询账号登录成功！");
            }
            else
            {
                if (String.IsNullOrEmpty(pRspInfo.ErrorMsg))
                {
                    parent.AsyncMsg.AppendMsg("查询登录失败：账号或者密码错误！");
                }
                else
                {
                    parent.AsyncMsg.AppendMsg(pRspInfo.ErrorMsg);
                }

                Debug.WriteLine(pRspInfo.ErrorMsg);
                AsycUpdateLoginButtonEnabled(true);

            }
        }
        private bool isConnected = false;
        /// <summary>
        /// 连接回调函数
        /// </summary>
        public void OnFrontConnected()
        {
            if (!isConnected)
            {
                isConnected = true;
                parent.AsyncMsg.AppendMsg(DateTime.Now + " 交易前置机连接成功！");
                SecurityFtdcAuthRandCodeField field = new SecurityFtdcAuthRandCodeField(); ;
                field.RandCode = DateTime.Now.Ticks.ToString().Substring(0, 15);
                SysConst.TraderApi.ReqFetchAuthRandCode(field, SysConst.GetRequestID());
            }

        }
        public void OnRspFetchAuthRandCode(SecurityFtdcAuthRandCodeField pAuthRandCode, SecurityFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            if (bIsLast && !SysConst.IsErrorRspInfo(pRspInfo))
            {
                //this.textBoxRandCode.Text = pAuthRandCode.RandCode;
                SysConst.User.RandCode = pAuthRandCode.RandCode;
                Debug.WriteLine(pAuthRandCode.RandCode);
                AsycUpdateLoginButtonEnabled(true);
                parent.AsyncMsg.AppendMsg("随机码获取成功！");
            }
            else
            {
                parent.AsyncMsg.AppendMsg(pRspInfo.ErrorMsg);
            }
        }
        /// <summary>
        /// 查询
        /// </summary>
        /// <param name="pAuthRandCode"></param>
        /// <param name="pRspInfo"></param>
        /// <param name="nRequestID"></param>
        /// <param name="bIsLast"></param>
        public void OnRspFetchAuthRandCodeQuery(SecurityFtdcAuthRandCodeField pAuthRandCode, SecurityFtdcRspInfoField pRspInfo, int nRequestID, bool bIsLast)
        {
            if (bIsLast && !SysConst.IsErrorRspInfo(pRspInfo))
            {
                SysConst.UserQuery.RandCode = pAuthRandCode.RandCode;
                Debug.WriteLine(pAuthRandCode.RandCode);
                AsycUpdateLoginButtonEnabled(true);
                parent.AsyncMsg.AppendMsg("随机码获取成功！");
            }
            else
            {
                parent.AsyncMsg.AppendMsg(pRspInfo.ErrorMsg);
            }
        }
        /// <summary>
        /// 隐藏窗口
        /// </summary>
        private void HiddenWin()
        {
            DialogResult = System.Windows.Forms.DialogResult.OK;
        }
        private void AsycUpdateLoginButtonEnabled(bool b)
        {
            if (this.loginButton.InvokeRequired)
            {
                base.BeginInvoke(callbackUpdateButtonEnbled, b);

            }
            else
            {
                setLoginButtonEnabled(b);

            }

        }
        private void setLoginButtonEnabled(bool b)
        {
            this.loginButton.Enabled = b;
        }
        private delegate void UpdateButtonEnbled(bool b);

        private UpdateButtonEnbled callbackUpdateButtonEnbled;
    }
}
