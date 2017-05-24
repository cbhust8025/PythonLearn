# 基本控件篇
## 简介
* **Button 按钮**:类似标签,但提供额外的功能,例如鼠标掠过、按下、释放以及键盘操作/事件；一个简单的按钮，用来执行一个命令或别的操作。
* **Canvas 画布**:提供绘图功能(直线、椭圆、多边形、矩形) ;可以包含图形或位图；组织图形。这个部件可以用来绘制图表和图，创建图形编辑器，实现定制窗口部件。
* **Checkbutton 选择按钮**:一组方框,可以选择其中的任意个(类似 HTML 中的 checkbox)；代表一个变量，它有两个不同的值。点击这个按钮将会在这两个值间切换。
* **Entry 文本框**:单行文字域,用来收集键盘输入(类似 HTML 中的 text)；文本输入域。
* **Frame 框架**:包含其他组件的纯容器；一个容器窗口部件。帧可以有边框和背景，当创建一个应用程序或dialog(对话）版面时，帧被用来组织其它的窗口部件。
* **Label 标签**:用来显示文字或图片；显示一个文本或图象。
* **Listbox 列表框**:一个选项列表,用户可以从中选择；显示供选方案的一个列表。listbox能够被配置来得到radiobutton或checklist的行为。
* **Menu 菜单**:点下菜单按钮后弹出的一个选项列表,用户可以从中选择；菜单条。用来实现下拉和弹出式菜单。
* **Menubutton 菜单按钮**:用来包含菜单的组件(有下拉式、层叠式等等)；菜单按钮。用来实现下拉式菜单。
* **Message 消息框**:类似于标签,但可以显示多行文本；显示一文本。类似label窗口部件，但是能够自动地调整文本到给定的宽度或比率。
* **Radiobutton 单选按钮**:一组按钮,其中只有一个可被“按下” (类似 HTML 中的 radio)；代表一个变量，它可以有多个值中的一个。点击它将为这个变量设置值，并且清除与这同一变量相关的其它radiobutton。
* **Scale 进度条**:线性“滑块”组件,可设定起始值和结束值,会显示当前位置的精确值；允许你通过滑块来设置一数字值。
* **Scrollbar 滚动条**:对其支持的组件(文本域、画布、列表框、文本框)提供滚动功能；为配合使用canvas, entry, listbox, and text窗口部件的标准滚动条。
* **Text 文本域**:多行文字区域,可用来收集(或显示)用户输入的文字(类似 HTML 中的 textarea)；格式化文本显示。允许你用不同的样式和属性来显示和编辑文本。同时支持内嵌图象和窗口。
* **Toplevel 顶级**:类似框架,但提供一个独立的窗口容器。；一个容器窗口部件，作为一个单独的、最上面的窗口显示。

### 注:在Tkinter中窗口部件类没有分级；所有的窗口部件类在树中都是兄弟。所有这些窗口部件提供了Misc和几何管理方法、配置管理方法和部件自己定义的另外的方法。此外，Toplevel类也提供窗口管理接口。这意味一个典型的窗口部件类提供了大约150种方法。

## 布局管理器
* Pack类：同wxpython中的BoxSize类，用于自动调整窗口中控件位置和大小，属于Tkinter中一种布局管理方式。
> pack or pack_configure方法：配置当前控件在父亲控件中的位置信息。参数包含cnf和\*\*kw，两个参数含义同之前所说，可以使用内置的option字典来进行调节位置，也可以使用自定义键值来调整位置。
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
直接设置控件在父容器中的位置，然后pack方法会进行自动布局，填充。
```Python
# encoding: gbk
from Tkinter import *

master = Tk()
Label(master, text="First").pack(side="right")# 将文本First放在master这个容器的最右边
Label(master, text="Second").pack(side="top")# 将文本Second放在master容器的最上面

b1 = Button(master,text="first").pack(side="right",padx=10)# 将按钮first放在master这个容器还未放置控件的空间的最右边
b2 = Button(master,text="second").pack(side="left")# 放在master未放置控件空间的左边，

mainloop()
```
* Grid类：Tkinter库中的另外一种布局方法（注：不要试图在同一个容器中使用grid布局和pack布局），称之为几何布局管理器。将主控件划分成一个二维的表格，一系列的行和列，每一个格子（cell）中可以放置一个控件。
> grid or grid_configure方法：使用grid布局管理器进行配置控件的位置信息，同样也是含有cnf和\*\*kw两个参数，支持字典形式设置和自定义关键字设置。
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
具体使用，先设置容器的行列数（也就是声明父容器使用grid布局管理方式），也就是将容器放到其父容器的哪个位置（第几行第几列，均从0开始计数），未使用的行号列号将被忽略。
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
* Place类：Tkinter库中的第三种布局管理方式。允许指定组件和窗口的大小与位置。参数也同样具有cnf和\*\*kw两个参数。
```Python
 |  place = place_configure(self, cnf={}, **kw)
 |  
 |  place_configure(self, cnf={}, **kw)
 |      Place a widget in the parent widget. Use as options:
 |      in=master - master relative to which the widget is placed
 |      in_=master - see 'in' option description
 |      x=amount - locate anchor of this widget at position x of master
 |      y=amount - locate anchor of this widget at position y of master
 |      relx=amount - locate anchor of this widget between 0.0 and 1.0
 |                    relative to width of master (1.0 is right edge)
 |      rely=amount - locate anchor of this widget between 0.0 and 1.0
 |                    relative to height of master (1.0 is bottom edge)
 |      anchor=NSEW (or subset) - position anchor according to given direction
 |      width=amount - width of this widget in pixel
 |      height=amount - height of this widget in pixel
 |      relwidth=amount - width of this widget between 0.0 and 1.0
 |                        relative to width of master (1.0 is the same width
 |                        as the master)
 |      relheight=amount - height of this widget between 0.0 and 1.0
 |                         relative to height of master (1.0 is the same
 |                         height as the master)
 |      bordermode="inside" or "outside" - whether to take border width of
 |                                         master widget into account
```
具体使用，直接定义控件在父容器中的位置，大小等其他位置信息即可。
```Python
# encoding: gbk
from Tkinter import *

master = Tk()
print help(Place)
Label(master, text="First").place(x=0, y=0) #  直接设置坐标
Label(master, text="Second").place(x=0, y=50)

b1 = Button(master,text="first").place(x=50, y=0)
b2 = Button(master,text="second").place(x=50, y=50)

mainloop()
```
