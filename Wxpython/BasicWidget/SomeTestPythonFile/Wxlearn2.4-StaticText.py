#!/usr/bin/env python
# encoding: gbk
'''
RadioButton
'''

from wx import *

def judge(evt):
    print evt.GetEventObject().GetLabel()  # 获取被选中文本的起点和终点

if __name__ == "__main__":
    root = App()  # 创建主程序
    mainFrame = Frame(None)  # 在主程序之上建立一个一直显示的主窗口，用于与用户进行互动

    mainFrameBoxSizer = GridSizer(3, 1)  # 将Frame划分为3行一列，也即从中间进行划分为上中下三部分。

    st1 = StaticText(mainFrame, id=1, label="I'm is a StaticText-1！", style=wx.TE_CENTER)  # 文本居中
    st2 = StaticText(mainFrame, id=2, label="I'm is a StaticText-2！")
    st3 = StaticText(mainFrame, id=3, label="I'm is a StaticText-3！")

    st1.Bind(EVT_LEFT_DOWN, handler=judge)  # 将第一个文本框上的鼠标左键按下事件绑定judge函数

    mainFrameBoxSizer.Add(st1, flag=wx.EXPAND)  # 向box中添加第一个控件，并占满当前所在的格子（cell）
    mainFrameBoxSizer.Add(st2)  # 向box中添加第二个控件
    mainFrameBoxSizer.Add(st3)  # 向box中添加第三个控件

    mainFrame.SetSizer(mainFrameBoxSizer)  # BoxSizer生效的最后一个步骤，依附的容器调用SetSizer方法。
    mainFrame.Show()  # 显示主窗口
    root.MainLoop()  # 使主程序一直运转
