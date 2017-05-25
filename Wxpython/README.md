# Wxpython 学习
整理在使用Wxpython进行界面化设计，涉及到的一些基础知识，给出自己的理解并记录。
## 最简单的一个wx界面
```Python
#!/usr/bin/env python
# encoding: gbk
'''
最小的wx程序
'''
import wx
if __name__ == "__main__":
    root = wx.App()  # 创建主程序
    mainFrame = wx.Frame(None)  # 在主程序之上建立一个一直显示的主窗口，用于与用户进行互动
    mainFrame.Show()  # 显示主窗口
    root.MainLoop()  # 使主程序一直运转
```
### 1、wx库的导入
```Python
import wx   # from wx import *
```
官网介绍两种导入方式，一种是如代码所示，直接```import wx```，这样import了所有Tk库中的类，但是在使用的时候需要加上wx命名空间来进行调用wx库的相应类（ex:wx.App()）;另外一种是官网推荐使用的```from wx import *```，此种方式将Tk库中的所有类和方法都导入到了当前当前文件，不过可能造成命名空间的污染，最大的好处是不需要添加wx来进行调用（ex:wx.App() --> App()）
### 2、建立主程序
```Python
    root = wx.App()  # 创建主程序
    root.MainLoop()  # 使主程序一直运转
```
wx程序需要首先建立一个可以无限循环下去的主程序（Frame类无MainLoop方法），然后才能在此主程序上面建立各个窗口，在这一点上wx与tk有着显著的不同。
### 3、建立主窗口
```Python
    mainFrame = wx.Frame(None)  # 在主程序之上建立一个一直显示的主窗口，用于与用户进行互动
    mainFrame.Show()  # 显示主窗口
```
建立主窗口有两个目的，一个是为了让我们界面化程序脱离与后台程序的接触，另外一个就是让我们界面能够独立的与用户也是使用者进行互动。


