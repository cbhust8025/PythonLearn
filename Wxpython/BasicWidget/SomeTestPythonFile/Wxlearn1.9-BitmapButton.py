#!/usr/bin/env python
# encoding: gbk
'''
BitmapButton
'''

from wx import *
def hi(evt):
    print "HI"
if __name__ == "__main__":
    root = App()  # 创建主程序
    mainFrame = Frame(None)  # 在主程序之上建立一个一直显示的主窗口，用于与用户进行互动

    bm1 = Bitmap("004545.jpg")
    b1 = BitmapButton(mainFrame, bitmap=bm1)
    b1.Bind(EVT_BUTTON, handler=hi)

    mainFrame.Show()  # 显示主窗口
    root.MainLoop()  # 使主程序一直运转
