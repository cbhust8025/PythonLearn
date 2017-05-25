#!/usr/bin/env python
# encoding: gbk
'''
最小的wx程序
'''

from wx import *

if __name__ == "__main__":
    root = App()  # 创建主程序
    mainFrame = Frame(None)  # 在主程序之上建立一个一直显示的主窗口，用于与用户进行互动
    mainFrameBoxSizer = FlexGridSizer(2, 1)  # 两行一列布局
    mainFrameBoxSizer.SetFlexibleDirection(wx.VERTICAL)  # 行高度自动调整
    b1 = Button(mainFrame, id=1, label="button1")
    b2 = Button(mainFrame, id=2, label="button2")

    mainFrameBoxSizer.Add(b1)  # 向box中添加第一个控件
    mainFrameBoxSizer.Add(b2)  # 向box中添加第二个控件

    mainFrame.SetSizer(mainFrameBoxSizer)  # BoxSizer生效的最后一个步骤，依附的容器调用SetSizer方法。
    mainFrame.Show()  # 显示主窗口
    root.MainLoop()  # 使主程序一直运转
