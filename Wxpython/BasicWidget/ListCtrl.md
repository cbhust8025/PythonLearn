# 基础控件之列表控件篇
> wxpython提供了简单列表以及复杂列表来进行列表相关的控件操作，简单列表一般是以一维形式出现，从上到下依次列出相应的元素（item），复杂列表在简单列表的基础上，增加了维度，使得list可以出现二维列表，即listctrl既可以实现一个多行一列的list，同时也可以实现多行多列类似于excel表格形式的list。同时表格中的元素也变得多种多样，可以是文字，可以说图片，可以是进度栏等等各式各样的元素。看似两个控件是继承关系，其实质上并不是继承关系，而是分别继承自wx._core内的ControlWithItems/Control类，具有各自特有的方法，不能类比过来。

## ListBox类
```C++
class ListBox(wx._core.ControlWithItems)
 |  Proxy of C++ ListBox class
 
 |  __init__(self, *args, **kwargs)
 |      __init__(self, Window parent, int id=-1, Point pos=DefaultPosition, 
 |          Size size=DefaultSize, wxArrayString choices=wxPyEmptyStringArray, 
 |          long style=0, Validator validator=DefaultValidator, 
 |          String name=ListBoxNameStr) -> ListBox
```

* 继承关系：继承自``` |      wx._core.ControlWithItems
 |      wx._core.Control
 |      wx._core.Window
 |      wx._core.EvtHandler
 |      wx._core.Object
 |      wx._core.ItemContainer
 |      __builtin__.object | ``` ,同样的继承自EvtHandler即说明可以绑定事件，进行互动。
* 初始化时必须提供父类控件，然后如果不提供字符串列表choices参数，则为空列表内容。
* 列表控件提供了一系列get/set方法，来进行操作列表内的元素（item）：（简单列表，只有一维坐标，并且从0开始索引）
>* AppendAndEnsureVisible方法：在列表最后添加一个确保可见的元素（字符串形式）。
```C++
 |  AppendAndEnsureVisible(*args, **kwargs)
 |      AppendAndEnsureVisible(self, String s)
```

>* Deselect/DeselectAll方法：取消选中某一个item，传入想要取消item的索引, itemToleaveSelected表示指定某个元素，取消选择其他所有的元素，当前元素若选中则依然选中，若未选中则不进行选中，-1表示取消选择所有元素。
```C++
 |  Deselect(*args, **kwargs)
 |      Deselect(self, int n)
 
  |  DeselectAll(*args, **kwargs)
 |      DeselectAll(self, int itemToLeaveSelected=-1)
```

>* Insert方法：插入某个item（字符串形式）到某个pos（int）位置上，
```C++
 |      Insert(self, String item, int pos, PyObject clientData=None)
 |      
 |      Insert an item into the control before the item at the ``pos`` index,
 |      optionally associating some data object with the item.
```

>* InsertItems方法：插入一个列表到某个pos(int)位置上.
```C++
 |  InsertItems(*args, **kwargs)
 |      InsertItems(self, wxArrayString items, unsigned int pos)
```

>* IsSelected方法：判断某个位置pos(int)上面的元素是否被选中。 返回bool型变量。
```C++
 |  IsSelected(*args, **kwargs)
 |      IsSelected(self, int n) -> bool
```
>* Select方法（同SetSelection）：选中某个位置上的元素。SetSelection函数的select参数表示是否选中，默认True表示选中元素。
```C++
 |  Select(*args, **kwargs)
 |      Select(self, int n)
 |      
 |      This is the same as `SetSelection` and exists only because it is
 |      slightly more natural for controls which support multiple selection.
 
 |  SetSelection(*args, **kwargs)  # 
 |      SetSelection(self, int n, bool select=True)
```
>* Set方法：将列表控件中的所有元素替换成参数中的字符串列表。
```C++
 |  Set(*args, **kwargs)
 |      Set(self, List strings)
 |      
 |      Replace all the items in the control
```

>* SetItemBackgroundColour/SetItemFont/SetItemForegroundColour：显而易见，设置背景色、字体。
```C++
|  SetItemBackgroundColour(*args, **kwargs)
 |      SetItemBackgroundColour(self, int item, Colour c)
 |  
 |  SetItemFont(*args, **kwargs)
 |      SetItemFont(self, int item, Font f)
 |  
 |  SetItemForegroundColour(*args, **kwargs)
 |      SetItemForegroundColour(self, int item, Colour c)
 |  
```

>* SetStringSelection方法：从头寻找匹配的字符串，选中之，只找匹配成功的第一个，若找不到，则返回False.
```C++
 |  SetStringSelection(*args, **kwargs)
 |      SetStringSelection(self, String s, bool select=True) -> bool
```

## ListItem类
```C++
class ListItem(wx._core.Object)
 |  Proxy of C++ ListItem class
 
 |  __init__(self, *args, **kwargs)
 |      __init__(self) -> ListItem
```

* ListItem类专用于生成ListCtrl控件中的一个个元素，这是一个具有多种样式的item类，仅继承自```|      wx._core.Object
 |      __builtin__.object | ```类的它，大多数是使用自己的特定方法，其特定方法也大多是其本身属性的Get/Set方法。
* 具有多种属性``` |  m_col
 |  
 |  m_data
 |  
 |  m_format
 |  
 |  m_image
 |  
 |  m_itemId
 |  
 |  m_mask
 |  
 |  m_state
 |  
 |  m_stateMask
 |  
 |  m_text
 |  
 |  m_width | ```,其对应的方法：
>* Clear方法：清除item
```C++
 |  Clear(*args, **kwargs)
 |      Clear(self)
 |  
 |  ClearAttributes(*args, **kwargs)
 |      ClearAttributes(self)
```

>* Get系列方法：字面意思，简单易懂，获取对应的属性值
```C++
 |  GetAlign(*args, **kwargs)
 |      GetAlign(self) -> int
 |  
 |  GetAttributes(*args, **kwargs)
 |      GetAttributes(self) -> ListItemAttr
 |  
 |  GetBackgroundColour(*args, **kwargs)
 |      GetBackgroundColour(self) -> Colour
 |  
 |  GetColumn(*args, **kwargs)
 |      GetColumn(self) -> int
 |  
 |  GetData(*args, **kwargs)
 |      GetData(self) -> long
 |  
 |  GetFont(*args, **kwargs)
 |      GetFont(self) -> Font
 |  
 |  GetId(*args, **kwargs)
 |      GetId(self) -> long
 |  
 |  GetImage(*args, **kwargs)
 |      GetImage(self) -> int
 |  
 |  GetMask(*args, **kwargs)
 |      GetMask(self) -> long
 |  
 |  GetState(*args, **kwargs)
 |      GetState(self) -> long
 |  
 |  GetText(*args, **kwargs)
 |      GetText(self) -> String
 |  
 |  GetTextColour(*args, **kwargs)
 |      GetTextColour(self) -> Colour
 |  
 |  GetWidth(*args, **kwargs)
 |      GetWidth(self) -> int
```
>* HasAttributes方法：
```C++
 |  HasAttributes(*args, **kwargs)
 |      HasAttributes(self) -> bool
```

>* Set系列方法：设置对应的属性值。
```C++
 |  SetAlign(*args, **kwargs)
 |      SetAlign(self, int align)
 |  
 |  SetBackgroundColour(*args, **kwargs)
 |      SetBackgroundColour(self, Colour colBack)
 |  
 |  SetColumn(*args, **kwargs)
 |      SetColumn(self, int col)
 |  
 |  SetData(*args, **kwargs)
 |      SetData(self, long data)
 |  
 |  SetFont(*args, **kwargs)
 |      SetFont(self, Font font)
 |  
 |  SetId(*args, **kwargs)
 |      SetId(self, long id)
 |  
 |  SetImage(*args, **kwargs)
 |      SetImage(self, int image)
 |  
 |  SetMask(*args, **kwargs)
 |      SetMask(self, long mask)
 |  
 |  SetState(*args, **kwargs)
 |      SetState(self, long state)
 |  
 |  SetStateMask(*args, **kwargs)
 |      SetStateMask(self, long stateMask)
 |  
 |  SetText(*args, **kwargs)
 |      SetText(self, String text)
 |  
 |  SetTextColour(*args, **kwargs)
 |      SetTextColour(self, Colour colText)
 |  
 |  SetWidth(*args, **kwargs)
 |      SetWidth(self, int width)
```

## ListCtrl类
```C++
class ListCtrl(wx._core.Control)
 |  Proxy of C++ ListCtrl class
 
  |  __init__(self, *args, **kwargs)
 |      __init__(self, Window parent, int id=-1, Point pos=DefaultPosition, 
 |          Size size=DefaultSize, long style=LC_ICON, 
 |          Validator validator=DefaultValidator, String name=ListCtrlNameStr) -> ListCtrl
```

* 继承关系：继承自``` |  Method resolution order:
 |      ListCtrl
 |      wx._core.Control
 |      wx._core.Window
 |      wx._core.EvtHandler
 |      wx._core.Object
 |      __builtin__.object | ```等类，继承自EvtHandler即说明可以绑定事件，进行互动。
* 不同于ListBox,ListCtrl包含了很多自定义的方法，可以自定义多行多列显示列表，并且表格中的元素也变得多种多样，可以是文字，可以说图片，可以是进度栏等等各式各样的元素。
* listctrl是一个多维表格，即便你显示的是一列多行的list，在使用对item进行操作时也需要加上row和col这2个int型参数，同时，listctrl中添加了很多关于item的函数。
* 对于一些参数是ListItem类对象的函数，我们需要实例化一个ListItem类对象来进行操作，有时候需要一个样式丰富的元素，比如说图片等元素，我们必须使用ListItem类对象来进行插入到list控件中。
* 方法解析：ListCtrl类由于是自定义的显示，其中的元素也多种多样，所以大多数的方法是对其中的元素进行操作，并且多行多列也导致了元素的坐标从简单列表中的一维上升到了二维。
>* Append方法：直接在我们的list控件的最后面附上一行item，以字符串列表为参数传入。
```C++
 |  Append(self, entry)
 |      Append an item to the list control.  The entry parameter should be a
 |      sequence with an item for each column
 
 # ex
 list = ListCtrl(mainFrame)  # 实例化一个ListCtrl对象
 list.Append(["asdsad1", "asdsad2"])  # 给list控件直接增添一行
```
>* Arrange方法：设置对齐方法
```C++
 |  Arrange(*args, **kwargs)
 |      Arrange(self, int flag=LIST_ALIGN_DEFAULT) -> bool
```

>* Clear方法：清除所有item
```C++
 |  ClearAll(*args, **kwargs)
 |      ClearAll(self)
 |  
 |  ClearColumnImage(self, col)
```

>* Create 方法：
```C++
 |  Create(*args, **kwargs)
 |      Create(self, Window parent, int id=-1, Point pos=DefaultPosition, 
 |          Size size=DefaultSize, long style=LC_ICON, 
 |          Validator validator=DefaultValidator, String name=ListCtrlNameStr) -> bool
 |      
 |      Do the 2nd phase and create the GUI control.
```

>* Delete系列方法：
>>* DeleteAllColumns：删除所有列，等同于```ClearAll```方法
>>* DeleteAllItems：删除所有所有列的items，与```DeleteAllColumns```方法不同的是不删除第一行的值。
>>* DeleteColumn:删除某一个列
>>* DeleteItem:删除某一个元素
```C++
 |  DeleteAllColumns(*args, **kwargs)
 |      DeleteAllColumns(self) -> bool
 |  
 |  DeleteAllItems(*args, **kwargs)
 |      DeleteAllItems(self) -> bool
 |  
 |  DeleteColumn(*args, **kwargs)
 |      DeleteColumn(self, int col) -> bool
 |  
 |  DeleteItem(*args, **kwargs)
 |      DeleteItem(self, long item) -> bool
```

>* GetColumn相关系列方法：对于列表控件，其中是以列为主线进行控制，所以首当其冲的是要熟悉一些对列属性的获取。
>>* GetColumn方法：获取每一列的第一个元素，也就是表头。返回值类型为ListItem类型。
>>* GetColumnCount方法：获取总列数。
>>* GetColumnIndexFromOrder方法：获取按照顺序排列 好的第几列对应的列数（从0开始计数）。
>>* GetColumnOrder方法：获取某一列按照顺序排列的位置。
>>* GetColumnWidth方法：获取某一列的宽度。
>>* GetColumnsOrder方法：对一组列取得其order，以列表形式存储。
```C++
 |  GetColumn(*args, **kwargs)
 |      GetColumn(self, int col) -> ListItem
 |  
 |  GetColumnCount(*args, **kwargs)
 |      GetColumnCount(self) -> int
 |  
 |  GetColumnIndexFromOrder(*args, **kwargs)
 |      GetColumnIndexFromOrder(self, int order) -> int
 |  
 |  GetColumnOrder(*args, **kwargs)
 |      GetColumnOrder(self, int col) -> int
 |  
 |  GetColumnWidth(*args, **kwargs)
 |      GetColumnWidth(self, int col) -> int
 |  
 |  GetColumnsOrder(*args, **kwargs)
 |      GetColumnsOrder(self) -> wxArrayInt
```

>* GetItem相关系列方法：在关注了column的相关get方法，自然要学习对于行元素的处理，此处Item我们可以视作为行，与column对应。
>>* GetFirstSelected方法：获取在list控件显示之前进行选中的item在当前所在列的索引，如果没有或者为None则返回-1
>>* GetFocusedItem方法：获取当前选中的item在当前所在列的索引，如果没有或者None则返回-1
>>* GetItem方法：获取列表中指定的item， itemId参数指代在当前所在列的索引值（从0开始索引），col参数指代是在第几列（从0开始索引）。返回值为ListItem类型。
>>* GetItemBackgroundColour方法：仅有```long item```参数，指代列表中的第几行（从0开始索引），意味着只能取一整行的背景颜色。
>>* GetItemCount方法：无参数，获取当前列表除表头外的行数。
>>* GetItemData方法：```long item```参数，获取某一行的data属性值。
>>* GetItemFont方法：获取某一行的字体，返回值为wxpython中的Font类。
>>* GetItemPosition方法：获取某一行的位置，返回值为Point类。 # (4, 45)
>>* GetItemRect方法：获取某一行边缘矩形的位置和大小，返回值为Rect类。 # (0, 45, 240, 21)
>>* GetItemText方法：具有```long item```和```int col```两个参数，返回指定行列位置的文本内容，返回值类型为string
>>* GetItemTextColour方法：```long item```参数，获取某一行的文本颜色。
>>* GetNextItem方法：获取下一行索引。
>>* GetNextSelected方法：获取```long item```参数对应item行的下一个选中行。
>>* GetSelectedItemCount方法：获取选中行的行数。
```C++
 |  GetItem(*args, **kwargs)
 |      GetItem(self, long itemId, int col=0) -> ListItem
 
 |  GetFirstSelected(self, *args)
 |      return first selected item, or -1 when none
 
 |  GetFocusedItem(self)
 |      get the currently focused item or -1 if none
 
 |  GetItemBackgroundColour(*args, **kwargs)
 |      GetItemBackgroundColour(self, long item) -> Colour
 |  
 |  GetItemCount(*args, **kwargs)
 |      GetItemCount(self) -> int
 |  
 |  GetItemData(*args, **kwargs)
 |      GetItemData(self, long item) -> long
 |  
 |  GetItemFont(*args, **kwargs)
 |      GetItemFont(self, long item) -> Font
 |  
 |  GetItemPosition(*args, **kwargs)
 |      GetItemPosition(self, long item) -> Point
 |  
 |  GetItemRect(*args, **kwargs)
 |      GetItemRect(self, long item, int code=LIST_RECT_BOUNDS) -> Rect
 
 |  GetItemText(*args, **kwargs)
 |      GetItemText(self, long item, int col=0) -> String
 |  
 |  GetItemTextColour(*args, **kwargs)
 |      GetItemTextColour(self, long item) -> Colour
 
 |  GetNextItem(*args, **kwargs)
 |      GetNextItem(self, long item, int geometry=LIST_NEXT_ALL, int state=LIST_STATE_DONTCARE) -> long
 
 |  GetNextSelected(self, item)
 |      return subsequent selected items, or -1 when no more
 
  |  GetSelectedItemCount(*args, **kwargs)
 |      GetSelectedItemCount(self) -> int
```

>* 其他的一系列Get方法：
```C++
 |  GetImageList(*args, **kwargs)
 |      GetImageList(self, int which) -> ImageList
 
  |  GetItemSpacing(*args, **kw)
 |      GetItemSpacing(self) -> Size
 |  
 |  GetItemState(*args, **kwargs)
 |      GetItemState(self, long item, long stateMask) -> int
 
  |  GetMainWindow(*args, **kwargs)
 |      GetMainWindow(self) -> Window
 
 |  GetTextColour(*args, **kwargs)
 |      GetTextColour(self) -> Colour
 |  
 |  GetTopItem(*args, **kwargs)
 |      GetTopItem(self) -> long
 |  
 |  GetViewRect(*args, **kwargs)  # 获取当前列表可见内容所在的矩形框大小和位置
 |      GetViewRect(self) -> Rect
```

>* Insert系列方法：对于一个列表（表格），经常需要插入各种元素到各种位置，此时就要用到insert的各种方法。
>>* InsertColumn: 插入一个新列，```long col```表示在哪一列之前进行插入，```String heading```表示插入新列的表头，```int format```表示格式，默认是左对齐格式，```int width```表示列宽，默认为自动调整。返回值为当前插入列的索引。
>>* InsertColumnItem方法：插入列元素，在```long col```列插入一个```ListItem info```，返回值为当前插入元素的在所在当前列的索引值（long）。
>>* InsertImageItem/InsertImageStringItem：图片Item相关的插入方法。
>>* InsertItem方法：普通的ListItem类型的插入，在某个元素之前进行插入。
>>* InsertStringItem方法：在```int index```行前进行插入```string label```的字符串，默认```int imageIndex```为-1即不带图片，设置imageIndex可附加上图片。
```C++
 |  InsertColumn(*args, **kwargs)
 |      InsertColumn(self, long col, String heading, int format=LIST_FORMAT_LEFT, 
 |          int width=-1) -> long
 |  
 |  InsertColumnInfo = InsertColumnItem(*args, **kwargs)
 |  
 |  InsertColumnItem(*args, **kwargs)
 |      InsertColumnItem(self, long col, ListItem info) -> long
 |  
 |  InsertImageItem(*args, **kwargs)
 |      InsertImageItem(self, long index, int imageIndex) -> long
 |  
 |  InsertImageStringItem(*args, **kwargs)
 |      InsertImageStringItem(self, long index, String label, int imageIndex) -> long
 |  
 |  InsertItem(*args, **kwargs)
 |      InsertItem(self, ListItem info) -> long
 |  
 |  InsertStringItem(*args, **kwargs)
 |      InsertStringItem(self, long index, String label, int imageIndex=-1) -> long
```

>* Set系列方法：作为列表控件的第三大类属性方法，Set方法管理了对Item的各项属性进行设置，前面有Get等各种方法的描述，这里均不再解释对应的Set方法。
```C++
 |  SetColumn(*args, **kwargs)
 |      SetColumn(self, int col, ListItem item) -> bool
 |  
 |  SetColumnImage(self, col, image)
 |  
 |  SetColumnWidth(*args, **kwargs)
 |      SetColumnWidth(self, int col, int width) -> bool
 |  
 |  SetColumnsOrder(*args, **kwargs)
 |      SetColumnsOrder(self, wxArrayInt orders) -> bool
 |  
 |  SetImageList(*args, **kwargs)
 |      SetImageList(self, ImageList imageList, int which)
 |  
 |  SetItem(*args, **kwargs)
 |      SetItem(self, ListItem info) -> bool
 |  
 |  SetItemBackgroundColour(*args, **kwargs)
 |      SetItemBackgroundColour(self, long item, Colour col)
 |  
 |  SetItemColumnImage(*args, **kwargs)
 |      SetItemColumnImage(self, long item, long column, int image) -> bool
 |  
 |  SetItemCount(*args, **kwargs)
 |      SetItemCount(self, long count)
 |  
 |  SetItemData(*args, **kwargs)
 |      SetItemData(self, long item, long data) -> bool
 |  
 |  SetItemFont(*args, **kwargs)
 |      SetItemFont(self, long item, Font f)
 |  
 |  SetItemImage(*args, **kwargs)
 |      SetItemImage(self, long item, int image, int selImage=-1) -> bool
 |  
 |  SetItemPosition(*args, **kwargs)
 |      SetItemPosition(self, long item, Point pos) -> bool
 |  
 |  SetItemState(*args, **kwargs)
 |      SetItemState(self, long item, long state, long stateMask) -> bool
 |  
 |  SetItemText(*args, **kwargs)
 |      SetItemText(self, long item, String str)
 |  
 |  SetItemTextColour(*args, **kwargs)
 |      SetItemTextColour(self, long item, Colour col)
 |  
 |  SetSingleStyle(*args, **kwargs)
 |      SetSingleStyle(self, long style, bool add=True)
 |  
 |  SetStringItem(*args, **kwargs)
 |      SetStringItem(self, long index, int col, String label, int imageId=-1) -> long
 |  
 |  SetTextColour(*args, **kwargs)
 |      SetTextColour(self, Colour col)
```

>* SortItems:```func```传入函数指针，来讲items也就是按照行元素来进行排序，可以传入lambda函数来自定义排序逻辑
```c++
 |  SortItems(*args, **kwargs)
 |      SortItems(self, PyObject func) -> bool
```
>* IsSelected:返回bool值指代某个item 是否被选中
```C++
 |  IsSelected(self, idx)
 |      return True if the item is selected
```
>* Refresh:刷新方法
```C++
 |  RefreshItem(*args, **kwargs)
 |      RefreshItem(self, long item)
 |  
 |  RefreshItems(*args, **kwargs)
 |      RefreshItems(self, long itemFrom, long itemTo)
```

```Python
#!/usr/bin/env python
# encoding: gbk
'''
最小的wx程序
'''

from wx import *
if __name__ == "__main__":
    root = App()  # 创建主程序
    mainFrame = Frame(None, size=(1200, 900))  # 在主程序之上建立一个一直显示的主窗口，用于与用户进行互动
    print help(ListCtrl)
    # 实例化ListCtrl对象
    list = ListCtrl(mainFrame,
                    style=wx.LC_REPORT  # 当前风格支持多列
                                 # #| wx.BORDER_SUNKEN
                                 # | wx.BORDER_NONE
                                 # | wx.LC_EDIT_LABELS
                                 # | wx.LC_SORT_ASCENDING
                                 # #| wx.LC_NO_HEADER
                                 # | wx.LC_VRULES
                                 # | wx.LC_HRULES
                                 # #| wx.LC_SINGLE_SEL
                    )
    # 插入三列，变成多行三列的列表
    list.InsertColumn(0, "Artist")
    list.InsertColumn(1, "Title", wx.LIST_FORMAT_LEFT)
    list.InsertColumn(2, "Genreasdasdsadsadasdsadsadsad")

    # 添加三行
    # list.Append(["asa1", "asa2", "asa3", "asa4"])  # 超过当前的列数，触发中断错误
    list.Append(["asa1", "asa2", "asa3"])
    list.Append(["asb1", "asb2", "asb3"])
    list.Append(["asc1", "asc2", "asc3"])
    list.Append(["asd1asdsadasdsadsadsadasd", "asd2", "asd3"])

    # list.DeleteColumn(0)
    # list.DeleteAllItems()

    # list.Select(1, 2)
    # print list.GetFirstSelected()

    # li = ListItem()
    # li.SetText("asd")
    # list.InsertColumnItem(2, li)

    # list.InsertStringItem(index=2, label="asd")
    # print list.GetItem(itemId=1, col=2).GetText()
    # print list.GetColumn(0).GetText()
    list.SetColumnWidth(0, 200)
    list.SetColumnWidth(1, 200)
    list.SetColumnWidth(2, 200)

    # print list.GetColumnWidth(2)
    # list.ClearAll()
    mainFrame.Show()  # 显示主窗口
    root.MainLoop()  # 使主程序一直运转
```
