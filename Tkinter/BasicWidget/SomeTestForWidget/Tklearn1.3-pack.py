# encoding: gbk
from Tkinter import *

master = Tk()
Label(master, text="First").pack(side="right")# 将文本First放在master这个容器的最右边
Label(master, text="Second").pack(side="top")# 将文本Second放在master容器的最上面

b1 = Button(master,text="first").pack(side="right",padx=10)# 将按钮first放在master这个容器还未放置控件的空间的最右边
b2 = Button(master,text="second").pack(side="left")# 放在master未放置控件空间的左边，

mainloop()
