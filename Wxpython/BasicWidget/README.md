# 基本控件篇
## 布局管理器
wxpython中控件类构造函数含有size/pos两个参数的都可以直接进行设定绝对位置以及绝对大小来进行布局，不过对于稍过复杂的界面，我们需要wx提供具有更加强大功能的布局管理器sizer。
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
wx库中的Sizer类是一个抽象基类，不能直接使用来进行布局管理。我们可以使用其下面的五个子类之一来进行布局管理：
* BoxSizer类：在一条线上布局子窗口部件。wx.BoxSizer的布局方向可以是水平或坚直的，并且可以在水平或坚直方向上包含子sizer以创建复杂的布局。在项目被添加时传递给sizer的参数控制子窗口部件如何根据box的主体或垂直轴线作相应的尺寸调整
* StaticBoxSizer类：等同于wx.BoxSizer，只是在box周围多了一个附加的边框（有一个可选的标签）
* GridSizer类：一个固定的二维网格，其中的每个元素都有相同的尺寸。当创建一个grid sizer时，你要么固定行的数量，要么固定列的数量。项目被从左到右的添加，直到一行被填满，然后从下一行开始。
* FlexGridSizer类：一个固定的二维网格，它与wx.GridSizer的区别是，行和列根据所在行或列的最大元素分别被设置。
* GridBagSizer类：一个固定的二维网格，基于wx.FlexGridSizer。允许项目被放置在网格上的特定点，也允许项目跨越多和网格区域。
### 1、BoxSizer类
### 2、GridSizer类
### 3、StaticBoxSizer类
### 4、FlexGridSizer类
### 5、GridBagSizer类
