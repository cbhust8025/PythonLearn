# 基本控件篇
## 布局管理器
wxpython中控件类构造函数含有size/pos两个参数的都可以直接进行设定绝对位置以及绝对大小来进行布局，不过对于稍过复杂的界面，我们需要wx提供具有更加强大功能的布局管理器sizer。创建一个Sizer的基本步骤：
* 创建你想用来自动调用尺寸的panel或container(容器)。
* 创建Sizer（Sizer的五个子类）。
* 创建你的子窗口或者子控件。
* 使用Sizer的Add()方法来将每个子窗口添加给Sizer。
* Sizer可以嵌套，这意味你可以像窗口对象一样添加别的Sizer到父Sizer
* 调用容器的SetSizer(Sizer)方法。
### Sizer类
```Python
class Sizer(Object)
 |  wx.Sizer is the abstract base class used for laying out subwindows in
 |  a window.  You cannot use wx.Sizer directly; instead, you will have to
 |  use one of the sizer classes derived from it such as `wx.BoxSizer`,
 |  `wx.StaticBoxSizer`, `wx.GridSizer`, `wx.FlexGridSizer` and
 |  `wx.GridBagSizer`.
 |  
 |  The concept implemented by sizers in wxWidgets is closely related to
 |  layout tools in other GUI toolkits, such as Java's AWT, the GTK
 |  toolkit or the Qt toolkit. It is based upon the idea of the individual
 |  subwindows reporting their minimal required size and their ability to
 |  get stretched if the size of the parent window has changed. This will
 |  most often mean that the programmer does not set the original size of
 |  a dialog in the beginning, rather the dialog will assigned a sizer and
 |  this sizer will be queried about the recommended size. The sizer in
 |  turn will query its children, which can be normal windows or contorls,
 |  empty space or other sizers, so that a hierarchy of sizers can be
 |  constructed. Note that wxSizer does not derive from wxWindow and thus
 |  do not interfere with tab ordering and requires very little resources
 |  compared to a real window on screen.
 |  
 |  What makes sizers so well fitted for use in wxWidgets is the fact that
 |  every control reports its own minimal size and the algorithm can
 |  handle differences in font sizes or different window (dialog item)
 |  sizes on different platforms without problems. If for example the
 |  standard font as well as the overall design of Mac widgets requires
 |  more space than on Windows, then the initial size of a dialog using a
 |  sizer will automatically be bigger on Mac than on Windows.
```
wx库中的Sizer类是一个抽象基类，不能直接使用来进行布局管理，不过作为基类，给其他的布局管理子类定义了很多基本的方法。我们可以使用其下面的五个子类之一来进行布局管理：
* BoxSizer类：在一条线上布局子窗口部件。wx.BoxSizer的布局方向可以是水平或坚直的，并且可以在水平或坚直方向上包含子sizer以创建复杂的布局。在项目被添加时传递给sizer的参数控制子窗口部件如何根据box的主体或垂直轴线作相应的尺寸调整
* StaticBoxSizer类：等同于wx.BoxSizer，只是在box周围多了一个附加的边框（有一个可选的标签）
* GridSizer类：一个固定的二维网格，其中的每个元素都有相同的尺寸。当创建一个grid sizer时，你要么固定行的数量，要么固定列的数量。项目被从左到右的添加，直到一行被填满，然后从下一行开始。
* FlexGridSizer类：一个固定的二维网格，它与wx.GridSizer的区别是，行和列根据所在行或列的最大元素分别被设置。
* GridBagSizer类：一个固定的二维网格，基于wx.FlexGridSizer。允许项目被放置在网格上的特定点，也允许项目跨越多和网格区域。
> 每一种不同的Sizer类都具有不同的布局管理规则，但是每一个实例化的Sizer都是必须依托某一个容器或者Panel或者Frame存在，若使用Sizer来进行管理控件、窗口等布局，则所有需要在父容器中进行显示的控件、窗口都必须使用Sizer的Add方法添加进父容器对应的Sizer来进行显示，Sizer不仅能管理控件位置和大小，也可以管理子窗口的位置和大小。
#### Sizer基本方法:
* Add方法：将一个控件或者窗口添加到容器中。
```Python
 |  Add(*args, **kwargs)
 |      Add(self, item, int proportion=0, int flag=0, int border=0,
 |          PyObject userData=None) -> wx.SizerItem
 |      
 |      Appends a child item to the sizer.
```
>#### 参数：
>- self:指代调用此方法的Sizer
>- item：向容器中添加的控件或者窗口（可以使一个Button对象或者Panel对象等）。
>- proportion:BoxSizer中的尺寸管理参数，只在同一个BoxSizer相对于其中的其他item有用，设置为0将会自动调整尺寸，设置为正整数会对其他的正整数进行比例划分尺寸。此参数只对BoxSizer子类有效。
>- flag:位图管理参数，管理item在Sizer中剩余空间中的位置、对齐、增长。一般较多使用：wx.TOP | wx.BOTTOM | wx.LEFT | wx.RIGHT | wx.EXPAND。
>- border:管理添加的控件或窗口的外边框大小。
* Clear方法:清除Sizer中的所有Item。
```Python
 |  Clear(*args, **kwargs)
 |      Clear(self, bool deleteWindows=False)
 |      
 |      Clear all items from the sizer, optionally destroying the window items
 |      as well.
```

* DeleteWindows方法:清除Sizer中的所有窗口。
```Python
 |  DeleteWindows(*args, **kwargs)
 |      DeleteWindows(self)
 |      
 |      Destroy all windows managed by the sizer.
```

* Fit/FitInside方法:调整window尺寸以匹配sizer认为所需要的最小化尺寸。这个参数的值通常是使用sizer的窗口。FitInside()是一个类似的方法，只不过将改变窗口在屏幕上的显示替换为只改变它的内部实现。它用于scroll panel中的窗口以触发滚动栏的显示。
```Python
 |  Fit(*args, **kwargs)
 |      Fit(self, Window window) -> Size
 |      
 |      Tell the sizer to resize the *window* to match the sizer's minimal
 |      size. This is commonly done in the constructor of the window itself in
 |      order to set its initial size to match the needs of the children as
 |      determined by the sizer.  Returns the new size.
 |      
 |      For a top level window this is the total window size, not the client size.
 |  
 |  FitInside(*args, **kwargs)
 |      FitInside(self, Window window)
 |      
 |      Tell the sizer to resize the *virtual size* of the *window* to match the
 |      sizer's minimal size. This will not alter the on screen size of the
 |      window, but may cause the addition/removal/alteration of scrollbars
 |      required to view the virtual area in windows which manage it.
 |      
 |      :see: `wx.ScrolledWindow.SetScrollbars`
 |  
```

* Get系列方法:获取Sizer中的item相关信息或者Sizer的相关信息。
```Python
 |  GetChildren(*args, **kwargs)
 |      GetChildren(self) -> SizerItemList
 |      
 |      Returns all of the `wx.SizerItem` objects managed by the sizer in a
 |      list-like object.
 |  
 |  GetContainingWindow(*args, **kwargs)
 |      GetContainingWindow(self) -> Window
 |      
 |      Get the window this sizer is used in.
 |  
 |  GetItem(*args, **kwargs)
 |      GetItem(self, item, recursive=False) -> wx.SizerItem
 |      
 |      Returns the `wx.SizerItem` which holds the *item* given.  The *item*
 |      parameter can be either a window, a sizer, or the zero-based index of
 |      the item to be found.
 |  GetItemById(*args, **kwargs)
 |      GetItemById(self, int id, bool recursive=False) -> SizerItem
 |  GetMinSize(*args, **kwargs)
 |      GetMinSize(self) -> Size
 |      
 |      Returns the minimal size of the sizer. This is either the combined
 |      minimal size of all the children and their borders or the minimal size
 |      set by `SetMinSize`, depending on which is bigger.
 |      
 |      Note that the returned value is *client* size, not window size.  In
 |      particular, if you use the value to set toplevel window's minimal or
 |      actual size, use `wx.Window.SetMinClientSize` or
 |      `wx.Window.SetClientSize`, *not* `wx.Window.SetMinSize` or
 |      `wx.Window.SetSize`.
 |  GetPosition(*args, **kwargs)
 |      GetPosition(self) -> Point
 |      
 |      Returns the current position of the sizer's managed space.
 |  GetSize(*args, **kwargs)
 |      GetSize(self) -> Size
 |      
 |      Returns the current size of the space managed by the sizer.
```

* Hide/Show方法：隐藏/显示某个控件或者窗口,item参数可以是某个Sizer或者窗口或者控件。经常和Layout方法（强制重新计算Sizer布局）一起使用。
```Python
 |  Hide(self, item, recursive=False)
 |      A convenience method for `Show` (item, False, recursive).
 
 |  Show(*args, **kwargs)
 |      Show(self, item, bool show=True, bool recursive=false) -> bool
 |      
 |      Shows or hides an item managed by the sizer.  To make a sizer item
 |      disappear or reappear, use Show followed by `Layout`.  The *item*
 |      parameter can be either a window, a sizer, or the zero-based index of
 |      the item.  Use the recursive parameter to show or hide an item in a
 |      subsizer.  Returns True if the item was found.
```

* Layout方法：强迫sizer去重新计算它的孩子的尺寸和位置。在动态地添加或删除了一个孩子或者隐藏/显示某一个孩子之后调用。
```Python
 |  Layout(*args, **kwargs)
 |      Layout(self)
 |      
 |      This method will force the recalculation and layout of the items
 |      controlled by the sizer using the current space allocated to the
 |      sizer.  Normally this is called automatically from the owning window's
 |      EVT_SIZE handler, but it is also useful to call it from user code when
 |      one of the items in a sizer change size, or items are added or
 |      removed.
```

* Prepend方法：与Add()相同（只是为了布局的目的，把新的对象放在sizer列表的开头）。
```Python
 |  Prepend(*args, **kwargs)
 |      Prepend(self, item, int proportion=0, int flag=0, int border=0,
 |          PyObject userData=None) -> wx.SizerItem
 |      
 |      Adds a new item to the begining of the list of sizer items managed by
 |      this sizer.  See `Add` for a description of the parameters.
```

* Remove方法：Add方法的逆过程。删除某个item。经常和Layout一起配合使用。
```Python
 |  Remove(*args, **kwargs)
 |      Remove(self, item) -> bool
 |      
 |      Removes an item from the sizer and destroys it.  This method does not
 |      cause any layout or resizing to take place, call `Layout` to update
 |      the layout on screen after removing a child from the sizer.  The
 |      *item* parameter can be either a window, a sizer, or the zero-based
 |      index of an item to remove.  Returns True if the child item was found
 |      and removed.
```

* SetDimension方法：强迫sizer按照给定的参数重新定位它的所有孩子。
```Python
 |  SetDimension(*args)
 |      SetDimension(self, int x, int y, int width, int height)
 |      SetDimension(self, Point pos, Size size)
```

### 1、BoxSizer类
```Python
class BoxSizer(Sizer)
 |  The basic idea behind a box sizer is that windows will most often be
 |  laid out in rather simple basic geometry, typically in a row or a
 |  column or nested hierarchies of either.  A wx.BoxSizer will lay out
 |  its items in a simple row or column, depending on the orientation
 |  parameter passed to the constructor.
 
 |  __init__(self, *args, **kwargs)
 |      __init__(self, int orient=HORIZONTAL) -> BoxSizer
 |      
 |      Constructor for a wx.BoxSizer. *orient* may be one of ``wx.VERTICAL``
 |      or ``wx.HORIZONTAL`` for creating either a column sizer or a row
 |      sizer.
```
* BoxSizer类使用的是简单的行布局或列布局，根据BoxSizer的依附容器的水平轴线或者竖直轴线，按照子控件或子窗口的添加顺序依次进行指定参数进行显示。
* 构造函数具有一个参数orient，指示当前BoxSizer是行布局或列布局，可缺省默认为水平布局。
```Python
#!/usr/bin/env python
# encoding: gbk
'''
BoxSizer
'''
from wx import *
if __name__ == "__main__":
    root = App()  # 创建主程序
    mainFrame = Frame(None)  # 在主程序之上建立一个一直显示的主窗口，用于与用户进行互动
    mainFrameBoxSizer = BoxSizer()  # 默认水平布局，
    b1 = Button(mainFrame, id=1, label="button1")
    b2 = Button(mainFrame, id=2, label="button2")

    mainFrameBoxSizer.Add(b1)  # 向box中添加第一个控件
    mainFrameBoxSizer.Add(b2)  # 向box中添加第二个控件

    mainFrame.SetSizer(mainFrameBoxSizer)  # BoxSizer生效的最后一个步骤，依附的容器调用SetSizer方法。
    mainFrame.Show()  # 显示主窗口
    root.MainLoop()  # 使主程序一直运转
```
### 2、GridSizer类
```Python
class GridSizer(Sizer)
 |  A grid sizer is a sizer which lays out its children in a
 |  two-dimensional table with all cells having the same size.  In other
 |  words, the width of each cell within the grid is the width of the
 |  widest item added to the sizer and the height of each grid cell is the
 |  height of the tallest item.  An optional vertical and/or horizontal
 |  gap between items can also be specified (in pixels.)
 |  
 |  Items are placed in the cells of the grid in the order they are added,
 |  in row-major order.  In other words, the first row is filled first,
 |  then the second, and so on until all items have been added. (If
 |  neccessary, additional rows will be added as items are added.)  If you
 |  need to have greater control over the cells that items are placed in
 |  then use the `wx.GridBagSizer`.
 
 |  __init__(self, *args, **kwargs)
 |      __init__(self, int rows=0, int cols=0, int vgap=0, int hgap=0) -> GridSizer
 |      
 |      Constructor for a wx.GridSizer. *rows* and *cols* determine the number
 |      of columns and rows in the sizer - if either of the parameters is
 |      zero, it will be calculated to from the total number of children in
 |      the sizer, thus making the sizer grow dynamically. *vgap* and *hgap*
 |      define extra space between all children.
```

* GridSizer：一个固定的二维网格布局管理，其中的每个元素（cell）都有相同的尺寸(相同的宽度和相同的高度)。当创建一个grid sizer时，你要么固定行的数量，要么固定列的数量。项目被从左到右的添加，直到一行被填满，然后从下一行开始。
* rows/cols参数：控制GridSizer的行列数，最多缺省一个，缺省时，会按照Sizer的大小动态变化来进行确定其实际值。
* vgap/hgap参数：控制cell之间的行距或者列距，缺省默认为0。
* 四个参数也是GridSizer的四个属性值，GridSizer类为这四个属性值分别设置了Get/Set方法来进行获取/设置其对应的属性值。
```Python
#!/usr/bin/env python
# encoding: gbk
'''
GridSizer
'''
from wx import *
if __name__ == "__main__":
    root = App()  # 创建主程序
    mainFrame = Frame(None)  # 在主程序之上建立一个一直显示的主窗口，用于与用户进行互动
    mainFrameBoxSizer = GridSizer(2,1)  # 将Frame划分为2行一列，也即从中间进行划分为上下两部分。
    b1 = Button(mainFrame, id=1, label="button1")
    b2 = Button(mainFrame, id=2, label="button2")

    mainFrameBoxSizer.Add(b1)  # 向box中添加第一个控件
    mainFrameBoxSizer.Add(b2)  # 向box中添加第二个控件

    mainFrame.SetSizer(mainFrameBoxSizer)  # BoxSizer生效的最后一个步骤，依附的容器调用SetSizer方法。
    mainFrame.Show()  # 显示主窗口
    root.MainLoop()  # 使主程序一直运转
```
### 3、StaticBoxSizer类
```Python
class StaticBoxSizer(BoxSizer)
 |  wx.StaticBoxSizer derives from and functions identically to the
 |  `wx.BoxSizer` and adds a `wx.StaticBox` around the items that the sizer
 |  manages.  Note that this static box must be created separately and
 |  passed to the sizer constructor.
 |  
 |  __init__(self, *args, **kwargs)
 |      __init__(self, StaticBox box, int orient=HORIZONTAL) -> StaticBoxSizer
 |      
 |      Constructor. It takes an associated static box and the orientation
 |      *orient* as parameters - orient can be either of ``wx.VERTICAL`` or
 |      ``wx.HORIZONTAL``.
```

* 继承自BoxSizer类，在BoxSizer基础上增添了一个StaticBox类型的box参数，此种box必须在另外的地方创建，然后传入StaticBoxSizer的构造函数中，意思是在实例化StaticBoxSizer对象之前，必须有一个StaticBox类型的box对象。
>StaticBox类:
```C++
class StaticBox(wx._core.Control)
 |  Proxy of C++ StaticBox class
 
 |  Create(*args, **kwargs)
 |      Create(self, Window parent, int id=-1, String label=EmptyString, 
 |          Point pos=DefaultPosition, Size size=DefaultSize, 
 |          long style=0, String name=StaticBoxNameStr) -> bool
 |  
 |  __init__(self, *args, **kwargs)
 |      __init__(self, Window parent, int id=-1, String label=EmptyString, 
 |          Point pos=DefaultPosition, Size size=DefaultSize, 
 |          long style=0, String name=StaticBoxNameStr) -> StaticBox
```
```Python
#!/usr/bin/env python
# encoding: gbk
'''
StaticBoxSizer
'''

from wx import *

if __name__ == "__main__":
    root = App()  # 创建主程序
    mainFrame = Frame(None)  # 在主程序之上建立一个一直显示的主窗口，用于与用户进行互动
    
    sb1 = StaticBox(mainFrame, label="newbox")  # 实例化StaticBox对象，必须在使用StaticBoxSizer类之前进行实例化，才能作为参数传入
    mainFrameBoxSizer = StaticBoxSizer(sb1)  # 使用sb1作为box，将所有的孩子放进box内，默认为行布局
    b1 = Button(mainFrame, id=1, label="button1")
    b2 = Button(mainFrame, id=2, label="button2")

    mainFrameBoxSizer.Add(b1)  # 向box中添加第一个控件
    mainFrameBoxSizer.Add(b2)  # 向box中添加第二个控件

    mainFrame.SetSizer(mainFrameBoxSizer)  # BoxSizer生效的最后一个步骤，依附的容器调用SetSizer方法。
    mainFrame.Show()  # 显示主窗口
    root.MainLoop()  # 使主程序一直运转
```
### 4、FlexGridSizer类
```C++
class FlexGridSizer(GridSizer)
 |  A flex grid sizer is a sizer which lays out its children in a
 |  two-dimensional table with all table cells in one row having the same
 |  height and all cells in one column having the same width, but all
 |  rows or all columns are not necessarily the same height or width as in
 |  the `wx.GridSizer`.
 |  
 |  wx.FlexGridSizer can also size items equally in one direction but
 |  unequally ("flexibly") in the other. If the sizer is only flexible
 |  in one direction (this can be changed using `SetFlexibleDirection`), it
 |  needs to be decided how the sizer should grow in the other ("non
 |  flexible") direction in order to fill the available space. The
 |  `SetNonFlexibleGrowMode` method serves this purpose.
 
 |  __init__(self, *args, **kwargs)
 |      __init__(self, int rows=0, int cols=0, int vgap=0, int hgap=0) -> FlexGridSizer
 |      
 |      Constructor for a wx.FlexGridSizer. *rows* and *cols* determine the
 |      number of columns and rows in the sizer - if either of the parameters
 |      is zero, it will be calculated to from the total number of children in
 |      the sizer, thus making the sizer grow dynamically. *vgap* and *hgap*
 |      define extra space between all children.
```

* 继承自GridSizer类，取自flexibly，构造函数基本相同。FlexGridSizer类的每一行中的每一个元素（cell）具有相同的宽度，每一列中的每一个cell具有相同的高度，但是不是所有的行都具有相同的高度，不是所有列都具有相同的宽度，这是与GridSizer一个本质的区别。
* 内含ColWidths、RowHeights两个属性，可以利用Get方法获取一个对应的列表。
* 内含FlexibleDirection、NonFlexibleGrowMode属性，分别都具有Set/Get方法来进行修改，以适应Flexibly的特性,分别有三种选项对应：行高度自动调整、列宽度自动调整、行列宽高均自动调整。
```C++
 |  SetFlexibleDirection(*args, **kwargs)
 |      SetFlexibleDirection(self, int direction)
 |      
 |      Specifies whether the sizer should flexibly resize its columns, rows,
 |      or both. Argument *direction* can be one of the following values.  Any
 |      other value is ignored.
 |      
 |          ==============    =======================================
 |          wx.VERTICAL       Rows are flexibly sized.
 |          wx.HORIZONTAL     Columns are flexibly sized.
 |          wx.BOTH           Both rows and columns are flexibly sized
 |                            (this is the default value).
 |          ==============    =======================================
 |      
 |      Note that this method does not trigger relayout.
 |  
 |  SetNonFlexibleGrowMode(*args, **kwargs)
 |      SetNonFlexibleGrowMode(self, int mode)
 |      
 |      Specifies how the sizer should grow in the non-flexible direction if
 |      there is one (so `SetFlexibleDirection` must have been called
 |      previously). Argument *mode* can be one of the following values:
 |      
 |          ==========================  =================================================
 |          wx.FLEX_GROWMODE_NONE       Sizer doesn't grow in the non flexible direction.
 |          wx.FLEX_GROWMODE_SPECIFIED  Sizer honors growable columns/rows set with
 |                                      `AddGrowableCol` and `AddGrowableRow`. In this
 |                                      case equal sizing applies to minimum sizes of
 |                                      columns or rows (this is the default value).
 |          wx.FLEX_GROWMODE_ALL        Sizer equally stretches all columns or rows in
 |                                      the non flexible direction, whether they are
 |                                      growable or not in the flexbile direction.
 |          ==========================  =================================================
 |  GetFlexibleDirection(*args, **kwargs)
 |      GetFlexibleDirection(self) -> int
 |      
 |      Returns a value that specifies whether the sizer
 |      flexibly resizes its columns, rows, or both (default).
 |      
 |      :see: `SetFlexibleDirection`
 |  
 |  GetNonFlexibleGrowMode(*args, **kwargs)
 |      GetNonFlexibleGrowMode(self) -> int
 |      
 |      Returns the value that specifies how the sizer grows in the
 |      non-flexible direction if there is one.
 |      
 |      :see: `SetNonFlexibleGrowMode`
```
```Python
#!/usr/bin/env python
# encoding: gbk
'''
FlexGridSizer
'''
from wx import *
if __name__ == "__main__":
    root = App()  # 创建主程序
    mainFrame = Frame(None)  # 在主程序之上建立一个一直显示的主窗口，用于与用户进行互动
    mainFrameBoxSizer = FlexGridSizer(2, 1)  # 两行一列布局
    mainFrameBoxSizer.SetFlexibleDirection(wx.VERTICAL)  # 行高度自动调整
    b1 = Button(mainFrame, id=1, label="button1")
    b2 = Button(mainFrame, id=2, label="button2")

    mainFrameBoxSizer.Add(b1)  # 向box中添加第一个控件
    mainFrameBoxSizer.Add(b2)  # 向box中添加第二个控件

    mainFrame.SetSizer(mainFrameBoxSizer)  # BoxSizer生效的最后一个步骤，依附的容器调用SetSizer方法。
    mainFrame.Show()  # 显示主窗口
    root.MainLoop()  # 使主程序一直运转
```
### 5、GridBagSizer类
```C++
class GridBagSizer(FlexGridSizer)
 |  A `wx.Sizer` that can lay out items in a virtual grid like a
 |  `wx.FlexGridSizer` but in this case explicit positioning of the items
 |  is allowed using `wx.GBPosition`, and items can optionally span more
 |  than one row and/or column using `wx.GBSpan`.  The total size of the
 |  virtual grid is determined by the largest row and column that items are
 |  positioned at, adjusted for spanning.
 
 |  __init__(self, *args, **kwargs)
 |      __init__(self, int vgap=0, int hgap=0) -> GridBagSizer
 |      
 |      Constructor, with optional parameters to specify the gap between the
 |      rows and columns.
```

* GridBagSizer在二维网格布局的基础上类似于FlexGridSizer那样自动调整网格大小之外，还允许某一个item跨越一行或者一列（通过GBSpan类型）。GridBagSizer的大小决定于其中item的位置以及所跨越的行列。
* 作为wx.Sizer的五种布局管理器的最后一种，继承自FlexGridSizer类，具有Sizer的通用方法，以及GridSizer、FlexGridSizer类的一些特性之外，重写了Sizer的一些基础方法，例如Add,GetChildren等方法，另外还有一些自己独有的设置item跨越网格的方法。
>- Add方法：在普通的Add方法上添加了GBPosition、GBSpan两类属性，分别定义了增添的item的位置以及跨越的行列数。
```C++
 |  Add(*args, **kwargs)
 |      Add(self, item, GBPosition pos, GBSpan span=DefaultSpan, int flag=0,
 |      int border=0, userData=None) -> wx.GBSizerItem
 |      
 |      Adds an item to the sizer at the grid cell *pos*, optionally spanning
 |      more than one row or column as specified with *span*.  The remaining
 |      args behave similarly to `wx.Sizer.Add`.
 |      
 |      Returns True if the item was successfully placed at the given cell
 |      position, False if something was already there.
```
>- Get方法：获取某一个item的GBPosition、GBSpan类型的属性值。
```C++
 |  GetItemPosition(*args)
 |      GetItemPosition(self, item) -> GBPosition
 |      
 |      Get the grid position of the specified *item* where *item* is either a
 |      window or subsizer that is a member of this sizer, or a zero-based
 |      index of an item.
 |  
 |  GetItemSpan(*args)
 |      GetItemSpan(self, item) -> GBSpan
 |      
 |      Get the row/col spanning of the specified *item* where *item* is
 |      either a window or subsizer that is a member of this sizer, or a
 |      zero-based index of an item.
```
* GridBagSizer类其中使用到的一种特别关键的类：GBSpan类（在构造时也可以使用python中的二元组进行构造）
```C++
class GBSpan(__builtin__.object)
 |  This class is used to hold the row and column spanning attributes of
 |  items in a `wx.GridBagSizer`.  wxPython has typemaps that will
 |  automatically convert from a 2-element sequence of integers to a
 |  wx.GBSpan, so you can use the more pythonic representation of the span
 |  nearly transparently in Python code.
 
 |  __init__(self, *args, **kwargs)
 |      __init__(self, int rowspan=1, int colspan=1) -> GBSpan
 |      
 |      Construct a new wxGBSpan, optionally setting the rowspan and
 |      colspan. The default is (1,1). (Meaning that the item occupies one
 |      cell in each direction.
```

>参数：（rowspan,colspan两个属性均具有Set/Get方法）
>- rowspan：跨越多少行，缺省默认为只占一行。
>- colspan:跨越多少列，缺省默认为只占一列。

* GridBagSizer类其中使用到的另外一种特别关键的类：GBPosition类（在构造时也可以使用python中的二元组进行构造）
```C++
class GBPosition(__builtin__.object)
 |  This class represents the position of an item in a virtual grid of
 |  rows and columns managed by a `wx.GridBagSizer`.  wxPython has
 |  typemaps that will automatically convert from a 2-element sequence of
 |  integers to a wx.GBPosition, so you can use the more pythonic
 |  representation of the position nearly transparently in Python code.
 
 |  __init__(self, *args, **kwargs)
 |      __init__(self, int row=0, int col=0) -> GBPosition
 |      
 |      This class represents the position of an item in a virtual grid of
 |      rows and columns managed by a `wx.GridBagSizer`.  wxPython has
 |      typemaps that will automatically convert from a 2-element sequence of
 |      integers to a wx.GBPosition, so you can use the more pythonic
 |      representation of the position nearly transparently in Python code.
```

>参数：（rowspan,colspan两个属性均具有Set/Get方法）
>- row：行位置，缺省默认为0，在第一行。
>- col:列位置，缺省默认为0，在第一列。

```Python
#!/usr/bin/env python
# encoding: gbk
'''
GridBagSizer
'''
from wx import *
if __name__ == "__main__":
    root = App()  # 创建主程序
    mainFrame = Frame(None)  # 在主程序之上建立一个一直显示的主窗口，用于与用户进行互动
    mainFrameBoxSizer = GridBagSizer()  # 不指定行列，只接受行间距和列间距两个参数的布局，会根据添加的子孩子属性进行自动调整
    mainFrameBoxSizer.SetFlexibleDirection(wx.ALL)  # 行列宽高自动调整 继承自FlexibleDirection,具有相同的方法

    b1 = Button(mainFrame, id=1, label="button1")
    b2 = StaticText(mainFrame, id=2, label="buttasdon2")

    mainFrameBoxSizer.Add(b1, pos=GBPosition(0,0), span=GBSpan(2,1))  # 向box中添加第一个控件,(0,0)位置，跨两行一列
    mainFrameBoxSizer.Add(b2, pos=GBPosition(3,1), span=GBSpan(3,5))  # 向box中添加第二个控件,(3,1)位置，跨三行五列

    mainFrame.SetSizer(mainFrameBoxSizer)  # BoxSizer生效的最后一个步骤，依附的容器调用SetSizer方法。
    mainFrame.Show()  # 显示主窗口
    root.MainLoop()  # 使主程序一直运转
```
