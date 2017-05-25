#!/usr/bin/env python
# encoding: gbk
'''
最小的wx程序
'''

from wx import *
if __name__ == "__main__":
    root = App()  # 创建主程序
    mainFrame = Frame(None, size=(1200, 900))  # 在主程序之上建立一个一直显示的主窗口，用于与用户进行互动

    b1 = Button(mainFrame, size=(20, 20),pos=(10,10), label="button1")

    mainFrame.Show()  # 显示主窗口
    root.MainLoop()  # 使主程序一直运转
