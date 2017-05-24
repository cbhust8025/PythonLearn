# 基础控件之文本框
> Tk基础控件中对文本进行显示的各种控件:
* Entry 文本框
* Label 标签
* Message 消息框
* Text 文本域
## Entry 文本框
>利用```print help(Tkinter.Entry)```获取详细方法和参数  
* 单行文本控件，Tkinter库中的Entry类继承自```Widget|BaseWidget|Misc|Pack|Place|Grid|XView```等类，具有基本控件BaseWidget、Misc等类方法，也具有Pack、Place、Grid三类空间布局管理器的一般方法。
### 实例化
 ```Python
e1 = Entry(master, text="text1")
 ```
同样的，Entry类具有大多数控件都类似的构造函数:
 ```Python
 |  __init__(self, master=None, cnf={}, **kw)
 |      Construct an entry widget with the parent MASTER.
 |      
 |      Valid resource names: background, bd, bg, borderwidth, cursor,
 |      exportselection, fg, font, foreground, highlightbackground,
 |      highlightcolor, highlightthickness, insertbackground,
 |      insertborderwidth, insertofftime, insertontime, insertwidth,
 |      invalidcommand, invcmd, justify, relief, selectbackground,
 |      selectborderwidth, selectforeground, show, state, takefocus,
 |      textvariable, validate, validatecommand, vcmd, width,
 |      xscrollcommand.
 ```
参数解释：
>* master:父类对象，一般为某个窗口，或者某个控件。
>* cnf:对应的参数设置，使用的是词典的方式进行设置，关键字包含固有选项和控件的特有选项两部分。
 ```Python
 self.e1 = Tkinter.Entry(self,
                    cnf={
                        "fg": "red",
                        })
 ```
>* \*\*kw:作用同cnf，在cnf中不愿意使用字典格式来进行传参，可以使用自定义参数，比如说cnf中的```{"fg":"red"}```，我们使用\*\*kw的自定义参数可以写成```fg="red"```，效果是等同的。
 ### 进阶操作
 * Entry类中的get方法：获取单行文本框控件中的文本内容
 ```Python
 |  get(self)
 |      Return the text.
 ```
 * Entry类中的icursor方法：获取单行文本框控件中的光标位置
 ```Python
 |  icursor(self, index)
 |      Insert cursor at INDEX.
 ```
 
## Label 标签
>利用```print help(Tkinter.Label)```获取详细方法和参数  
* 用于显示文本或者图像，只显示，不可从窗口进行修改的文本域(可视作wxpython中的静态文本控件)。Tkinter库中的Label类继承自```Widget|BaseWidget|Misc|Pack|Place|Grid```等类，具有基本控件BaseWidget、Misc等类方法，也具有Pack、Place、Grid三类空间布局管理器的一般方法。
### 实例化
 ```Python
l1 = Label(master, text="text1",fg="red")
 ```
 同样的，Label类具有大多数控件都类似的构造函数:
 ```Python
 |  __init__(self, master=None, cnf={}, **kw)
 |      Construct a label widget with the parent MASTER.
 |      
 |      STANDARD OPTIONS
 |      
 |          activebackground, activeforeground, anchor,
 |          background, bitmap, borderwidth, cursor,
 |          disabledforeground, font, foreground,
 |          highlightbackground, highlightcolor,
 |          highlightthickness, image, justify,
 |          padx, pady, relief, takefocus, text,
 |          textvariable, underline, wraplength
 |      
 |      WIDGET-SPECIFIC OPTIONS
 |      
 |          height, state, width
 |  
 ```
 参数解释：
 >* master:父类对象，一般为某个窗口，或者某个控件。
 >* cnf:对应的参数设置，使用的是词典的方式进行设置，关键字包含固有选项和控件的特有选项两部分。
 ```Python
 self.l1 = Tkinter.Label(self,
                    cnf={
                        "text":"Label1",
                        "fg": "red",
                        })
 ```
 >* \*\*kw:作用同cnf，在cnf中不愿意使用字典格式来进行传参，可以使用自定义参数，比如说cnf中的```{"text":"Label1"}```，我们使用\*\*kw的自定义参数可以写成```text="Label1"```，效果是等同的。
 ### 进阶操作
 * Misc类：Tkinter库中的Internal class.Misc类是一个为内置控件定义了一些基本通用方法的Base class。
>* cget方法：获取某一个key对应的键值，返回值为一个string类型
```Python
 |  cget(self, key)
 |      Return the resource value for a KEY given as string.
 self.l1.cget("fg")
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
 self.l1.configure(cnf={"text": "Label2"}, fg="blue")
 ```
>* keys方法：返回控件所有属性的一个列表。
```Python
 |  keys(self)
 |      Return a list of all resource names of this widget.
self.m1.keys()
>>['activebackground', 'activeforeground', 'anchor', 'background', 'bd', 'bg', 'bitmap', 'borderwidth', 'compound', 'cursor', 'disabledforeground', 'fg', 'font', 'foreground', 'height', 'highlightbackground', 'highlightcolor', 'highlightthickness', 'image', 'justify', 'padx', 'pady', 'relief', 'state', 'takefocus', 'text', 'textvariable', 'underline', 'width', 'wraplength']
```

## Message 消息框
>利用```print help(Tkinter.Message)```获取详细方法和参数  
* 用于显示多行文本控件，只显示，不可从窗口进行修改的文本域（等于显示了多行文本的Label控件，同样也是静态文本）。Tkinter库中的Message类继承自```Widget|BaseWidget|Misc|Pack|Place|Grid```等类，具有基本控件BaseWidget、Misc等类方法，也具有Pack、Place、Grid三类空间布局管理器的一般方法。
### 实例化
 ```Python
m1 = Message(master, text="text1\nasd",fg="red")
 ```
 同样的，Label类具有大多数控件都类似的构造函数:
 ```Python
 |  __init__(self, master=None, cnf={}, **kw)
 |  
 ```
 参数解释：
 >* master:父类对象，一般为某个窗口，或者某个控件。
 >* cnf:对应的参数设置，使用的是词典的方式进行设置，关键字包含固有选项和控件的特有选项两部分。
 ```Python
 self.l1 = Tkinter.Message(self,
                    cnf={
                        "text":"Message1\nasdsad",
                        "fg": "red",
                        })
 ```
 >* \*\*kw:作用同cnf，在cnf中不愿意使用字典格式来进行传参，可以使用自定义参数，比如说cnf中的```{"text":"Message1"}```，我们使用\*\*kw的自定义参数可以写成```text="Message1"```，效果是等同的。
 ### 进阶操作
  * Misc类：Tkinter库中的Internal class.Misc类是一个为内置控件定义了一些基本通用方法的Base class。
>* cget方法：获取某一个key对应的键值，返回值为一个string类型
```Python
 |  cget(self, key)
 |      Return the resource value for a KEY given as string.
 self.m1.cget("fg")
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
 self.m1.configure(cnf={"text": "Message2"}, fg="blue")
```
>* keys方法：返回控件所有属性的一个列表。
```Python
 |  keys(self)
 |      Return a list of all resource names of this widget.
self.m1.keys()
>>['anchor', 'aspect', 'background', 'bd', 'bg', 'borderwidth', 'cursor', 'fg', 'font', 'foreground', 'highlightbackground', 'highlightcolor', 'highlightthickness', 'justify', 'padx', 'pady', 'relief', 'takefocus', 'text', 'textvariable', 'width']
```

## Text 文本域
>利用```print help(Tkinter.Text)```获取详细方法和参数  
* 文本域控件，多行显示文本控件，可从窗口进行修改的文本域（等于显示了多行文本的Entry控件，非静态文本）。Tkinter库中的Text类继承自```Widget|BaseWidget|Misc|Pack|Place|Grid|XView|YView```等类，具有基本控件BaseWidget、Misc等类方法，也具有Pack、Place、Grid三类空间布局管理器的一般方法。
### 实例化
 ```Python
t1 = Text(master,fg="red")
 ```
 同样的，Text类具有大多数控件都类似的构造函数:
 ```Python
 |  __init__(self, master=None, cnf={}, **kw)
 |      Construct a text widget with the parent MASTER.
 |      
 |      STANDARD OPTIONS
 |      
 |          background, borderwidth, cursor,
 |          exportselection, font, foreground,
 |          highlightbackground, highlightcolor,
 |          highlightthickness, insertbackground,
 |          insertborderwidth, insertofftime,
 |          insertontime, insertwidth, padx, pady,
 |          relief, selectbackground,
 |          selectborderwidth, selectforeground,
 |          setgrid, takefocus,
 |          xscrollcommand, yscrollcommand,
 |      
 |      WIDGET-SPECIFIC OPTIONS
 |      
 |          autoseparators, height, maxundo,
 |          spacing1, spacing2, spacing3,
 |          state, tabs, undo, width, wrap, 
 ```
 参数解释：
 >* master:父类对象，一般为某个窗口，或者某个控件。
 >* cnf:对应的参数设置，使用的是词典的方式进行设置，关键字包含固有选项和控件的特有选项两部分。
 ```Python
 self.t1 = Tkinter.Text(self,
                    cnf={
                        "fg": "red",
                        })
 ```
 >* \*\*kw:作用同cnf，在cnf中不愿意使用字典格式来进行传参，可以使用自定义参数，比如说cnf中的```{"text":"Text1"}```，我们使用\*\*kw的自定义参数可以写成```text="Text1"```，效果是等同的。
 ### 进阶操作
* Text类：文本域控件自带了很多方法，其中很关键的一个概念叫做index，也就是文本域中的每个字符的索引，一般使用的小数来进行索引（ex:1.2代表的是第一行的第三个字符，2.0代表的是第二行第一个字符，1.0以下比如说0.5在效果上等同于1.0），此外我们有tk库中的常量**END**表示文本域的最后一个位置；使用的是小数来进行实现其中常用的方法有以下一些：
 >* get方法：获取[index1，index2）之间的文本内容，index2可以缺省，表示的是获取index1对应位置的一个字符。
 ```Python
 |  get(self, index1, index2=None)
 |      Return the text from INDEX1 to INDEX2 (not included).
 t1.get(1.0,END)  # 获取文本域中的所有内容
 t1.get(1.0)  # 获取文本域中第一个字符
 ```
 >* index方法：返回index索引所对应的行号
 ```Python
 |  index(self, index)
 |      Return the index in the form line.char for INDEX.
 ti.index(END)  # 返回文本域总的行数
 ```
 >* insert方法：以字符串的形式向文本域中插入文本，位置位于index之前
 ```Python
 |  insert(self, index, chars, *args)
 |      Insert CHARS before the characters at INDEX. An additional
 |      tag can be given in ARGS. Additional CHARS and tags can follow in ARGS.
 t1.insert(END, "insert")  # 在文本域的末尾进行插入
 t1.insert(1.0, "insert")  # 在文本域的起始位置进行插入
 ```
* Misc类：Tkinter库中的Internal class.Misc类是一个为内置控件定义了一些基本通用方法的Base class。
>* cget方法：获取某一个key对应的键值，返回值为一个string类型
```Python
 |  cget(self, key)
 |      Return the resource value for a KEY given as string.
 self.t1.cget("fg")
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
 self.t1.configure(fg="blue")
```
>* keys方法：返回控件所有属性的一个列表。
```Python
 |  keys(self)
 |      Return a list of all resource names of this widget.
self.t1.keys()
>>['autoseparators', 'background', 'bd', 'bg', 'blockcursor', 'borderwidth', 'cursor', 'endline', 'exportselection', 'fg', 'font', 'foreground', 'height', 'highlightbackground', 'highlightcolor', 'highlightthickness', 'inactiveselectbackground', 'insertbackground', 'insertborderwidth', 'insertofftime', 'insertontime', 'insertwidth', 'maxundo', 'padx', 'pady', 'relief', 'selectbackground', 'selectborderwidth', 'selectforeground', 'setgrid', 'spacing1', 'spacing2', 'spacing3', 'startline', 'state', 'tabs', 'tabstyle', 'takefocus', 'undo', 'width', 'wrap', 'xscrollcommand', 'yscrollcommand']
```
