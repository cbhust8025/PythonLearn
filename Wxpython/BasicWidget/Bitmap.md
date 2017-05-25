# 基本控件之位图篇
>利用```print help(wx.Bitmap)```来获取详细信息
位图是我们在使用wxpython构建图形化界面的时候使用到与图片相关的一个类。
## 1、基本位图Bitmap类
```C++
class Bitmap(GDIObject)
 |  The wx.Bitmap class encapsulates the concept of a platform-dependent
 |  bitmap.  It can be either monochrome or colour, and either loaded from
 |  a file or created dynamically.  A bitmap can be selected into a memory
 |  device context (instance of `wx.MemoryDC`). This enables the bitmap to
 |  be copied to a window or memory device context using `wx.DC.Blit`, or
 |  to be used as a drawing surface.
 
 |  __init__(self, *args, **kwargs)
 |      __init__(self, String name, int type=BITMAP_TYPE_ANY) -> Bitmap
 |      
 |      Loads a bitmap from a file.
```

* Bitmap类的构造函数接受一个字符串为参数，一般情况下字符串为图片路径，将图片导入到程序中形成位图，用于后续的控件。
* 此外，Bitmap提供了丰富的方法进行位图控制。
>* ConvertToImage方法：将读入的位图转换成依赖平台的image数据.
```C++
 |  ConvertToImage(*args, **kwargs)
 |      ConvertToImage(self) -> Image
 |      
 |      Creates a platform-independent image from a platform-dependent
 |      bitmap. This preserves mask information so that bitmaps and images can
 |      be converted back and forth without loss in that respect.
```

>* Get方法：获取读入的位图相关信息。(均有其对应的Set方法)
```C++
 |  GetDepth(*args, **kwargs)
 |      GetDepth(self) -> int
 |      
 |      Gets the colour depth of the bitmap. A value of 1 indicates a
 |      monochrome bitmap.
 |  GetHeight(*args, **kwargs)
 |      GetHeight(self) -> int
 |      
 |      Gets the height of the bitmap in pixels.
 |  GetSize(*args, **kwargs)
 |      GetSize(self) -> Size
 |      
 |      Get the size of the bitmap.
 |  
 |  GetSubBitmap(*args, **kwargs)
 |      GetSubBitmap(self, Rect rect) -> Bitmap
 |      
 |      Returns a sub-bitmap of the current one as long as the rect belongs
 |      entirely to the bitmap. This function preserves bit depth and mask
 |      information.
 |  GetWidth(*args, **kwargs)
 |      GetWidth(self) -> int
 |      
 |      Gets the width of the bitmap in pixels.
```

>* LoadFile/SaveFile方法：将当前的位图重新读入文件，或者保存至某个文件。
```C++
 |  LoadFile(*args, **kwargs)
 |      LoadFile(self, String name, int type) -> bool
 |      
 |      Loads a bitmap from a file.  See `__init__` for a description of the
 |      ``type`` parameter.
  |  SaveFile(*args, **kwargs)
 |      SaveFile(self, String name, int type, Palette palette=None) -> bool
 |      
 |      Saves a bitmap in the named file.  See `__init__` for a description of
 |      the ``type`` parameter.
```
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

    bm1 = Bitmap("004545.jpg")
    b1 = BitmapButton(mainFrame, bitmap=bm1)
    b1.Bind(EVT_BUTTON, handler=hi)

    mainFrame.Show()  # 显示主窗口
    root.MainLoop()  # 使主程序一直运转
```
