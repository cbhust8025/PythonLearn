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

*
