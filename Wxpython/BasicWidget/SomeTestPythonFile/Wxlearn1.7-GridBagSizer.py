#!/usr/bin/env python
# encoding: gbk
'''
最小的wx程序
'''

from wx import *

if __name__ == "__main__":
    root = App()  # 创建主程序
    mainFrame = Frame(None)  # 在主程序之上建立一个一直显示的主窗口，用于与用户进行互动
    mainFrameBoxSizer = GridBagSizer()  # 不指定行列，只接受行间距和列间距两个参数的布局，会根据添加的子孩子属性进行自动调整
    mainFrameBoxSizer.SetFlexibleDirection(wx.ALL)  # 行列宽高自动调整 继承自FlexibleDirection,具有相同的方法

    b1 = Button(mainFrame, id=1, label="button1")
    b2 = StaticText(mainFrame, id=2, label="buttasdon2")

    mainFrameBoxSizer.Add(b1, pos=GBPosition(0,0), span=GBSpan(2,1))  # 向box中添加第一个控件
    mainFrameBoxSizer.Add(b2, pos=GBPosition(3,1), span=GBSpan(3,1))  # 向box中添加第二个控件

    mainFrame.SetSizer(mainFrameBoxSizer)  # BoxSizer生效的最后一个步骤，依附的容器调用SetSizer方法。
    mainFrame.Show()  # 显示主窗口
    root.MainLoop()  # 使主程序一直运转
