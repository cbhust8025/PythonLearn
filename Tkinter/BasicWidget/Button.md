# 基础控件之按钮篇
>利用```print help(Tkinter.Button)```获取详细信息
```Python
import Tkinter  # import the Tkinter module

class Application(Tkinter.Frame):
    def say_hi(self):
        print "hi there, everyone!"

    def createWidgets(self):
        self.QUIT = Tkinter.Button(self)
        self.QUIT["text"] = "QUIT"
        self.QUIT["fg"]   = "red"
        self.QUIT["command"] =  self.quit
        self.QUIT.pack({"side": "left"})

        self.hi_there = Tkinter.Button(self)
        self.hi_there["text"] = "Hello",
        self.hi_there["command"] = self.say_hi
        self.hi_there.pack({"side": "left"})

    def __init__(self, master=None):
        Tkinter.Frame.__init__(self, master)
        self.pack()
        self.createWidgets()

if __name__ == "__main__":
    root = Tkinter.Tk()  # create a root window
    root.geometry('1080x720+0+0')
    app = Application(master=root)
    app.mainloop()  # create an event loop
```
## 基本使用
* 实例化
```Python
self.QUIT = Tkinter.Button(self)
```
Tkinter库中的Button类继承了```Widget
 |      BaseWidget
 |      Misc
 |      Pack
 |      Place
 |      Grid```等类，在具有以上父类对象方法外，自己Button特有的方法并没有很多。Button的构造函数如下：
 ```Python
 __init__(self, master=None, cnf={}, **kw)
 |      # Construct a button widget with the parent MASTER.
 |      STANDARD OPTIONS
 |      
 |          activebackground, activeforeground, anchor,
 |          background, bitmap, borderwidth, cursor,
 |          disabledforeground, font, foreground
 |          highlightbackground, highlightcolor,
 |          highlightthickness, image, justify,
 |          padx, pady, relief, repeatdelay,
 |          repeatinterval, takefocus, text,
 |          textvariable, underline, wraplength
 |      
 |      WIDGET-SPECIFIC OPTIONS
 |      
 |          command, compound, default, height,
 |          overrelief, state, width
 ```
 Button的构造函数参数：
 >* master:父类对象，一般为某个窗口（将按钮放在此窗口的pack中），或者某个控件（ex:self.hi_there = Tkinter.Button(self.QUIT)--->两个按钮会重合）。
 >* cnf:对应的参数设置，使用的是词典的方式进行设置，关键字包含固有选项和控件的特有选项两部分。
 ```Python
 self.QUIT = Tkinter.Button(self,
                    cnf={
                        "text":"quit",
                        "fg": "red",
                        "command": self.quit
                        })
 ```
 >* \**kw:作用同cnf，在cnf中不愿意使用字典格式来进行传参，可以使用自定义参数，比如说cnf中的```{"text":"quit"}```，我们使用**kw的自定义参数可以写成```text="quit"```，效果是等同的。
 ```Python
 self.QUIT = Tkinter.Button(self, cnf={"text": "quit"}, fg="red", command=self.quit)
 ```
 
 * 赋值
 >Tk中的Button类重载有[]操作符，对于其属性可以使用此操作符直接进行赋值修改
 ```Python
self.QUIT["text"] = "QUIT"
self.QUIT["fg"]   = "red"
self.QUIT["command"] =  self.quit
 ```
 
 ## 进阶操作
 由于Button类继承了Tk中其他一些类，所以也继承了一些常用的方法。
 * BaseWidget类中的```destroy```方法
 ```Python
 |  Methods inherited from BaseWidget:
 |  
 |  destroy(self)
 |      Destroy this and all descendants widgets.
 ```
 * Misc类：Tkinter库中的Internal class.Misc类是一个为内置控件定义了一些基本通用方法的Base class。
>* cget方法：获取某一个key对应的键值，返回值为一个string类型
```Python
 |  cget(self, key)
 |      Return the resource value for a KEY given as string.
 self.QUIT.cget("fg")
 >>red
```
>* configure方法：配置控件属性，具体实现同初始化传参。
```Python
 |  configure(self, cnf=None, **kw)
 |      Configure resources of a widget.
 |      
 |      The values for resources are specified as keyword
 |      arguments. To get an overview about
 |      the allowed keyword arguments call the method keys.
 self.QUIT.configure(cnf={"text": "quit"}, fg="blue", command=self.quit)
```
>* keys方法：返回控件所有属性的一个列表。
```Python
 |  keys(self)
 |      Return a list of all resource names of this widget.
self.QUIT.keys()
>>['activebackground', 'activeforeground', 'anchor', 'background', 'bd', 'bg', 'bitmap', 'borderwidth', 'command', 'compound', 'cursor', 'default', 'disabledforeground', 'fg', 'font', 'foreground', 'height', 'highlightbackground', 'highlightcolor', 'highlightthickness', 'image', 'justify', 'overrelief', 'padx', 'pady', 'relief', 'repeatdelay', 'repeatinterval', 'state', 'takefocus', 'text', 'textvariable', 'underline', 'width', 'wraplength']
```
* Pack类：同wxpython中的BoxSize类，用于自动调整窗口中控件位置和大小，属于Tkinter中一种布局管理方式。
>* pack or pack_configure方法：配置当前控件在父亲控件中的位置信息。参数包含cnf和**kw，两个参数含义同之前所说，可以使用内置的option字典来进行调节位置，也可以使用自定义键值来调整位置。
```Python
|  pack = pack_configure(self, cnf={}, **kw)
 |      Pack a widget in the parent widget. Use as options:
 |      after=widget - pack it after you have packed widget
 |      anchor=NSEW (or subset) - position widget according to
 |                                given direction
 |      before=widget - pack it before you will pack widget
 |      expand=bool - expand widget if parent size grows
 |      fill=NONE or X or Y or BOTH - fill widget if widget grows
 |      in=master - use master to contain this widget
 |      in_=master - see 'in' option description
 |      ipadx=amount - add internal padding in x direction
 |      ipady=amount - add internal padding in y direction
 |      padx=amount - add padding in x direction
 |      pady=amount - add padding in y direction
 |      side=TOP or BOTTOM or LEFT or RIGHT -  where to add this widget.
 |  
 |  pack_configure(self, cnf={}, **kw)
 |      Pack a widget in the parent widget. Use as options:
 |      after=widget - pack it after you have packed widget
 |      anchor=NSEW (or subset) - position widget according to
 |                                given direction
 |      before=widget - pack it before you will pack widget
 |      expand=bool - expand widget if parent size grows
 |      fill=NONE or X or Y or BOTH - fill widget if widget grows
 |      in=master - use master to contain this widget
 |      in_=master - see 'in' option description
 |      ipadx=amount - add internal padding in x direction
 |      ipady=amount - add internal padding in y direction
 |      padx=amount - add padding in x direction
 |      pady=amount - add padding in y direction
 |      side=TOP or BOTTOM or LEFT or RIGHT -  where to add this widget.
 self.QUIT.pack(cnf={"side":"left"})
 # self.QUIT.pack(side="left")
```
* Grid类：Tkinter库中的另外一种布局方法（注：不要试图在同一个容器中使用grid布局和pack布局），称之为几何布局管理器。将主控件划分成一个二维的表格，一系列的行和列，每一个格子（cell）中可以放置一个控件。
>* grid or grid_configure方法：使用grid布局管理器进行配置控件的位置信息，同样也是含有cnf和**kw两个参数，支持字典形式设置和自定义关键字设置。
```Python
 |  grid = grid_configure(self, cnf={}, **kw)
 |      Position a widget in the parent widget in a grid. Use as options:
 |      column=number - use cell identified with given column (starting with 0)
 |      columnspan=number - this widget will span several columns
 |      in=master - use master to contain this widget
 |      in_=master - see 'in' option description
 |      ipadx=amount - add internal padding in x direction
 |      ipady=amount - add internal padding in y direction
 |      padx=amount - add padding in x direction
 |      pady=amount - add padding in y direction
 |      row=number - use cell identified with given row (starting with 0)
 |      rowspan=number - this widget will span several rows
 |      sticky=NSEW - if cell is larger on which sides will this
 |                    widget stick to the cell boundary
 |  
 |  grid_configure(self, cnf={}, **kw)
 |      Position a widget in the parent widget in a grid. Use as options:
 |      column=number - use cell identified with given column (starting with 0)
 |      columnspan=number - this widget will span several columns
 |      in=master - use master to contain this widget
 |      in_=master - see 'in' option description
 |      ipadx=amount - add internal padding in x direction
 |      ipady=amount - add internal padding in y direction
 |      padx=amount - add padding in x direction
 |      pady=amount - add padding in y direction
 |      row=number - use cell identified with given row (starting with 0)
 |      rowspan=number - this widget will span several rows
 |      sticky=NSEW - if cell is larger on which sides will this
 |                    widget stick to the cell boundary
```
具体使用，先设置容器的行列数，也就是将容器放到其父容器的哪个位置（第几行第几列，均从0开始计数），未使用的行号列号将被忽略。
然后设置容器中每个控件的位置。
```Python
# encoding: gbk
from Tkinter import *

master = Tk()
Label(master, text="First").grid(row=0)#将文本设置在master这个主窗口的第一行（默认第一列）
Label(master, text="Second").grid(row=1)#将文本设置在master这个主窗口的第二行（默认第一列）

b1 = Button(master,text="First").grid(row=0, column=1)#将按钮设置在master这个主窗口的第一行的第二列
b2 = Button(master,text="Second").grid(row=1, column=1)#将按钮设置在master这个主窗口的第一行的第二列

mainloop()
```
