#!/usr/bin/env python
# encoding: gbk
'''
最小的wx程序
'''

from wx import *
if __name__ == "__main__":
    root = App()  # 创建主程序
    mainFrame = Frame(None, size=(1200, 900))  # 在主程序之上建立一个一直显示的主窗口，用于与用户进行互动
    print help(ListCtrl)
    # 实例化ListCtrl对象
    list = ListCtrl(mainFrame,
                    style=wx.LC_REPORT  # 当前风格支持多列
                                 # #| wx.BORDER_SUNKEN
                                 # | wx.BORDER_NONE
                                 # | wx.LC_EDIT_LABELS
                                 # | wx.LC_SORT_ASCENDING
                                 # #| wx.LC_NO_HEADER
                                 # | wx.LC_VRULES
                                 # | wx.LC_HRULES
                                 # #| wx.LC_SINGLE_SEL
                    )
    # 插入三列，变成多行三列的列表
    list.InsertColumn(0, "Artist")
    list.InsertColumn(1, "Title", wx.LIST_FORMAT_LEFT)
    list.InsertColumn(2, "Genreasdasdsadsadasdsadsadsad")

    # 添加三行
    # list.Append(["asa1", "asa2", "asa3", "asa4"])  # 超过当前的列数，触发中断错误
    list.Append(["asa1", "asa2", "asa3"])
    list.Append(["asb1", "asb2", "asb3"])
    list.Append(["asc1", "asc2", "asc3"])
    list.Append(["asd1asdsadasdsadsadsadasd", "asd2", "asd3"])

    # list.DeleteColumn(0)
    # list.DeleteAllItems()

    # list.Select(1, 2)
    # print list.GetFirstSelected()

    # li = ListItem()
    # li.SetText("asd")
    # list.InsertColumnItem(2, li)

    # list.InsertStringItem(index=2, label="asd")
    # print list.GetItem(itemId=1, col=2).GetText()
    # print list.GetColumn(0).GetText()
    list.SetColumnWidth(0, 200)
    list.SetColumnWidth(1, 200)
    list.SetColumnWidth(2, 200)

    # print list.GetColumnWidth(2)
    # list.ClearAll()
    mainFrame.Show()  # 显示主窗口
    root.MainLoop()  # 使主程序一直运转
