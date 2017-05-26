#!/usr/bin/env python
# encoding: gbk
'''
RadioButton
'''

from wx import *

def judge(evt):
    print evt.GetEventObject().GetSelection()  # 获取被选中文本的起点和终点

if __name__ == "__main__":
    root = App()  # 创建主程序
    mainFrame = Frame(None)  # 在主程序之上建立一个一直显示的主窗口，用于与用户进行互动

    mainFrameBoxSizer = GridSizer(3, 1)  # 将Frame划分为3行一列，也即从中间进行划分为上中下三部分。

    tc1 = TextCtrl(mainFrame, id=1, value="I'm is a TextCtrl-1！", style=wx.TE_MULTILINE | wx.TE_RICH )  # 多行文本框，富文本
    tc2 = TextCtrl(mainFrame, id=2, value="I'm is a TextCtrl-2！", style=wx.TE_AUTO_SCROLL)  # 自动换行
    tc3 = TextCtrl(mainFrame, id=3, value="I'm is a TextCtrl-3！")

    tc1.Bind(EVT_TEXT_ENTER, handler=judge)  # 将第一个文本框的回车按钮绑定judge事件
    tc1.SetEditable(False)  # 设置文本不可被修改
    tc1.SetStyle(3,8, TextAttr(colText="red", colBack="pink"))  # 自定义

    mainFrameBoxSizer.Add(tc1, flag=wx.EXPAND)  # 向box中添加第一个控件，并占满当前所在的格子（cell）
    mainFrameBoxSizer.Add(tc2)  # 向box中添加第二个控件
    mainFrameBoxSizer.Add(tc3)  # 向box中添加第三个控件

    mainFrame.SetSizer(mainFrameBoxSizer)  # BoxSizer生效的最后一个步骤，依附的容器调用SetSizer方法。
    mainFrame.Show()  # 显示主窗口
    root.MainLoop()  # 使主程序一直运转
