#!/usr/bin/env python
# encoding: gbk
'''
RadioButton
'''

from wx import *

def judge(evt):
    print evt.GetEventObject().GetLabel()

if __name__ == "__main__":
    root = App()  # 创建主程序
    mainFrame = Frame(None)  # 在主程序之上建立一个一直显示的主窗口，用于与用户进行互动

    mainFrameBoxSizer = GridSizer(3, 1)  # 将Frame划分为3行一列，也即从中间进行划分为上中下三部分。

    b1 = RadioButton(mainFrame, label="rb1")
    b2 = RadioButton(mainFrame, label="rb2")
    b3 = RadioButton(mainFrame, label="rb3")

    b1.Bind(EVT_RADIOBUTTON, handler=judge)
    b2.Bind(EVT_RADIOBUTTON, handler=judge)
    b3.Bind(EVT_RADIOBUTTON, handler=judge)

    mainFrameBoxSizer.Add(b1)  # 向box中添加第一个控件
    mainFrameBoxSizer.Add(b2)  # 向box中添加第二个控件
    mainFrameBoxSizer.Add(b3)  # 向box中添加第三个控件

    mainFrame.SetSizer(mainFrameBoxSizer)  # BoxSizer生效的最后一个步骤，依附的容器调用SetSizer方法。
    mainFrame.Show()  # 显示主窗口
    root.MainLoop()  # 使主程序一直运转
