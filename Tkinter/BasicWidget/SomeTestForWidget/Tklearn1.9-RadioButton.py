# encoding: gbk
from Tkinter import *
root  = Tk()
lang = [
    ("Python", 1),
    ("Perl", 2),
    ("asdsas", 3)
        ]
v = IntVar()
v.set(1)
for lan,num in lang:
    b = Radiobutton(root, text=lan, variable=v, value=num, indicatoron=False)
    b.pack(fill=X)
mainloop()
