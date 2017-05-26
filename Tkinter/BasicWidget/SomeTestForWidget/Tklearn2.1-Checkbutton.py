# encoding: gbk
from Tkinter import *
def qui():
    print "Hi"
master = Tk()
m1 = Checkbutton(master, text="Checkbutton", fg="red", offvalue="123", onvalue="456", command=qui)
m1.pack()
# print m1.keys()
mainloop()
