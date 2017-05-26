#!/usr/bin/env python
# encoding: gbk
'''
txt阅读器
Created by CB on 2017-0524
'''

from Tkinter import *
from tkFileDialog   import askopenfilename


class Application(Frame):
    def OpenFile(self):
        name = askopenfilename()  # 打开文件打开对话框，选择的文件名保存到name中
        fout = open(name,'r')  # 打开选择的文件
        self.text1.insert(END,"".join(fout.readlines()))  # 将文件中的内容插入到文本框的后面
        fout.close()  # 关闭打开的文件
        self.entry1.delete(0, END)  # 清空文件名显示框
        self.entry1.insert(END, name)  # 显示当前文件

    def SaveFile(self):
        outfilename = self.entry1.get()  # 将当前文件名显示框的内容读入作为输出文件名
        fin = open(outfilename, 'w')  # 打开输出文件
        fin.writelines(self.text1.get(1.0, END))  # 将文本域中的所有内容写入到输出文件
        fin.close()  # 关闭输出文件
        self.text1.delete(1.0, END)  # 清楚文本域中的所有内容
        self.text1.insert(END, u"保存成功!")  # 显示保存成功

    def createWidgets(self):
        # Widget create  创建所有我们需要的两个按钮，两个文本域
        self.text1 = Text(self,autoseparators=TRUE)
        self.open = Button(self, cnf={"text": "Open File"},
                           fg="red", command=self.OpenFile)
        self.save = Button(self, cnf={"text": "Save File"},
                           fg="blue", command=self.SaveFile)
        self.entry1 = Entry(self)

        # pack manage  布局我们的所有控件
        self.text1.pack(side="top")
        self.open.pack(side="left")
        self.save.pack(side="left")
        self.entry1.pack(side="left", expand=TRUE, fill=X)



    def __init__(self, master=None):
        Frame.__init__(self, master=master)
        self.pack()  # 选用pack管理布局
        self.createWidgets()  # 创建控件

if __name__ == "__main__":
    root = Tk()
    app = Application(root)  # 以root窗口为主窗口创建应用
    app.mainloop()  # 主窗口循环
