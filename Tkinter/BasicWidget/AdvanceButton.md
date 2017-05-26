# 基础控件之进阶按钮篇
>利用```print help(Tkinter.**Button)```获取详细信息
Tk库除了提供我们基本的按钮之外，也提供了一些具有其独特功能的进阶按钮：
* **Checkbutton 选择按钮**:一组方框,可以选择其中的任意个(类似 HTML 中的 checkbox)；代表一个变量，它有两个不同的值。点击这个按钮将会在这两个值间切换。
* **Menubutton 菜单按钮**:用来包含菜单的组件(有下拉式、层叠式等等)；菜单按钮。用来实现下拉式菜单。
* **Radiobutton 单选按钮**:一组按钮,其中只有一个可被“按下” (类似 HTML 中的 radio)；代表一个变量，它可以有多个值中的一个。点击它将为这个变量设置值，并且清除与这同一变量相关的其它radiobutton。

## Checkbutton 选择按钮
```C++
class Checkbutton(Widget)
 |  Checkbutton widget which is either in on- or off-state.
 
 |  __init__(self, master=None, cnf={}, **kw)
 |      Construct a checkbutton widget with the parent MASTER.
 |      
 |      Valid resource names: activebackground, activeforeground, anchor,
 |      background, bd, bg, bitmap, borderwidth, command, cursor,
 |      disabledforeground, fg, font, foreground, height,
 |      highlightbackground, highlightcolor, highlightthickness, image,
 |      indicatoron, justify, offvalue, onvalue, padx, pady, relief,
 |      selectcolor, selectimage, state, takefocus, text, textvariable,
 |      underline, variable, width, wraplength.
```
* 继承关系上，Checkbutton继承了```Widget
 |      BaseWidget
 |      Misc
 |      Pack
 |      Place
 |      Grid```等类。所以不具有Button基础按钮类的一般特性，不过具有一般控件的所有特性。
```Python
# encoding: gbk
from Tkinter import *
def qui():
    print "Hi"
master = Tk()
m1 = Checkbutton(master, text="Checkbutton", fg="red", offvalue="123", onvalue="456", command=qui)
m1.pack()
# print m1.keys()
mainloop()
```
## Menubutton 菜单按钮
自Tk8.0之后就已经不采用此控件。

## Radiobutton 单选按钮
```C++
class Radiobutton(Widget)
 |  Radiobutton widget which shows only one of several buttons in on-state.
 
 |  __init__(self, master=None, cnf={}, **kw)
 |      Construct a radiobutton widget with the parent MASTER.
 |      
 |      Valid resource names: activebackground, activeforeground, anchor,
 |      background, bd, bg, bitmap, borderwidth, command, cursor,
 |      disabledforeground, fg, font, foreground, height,
 |      highlightbackground, highlightcolor, highlightthickness, image,
 |      indicatoron, justify, padx, pady, relief, selectcolor, selectimage,
 |      state, takefocus, text, textvariable, underline, value, variable,
 |      width, wraplength.
```
* 继承关系上，Radiobutton继承了```Widget
 |      BaseWidget
 |      Misc
 |      Pack
 |      Place
 |      Grid```等类。所以不具有Button基础按钮类的一般特性，不过具有一般控件的所有特性。
* Radiobutton是多选一按钮，在同一个容器中只能选中多个Radiobutton中的一个按钮。
```Python
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
```
