#!/usr/bin/env python
# encoding: gbk
'''
字体选择对话框
'''

import sys
from wx import *  # 污染命名空间

class MainFrame(Frame):
    def __init__(self):
        Frame.__init__(self, None, -1,
                       title="字体选择对话框",
                       size=(720,600),
                       style=DEFAULT_FRAME_STYLE)

        sfb = Button(self, id=1, label="选择字体")  # 实例化选择字体按钮
        sfb.Bind(EVT_BUTTON, self.SelectFont)  # 绑定字体选择功能

        self.st1 = StaticText(self, id=2, label="样例文字", size=(300,80))  # 实例化样例文字静态文本控件
        self.st1.SetBackgroundColour('white')  # 设置白底

        self.currentFont = self.st1.GetFont()  # 保存当前字体的信息
        self.currentCol = self.st1.GetForegroundColour()  # 保存当前字体的颜色


        # 初始化字体的详细信息静态文本显示
        self.stpointsize = StaticText(self, id=3, label="字号（大小）:", style=ALIGN_RIGHT)
        self.pointsize = StaticText(self, id=4, label="4")

        self.stfamily = StaticText(self, id=5, label="系列（default/modern）:")
        self.family = StaticText(self, id=6, label="6")

        self.ststyle = StaticText(self, id=7, label="格式（倾斜）:")
        self.style = StaticText(self, id=8, label="8")

        self.stbold = StaticText(self, id=9, label="格式（加粗）:")
        self.bold = StaticText(self, id=10, label="10")

        self.stface = StaticText(self, id=11, label="字体:")
        self.face = StaticText(self, id=12, label="12")

        self.stFontInfo = StaticText(self, id=13, label="wx.NativeFontInfo:")
        self.fontinfo = StaticText(self, id=14, label="14")

        # 字体选择框
        sb1 = StaticBox(self, label="字体选择")
        sbs = StaticBoxSizer(sb1)
        sbs.Add(sfb)
        sbs.Add(self.st1, border=20, flag=wx.LEFT | wx.EXPAND)

        # 字体详细信息利用FlexGridSizer两列布局自动调整实现
        mfgs = FlexGridSizer(cols=2, vgap=10, hgap=10)
        mfgs.Add(self.stpointsize)
        mfgs.Add(self.pointsize)
        mfgs.Add(self.stfamily)
        mfgs.Add(self.family)
        mfgs.Add(self.ststyle)
        mfgs.Add(self.style)
        mfgs.Add(self.stbold)
        mfgs.Add(self.bold)
        mfgs.Add(self.stface)
        mfgs.Add(self.face)
        mfgs.Add(self.stFontInfo)
        mfgs.Add(self.fontinfo)

        # 利用字体详细框框住字体详细信息
        sb2 = StaticBox(self, label="字体详细信息")
        sbs2 = StaticBoxSizer(sb2)
        sbs2.Add(mfgs)

        # 基本BoxSizer列布局来布局两个框
        bz = BoxSizer(VERTICAL)
        bz.Add(sbs, border=50, flag=wx.EXPAND | wx.LEFT | RIGHT | TOP)
        bz.Add(sbs2, border=50, flag=wx.EXPAND | wx.LEFT | wx.RIGHT)

        # 进行布局并且更新字体详细信息
        self.SetSizer(bz)
        self.UpdateFrame()

    def UpdateFrame(self):
        # 更新字体的详细信息 即更新那些静态文本的显示
        self.st1.SetFont(self.currentFont)
        self.st1.SetForegroundColour(self.currentCol)
        self.pointsize.SetLabel(str(self.currentFont.GetPointSize()))
        self.family.SetLabel(self.currentFont.GetFamilyString())
        self.style.SetLabel(self.currentFont.GetStyleString())
        self.bold.SetLabel(self.currentFont.GetWeightString())
        self.face.SetLabel(self.currentFont.GetFaceName())
        self.fontinfo.SetLabel(self.currentFont.GetNativeFontInfo().ToString())
        # 进行修改控件的内容之后的必须操作：重新布局函数
        self.Layout()

    def SelectFont(self, evt):
        # 打开内置字体选择对话框
        data = wx.FontData()  # 实例化wx中的字体类，内置字体选择对话框的必须参数之一
        data.EnableEffects(True)
        data.SetColour(self.currentCol)  # set colour
        data.SetInitialFont(self.currentFont)

        dlg = wx.FontDialog(self, data)

        if dlg.ShowModal() == wx.ID_OK:
            data = dlg.GetFontData()  # 如果对话框正常关闭，则获取对话框所保留的字体信息
            self.currentFont = data.GetChosenFont()  # 更新字体
            self.currentCol = data.GetColour()  # 更新颜色
            self.UpdateFrame()  # 更新字体详细信息

        # Don't destroy the dialog until you get everything you need from the
        # dialog!
        dlg.Destroy()



if __name__ == "__main__":
    mainapp = App()  # 主程序
    mainFrame = MainFrame()  # 实例化主窗口

    mainFrame.Show()  # 显示主窗口
    mainapp.MainLoop()  # 循环主程序，直到触发退出函数
