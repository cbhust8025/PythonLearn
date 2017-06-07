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

>* 选择Theme-Default, 选择Default.sublime-theme，默认主题设置。

>* 搜索sidebar-label，进行如下设置
```Json
        "class": "sidebar_label",
        "color": [0, 0, 0],
        "font.bold": false,
        "font.italic": false,
        "font_face": "YaHei Consolas hybrid",
        "font.size": 16
```
