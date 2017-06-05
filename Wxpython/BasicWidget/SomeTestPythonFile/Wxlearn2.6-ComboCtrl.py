#!/usr/bin/env python
# encoding: gbk
'''
ComboCtrl 自定义组合框
'''

from wx import *
class ComboPopupBase(ListCtrl, wx.combo.ComboPopup):
    def __init__(self, log=None):
        # Since we are using multiple inheritance, and don't know yet
        # which window is to be the parent, we'll do 2-phase create of
        # the ListCtrl instead, and call its Create method later in
        # our Create method.  (See Create below.)
        self.PostCreate(wx.PreListCtrl())

        # Also init the ComboPopup base class.
        wx.combo.ComboPopup.__init__(self)

    def ConfigureListCtrl(self):

        self.InsertColumn(1, "Title")
        self.InsertColumn(2, "Genreasdadsadsad")
        self.InsertColumn(3, "Genad")
        self.SetColumnWidth(0, 200)
        self.SetColumnWidth(1, 200)
        self.SetColumnWidth(2, 200)

        # 添加三行
        # list.Append(["asa1", "asa2", "asa3", "asa4"])  # 超过当前的列数，触发中断错误
        self.Append(["asa1", "asa2", "asa3"])
        self.Append(["asb1", "asb2", "asb3"])
        self.Append(["asc1", "asc2", "asc3"])
        self.Append(["asd1asdsadasdsadsadsadasd", "asd2", "asd3"])


    def OnMotion(self, evt):
        # 捕捉鼠标位置，高亮当前鼠标所在的列表框中的一行
        item, flags = self.HitTest(evt.GetPosition())
        if item >= 0:  # 如果item>= 0,则表示选中了一个有效的item
            # self.Select(item, 1)
            for i in range(self.GetItemCount()): # 找到总行数，从0开始索引
                self.Select(i, 1 if i == item else 0)  # 如果是当前鼠标停留的位置有item，则高亮此item
            self.curitem = item  # 将当前item变量置为当前选中的item

    def OnLeftDown(self, evt):
        # 捕捉鼠标动作，当鼠标左键按下表示选中了列表框的某一行
        # 将列表框进行关闭（Dismiss--隐藏，可重写来进行某种操作）
        # self.value = self.curitem
        # self.GetControl().SetValue(self.GetItemText(self.curitem))
        self.Dismiss()

    # The following methods are those that are overridable from the
    # ComboPopup base class.  Most of them are not required, but all
    # are shown here for demonstration purposes.

    # This is called immediately after construction finishes.  You can
    # use self.GetCombo if needed to get to the ComboCtrl instance.
    # def Init(self):
    #     self.value = -1
    #     self.curitem = -1

    # Create the popup child control.  Return true for success.
    def Create(self, parent):
        # 初始化列表框对象，必须重写的第三个函数
        wx.ListCtrl.Create(self, parent,
                           style=wx.LC_REPORT)
        self.curitem = -1
        self.Bind(wx.EVT_MOTION, self.OnMotion)  # 给列表框绑定鼠标滑动事件
        self.Bind(wx.EVT_LEFT_DOWN, self.OnLeftDown)  # 给列表框绑定鼠标左键单击事件
        return True  # 返回True表示构建列表框成功

    # Return the widget that is to be used for the popup
    def GetControl(self):
        # 必须重写的函数之一，用于创建组合框中的列表框来寻找自己的父窗口
        # self.log.write("ListCtrlComboPopup.GetControl")
        return self

    # Called just prior to displaying the popup, you can use it to
    # 'select' the current item.
    # def SetStringValue(self, val):
    #     print("ListCtrlComboPopup.SetStringValue")
    #     idx = self.FindItem(-1, val)
    #     if idx != wx.NOT_FOUND:
    #         self.Select(idx)

    # Return a string representation of the current item.
    def GetStringValue(self):
        # 必须重写的第二个函数
        # 如果想要将选中的列表框的值配置到组合框的文本框内，在列表框关闭后将会调用此函数
        if self.curitem >= 0:
            return self.GetItemText(self.curitem)
        return ""
    #
    # Called immediately after the popup is shown
    # def OnPopup(self):
    #     print("ListCtrlComboPopup.OnPopup")
    #     wx.combo.ComboPopup.OnPopup(self)
    #     self.SetFocus()
    #
    # # Called when popup is dismissed
    # def OnDismiss(self):
    #     print("ListCtrlComboPopup.OnDismiss")
    #     wx.combo.ComboPopup.OnDismiss(self)

if __name__ == "__main__":
    root = App()  # 创建主程序
    mainFrame = Frame(None, size=(1000, 100))  # 在主程序之上建立一个一直显示的主窗口，用于与用户进行互动
    mainFrame.Centre()  # 使主窗口居中
    # print help(wx.ListCtrl)
    box = BoxSizer(wx.VERTICAL)  # 设置自动布局，竖直方向
    print help(wx.Event)
    b1 = wx.combo.ComboCtrl(parent=mainFrame, style=wx.CB_DROPDOWN)  # 初始化只读格式的组合框

    cp = ComboPopupBase()  # 初始化组合框里面的列表框

    b1.SetPopupControl(cp)  # 将列表框嵌入进组合框
    # Add some items to the listctrl.
    cp.ConfigureListCtrl()  # 设置列表框

    box.Add(b1, flag=wx.EXPAND)  # 将组合框自动布局
    mainFrame.SetSizer(box)
    mainFrame.Show()  # 显示主窗口
    root.MainLoop()  # 使主程序一直运转
