# 基本控件之文本篇
>利用```print help(TextCtrl)```获取详细信息，wx界面化设计时，使用最多的文本控件有两种TextCtrl（动态文本控件--可以从界面进行增删改）、StaticText(静态文本控件--只能从后台程序内部进行增删改)两大类文本控件。
## 虚基类
### TextAreaBase类
```C++
class TextAreaBase(__builtin__.object)
 |  multiline text control specific methods
```
* 多行文本框的虚基类，为多行文本框的控制提供了多种特定的方法。没有定义构造函数，无法进行实例化对象。
>- Get方法：获取文本框的相关信息
```C++
 |  GetDefaultStyle(*args, **kwargs)
 |      GetDefaultStyle(self) -> wxTextAttr
 |  
 |  GetLineLength(*args, **kwargs)
 |      GetLineLength(self, long lineNo) -> int
 |  
 |  GetLineText(*args, **kwargs)
 |      GetLineText(self, long lineNo) -> String
 |  
 |  GetNumberOfLines(*args, **kwargs)
 |      GetNumberOfLines(self) -> int
 |  
 |  GetStyle(*args, **kwargs)
 |      GetStyle(self, long position, wxTextAttr style) -> bool
```

>- LoadFile/SaveFile方法：导入文本文件中的内容到文本框/保存文本框内容到文件中。
```C++
 |  LoadFile(*args, **kwargs)
 |      LoadFile(self, String file, int fileType=wxTEXT_TYPE_ANY) -> bool
 |  SaveFile(*args, **kwargs)
 |      SaveFile(self, String file=wxEmptyString, int fileType=wxTEXT_TYPE_ANY) -> bool
```

>- Set方法：设置文本框的相关信息
```C++
 |  SetDefaultStyle(*args, **kwargs)
 |      SetDefaultStyle(self, wxTextAttr style) -> bool
 |  
 |  SetModified(*args, **kwargs)
 |      SetModified(self, bool modified)
 |  
 |  SetStyle(*args, **kwargs)
 |      SetStyle(self, long start, long end, wxTextAttr style) -> bool
```

### TextEntryBase类(C++中TextEntryBase的替代类)
```C++
class TextEntryBase(__builtin__.object)
 |  Proxy of C++ TextEntryBase class
```

* 文本框输入的虚基类，为多行文本框的输入控制定义了多种方法。无构造函数，无法进行实例化对象。
>- AppendText方法：在不改变原有文本域中文本的条件下，在文本域的最后进行添加文本操作。
```C++
 |  AppendText(*args, **kwargs)
 |      AppendText(self, String text)
 |      
 |      Add text to the end of the text field, without removing any existing
 |      text.  Will reset the selection if any.
```

>- Auto补全方法：自动补全文本框中的文本信息，共三类：普通自动补全、自动补全路径、自动补全文件名称
```C++
 |  AutoComplete(*args, **kwargs)
 |      AutoComplete(self, wxArrayString choices) -> bool
 |  
 |  AutoCompleteDirectories(*args, **kwargs)
 |      AutoCompleteDirectories(self) -> bool
 |  
 |  AutoCompleteFileNames(*args, **kwargs)
 |      AutoCompleteFileNames(self) -> bool
```

>- Can系列方法：判断当前文本域是否能进行编辑、复制、剪切、粘贴、重做、撤销等操作。
```C++
 |  IsEditable(*args, **kwargs)
 |      IsEditable(self) -> bool
 
 |  CanCopy(*args, **kwargs)
 |      CanCopy(self) -> bool
 |      
 |      Returns True if the text field has a text selection to copy to the
 |      clipboard.
 |  
 |  CanCut(*args, **kwargs)
 |      CanCut(self) -> bool
 |      
 |      Returns True if the text field is editable and there is a text
 |      selection to copy to the clipboard.
 |  
 |  CanPaste(*args, **kwargs)
 |      CanPaste(self) -> bool
 |      
 |      Returns True if the text field is editable and there is text on the
 |      clipboard that can be pasted into the text field.
 |  
 |  CanRedo(*args, **kwargs)
 |      CanRedo(self) -> bool
 |      
 |      Returns True if the text field is editable and the last undo can be
 |      redone.
 |  
 |  CanUndo(*args, **kwargs)
 |      CanUndo(self) -> bool
 |      
 |      Returns True if the text field is editable and the last edit can be
 |      undone.
```

>- ChangeValue方法：如名称，改变文本域中的内容，但是不产生文本改变事件。
>- SetValue方法：设置文本域中的内容，产生文本改变事件。
```C++
 |  ChangeValue(*args, **kwargs)
 |      ChangeValue(self, String value)
 |      
 |      Set the value in the text entry field.  Does not generate a text change event.
 
 |  SetValue(*args, **kwargs)
 |      SetValue(self, String value)
 |      
 |      Set the value in the text entry field.  Generates a text change event.
```

>- Clear/IsEmpty方法：清空文本域中的所有文本内容。判断文本域是否为空，为空则返回true。
```C++
 |  Clear(*args, **kwargs)
 |      Clear(self)
 |      
 |      Clear all text from the text field
 |  IsEmpty(*args, **kwargs)
 |      IsEmpty(self) -> bool
 |      
 |      Returns True if the value in the text field is empty.
```

>- Selection系列方法：
>>- HasSelection方法：判断是否有文本被选中，若有则返回true。
>>- GetSelection方法：获取选中的文本在文本域中的位置区间，(from，to]
>>- GetStringSelection方法：获取选中的文本内容。
>>- SetSelection方法：设置(from，to]区间内的文本被选中。
>>- SelectAll方法：选中所有文本。
```C++
 |  HasSelection(*args, **kwargs)
 |      HasSelection(self) -> bool
 |      
 |      Returns True if there is a non-empty selection in the text field.
 
 |  GetSelection(*args, **kwargs)
 |      GetSelection() -> (from, to)
 |      
 |      If the return values from and to are the same, there is no selection.
 
 |  GetStringSelection(*args, **kwargs)
 |      GetStringSelection(self) -> String
 |      
 |      Returns the selected text.
 
 |  SetSelection(*args, **kwargs)
 |      SetSelection(self, long from, long to)
 |      
 |      Selects the text starting at the first position up to (but not
 |      including) the character at the last position.  If both parameters are
 |      -1 then all text in the control is selected.
 
 |  SelectAll(*args, **kwargs)
 |      SelectAll(self)
 |      
 |      Select all text in the text field.
```

>- Cut/Copy/Paste/Redo/Undo/Remove方法：操作选中的文本。
```C++
 |  Copy(*args, **kwargs)
 |      Copy(self)
 |      
 |      Copies the selected text to the clipboard.
 |  
 |  Cut(*args, **kwargs)
 |      Cut(self)
 |  Paste(*args, **kwargs)
 |      Paste(self)
 |      
 |      Pastes text from the clipboard to the text field.
 |  
 |  Redo(*args, **kwargs)
 |      Redo(self)
 |      
 |      Redoes the last undo in the text field
 |  Undo(*args, **kwargs)
 |      Undo(self)
 |      
 |      Undoes the last edit in the text field
 |  RemoveSelection(*args, **kwargs)
 |      RemoveSelection(self)
```

>- Get/Set系列方法：获取文本域中的一些相关信息
>>- Get/SetInsertionPoint方法：获取插入点(即文本中的光标位置)，一个整数表示。设置插入点位置，一个整数表示。
>>- SetInsertionPointEnd方法：移动插入点到文本域的最后。
```C++
 |  GetInsertionPoint(*args, **kwargs)
 |      GetInsertionPoint(self) -> long
 |      
 |      Returns the insertion point for the combobox's text field.
 |  SetInsertionPoint(*args, **kwargs)
 |      SetInsertionPoint(self, long pos)
 |      
 |      Sets the insertion point in the combobox text field.
 |  
 |  SetInsertionPointEnd(*args, **kwargs)
 |      SetInsertionPointEnd(self)
 |      
 |      Move the insertion point to the end of the current value.
```

>>- GetRange方法：获取从整数from到to区间(from,to]的字符串。
>>- Replace方法：将整数from到to区间(from,to]的文本替换成目标字符串。
```C++
 |  GetRange(*args, **kwargs)
 |      GetRange(self, long from, long to) -> String
 |      
 |      Returns a subset of the value in the text field.
 |  Replace(*args, **kwargs)
 |      Replace(self, long from, long to, String value)
 |      
 |      Replaces the text between two positions with the given text.
```

>>- Get/SetHint：获取/设置文本线索（移动鼠标到文本上方不动进行显示的内容）
```C++  
 |  GetHint(*args, **kwargs)
 |      GetHint(self) -> String
 |  SetHint(*args, **kwargs)
 |      SetHint(self, String hint) -> bool
```

>>- Get/SetMargins：获取/设置边缘点
>>- SetMaxLength:设置单行文本的最大长度。
```C++
 |  GetMargins(*args, **kwargs)
 |      GetMargins(self) -> Point
 |  SetMargins(*args, **kwargs)
 |      SetMargins(self, Point pt) -> bool
 
 |  SetMaxLength(*args, **kwargs)
 |      SetMaxLength(self, long len)
 |      
 |      Set the max number of characters which may be entered in a single line
 |      text control.
```

>- WriteText方法：在当前插入点进行插入文本，若此时有文本被选中，则将选中文本也进行替换插入。
```C++
 |  WriteText(*args, **kwargs)
 |      WriteText(self, String text)
 |      
 |      Insert text at the current insertion point in the text field,
 |      replacing any text that is currently selected.
```

### TextCtrlBase类
```C++
class TextCtrlBase(Control, TextAreaBase, TextEntry)
 |  An abstract base class for wx.TextCtrl.
```

* 继承自TextAreaBase、TextEntry（继承自TextEntryBase）两个类的一个虚基类，作用于TextCtrl类。无构造函数，不能进行实例化对象。

### TextAttr类
```C++
class TextAttr(__builtin__.object)
 |  Proxy of C++ TextAttr class
 
 |  __init__(self, *args, **kwargs)
 |      __init__(self, Colour colText=wxNullColour, Colour colBack=wxNullColour, 
 |          Font font=wxNullFont, int alignment=TEXT_ALIGNMENT_DEFAULT) -> TextAttr
```

* 文本域中的样式类，用于控制文本的样式，从参数我们可以了解：
>- colText： 文本颜色
>- colBack: 文本背景色
>- font：字体
>- alignment：对齐方式（缺省为默认对齐方式）
* 样式类中提供了非常详细的Set/Get/Has方法对其中的涉及到的各个样式属性进行操作，通过```print help(TextAttr)```进行查看。
* font(字体)：可通过wx库中的字体选择对话框来了解支持的所有字体详细内容和参数。----颜色也同理，可通过颜色选择对话框了解。
```Python
    def OnSelectFont(self, evt):
        data = wx.FontData()
        data.EnableEffects(True)
        data.SetColour(self.curClr)         # set colour
        data.SetInitialFont(self.curFont)

        dlg = wx.FontDialog(self, data)
        
        if dlg.ShowModal() == wx.ID_OK:
            data = dlg.GetFontData()
            font = data.GetChosenFont()
            colour = data.GetColour()

            self.log.WriteText('You selected: "%s", %d points, color %s\n' %
                               (font.GetFaceName(), font.GetPointSize(),
                                colour.Get()))

            self.curFont = font
            self.curClr = colour
            self.UpdateUI()

        # Don't destroy the dialog until you get everything you need from the
        # dialog!
        dlg.Destroy()
```


## 动态文本控件TextCtrl类
```C++
class TextCtrl(wx._core.TextCtrlBase)
 |  Proxy of C++ TextCtrl class
 
 |  __init__(self, *args, **kwargs)
 |      __init__(self, Window parent, int id=-1, String value=EmptyString, 
 |          Point pos=DefaultPosition, Size size=DefaultSize, 
 |          long style=0, Validator validator=DefaultValidator, 
 |          String name=TextCtrlNameStr) -> TextCtrl
```

* **继承关系**：TextCtrl类继承了```wx._core.TextCtrlBase|wx._core.Control |wx._core.Window| wx._core.EvtHandler| wx._core.Object| wx._core.TextAreaBase|wx._core.TextEntry|wx._core.TextEntryBase | __builtin__.object```
* 在了解了上面三个虚基类之后，我们从TextCtrl类继承自TextCtrlBase类可知，它继承了TextAreaBase的文本框控制方法，也继承了TextEntryBase类的文本输入方法。 
* 同时在继承了EvtHandler，意味着TextCtrl拥有```EVT_```开头的事件互动参数，即也可以使用Bind方法来进行文本绑定事件。
* 构造函数中，style参数是一个长整型，wx库中自带了很多已经定义好的style:
>- wx.TE_MULTILINE : 多行文本框
>- wx.TE_AUTO_SCROLL:自动换行样式
>- wx.TE_PASSWORD: 密码框样式（以特定字符隐藏输入字符）
>- wx.TE_RICH2:富文本样式，文本域内的文本可以支持多种自定义样式（修改前景色、字体、背景色），通过SetStyle方法（设定(start,end]内的文本样式为style）进行设定。
```C++
 |  SetStyle(*args, **kwargs)
 |      SetStyle(self, long start, long end, wxTextAttr style) -> bool
```

>- wx.ALIGN_CENTER:居中对齐样式
>- wx.TE_CENTER：文本居中。

* 除了继承父类而来的一些方法之外，TextCtrl自身定义了一些方法:
>- IsMultiLine/IsSingleLine方法：是否多行、单行文本域
```C++
 |  IsMultiLine(*args, **kwargs)
 |      IsMultiLine(self) -> bool
 |  
 |  IsSingleLine(*args, **kwargs)
 |      IsSingleLine(self) -> bool
```

>- SendTextUpdatedEvent方法：生成文本更新事件。
```C++
 |  SendTextUpdatedEvent(*args, **kwargs)
 |      SendTextUpdatedEvent(self)
```

>- write方法：向文本域中写文本的方法，不推荐使用，可使用父类中的一些添加修改文本的一些方法。
```C++
 |  write(*args, **kwargs)
 |      write(self, String text)
```

```Python
#!/usr/bin/env python
# encoding: gbk
'''
TextCtrl
'''
from wx import *
def judge(evt):
    print evt.GetEventObject().GetSelection()  # 获取被选中文本的起点和终点
if __name__ == "__main__":
    root = App()  # 创建主程序
    mainFrame = Frame(None)  # 在主程序之上建立一个一直显示的主窗口，用于与用户进行互动

    mainFrameBoxSizer = GridSizer(3, 1)  # 将Frame划分为3行一列，也即从中间进行划分为上中下三部分。

    tc1 = TextCtrl(mainFrame, id=1, value="I'm is a TextCtrl-1！", style=wx.TE_MULTILINE | wx.TE_RICH )  # 多行文本框，富文本
    tc2 = TextCtrl(mainFrame, id=2, value="I'm is a TextCtrl-2！", style=wx.TE_AUTO_SCROLL)  # 自动换行
    tc3 = TextCtrl(mainFrame, id=3, value="I'm is a TextCtrl-3！")

    tc1.Bind(EVT_TEXT_ENTER, handler=judge)  # 将第一个文本框的回车按钮绑定judge事件
    tc1.SetEditable(False)  # 设置文本不可被修改
    tc1.SetStyle(3,8, TextAttr(colText="red", colBack="pink"))  # 自定义(3,8]的文本样式

    mainFrameBoxSizer.Add(tc1, flag=wx.EXPAND)  # 向box中添加第一个控件，并占满当前所在的格子（cell）
    mainFrameBoxSizer.Add(tc2)  # 向box中添加第二个控件
    mainFrameBoxSizer.Add(tc3)  # 向box中添加第三个控件

    mainFrame.SetSizer(mainFrameBoxSizer)  # BoxSizer生效的最后一个步骤，依附的容器调用SetSizer方法。
    mainFrame.Show()  # 显示主窗口
    root.MainLoop()  # 使主程序一直运转
```

## 静态文本控件StaticText类
```C++
class StaticText(wx._core.Control)
 |  Proxy of C++ StaticText class
 |  
 |  Method resolution order:
 |      StaticText
 |      wx._core.Control
 |      wx._core.Window
 |      wx._core.EvtHandler
 |      wx._core.Object
 |      __builtin__.object
 
 |  __init__(self, *args, **kwargs)
 |      __init__(self, Window parent, int id=-1, String label=EmptyString, 
 |          Point pos=DefaultPosition, Size size=DefaultSize, 
 |          long style=0, String name=StaticTextNameStr) -> StaticText
```

* 从继承关系来看，我们的静态文本控件只是继承了控件均会继承的几个虚基类，所以静态文本控件没有动态文本控件的那些控制和输入方法，所以静态文件不能在界面上进行修改。
* 从继承了EvtHandler类来看，静态文本也具有触发事件的本领，即利用Bind方法进行绑定。
* 静态文本控件继承自Window类，显示的文本也是以label参数传入，所有具有所有和按钮相同的控制方法。
```Python
#!/usr/bin/env python
# encoding: gbk
'''
StaticText
'''
from wx import *
def judge(evt):
    print evt.GetEventObject().GetLabel()  # 获取被选中文本的起点和终点

if __name__ == "__main__":
    root = App()  # 创建主程序
    mainFrame = Frame(None)  # 在主程序之上建立一个一直显示的主窗口，用于与用户进行互动

    mainFrameBoxSizer = GridSizer(3, 1)  # 将Frame划分为3行一列，也即从中间进行划分为上中下三部分。

    st1 = StaticText(mainFrame, id=1, label="I'm is a StaticText-1！", style=wx.TE_CENTER)  # 文本居中
    st2 = StaticText(mainFrame, id=2, label="I'm is a StaticText-2！")  # 默认居左
    st3 = StaticText(mainFrame, id=3, label="I'm is a StaticText-3！")

    st1.Bind(EVT_LEFT_DOWN, handler=judge)  # 将第一个文本框上的鼠标左键按下事件绑定judge函数

    mainFrameBoxSizer.Add(st1, flag=wx.EXPAND)  # 向box中添加第一个控件，并占满当前所在的格子（cell）
    mainFrameBoxSizer.Add(st2)  # 向box中添加第二个控件
    mainFrameBoxSizer.Add(st3)  # 向box中添加第三个控件

    mainFrame.SetSizer(mainFrameBoxSizer)  # BoxSizer生效的最后一个步骤，依附的容器调用SetSizer方法。
    mainFrame.Show()  # 显示主窗口
    root.MainLoop()  # 使主程序一直运转
```
