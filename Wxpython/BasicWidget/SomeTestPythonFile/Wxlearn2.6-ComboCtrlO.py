#!/usr/bin/env python
# encoding: gbk
'''
最小的wx程序
'''

from wx import *
class NullLog:
    def write(*args):
        pass
class ComboPopupBase(ListCtrl, wx.combo.ComboPopup):
    def __init__(self, log=None):
        if log:
            self.log = log
        else:
            self.log = NullLog()

        # Since we are using multiple inheritance, and don't know yet
        # which window is to be the parent, we'll do 2-phase create of
        # the ListCtrl instead, and call its Create method later in
        # our Create method.  (See Create below.)
        self.PostCreate(wx.PreListCtrl())

        # Also init the ComboPopup base class.
        wx.combo.ComboPopup.__init__(self)

    def AddItem(self, txt):
        # print self.SetColumn(3)
        self.InsertStringItem(self.GetItemCount(), txt)

    def OnMotion(self, evt):
        item, flags = self.HitTest(evt.GetPosition())
        if item >= 0:
            self.Select(item)
            self.curitem = item

    def OnLeftDown(self, evt):
        self.value = self.curitem
        self.Dismiss()

    # The following methods are those that are overridable from the
    # ComboPopup base class.  Most of them are not required, but all
    # are shown here for demonstration purposes.


    # This is called immediately after construction finishes.  You can
    # use self.GetCombo if needed to get to the ComboCtrl instance.
    def Init(self):
        print("ListCtrlComboPopup.Init")
        self.value = -1
        self.curitem = -1

    # Create the popup child control.  Return true for success.
    def Create(self, parent):
        print("ListCtrlComboPopup.Create")
        wx.ListCtrl.Create(self, parent,
                           style=wx.LC_LIST | wx.LC_SINGLE_SEL | wx.SIMPLE_BORDER)
        self.Bind(wx.EVT_MOTION, self.OnMotion)
        self.Bind(wx.EVT_LEFT_DOWN, self.OnLeftDown)
        return True

    # Return the widget that is to be used for the popup
    def GetControl(self):
        # self.log.write("ListCtrlComboPopup.GetControl")
        return self

    # Called just prior to displaying the popup, you can use it to
    # 'select' the current item.
    def SetStringValue(self, val):
        print("ListCtrlComboPopup.SetStringValue")
        idx = self.FindItem(-1, val)
        if idx != wx.NOT_FOUND:
            self.Select(idx)

    # Return a string representation of the current item.
    def GetStringValue(self):
        self.log.write("ListCtrlComboPopup.GetStringValue")
        if self.value >= 0:
            return self.GetItemText(self.value)
        return ""

    # Called immediately after the popup is shown
    def OnPopup(self):
        print("ListCtrlComboPopup.OnPopup")
        wx.combo.ComboPopup.OnPopup(self)
        self.SetFocus()

    # Called when popup is dismissed
    def OnDismiss(self):
        print("ListCtrlComboPopup.OnDismiss")
        wx.combo.ComboPopup.OnDismiss(self)

if __name__ == "__main__":
    root = App()  # 创建主程序
    mainFrame = Frame(None, size=(1200, 900))  # 在主程序之上建立一个一直显示的主窗口，用于与用户进行互动

    # print help(wx.ListCtrl)
    print help(wx.combo.ComboCtrl)
    b1 = wx.combo.ComboCtrl(parent=mainFrame, style=wx.CB_READONLY)
    cp = ComboPopupBase()

    b1.SetPopupControl(cp)
    print (10.0/3)
    # Add some items to the listctrl.
    for x in range(75):
        cp.AddItem("Item-%02d" % x)
    mainFrame.Show()  # 显示主窗口
    root.MainLoop()  # 使主程序一直运转
