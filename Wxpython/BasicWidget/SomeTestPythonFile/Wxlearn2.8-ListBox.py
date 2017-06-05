#!/usr/bin/env python
# encoding: gbk
'''
ListBox
'''

from wx import *
def sad(evt):
    print evt.GetEventObject().GetParent().GetChildren()[0].SetFirstItemStr(s="456")
if __name__ == "__main__":
    root = App()  # 创建主程序
    mainFrame = Frame(None, size=(1200, 900))  # 在主程序之上建立一个一直显示的主窗口，用于与用户进行互动
    print help(ListBox)
    box = BoxSizer()
    lb = ListBox(mainFrame, style=LB_BOTTOM, choices=["123", "456", "7498"])
    lb.InsertItems(["156956"],  1)
    lb.AppendAndEnsureVisible("456")

    nn = Button(mainFrame, label="asd")
    nn.Bind(EVT_BUTTON, sad)

    box.Add(lb, flag=wx.EXPAND)
    box.Add(nn, flag=wx.ALL, border=10)

    mainFrame.SetSizer(box)
    mainFrame.Show()  # 显示主窗口
    root.MainLoop()  # 使主程序一直运转
