# encoding: gbk
from Tkinter import *
def qui():
    print "hi"
master = Tk()
l1 = Label(master, text="text1\nasd",fg="red")
l1.pack(side="left")
print l1.keys()
mainloop()
