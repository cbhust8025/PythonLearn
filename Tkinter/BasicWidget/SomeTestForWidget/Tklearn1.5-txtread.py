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
        name = askopenfilename()
        fout = open(name,'r')
        self.text1.insert(END,"".join(fout.readlines()))
        fout.close()
        self.entry1.delete(0, END)
        self.entry1.insert(END, name)

    def SaveFile(self):
        outfilename = self.entry1.get()
        fin = open(outfilename, 'w')
        fin.writelines(self.text1.get(1.0, END))
        fin.close()
        self.text1.delete(1.0, END)
        self.text1.insert(END, u"保存成功!")

    def createWidgets(self):
        # Widget create
        self.text1 = Text(self,autoseparators=TRUE)
        self.open = Button(self, cnf={"text": "Open File"},
                           fg="red", command=self.OpenFile)
        self.save = Button(self, cnf={"text": "Save File"},
                           fg="blue", command=self.SaveFile)
        self.entry1 = Entry(self)

        # pack manage
        self.text1.pack(side="top")
        self.open.pack(side="left")
        self.save.pack(side="left")
        self.entry1.pack(side="left", expand=TRUE, fill=X)



    def __init__(self, master=None):
        Frame.__init__(self, master=master)
        self.grid(row=0)
        self.createWidgets()

if __name__ == "__main__":
    root = Tk()
    app = Application(root)
    app.mainloop()  # 主窗口循环
