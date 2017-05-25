#!/usr/bin/env python
# encoding: gbk
'''
RadioButton
'''

from wx import *

def judge(evt):
    print "HI"

if __name__ == "__main__":
    root = App()  # 创建主程序
    mainFrame = Frame(None)  # 在主程序之上建立一个一直显示的主窗口，用于与用户进行互动

    mainFrameBoxSizer = GridSizer(2, 2)  # 将Frame划分为3行一列，也即从中间进行划分为上中下三部分。

    s1 = SpinButton(mainFrame, style=SP_3DSASH)  # 设置SpinButton为3Dsash样式

    s1.Bind(EVT_SPIN_DOWN, handler=judge)  # 将SpinButton减少按钮绑定事件judge

    mainFrameBoxSizer.Add(s1)  # 向box中添加第一个控件

    mainFrame.SetSizer(mainFrameBoxSizer)  # BoxSizer生效的最后一个步骤，依附的容器调用SetSizer方法。
    mainFrame.Show()  # 显示主窗口
    root.MainLoop()  # 使主程序一直运转
