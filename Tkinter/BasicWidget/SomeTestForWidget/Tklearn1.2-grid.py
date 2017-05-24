# encoding: gbk
from Tkinter import *

master = Tk()
Label(master, text="First").grid(row=0)#将文本设置在master这个主窗口的第一行（默认第一列）
Label(master, text="Second").grid(row=1)#将文本设置在master这个主窗口的第二行（默认第一列）

b1 = Button(master,text="First", fg="red").grid(row=0, column=1)#  将按钮设置在master这个主窗口的第一行的第二列
b2 = Button(master,text="Second").grid(row=1, column=1)#  将按钮设置在master这个主窗口的第一行的第二列

mainloop()
