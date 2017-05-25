#!/usr/bin/env python
# encoding: gbk
'''
最小的wx程序
'''

from wx import *
if __name__ == "__main__":
    root = App()  # 创建主程序
    mainFrame = Frame(None)  # 在主程序之上建立一个一直显示的主窗口，用于与用户进行互动

    b1 = Button(mainFrame, id=1, label="button1")
    b2 = Button(mainFrame, id=2, label="button2")
    print help(ToggleButton)
    mainFrame.Show()  # 显示主窗口
    root.MainLoop()  # 使主程序一直运转
