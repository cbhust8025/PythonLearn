# encoding: gbk
from Tkinter import *
def get():
    print t1.get(1.0,END)
def insert():
    print t1.delete(1.0,2.0)
master = Tk()
t1 = Text(master,fg="red")
b1 = Button(master, text="get", fg="blue",command=get)
b2 = Button(master, text="insert", fg = "pink", command=insert)
print t1.index(0.5)
t1.pack()
b1.pack()
b2.pack()
print t1.keys()
mainloop()
