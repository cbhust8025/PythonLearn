# encoding: gbk
from Tkinter import *

master = Tk()
print help(Place)
Label(master, text="First").place(x=0, y=0)
Label(master, text="Second").place(x=0, y=50)

b1 = Button(master,text="first").place(x=50, y=0)
b2 = Button(master,text="second").place(x=50, y=50)

mainloop()
