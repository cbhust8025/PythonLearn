# Tkinter 学习
整理在使用Tkinter进行界面化设计，涉及到的一些基础知识，给出自己的理解并记录。
## 最简单的一个tk界面
```Python
import Tkinter

if __name__ == "__main__":
    root = Tkinter.Tk()  # create a root window
    root.mainloop()  # create an event loop
```
### 1、Tk库的导入
```Python
import Tkinter   # from Tkinter import *
```
官网介绍两种导入方式，一种是如代码所示，直接```import Tkinter```，这样import了所有Tk库中的类，但是在使用的时候需要加上Tkinter命名空间来进行调用Tk库的相应类（ex:Tkinter.Tk()）;另外一种是官网推荐使用的```from Tkinter import *```，此种方式将Tk库中的所有类和方法都导入到了当前当前文件，不过可能造成命名空间的污染，最大的好处是不需要添加Tkinter来进行调用（ex:Tk()）
### 2、建立主窗口
```Python
root = Tkinter.Tk()  # create a root window
```
建立主窗口有两个目的，一个是为了让我们界面化程序脱离与后台程序的接触，另外一个就是让我们界面能够独立的与用户也是使用者进行互动。

### 3、循环主窗口
```Python
root.mainloop()  # create an event loop
```
控制主窗口一直进行显示，直到退出，主窗口一直循环显示可以不断的与用户进行互动并进行即时反馈，是我们写一个界面化程序的基本所在。
