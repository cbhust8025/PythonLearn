# 基本控件之按钮篇
>利用```print help(wx.xxButton)```获取详细的Button文档内容
wxpython提供了多种Button给我们使用，其中每一种Button都封装为一个类，从基础的Button类到其各种子类的的BitmapButton、RadioButton、SpinButton、ToggleButton等不同功能的Button。在了解wxpython自己设计的Button之前，我们必须得了解另外一个跟Button有关的类：AnyButton类。
## 1、AnyButton类（用于替代C++的 AnyButton类）
```C++
class AnyButton(wx._core.Control)
 |  Proxy of C++ AnyButton class
 
 |  Method resolution order:
 |      AnyButton
 |      wx._core.Control
 |      wx._core.Window
 |      wx._core.EvtHandler
 |      wx._core.Object
 |      __builtin__.object
 
 |  __init__(self)
```

* 很明显，wx库中的AnyButton类无构造函数，意味着我们不能直接实例化此对象，不过他定义了很多适用于Button的很多基本方法（类似虚基类的作用）。
>* DontShowLabel方法：不显示按钮上面的文字内容。
```C++
 |  DontShowLabel(*args, **kwargs)
 |      DontShowLabel(self) -> bool
```

>* ShowsLabel方法：与DontShowLabel方法对应，显示按钮上面的文字内容。
```C++
 |  ShowsLabel(*args, **kwargs)
 |      ShowsLabel(self) -> bool
```
* 继承自```wx._core.EvtHandler```类的AnyButton可以与程序运行的事件进行交互，自然也有一些与事件交互的方法。
>* Bind方法：将当前的控件和某个handler（一般为某个处理函数）绑定起来。
```C++
 |  Bind(self, event, handler, source=None, id=-1, id2=-1)
 |      Bind an event to an event handler.
 |      
 |      :param event: One of the EVT_* objects that specifies the
 |                    type of event to bind,
 |      
 |      :param handler: A callable object to be invoked when the
 |                    event is delivered to self.  Pass None to
 |                    disconnect an event handler.
 |      
 |      :param source: Sometimes the event originates from a
 |                    different window than self, but you still
 |                    want to catch it in self.  (For example, a
 |                    button event delivered to a frame.)  By
 |                    passing the source of the event, the event
 |                    handling system is able to differentiate
 |                    between the same event type from different
 |                    controls.
 |      
 |      :param id: Used to spcify the event source by ID instead
 |                 of instance.
 |      
 |      :param id2: Used when it is desirable to bind a handler
 |                    to a range of IDs, such as with EVT_MENU_RANGE.
```

>>参数：
>>- event:事件位图，将当前控件与事件进行绑定，以何种方式绑定，由此参数决定，一般情况下，参数实体为：EVT_控件名称。不允许缺省
>>- handler:事件名称，一般为某个函数（不带括号）,不允许缺省,并在调用此函数时传入event/evt参数，所以函数至少需要接受一个参数。
>>- source:是我们要从不同的小部件中区分相同的事件类型。
>>- id/id2:当我们有多个按钮、菜单项等id用于区分它们。

>* Unbind方法：取消某个控件对事件的绑定。
```C++
 |  Unbind(self, event, source=None, id=-1, id2=-1, handler=None)
 |      Disconnects the event handler binding for event from self.
 |      Returns True if successful.
```

>* Set方法：设定控件事件的相关信息。
```C++
 |  SetEvtHandlerEnabled(*args, **kwargs)
 |      SetEvtHandlerEnabled(self, bool enabled)
 |  
 |  SetNextHandler(*args, **kwargs)
 |      SetNextHandler(self, EvtHandler handler)
 |  
 |  SetPreviousHandler(*args, **kwargs)
 |      SetPreviousHandler(self, EvtHandler handler)
```

>* Get方法：获取控件事件的相关信息。
```C++
 |  GetEvtHandlerEnabled(*args, **kwargs)
 |      GetEvtHandlerEnabled(self) -> bool
 |  
 |  GetNextHandler(*args, **kwargs)
 |      GetNextHandler(self) -> EvtHandler
 |  
 |  GetPreviousHandler(*args, **kwargs)
 |      GetPreviousHandler(self) -> EvtHandler
```
## 2、Button类
```C++
class Button(AnyButton)
 |  A button is a control that contains a text string, and is one of the most
 |  common elements of a GUI.  It may be placed on a dialog box or panel, or
 |  indeed almost any other window.
 
 |      __init__(self, Window parent, int id=-1, String label=EmptyString, 
 |          Point pos=DefaultPosition, Size size=DefaultSize, 
 |          long style=0, Validator validator=DefaultValidator, 
 |          String name=ButtonNameStr) -> Button
 |      
 |      Create and show a button.  The preferred way to create standard
 |      buttons is to use a standard ID and an empty label.  In this case
 |      wxWigets will automatically use a stock label that corresponds to the
 |      ID given.  These labels may vary across platforms as the platform
 |      itself will provide the label if possible.  In addition, the button
 |      will be decorated with stock icons under GTK+ 2.
```

* Button类是继承自AnyButton类，具有其通用的基本方法。
* Button类某一部分继承自```wx._core.EvtHandler```，意味着Button类实例化的对象可以触发事件。
* 参数：
>- parent:按钮依附的父类容器（窗口、sizer等），不可缺省，必须指定一个。
>- id/label:按钮对应的独一无二的id，在程序内部进行search可用;label为按钮上显示的文本
>- pos/size:位置和大小，使用Sizer布局管理时可以缺省。
>- name：按钮对应的在程序内部的名称，可重复。
```Python
#!/usr/bin/env python
# encoding: gbk
'''
button
'''
from wx import *
if __name__ == "__main__":
    root = App()  # 创建主程序
    mainFrame = Frame(None)  # 在主程序之上建立一个一直显示的主窗口，用于与用户进行互动

    b1 = Button(mainFrame, id=1, label="button1")

    mainFrame.Show()  # 显示主窗口
    root.MainLoop()  # 使主程序一直运转
```

## 3、BitmapButton类
```C++
class BitmapButton(Button)
 |  A Button that contains a bitmap.  A bitmap button can be supplied with a
 |  single bitmap, and wxWidgets will draw all button states using this bitmap. If
 |  the application needs more control, additional bitmaps for the selected state,
 |  unpressed focused state, and greyed-out state may be supplied.
 
 |  __init__(self, *args, **kwargs)
 |      __init__(self, Window parent, int id=-1, Bitmap bitmap=wxNullBitmap, 
 |          Point pos=DefaultPosition, Size size=DefaultSize, 
 |          long style=BU_AUTODRAW, Validator validator=DefaultValidator, 
 |          String name=ButtonNameStr) -> BitmapButton
 |      
 |      Create and show a button with a bitmap for the label.
```

* 与普通的Button不同的是，BitmapButton没有label参数，取而代之的是bitmap参数，此时用到其中一个很关键的类叫做[Bitmap类](https://github.com/cbhust8025/PythonLearn/blob/master/Wxpython/BasicWidget/Bitmap.md)。
```Python
#!/usr/bin/env python
# encoding: gbk
'''
BitmapButton
'''

from wx import *
def hi(evt):
    print "HI"
if __name__ == "__main__":
    root = App()  # 创建主程序
    mainFrame = Frame(None)  # 在主程序之上建立一个一直显示的主窗口，用于与用户进行互动

    bm1 = Bitmap("004545.jpg")  # 实例化位图对象
    b1 = BitmapButton(mainFrame, bitmap=bm1)  # 与Button唯一区别为label参数换成了bitmap参数
    b1.Bind(EVT_BUTTON, handler=hi)

    mainFrame.Show()  # 显示主窗口
    root.MainLoop()  # 使主程序一直运转
```
## 4、RadioButton类（用于替代C++中的RadioButton类）
```C++
class RadioButton(wx._core.Control)
 |  Proxy of C++ RadioButton class
 
 |  __init__(self, *args, **kwargs)
 |      __init__(self, Window parent, int id=-1, String label=EmptyString, 
 |          Point pos=DefaultPosition, Size size=DefaultSize, 
 |          long style=0, Validator validator=DefaultValidator, 
 |          String name=RadioButtonNameStr) -> RadioButton
```
* RadioButton类的构造函数与Button的构造函数基本一致，但是由于RadioButton的多选一功能，所以一个容器中只能选中所有实例化的RadioButton中的一个对象。
```Python
#!/usr/bin/env python
# encoding: gbk
'''
RadioButton
'''
from wx import *
if __name__ == "__main__":
    root = App()  # 创建主程序
    mainFrame = Frame(None)  # 在主程序之上建立一个一直显示的主窗口，用于与用户进行互动

    mainFrameBoxSizer = GridSizer(3, 1)  # 将Frame划分为3行一列，也即从中间进行划分为上中下三部分。

    b1 = RadioButton(mainFrame, label="rb1")
    b2 = RadioButton(mainFrame, label="rb2")
    b3 = RadioButton(mainFrame, label="rb3")

    mainFrameBoxSizer.Add(b1)  # 向box中添加第一个控件
    mainFrameBoxSizer.Add(b2)  # 向box中添加第二个控件
    mainFrameBoxSizer.Add(b3)  # 向box中添加第三个控件

    mainFrame.SetSizer(mainFrameBoxSizer)  # BoxSizer生效的最后一个步骤，依附的容器调用SetSizer方法。
    mainFrame.Show()  # 显示主窗口
    root.MainLoop()  # 使主程序一直运转
```

* 我们经常需要找到我们选中的是哪个RadioButton，并返回它的值，利用RadioButton与事件的互动先获取触发事件的按钮，然后获取按钮对应的label即可实现。
```Python
#!/usr/bin/env python
# encoding: gbk
'''
RadioButton
'''

from wx import *

def judge(evt):
    print evt.GetEventObject().GetLabel()

if __name__ == "__main__":
    root = App()  # 创建主程序
    mainFrame = Frame(None)  # 在主程序之上建立一个一直显示的主窗口，用于与用户进行互动

    mainFrameBoxSizer = GridSizer(3, 1)  # 将Frame划分为3行一列，也即从中间进行划分为上中下三部分。

    b1 = RadioButton(mainFrame, label="rb1")
    b2 = RadioButton(mainFrame, label="rb2")
    b3 = RadioButton(mainFrame, label="rb3")

    b1.Bind(EVT_RADIOBUTTON, handler=judge)  # 三个按钮均绑定judge事件
    b2.Bind(EVT_RADIOBUTTON, handler=judge)
    b3.Bind(EVT_RADIOBUTTON, handler=judge)

    mainFrameBoxSizer.Add(b1)  # 向box中添加第一个控件
    mainFrameBoxSizer.Add(b2)  # 向box中添加第二个控件
    mainFrameBoxSizer.Add(b3)  # 向box中添加第三个控件

    mainFrame.SetSizer(mainFrameBoxSizer)  # BoxSizer生效的最后一个步骤，依附的容器调用SetSizer方法。
    mainFrame.Show()  # 显示主窗口
    root.MainLoop()  # 使主程序一直运转
```
## 5、SpinButton类（用于代替C++中SpinButton类）
```C++
class SpinButton(wx._core.Control)
 |  Proxy of C++ SpinButton class
 
 |  __init__(self, *args, **kwargs)
 |      __init__(self, Window parent, int id=-1, Point pos=DefaultPosition, 
 |          Size size=DefaultSize, long style=SP_HORIZONTAL, 
 |          String name=SPIN_BUTTON_NAME) -> SpinButton
```

* 左右调节按钮SpinButton类，构造函数在Button类基础上减少了label参数，对于其三个属性值Min、Max、Value均设置有Get/Set两个基本方法。增添了style参数，控制左右调节按钮是否水平，缺省默认为水平普通样式(样式名称以SP\_开头)。
* IsVertical方法：确认按钮是否竖直，如果竖直返回true，反之false
```C++
|  IsVertical(*args, **kwargs)
|      IsVertical(self) -> bool
```

* SetRange方法：同时设置Min、Max。
* 由于SpinButton按钮是由两个按钮组合而成，所以其按钮绑定事件具有三种形式：EVT_SPIN_DOWN、EVT_SPIN_UP、EVT_SPIN，分别对应绑定下降按钮，绑定上升按钮，同时绑定两个按钮。
```C++
 |  SetRange(*args, **kwargs)
 |      SetRange(self, int minVal, int maxVal)
```
```Python
#!/usr/bin/env python
# encoding: gbk
'''
SpinButton
'''

from wx import *

def judge(evt):
    print "HI"

if __name__ == "__main__":
    root = App()  # 创建主程序
    mainFrame = Frame(None)  # 在主程序之上建立一个一直显示的主窗口，用于与用户进行互动

    mainFrameBoxSizer = GridSizer(2, 2)  # 将Frame划分为3行一列，也即从中间进行划分为上中下三部分。

    s1 = SpinButton(mainFrame, style=SP_3DSASH)  # 设置SpinButton为3Dsash样式

    s1.Bind(EVT_SPIN_DOWN, handler=judge)  # 将SpinButton减少按钮绑定事件judge

    mainFrameBoxSizer.Add(s1)  # 向box中添加第一个控件

    mainFrame.SetSizer(mainFrameBoxSizer)  # BoxSizer生效的最后一个步骤，依附的容器调用SetSizer方法。
    mainFrame.Show()  # 显示主窗口
    root.MainLoop()  # 使主程序一直运转
```
## 6、ToggleButton类--开关按钮（用于代替C++中ToggleButton类）
```C++
class ToggleButton(AnyButton)
 |  Proxy of C++ ToggleButton class
 
 |  __init__(self, *args, **kwargs)
 |      __init__(self, Window parent, int id=-1, String label=EmptyString, 
 |          Point pos=DefaultPosition, Size size=DefaultSize, 
 |          long style=0, Validator validator=DefaultValidator, 
 |          String name=ToggleButtonNameStr) -> ToggleButton
```
* 开关按钮ToggleButton类，与普通按钮构造函数完全一致，但是与普通按钮之间的区别是它具有两种状态，一种是开（对应初始状态--False），一种是关（对应按下状态--True），不会自动弹起。其中含有一个属性值Value对应开（False）、关(True)的状态，设置有Set/Get两个基本方法。
```Python
#!/usr/bin/env python
# encoding: gbk
'''
ToggleButton
'''

from wx import *

def judge(evt):
    print evt.GetEventObject().GetValue()

if __name__ == "__main__":
    root = App()  # 创建主程序
    mainFrame = Frame(None)  # 在主程序之上建立一个一直显示的主窗口，用于与用户进行互动

    mainFrameBoxSizer = GridSizer(2, 2)  # 将Frame划分为3行一列，也即从中间进行划分为上中下三部分。

    t1 = ToggleButton(mainFrame, label="Toggle Button")  # 设置ToggleButton

    t1.Bind(EVT_TOGGLEBUTTON, handler=judge)  # 将ToggleButton减少按钮绑定事件judge

    mainFrameBoxSizer.Add(t1)  # 向box中添加第一个控件

    mainFrame.SetSizer(mainFrameBoxSizer)  # BoxSizer生效的最后一个步骤，依附的容器调用SetSizer方法。
    mainFrame.Show()  # 显示主窗口
    root.MainLoop()  # 使主程序一直运转
```
