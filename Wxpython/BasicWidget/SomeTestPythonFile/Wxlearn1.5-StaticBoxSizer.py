#!/usr/bin/env python
# encoding: gbk
'''
最小的wx程序
'''

from wx import *

if __name__ == "__main__":
    root = App()  # 创建主程序
    mainFrame = Frame(None)  # 在主程序之上建立一个一直显示的主窗口，用于与用户进行互动
    sb1 = StaticBox(mainFrame, label="newbox")
    mainFrameBoxSizer = StaticBoxSizer(sb1)  # 使用sb1作为box，将所有的孩子放进box内，默认为行布局
    b1 = Button(mainFrame, id=1, label="button1")
    b2 = Button(mainFrame, id=2, label="button2")

    mainFrameBoxSizer.Add(b1)  # 向box中添加第一个控件
    mainFrameBoxSizer.Add(b2)  # 向box中添加第二个控件

    mainFrame.SetSizer(mainFrameBoxSizer)  # BoxSizer生效的最后一个步骤，依附的容器调用SetSizer方法。
    mainFrame.Show()  # 显示主窗口
    root.MainLoop()  # 使主程序一直运转
