# encoding: gbk
from Tkinter import *
def qui():
    print "hi"
master = Tk()
e1 = Entry(master, fg="red", invalidcommand=qui).pack(side="left")
mainloop()
