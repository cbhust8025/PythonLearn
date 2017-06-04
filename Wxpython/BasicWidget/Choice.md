# 基本控件之简单下拉框篇
> wxpython GUI提供了多种下拉框可供选择，基于Choice类的下拉框为简单的下拉框，无法进行修改选项，在控件出单击才会显示下拉框。可绑定事件```EVT_CHOICE```与下拉框选择item动作进行下拉框互动。利用```print help(wx.Choice)```获取详细信息。
## Choice类：
```C++
class Choice(wx._core.ControlWithItems)
 |  A Choice control is used to select one of a list of strings.
 |  Unlike a `wx.ListBox`, only the selection is visible until the
 |  user pulls down the menu of choices.
 
 |  __init__(self, *args, **kwargs)
 |      __init__(Window parent, int id, Point pos=DefaultPosition, Size size=DefaultSize,
 |          List choices=EmptyList, long style=0, Validator validator=DefaultValidator,
 |          String name=ChoiceNameStr) -> Choice
```

* 下拉框均基于Choice类进行实例化，继承自``` 
 |      wx._core.ControlWithItems
 |      wx._core.Control
 |      wx._core.Window
 |      wx._core.EvtHandler
 |      wx._core.Object
 |      wx._core.ItemContainer
 |      __builtin__.object | ```,可以利用事件```EVT_CHOICE```进行互动。其大多数方法满足一般的wx控件方法，其自身特定的方法极少。
* GetCurrentSelection方法：唯一的自定义方法，获取当前下拉框选择的第几项，返回的是一个int，表示选择的是第几项,仅当进行了选择之后调用才会有效。
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

## ChoiceBook类
```C++
class Choicebook(wx._core.BookCtrlBase)
 |  Proxy of C++ Choicebook class.wx.Choicebook is yet another way to switch between 'page' windows
 
  |  __init__(self, *args, **kwargs)
 |      __init__(self, Window parent, int id, Point pos=DefaultPosition, Size size=DefaultSize, 
 |          long style=0, String name=EmptyString) -> Choicebook
```

* 基于Choice类思想的一种类，目的是为了实现另外一种选择多页面的操作，利用下拉框来选择不同的页面。
* 继承自``` |      wx._core.BookCtrlBase
 |      wx._core.Control
 |      wx._core.Window
 |      wx._core.EvtHandler
 |      wx._core.Object
 |      wx._core.WithImages
 |      __builtin__.object```，同样利用事件```EVT_CHOICEBOOK_PAGE_CHANGED```以及```EVT_CHOICEBOOK_PAGE_CHANGING```来进行互动。

* GetChoiceCtrl方法：唯一的自定义方法，返回值为下拉框对象（Choice对象）。
```C++
 |  GetChoiceCtrl(*args, **kwargs)
 |      GetChoiceCtrl(self) -> Choice
```
