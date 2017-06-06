# 基础控件之下拉列表框篇--组合框
> ComboBox是一个组合框，组合了一个单行文本框(TextCtrl)、一个向下箭头图片的按钮（BitmapButton）、一个ListBox类(列表箱)对象的一种控件，当按下按钮时，列表框就会出现，仅能从提供的选项中进行选择。

## ComboBox类
```C++
class ComboBox(Choice, wx._core.TextEntry)
 |  A combobox is like a combination of an edit control and a
 |  listbox. It can be displayed as static list with editable or
 |  read-only text field; or a drop-down list with text field.
 |  A combobox permits a single selection only. Combobox items are
 |  numbered from zero.
 
  |  __init__(self, *args, **kwargs)
 |      __init__(Window parent, int id=-1, String value=EmptyString,
 |          Point pos=DefaultPosition, Size size=DefaultSize,
 |          List choices=EmptyList, long style=0, Validator validator=DefaultValidator,
 |          String name=ComboBoxNameStr) -> ComboBox
 |      
 |      Constructor, creates and shows a ComboBox control.
```

* 组合框可以作为可编辑的静态文本列表展示，或者是只读的文本域展示，或者是具有文本域的下拉列表。仅提供一维选择索引，且从0开始。
* 组合框可以看做是一个TextCtrl控件+一个Choice控件+一个BitmapButton控件组成，所有具有的特性均从这三个控件出发，具有诸多的限制。
* 继承自``` |     Choice
 |      wx._core.ControlWithItems
 |      wx._core.Control
 |      wx._core.Window
 |      wx._core.EvtHandler
 |      wx._core.Object
 |      wx._core.ItemContainer
 |      wx._core.TextEntry
 |      wx._core.TextEntryBase
 |      __builtin__.object | ```等类。

* style：combobox控件具有四种style
>- wx.CB_DROPDOWN:默认模式
>- wx.CB_READONLY:只读模式，整个文本框变为下拉框的启动按钮，并且无法修改选择的内容
>- wx.CB_SIMPLE
>- wx.CB_SORT
* 具有下列自定义方法：
>* GetCurrentSelection方法:获取当前选择的item的索引，从0开始，int型
```C++
 |  GetCurrentSelection(*args, **kwargs)
 |      GetCurrentSelection(self) -> int
 |      
 |      Unlike `GetSelection` which only returns the accepted selection value,
 |      i.e. the selection in the control once the user closes the dropdown
 |      list, this function returns the current selection.  That is, while the
 |      dropdown list is shown, it returns the currently selected item in
 |      it. When it is not shown, its result is the same as for the other
 |      function.
```
>* GetMark/SetMark方法：获取选中区域的区间，或者设置区间的item选中
```C++
 |  GetMark(*args, **kwargs)
 |      GetMark(self) -> (from, to)
 |      
 |      Gets the positions of the begining and ending of the selection mark in
 |      the combobox text field.
 
 |  SetMark(*args, **kwargs)
 |      SetMark(self, long from, long to)
 |      
 |      Selects the text between the two positions in the combobox text field.
```
>* IsEmpty/IsListEmpty/IsTextEmpty方法：
```C++
 |  IsEmpty(*args, **kwargs)
 |      IsEmpty(self) -> bool
 |  
 |  IsListEmpty(*args, **kwargs)
 |      IsListEmpty(self) -> bool
 |  
 |  IsTextEmpty(*args, **kwargs)
 |      IsTextEmpty(self) -> bool
```

>* SetStringSelection方法:
```C++
 |  SetStringSelection(*args, **kwargs)
 |      SetStringSelection(self, String string) -> bool
 |      
 |      Select the item with the specifed string
```
## wx.combo.ComboPopup类
```Python
from wx.combo import ComboPopup
```
```C++
class ComboPopup(__builtin__.object)
 |  In order to use a custom popup with `wx.combo.ComboCtrl` an interface
 |  class derived from wx.combo.ComboPopup is used to manage the interface
 |  between the popup control and the popup.  You can either derive a new
 |  class from both the widget class and this ComboPopup class, or the
 |  derived class can have a reference to the widget used for the popup.
 |  In either case you simply need to return the widget from the
 |  `GetControl` method to allow the ComboCtrl to interact with it.
 |  
 |  Nearly all of the methods of this class are overridable in Python.
 
 |  __init__(self, *args, **kwargs)
 |      __init__(self) -> ComboPopup
 |      
 |      Constructor
```

* ComboPopup类是专为ComboCtrl类实现自定义下拉框进行设计的一个封装类，封装了一些下拉框的自定义设置。
* 可以从ComboPopup类和其他的一些控件类继承一个新的子类，或者从这些子类再次继承，来获得一些新的类以便控制对应控件的下拉框。
```Python
class ListCtrlComboPopup(wx.ListCtrl, wx.combo.ComboPopup):
    def __init__(self, log=None):
        if log:
            self.log = log
        else:
            self.log = NullLog()
        # Since we are using multiple inheritance, and don't know yet
        # which window is to be the parent, we'll do 2-phase create of
        # the ListCtrl instead, and call its Create method later in
        # our Create method.  (See Create below.)
        self.PostCreate(wx.PreListCtrl())

        # Also init the ComboPopup base class.
        wx.combo.ComboPopup.__init__(self)
```

* 重点来看一些ComboPopup的一些内置方法，也就是控制下拉框样式和下拉框本身的一些设置方法：
>- DestroyPopup:销毁下拉框对象
```C++
 |  DestroyPopup(*args, **kwargs)
 |      DestroyPopup(self)
```

>- Dismiss方法：隐藏下拉框
```C++
 |  Dismiss(*args, **kwargs)
 |      Dismiss(self)
 |      
 |      Hides the popup
```

>- FindItem方法：寻找某个item是否在下拉框的所有items之中。返回值为bool值
```C++
 |  FindItem(*args, **kwargs)
 |      FindItem(self, String item) -> bool
```

>- GetAdjustedSize：获取下拉框的大小，此函数将会在每次下拉的时候进行调用，并且在```OnPopup```函数之前进行调用。
```C++
 |  GetAdjustedSize(*args, **kwargs)
 |      GetAdjustedSize(self, int minWidth, int prefHeight, int maxHeight) -> Size
 |      
 |      The derived class may implement this method to return adjusted size
 |      for the popup control, according to the variables given.  It is called
 |      on every popup, just prior to `OnPopup`.
 |      
 |          :param minWidth:    Preferred minimum width.
 |          :param prefHeight:  Preferred height. May be -1 to indicate no preference.
 |          :maxWidth:          Max height for window, as limited by screen size, and
 |                              should only be rounded down, if necessary.
```

>- GetCombo:获取下拉框所在的组合框对象,返回值为一个ComboCtrl类型的对象
```C++
 |  GetCombo(*args, **kwargs)
 |      GetCombo(self) -> ComboCtrl
 |      
 |      Returns a reference to the `wx.combo.ComboCtrl` this ComboPopup object
 |      is associated with.
 
 |  GetComboCtrl(*args, **kwargs)
 |      GetComboCtrl(self) -> wxComboCtrl
 |      
 |      Returns the associated parent ComboCtrl.
```

>- GetControl方法：当使用下拉框类和其他的控件类生成一个基于其他控件的下拉框设置子类，则使用此方法可以获取相应的父类控件类对象。
```C++
 |  GetControl(*args, **kwargs)
 |      GetControl(self) -> Window
 |      
 |      The derived class must implement this method and it should return a
 |      reference to the widget created in the `Create` method.  If the
 |      derived class inherits from both the widget class and ComboPopup then
 |      the return value is probably just ``self``.
```

>- GetStringValue方法：获取当前下拉框选择的值。
```C++
 |  GetStringValue(*args, **kwargs)
 |      GetStringValue(self) -> String
 |      
 |      Gets the string representation of the currently selected value to be
 |      used to display in the combo widget.
```

>- Init方法：构造函数，继承子类将会重写此函数做一些额外的初始化操作。
```C++
 |  Init(*args, **kwargs)
 |      Init(self)
 |      
 |      This method is called after the popup is contructed and has been
 |      assigned to the ComboCtrl.  Derived classes can override this to do
 |      extra inialization or whatever.
```

>- OnDismiss:下拉框隐藏后将会调用此函数，每次下拉框显示之后选择某个item之后下拉框将会隐藏，此时将会调用此函数。
```c++
 |  OnDismiss(*args, **kwargs)
 |      OnDismiss(self)
 |      
 |      The derived class may implement this to do special processing when
 |      popup is hidden.
```

>- OnPopup:点击下拉框下拉按钮将会显示下拉框，当显示下拉框时将会调用此函数，如果想要在显示的同时实现一些操作，则可重写此函数来进行实现。
```C++
 |  OnPopup(*args, **kwargs)
 |      OnPopup(self)
 |      
 |      The derived class may implement this to do special processing when
 |      popup is shown.
```

>- SetStringValue：设置文本，仅在下拉框显示（Onpopup函数）之后进行调用，即设置默认的选项。
```C++
 |  OnPopup(*args, **kwargs)
 |      OnPopup(self)
 |      
 |      The derived class may implement this to do special processing when
 |      popup is shown.
```

## wx.combo.ComboCtrl类：
```python
from wx.combo import ComboCtrl
```
```C++
class ComboCtrl(wx._core.Control, wx._core.TextEntry)
 |  A combo control is a generic combobox that allows for a totally custom
 |  popup. In addition it has other customization features. For instance,
 |  position and size of the dropdown button can be changed.
 |  
 |  To specify what to use for the popup control you need to derive a
 |  class from `wx.combo.ComboPopup` and pass it to the ComboCtrl with
 |  `SetPopupControl`.  It doesn't derive from any widget class so it can
 |  be used either as a mixin class combined with some standard or custom
 |  widget, or you can use the derived ComboPopup to create and hold an
 |  independent reference to the widget to be used for the popup.
 
 |  __init__(self, *args, **kwargs)
 |      __init__(self, Window parent, int id=ID_ANY, String value=wxEmptyString, 
 |          Point pos=DefaultPosition, Size size=DefaultSize, 
 |          long style=0, Validator validator=DefaultValidator, 
 |          String name=ComboBoxNameStr) -> ComboCtrl
```

* comboctrl是一个允许自定义下拉框样式的通用combobox（组合框），并且还可以自定义其他的特性，例如下拉按钮的位置和大小。
* 为了自定义下拉框的样式，必须首先实例化一个继承自wx.combo.ComboPopup类的子类对象，并且利用ComboCtrl的内置方法```SetPopupControl```传入此对象进行设置下拉框的样式。一般我们需要多样式下拉列表，可以利用[ListCtrl类](https://github.com/cbhust8025/PythonLearn/blob/master/Wxpython/BasicWidget/ListCtrl.md)，使用简单的下拉列表，使用ListBook类。其中继承自ListCtrl类和ComboPopup类的子类对象需要使用PostCreate方法来初始化父类对象（PreListCtrl），然后重写ListCtrl类的Create方法以及GetControl方法才能正常使用。
```Python
class ComboPopupBase(ListCtrl, wx.combo.ComboPopup):
    def __init__(self, log=None):
        # Since we are using multiple inheritance, and don't know yet
        # which window is to be the parent, we'll do 2-phase create of
        # the ListCtrl instead, and call its Create method later in
        # our Create method.  (See Create below.)
        self.PostCreate(wx.PreListCtrl())

        # Also init the ComboPopup base class.
        wx.combo.ComboPopup.__init__(self)
        
     # 另写配置列表子类列表的函数，在实例化子类后进行调用配置子类中的文本等内容
    # def ConfigureListCtrl(self):
    # 
    #     self.InsertColumn(1, "Title")
    #     self.InsertColumn(2, "Genreasdadsadsad")
    #     self.InsertColumn(3, "Genad")
    #     self.SetColumnWidth(0, 200)
    #     self.SetColumnWidth(1, 200)
    #     self.SetColumnWidth(2, 200)
    # 
    #     # 添加三行
    #     # list.Append(["asa1", "asa2", "asa3", "asa4"])  # 超过当前的列数，触发中断错误
    #     self.Append(["asa1", "asa2", "asa3"])
    #     self.Append(["asb1", "asb2", "asb3"])
    #     self.Append(["asc1", "asc2", "asc3"])
    #     self.Append(["asd1asdsadasdsadsadsadasd", "asd2", "asd3"])
    # Create the popup child control.  Return true for success.
    def Create(self, parent):
        # 初始化列表框对象，必须重写的第三个函数
        wx.ListCtrl.Create(self, parent,
                           style=wx.LC_REPORT)
        # self.curitem = -1
        # self.Bind(wx.EVT_MOTION, self.OnMotion)  # 给列表框绑定鼠标滑动事件
        # self.Bind(wx.EVT_LEFT_DOWN, self.OnLeftDown)  # 给列表框绑定鼠标左键单击事件
        return True  # 返回True表示构建列表框成功

    # Return the widget that is to be used for the popup
    def GetControl(self):
        # 必须重写的函数之一，用于创建组合框中的列表框来寻找自己的父窗口
        # self.log.write("ListCtrlComboPopup.GetControl")
        return self
if __name__ == "__main__":
    root = App()  # 创建主程序
    mainFrame = Frame(None, size=(1000, 100))  # 在主程序之上建立一个一直显示的主窗口，用于与用户进行互动
    mainFrame.Centre()  # 使主窗口居中
    box = BoxSizer(wx.VERTICAL)  # 设置自动布局，竖直方向
    b1 = wx.combo.ComboCtrl(parent=mainFrame, style=wx.CB_DROPDOWN)  # 初始化只读格式的组合框

    cp = ComboPopupBase()  # 初始化组合框里面的列表框

    b1.SetPopupControl(cp)  # 将列表框嵌入进组合框

    box.Add(b1, flag=wx.EXPAND)  # 将组合框自动布局
    mainFrame.SetSizer(box)
    mainFrame.Show()  # 显示主窗口
    root.MainLoop()  # 使主程序一直运转
```

* ComboCtrl类继承自``` |      wx._core.Control
 |      wx._core.Window
 |      wx._core.EvtHandler
 |      wx._core.Object
 |      wx._core.TextEntry
 |      wx._core.TextEntryBase
 |      __builtin__.object | ```等类，其中[TextEntry和TextEntryBase类](https://github.com/cbhust8025/PythonLearn/blob/master/Wxpython/BasicWidget/Text.md)是动态文本控件的基类，EvtHandler类表明ComboCtrl也有其特定的事件来进行互动。
 
* AnimateShow/DoShowPopup方法：控制列表控件的显示问题
* DestroyPopup方法：摧毁列表框。
```C++
 |  AnimateShow(*args, **kwargs)
 |      AnimateShow(self, Rect rect, int flags) -> bool
 |      
 |      Implement in derived class to create a drop-down animation.  Return
 |      ``True`` if finished immediately. Otherwise the popup is only shown when the
 |      derived class calls `DoShowPopup`.  Flags are same as for `DoShowPopup`.
 |  
 |  DestroyPopup(*args, **kwargs)
 |      DestroyPopup(self)
 |  
 |  Dismiss(*args, **kwargs)
 |      Dismiss(self)
 |  
 |  DoShowPopup(*args, **kwargs)
 |      DoShowPopup(self, Rect rect, int flags)
 |      
 |      Shows and positions the popup.
 |      
 |      Flags:
 |          ============  =====================================================
 |          ShowBelow     Showing popup below the control
 |          ShowAbove     Showing popup above the control
 |          CanDeferShow  Can only return true from AnimateShow if this is set
 |          ============  =====================================================
```

* Get系列方法：获取控件的一些基本信息，源码说明后附有一些函数的测试代码。

>* GetMark/GetSelection:当ComboCtrl文本区域为非只读时，即可以选中，则调用此函数可以返回选中的索引（from,end]。

>* GetButton/GetButtonSize方法：获取下拉按钮（大小），获取的下拉按钮类型为None，而不是Button类型。（第一部分）

>* GetPopupControl方法：获取设置的ComboPopup类型。（第二部分）

>* GetTextCtrl方法：获取ComboCtrl的第三部分TextCtrl部分，返回类型为TextCtrl类型。（第三部分）

>>* GetTextIndent-->int

>>* GetTextRect-->Rect

>>* GetValue-->String：获取文本控件的文本内容。
```Python
 |  GetBackgroundColour(*args, **kwargs)
 |      GetBackgroundColour(self) -> Colour
 |      
 |      Returns the background colour of the window.
 |  
 |  GetBitmapDisabled(*args, **kwargs)
 |      GetBitmapDisabled(self) -> Bitmap
 |  
 |  GetBitmapHover(*args, **kwargs)
 |      GetBitmapHover(self) -> Bitmap
 |  
 |  GetBitmapNormal(*args, **kwargs)
 |      GetBitmapNormal(self) -> Bitmap
 |  
 |  GetBitmapPressed(*args, **kwargs)
 |      GetBitmapPressed(self) -> Bitmap
 |  
 |  GetButton(*args, **kwargs)
 |      GetButton(self) -> Window
 |      
 |      Get the dropdown button which is part of the combobox.  Note: it's not
 |      necessarily a wx.Button or wx.BitmapButton.
 |  
 |  GetButtonSize(*args, **kwargs)
 |      GetButtonSize(self) -> Size
 |      
 |      Returns current size of the dropdown button.
 |  
 |  GetCustomPaintWidth(*args, **kwargs)
 |      GetCustomPaintWidth(self) -> int
 |  
 |  GetInternalFlags(*args, **kwargs)
 |      GetInternalFlags(self) -> unsigned int
 |  
 |  GetMargins(*args, **kwargs)
 |      GetMargins(self) -> Point
 |  
 |  GetMark = GetSelection(*args, **kwargs)
 |      GetSelection() -> (from, to)
 |      
 |      If the return values from and to are the same, there is no selection.
 |  
 |  GetPopupControl(*args, **kwargs)
 |      GetPopupControl(self) -> ComboPopup
 |      
 |      Returns the current popup interface that has been set with
 |      `SetPopupControl`.
 |  
 |  GetPopupWindow(*args, **kwargs)
 |      GetPopupWindow(self) -> Window
 |      
 |      Returns the popup window containing the popup control.
 |  
 |  GetPopupWindowState(*args, **kwargs)
 |      GetPopupWindowState(self) -> int
 |  
 |  GetTextCtrl(*args, **kwargs)
 |      GetTextCtrl(self) -> TextCtrl
 |      
 |      Get the text control which is part of the combo control.
 |  
 |  GetTextIndent(*args, **kwargs)
 |      GetTextIndent(self) -> int
 |      
 |      Returns actual indentation in pixels.
 |  
 |  GetTextRect(*args, **kwargs)
 |      GetTextRect(self) -> Rect
 |      
 |      Returns area covered by the text field (includes everything except
 |      borders and the dropdown button).
 |  
 |  GetValue(*args, **kwargs)
 |      GetValue(self) -> String
 |      
 |      Returns text representation of the current value. For writable combo
 |      control it always returns the value in the text field.
 
# Test ComboCtrl property
print b1.GetBackgroundColour()  # (171, 171, 171, 255)

print b1.GetButton()  # None --不属于Button类型

print b1.GetButtonSize()  # (17, 25)

print b1.GetCustomPaintWidth()  # 0
print b1.GetInternalFlags()  # 296

print b1.GetMark()  # （0,0）
print b1.GetSelection()  # （0,0）

print type(b1.GetPopupControl())  # <class 'wx.combo.ComboPopup'>
print type(b1.GetPopupWindow())  # <class 'wx._windows.PopupWindow'>
```

* 状态信息方法：

>* HidePopup方法：隐藏列表控件

>* IsCreated方法：返回当前控件的Create方法是否调用成功

>* IsKeyPopupToggle：返回当前的列表框是否与键盘按键绑定。

>* IsPopupShown:返回列表框是否在显示。

>* IsPopupWindowState:与GetPopupWindowState方法一起使用。
```Python
 |  IsCreated(*args, **kwargs)
 |      IsCreated(self) -> bool
 |      
 |      Return true if Create has finished
 |  
 |  IsKeyPopupToggle(*args, **kwargs)
 |      IsKeyPopupToggle(self, KeyEvent event) -> bool
 |      
 |      Returns true if given key combination should toggle the popup.
 |  
 |  IsPopupShown(*args, **kwargs)
 |      IsPopupShown(self) -> bool
 |      
 |      Returns true if the popup is currently shown.
 |  
 |  IsPopupWindowState(*args, **kwargs)
 |      IsPopupWindowState(self, int state) -> bool
```

* OnButtonClick:默认的下拉框按钮调用函数，默认的行为是显示列表框，即调用列表框的OnPopup函数。
```Python
|  OnButtonClick(*args, **kwargs)
 |      OnButtonClick(self)
 |      
 |      Implement in a derived class to define what happens on dropdown button
 |      click.  Default action is to show the popup.
```

* OnPopupDismiss:常规方法，使列表框隐藏。
```Python 
 |  OnPopupDismiss(*args, **kwargs)
 |      OnPopupDismiss(self, bool generateEvent)
 |      
 |      Common code to be called on popup hide/dismiss
```

* PrepareBackground方法：为组合框准备背景，除非自己画，则总是调用wx.combo.ComboPupop::PaintComboControl函数来进行实现。---**没弄懂！**
```Python
 |  PrepareBackground(*args, **kwargs)
 |      PrepareBackground(self, DC dc, Rect rect, int flags)
 |      
 |      Prepare background of combo control or an item in a dropdown list in a
 |      way typical on platform. This includes painting the focus/disabled
 |      background and setting the clipping region.  Unless you plan to paint
 |      your own focus indicator, you should always call this in your
 |      wxComboPopup::PaintComboControl implementation.  In addition, it sets
 |      pen and text colour to what looks good and proper against the
 |      background.
 |      
 |      flags are the same as wx.RendererNative flags:
 |      
 |          ======================   ============================================
 |          wx.CONTROL_ISSUBMENU     drawing a list item instead of combo control
 |          wx.CONTROL_SELECTED      list item is selected
 |          wx.CONTROL_DISABLED       control/item is disabled
 |          ======================   ============================================
```

* Set系列方法：部分Set方法与Get方法呼应，不再赘述。

>* SetButtonBitmaps方法：设置带图像的按钮。

>* SetButtonPosition方法：设置按钮的位置。side参数表示按钮处于组合框的左边还是右边（默认RIGHT，可选LEFT）

>* SetPopupControl方法：实例化组合框之后的必须调用方法，设置组合框的列表框
```Python
 |  SetButtonBitmaps(*args, **kwargs)
 |      SetButtonBitmaps(self, Bitmap bmpNormal, bool pushButtonBg=False, Bitmap bmpPressed=wxNullBitmap, 
 |          Bitmap bmpHover=wxNullBitmap, 
 |          Bitmap bmpDisabled=wxNullBitmap)
 |      
 |      Sets custom dropdown button graphics.
 |      
 |          :param bmpNormal:  Default button image
 |          :param pushButtonBg: If ``True``, blank push button background is painted below the image.
 |          :param bmpPressed:  Depressed button image.
 |          :param bmpHover:  Button image to use when the mouse hovers over it.
 |          :param bmpDisabled: Disabled button image.
 |  
 |  SetButtonPosition(*args, **kwargs)
 |      SetButtonPosition(self, int width=-1, int height=-1, int side=RIGHT, int spacingX=0)
 |      
 |      Set the position of the dropdown button.
 |  
 |  SetCtrlMainWnd(*args, **kwargs)
 |      SetCtrlMainWnd(self, Window wnd)
 |  
 |  SetCustomPaintWidth(*args, **kwargs)
 |      SetCustomPaintWidth(self, int width)
 |      
 |      Set width, in pixels, of custom painted area in control without
 |      wx.CB_READONLY style. In read-only OwnerDrawnComboBox, this is used
 |      to indicate the area that is not covered by the focus rectangle.
 |  
 |  SetMargins(*args)
 |      SetMargins(self, Point pt) -> bool
 |      SetMargins(self, int left, int top=-1) -> bool
 |  
 |  SetMark = SetSelection(*args, **kwargs)
 |      SetSelection(self, long from, long to)
 |      
 |      Selects the text starting at the first position up to (but not
 |      including) the character at the last position.  If both parameters are
 |      -1 then all text in the control is selected.
 |  
 |  SetPopupAnchor(*args, **kwargs)
 |      SetPopupAnchor(self, int anchorSide)
 |      
 |      Set side of the control to which the popup will align itself. Valid
 |      values are wx.LEFT, wx.RIGHT and 0. The default value 0 means that the
 |      most appropriate side is used (which, currently, is always wx.LEFT).
 |  
 |  SetPopupControl(*args, **kwargs)
 |      SetPopupControl(self, ComboPopup popup)
 |      
 |      Set popup interface class derived from `wx.combo.ComboPopup`. This
 |      method should be called as soon as possible after the control has been
 |      created, unless `OnButtonClick` has been overridden.
 |  
 |  SetPopupExtents(*args, **kwargs)
 |      SetPopupExtents(self, int extLeft, int extRight)
 |      
 |      Extends popup size horizontally, relative to the edges of the combo
 |      control.  Values are given in pixels, and the defaults are zero.  It
 |      is up to the popup to fully take these values into account.
 |  
 |  SetPopupMaxHeight(*args, **kwargs)
 |      SetPopupMaxHeight(self, int height)
 |      
 |      Sets preferred maximum height of the popup. A value of -1 indicates to
 |      use the default.  The popup implementation may choose to ignore this.
 |  
 |  SetPopupMinWidth(*args, **kwargs)
 |      SetPopupMinWidth(self, int width)
 |      
 |      Sets minimum width of the popup. If wider than combo control, it will
 |      extend to the left.  A value of -1 indicates to use the default.  The
 |      popup implementation may choose to ignore this.
 |  
 |  SetText(*args, **kwargs)
 |      SetText(self, String value)
 |      
 |      Sets the text for the text field without affecting the popup. Thus,
 |      unlike `SetValue`, it works equally well with combo control using
 |      wx.CB_READONLY style.
 |  
 |  SetTextCtrlStyle(*args, **kwargs)
 |      SetTextCtrlStyle(self, int style)
 |      
 |      Set a custom window style for the embedded wxTextCtrl. Usually you
 |      will need to use this during two-step creation, just before Create().
 |      For example::
 |      
 |          class MyComboCtrl(wx.combo.ComboCtrl):
 |              def __init__(self, *args, **kwargs):
 |                  pre = wx.combo.PreComboCtrl()
 |                  # Let's make the text right-aligned
 |                  pre.SetTextCtrlStyle(wx.TE_RIGHT)
 |                  pre.Create(*args, **kwargs);
 |                  self.PostCreate(pre)
 |  
 |  SetTextIndent(*args, **kwargs)
 |      SetTextIndent(self, int indent)
 |      
 |      This will set the space in pixels between left edge of the control and
 |      the text, regardless whether control is read-only or not. A value of -1 can
 |      be given to indicate platform default.
 |  
 |  SetValueByUser(*args, **kwargs)
 |      SetValueByUser(self, String value)
 |  
 |  SetValueWithEvent(*args, **kwargs)
 |      SetValueWithEvent(self, String value, bool withEvent=True)
 |      
 |      Same as `SetValue`, but also sends a EVT_TEXT event if withEvent is true.
```

>* ShowPopup方法：显示列表框。
```Python
 |  ShowPopup(*args, **kwargs)
 |      ShowPopup(self)
 |      
 |      Show the popup window.
```

* 用到的一些常数：
```Python
 |  Animating = 2
 |  
 |  CanDeferShow = 2
 |  
 |  Hidden = 0
 |  
 |  ShowAbove = 1
 |  
 |  ShowBelow = 0
 |  
 |  Visible = 3
```
