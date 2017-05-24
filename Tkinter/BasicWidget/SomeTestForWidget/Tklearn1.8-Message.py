# encoding: gbk
from Tkinter import *
def qui():
    print "hi"
master = Tk()
m1 = Message(master, text="text1\nasd",fg="red")
m1.pack()
print m1.keys()
mainloop()
