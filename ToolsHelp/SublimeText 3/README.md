# Sublime Text 3 软件使用Tips
## Tip 1、侧边框设置
侧边框字体太小，颜色设置不如意。参考：[侧边框修改](http://blog.csdn.net/qq1169091731/article/details/52737481)

* 确保安装Package Control,SublimeText3管理包的一个控件。可以使用[官网方法](https://sublime.wbond.net/installation)安装。
* PackageResourceViewer：SublimeText主题的配置文件是不能直接打开，要使用一个插件进行打开。下载此插件方法：

>* windows下ctrl+shift+P组合键打开命令行输入框

>* 输入Package Control:Install Package

>* 等待加载完，在提示框输入PackageResourceViewer进行下载。

* 最后使用PackageResourceViewer打开SublimeText的主题配置文件（Theme文件）进行编辑，配置对应的主题内容。

>* windows下ctrl+shift+P组合键打开命令行输入框

>* 输入PackageResourceViewer: Open Resource打开包资源目录

>* 选择Theme-Default, 选择Default.sublime-theme，默认主题设置。（设置主题颜色选择Color Scheme -Default/monokai.tmTheme）

>* 搜索sidebar-label，进行如下设置
```Json
        "class": "sidebar_label",
        "color": [0, 0, 0],
        "font.bold": false,
        "font.italic": false,
        "font_face": "YaHei Consolas hybrid",
        "font.size": 16
```

>* 修改侧边框的背景色：layer0.tint指的是侧边框的背景色，修改了这个为[0,0,0]之后需要调整sidebar-label的颜色为白色。
```Json
    {
        "class": "sidebar_tree",
        "row_padding": [8, 6],
        "indent": 12,
        "indent_offset": 17,
        "indent_top_level": false,
        "layer0.tint": [0, 0, 0],
        "layer0.opacity": 1.0,
        "dark_content": false
    },
```

## Tip 2、一些快捷键
有时候，经常用到的快捷键，在此给予记录。

### 1、Ctrl + /  ---------------------注释当前行，或者在选中内容后，注释选中的内容
### 2、Ctrl + N-------------------新建文件
### 3、shift + del ------------------- 删除当前行
### 4、shift + Tab ------------------- 去除缩进
### 5、Alt+shift+n  ------------------- 当前界面分成n屏
### 6、Ctrl+J ------------------- 将当前选中的合并成一行
### 7、Ctrl+Shift+L ------------------- 可以将当前选中区域打散，然后进行同时编辑

## Tip 3、常用插件

* ConvertToUTF8 : 解决中文乱码问题，支持自动转换保存成utf8
* PackageResourceViewer: 打开sublime 内置的一些source文件
