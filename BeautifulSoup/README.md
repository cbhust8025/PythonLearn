# Beautiful Soup
## 1、简介：
Beautiful Soup是python的一个库，最主要的功能是从网页抓取数据。
* Beautiful Soup提供一些简单的、python式的函数用来处理导航、搜索、修改分析树等功能。它是一个工具箱，通过解析文档为用户提供需要抓取的数据，因为简单，所以不需要多少代码就可以写出一个完整的应用程序。
* Beautiful Soup自动将输入文档转换为Unicode编码，输出文档转换为utf-8编码。你不需要考虑编码方式，除非文档没有指定一个编码方式，这时，Beautiful Soup就不能自动识别编码方式了。然后，你仅仅需要说明一下原始编码方式就可以了。
* Beautiful Soup已成为和lxml、html6lib一样出色的python解释器，为用户灵活地提供不同的解析策略或强劲的速度。

## 2、安装：
Beautiful Soup 3 目前已经停止开发，推荐在现在的项目中使用Beautiful Soup 4，不过它已经被移植到BS4了，也就是说导入时我们需要 import bs4 。所以这里我们用的版本是 Beautiful Soup 4.3.2 (简称BS4)，另外据说 BS4 对 Python3 的支持不够好，不过我用的是 Python2.7.7，如果有小伙伴用的是 Python3 版本，可以考虑下载 BS3 版本。
* 利用pip/easy_install安装：
```Python
easy_install beautifulsoup4
```
```Python
pip install beautifulsoup4
```
* 如果想安装最新的版本，请直接下载安装包来手动安装，也是十分方便的方法：
>* [Beautiful Soup 3.2.1](https://pypi.python.org/pypi/BeautifulSoup/3.2.1)
>* [Beautiful Soup 4.3.2](https://pypi.python.org/pypi/BeautifulSoup/4.3.2)
>* 下载完成后解压，运行：
```Python
sudo python setup.py install
```

* 可以选装lxml、html5lib（解析方式同浏览器）--(同样使用easy_install/pip进行安装)，或者直接使用Python默认的解析器。
>* Python标准库解析器：
```Python
BeautifulSoup(markup, “html.parser”)
```
>>- 优点：
>>>- Python的内置标准库
>>>- 执行速度适中
>>>- 文档容错能力强
>>- 缺点：
>>>- Python 2.7.3 or 3.2.2)前 的版本中文档容错能力差
>* lxml HTML 解析器(需先安装lxml)：
```Python
BeautifulSoup(markup, “lxml”)
```
>>- 优点：
>>>- 速度快
>>>- 文档容错能力强
>>- 缺点：
>>>- 需要安装C语言库
>* lxml XML 解析器：
```Python
BeautifulSoup(markup, [“lxml”, “xml”])
BeautifulSoup(markup, “xml”)
```
>>- 优点：
>>>- 速度快
>>>- 唯一支持XML的解析器
>>- 缺点：
>>>- 需要安装C语言库
>* html5lib：
```Python
BeautifulSoup(markup, “html5lib”)
```
>>- 优点：
>>>- 最好的容错性
>>>- 以浏览器的方式解析文档
>>>- 生成HTML5格式的文档
>>- 缺点：
>>>- 速度慢
>>>- 不依赖外部扩展

## 3、Beautiful Soup对象实例化：
```C++
class BeautifulSoup(bs4.element.Tag)
 |  This class defines the basic interface called by the tree builders.
 
 |  Method resolution order:
 |      BeautifulSoup
 |      bs4.element.Tag
 |      bs4.element.PageElement
 |      __builtin__.object
 
 |  __init__(self, markup='', features=None, builder=None, parse_only=None, from_encoding=None, exclude_encodings=None, **kwargs)
 |      The Soup object is initialized as the 'root tag', and the
 |      provided markup (which can be a string or a file-like object)
 |      is fed into the underlying parser.
```

* 导入bs4库中的BeautifulSoup类：
```Python
from bs4 import BeautifulSoup
```

* 创建BeautifulSoup对象：通过构造函数可以了解，需要提供一个markup参数也就是文本内容，此文本内容会经由features参数对应的解析器。
```Python
soup = BeautifulSoup(
            markup=html,
            features='html.parser', from_encoding='utf-8')
```
>注：markup参数可以是一个html格式的字符串,**后面出现的语法示例均基于此html字符串。**
```Python
html = """
<html><head><title>The Dormouse's story</title></head>
<body>
<p class="title" name="dromouse"><b>The Dormouse's story</b></p>
<p class="story">Once upon a time there were three little sisters; and their names were
<a href="http://example.com/elsie" class="sister" id="link1"><!-- Elsie --></a>,
<a href="http://example.com/lacie" class="sister" id="link2">Lacie</a> and
<a href="http://example.com/tillie" class="sister" id="link3">Tillie</a>;
and they lived at the bottom of a well.</p>
<p class="story">...</p>
"""

soup = BeautifulSoup(markup=html)
```
也可以是打开本地html文件来传入markup参数：
```Python
soup = BeautifulSoup(markup=open('index.html'))
```
>注：不显示提供features参数，则会调用Python内置的默认解析器，并且在运行是会报warning，warning会建议我们使用显示提供解析器，哪怕是使用默认的解析器：
```Python
BeautifulSoup([your markup], "html.parser")
```
>注：格式化输入soup也就是按照html源代码格式进行输出：
```Python
# There are five possible values for the "formatter" argument passed in
    # to methods like encode() and prettify():
    #
    # "html" - All Unicode characters with corresponding HTML entities
    #   are converted to those entities on output.
    # "minimal" - Bare ampersands and angle brackets are converted to
    #   XML entities: &amp; &lt; &gt;
    # None - The null formatter. Unicode characters are never
    #   converted to entities.  This is not recommended, but it's
    #   faster than "minimal".
    # A function - This function will be called on every string that
    #  needs to undergo entity substitution.
    #

    # In an HTML document, the default "html" and "minimal" functions
    # will leave the contents of <script> and <style> tags alone. For
    # an XML document, all tags will be given the same treatment.
    
def prettify(self, encoding=None, formatter="minimal"):
    if encoding is None:
        return self.decode(True, formatter=formatter)
    else:
        return self.encode(encoding, True, formatter=formatter)
        
print soup.prettify()
```


## 4、BeautifulSoup节点类型：
BeautifulSoup构造函数利用解析器将markup实例化成一个树状的结构，其中每一个节点都代表这一个对象类型，根节点为BeautifulSoup对象，其下的每一个节点大多数属于Tag类对象，少数和文本相关的叶子节点为NavigableString类对象及其子类Comment类对象，上面出现的四类对象的继承关系为：
* bs4.BeautifulSoup类继承自bs4.Tag类
* bs4.Tag类和bs4.NavigableString类继承自bs4.PageElement类
* bs4.Comment类继承自bs4.NavigableString类。
> 从继承关系可以看出，BeautifulSoup对象树形结构中的节点类型都是基于基类PageElement类进行继承而来的子类对象，所以我们首先了解一下PageElement类
### 1、bs4.PageElement类：
```C++
// print help(bs4.PageElement)
class PageElement(__builtin__.object)
 |  Contains the navigational information for some part of the page
 |  (either a tag or a piece of text)
```
* 无显示构造函数，继承自内置的object类，可进行实例化：
```Python
a = bs4.PageElement()
print a
# <bs4.element.PageElement object at 0x02E6C5F0>
```

* 此类中包含对于节点信息的一些操作方法，不论节点是tag类，还是文本类型（NavigableString或Comment）。
>* append方法：将所给的tag节点放在当前节点的后面。
```C++
 |  append(self, tag)
 |      Appends the given tag to the contents of this tag.
```

>* extract方法：将当前节点从所在树中剔除。
```C++
 |  extract(self)
 |      Destructively rips this element out of the tree.
```

>* fetch系列方法：作用等同于调用相同功能的find函数。
```C++
 |  fetchNextSiblings = find_next_siblings(self, name=None, attrs={}, text=None, limit=None, **kwargs)
 |  
 |  fetchParents = find_parents(self, name=None, attrs={}, limit=None, **kwargs)
 |  
 |  fetchPrevious = find_all_previous(self, name=None, attrs={}, text=None, limit=None, **kwargs)
 |  
 |  fetchPreviousSiblings = find_previous_siblings(self, name=None, attrs={}, text=None, limit=None, **kwargs)
```

>* find系列方法：参数基本一致，并且与后面Tag类中的find_all方法（调用继承自PageElement类中的私有函数_find_all进行实现）的参数相同。
```C++
 |  findAllNext = find_all_next(self, name=None, attrs={}, text=None, limit=None, **kwargs)
 |  
 |  findAllPrevious = find_all_previous(self, name=None, attrs={}, text=None, limit=None, **kwargs)
 |  
 |  findNext = find_next(self, name=None, attrs={}, text=None, **kwargs)
 |  
 |  findNextSibling = find_next_sibling(self, name=None, attrs={}, text=None, **kwargs)
 |  
 |  findNextSiblings = find_next_siblings(self, name=None, attrs={}, text=None, limit=None, **kwargs)
 |  
 |  findParent = find_parent(self, name=None, attrs={}, **kwargs)
 |  
 |  findParents = find_parents(self, name=None, attrs={}, limit=None, **kwargs)
 |  
 |  findPrevious = find_previous(self, name=None, attrs={}, text=None, **kwargs)
 |  
 |  findPreviousSibling = find_previous_sibling(self, name=None, attrs={}, text=None, **kwargs)
 |  
 |  findPreviousSiblings = find_previous_siblings(self, name=None, attrs={}, text=None, limit=None, **kwargs)
 |  
 |  find_all_next(self, name=None, attrs={}, text=None, limit=None, **kwargs)
 |      Returns all items that match the given criteria and appear
 |      after this Tag in the document.
 |  
 |  find_all_previous(self, name=None, attrs={}, text=None, limit=None, **kwargs)
 |      Returns all items that match the given criteria and appear
 |      before this Tag in the document.
 |  
 |  find_next(self, name=None, attrs={}, text=None, **kwargs)
 |      Returns the first item that matches the given criteria and
 |      appears after this Tag in the document.
 |  
 |  find_next_sibling(self, name=None, attrs={}, text=None, **kwargs)
 |      Returns the closest sibling to this Tag that matches the
 |      given criteria and appears after this Tag in the document.
 |  
 |  find_next_siblings(self, name=None, attrs={}, text=None, limit=None, **kwargs)
 |      Returns the siblings of this Tag that match the given
 |      criteria and appear after this Tag in the document.
 |  
 |  find_parent(self, name=None, attrs={}, **kwargs)
 |      Returns the closest parent of this Tag that matches the given
 |      criteria.
 |  
 |  find_parents(self, name=None, attrs={}, limit=None, **kwargs)
 |      Returns the parents of this Tag that match the given
 |      criteria.
 |  
 |  find_previous(self, name=None, attrs={}, text=None, **kwargs)
 |      Returns the first item that matches the given criteria and
 |      appears before this Tag in the document.
 |  
 |  find_previous_sibling(self, name=None, attrs={}, text=None, **kwargs)
 |      Returns the closest sibling to this Tag that matches the
 |      given criteria and appears before this Tag in the document.
 |  
 |  find_previous_siblings(self, name=None, attrs={}, text=None, limit=None, **kwargs)
 |      Returns the siblings of this Tag that match the given
 |      criteria and appear before this Tag in the document.
```

>* insert系列方法：在某个特定的位置插入节点
```C++
 |  insert(self, position, new_child)
 |  
 |  insert_after(self, successor)
 |      Makes the given element the immediate successor of this one.
 |      
 |      The two elements will have the same parent, and the given element
 |      will be immediately after this one.
 |  
 |  insert_before(self, predecessor)
 |      Makes the given element the immediate predecessor of this one.
 |      
 |      The two elements will have the same parent, and the given element
 |      will be immediately before this one.
```

* 另外，PageElement中的一些方法使用语法糖也即装饰窗进行装饰（@property），可以当做其一种属性进行调用：
>* next:next、nextSibling、next_elements、next_siblings
>* parents
>* previous:previous、previousSibling、previous_elements、previous_siblings

### 2、bs4.NavigableString类（可以遍历的字符串类型）
```C++
class NavigableString(__builtin__.unicode, PageElement)
 |  Method resolution order:
 |      NavigableString
 |      __builtin__.unicode
 |      __builtin__.basestring
 |      PageElement
 |      __builtin__.object
 |  ----------------------------------------------------------------------
 |  Data and other attributes defined here:
 |  
 |  PREFIX = ''
 |  
 |  SUFFIX = ''
 |  
 |  known_xml = None
 |  
 |  ----------------------------------------------------------------------
```

* 我们从类声明中看到，NavigableString主要继承自内置的unicode类以及PageElement类，unicode类使之具有一般字符串均具有的方法（如：decode/find/islower/strip/replace/zfill等）,PageElement类使之具有在BeautifulSoup类对象中节点的一些属性（如：append/fetch/find/insert等）。
* 我们对BeautifulSoup类对象中节点调用string即可得到此类对象
```Python
soup = BeautifulSoup(markup=html, features="html.parser")
print type(soup.p.string)
# <class 'bs4.element.NavigableString'>
```
* 一般用于直接获得某个节点中的文本内容（调用string属性）。

### 3、bs.Comment类（一种特殊的NavigableString）
```C++
class Comment(PreformattedString)
 |  Method resolution order:
 |      Comment
 |      PreformattedString
 |      NavigableString
 |      __builtin__.unicode
 |      __builtin__.basestring
 |      PageElement
 |      __builtin__.object
 |  ----------------------------------------------------------------------
 |  Data and other attributes defined here:
 |  
 |  PREFIX = u'<!--'
 |  
 |  SUFFIX = u'-->'
 |  
 |  ----------------------------------------------------------------------
```

* 在其他的地方与NavigableString基本一致，唯一的区别是Comment有着自身特殊的前缀和后缀，也即html语法中的注释前后缀。所以对于注释的语句，将会使用Comment类创建对象，对当前节点调用string属性时将会得到一个Comment对象，并且会被去除其注释的前后缀，得到注释语句的内容。
```Python
print soup.a
print soup.a.string
print type(soup.a.string)
#<a class="sister" href="http://example.com/elsie" id="link1"><!-- Elsie --></a>
#Elsie 
#<class 'bs4.element.Comment'>

# 如果要使用string属性调用后返回的字符串，可以进行判断后再操作（print）：
if type(soup.a.string)==bs4.element.Comment:
    print soup.a.string
```

### 4、bs.Tag类（Html文本中的标签）
```C++
class Tag(PageElement)
 |  Represents a found HTML tag with its attributes and contents.
 |  
 |  Method resolution order:
 |      Tag
 |      PageElement
 |      __builtin__.object
 
 |  __init__(self, parser=None, builder=None, name=None, namespace=None, prefix=None, attrs=None, parent=None, previous=None, is_xml=None)
 |      Basic constructor.
```

* 继承自PageElement类，具有其一般的方法，不过Tag类自身具有其特殊的一些方法和特性。
* 如果当前节点（Tag类），其子孙中也具有Tag类节点，可以类似属性调用来进行获取相应的子孙节点。(例如：soup.a 等价于soup.find('a') =>即在子孙节点中找到最近一个满足标签名字等于a的Tag类对象)
```Python
print soup.title
# <title>The Dormouse's story</title>

print soup.head
# <head><title>The Dormouse's story</title></head>

print soup.a
# <a class="sister" href="http://example.com/elsie" id="link1"><!-- Elsie --></a>

print soup.p
# <p class="title" name="dromouse"><b>The Dormouse's story</b></p>

print type(soup.a)
#<class 'bs4.element.Tag'>
```

* Tag的属性大部分都是复用继承自PageElement类的find系列函数，不传入参数，然后添加语法糖来实现。多用来遍历文档树。
* Tag属性之name：name属性是获取当前Tag类的Tag名，比如说a标签（<a>..</a>）的标签名为a，其中有一类特殊的标签为BeautifulSoup类标签，其name属性为：**[document]**
```Python
print soup.name
# [document]

print soup.head.name
# head
````

* Tag属性之attrs：attrs属性是以字典的形式获取当前Tag类的所有属性及其属性值。
```Python
print soup.p.attrs
#{'class': ['title'], 'name': 'dromouse'}
```
> 我们可以通过直接复用[]方法来进行获取属性值（等价于get方法）、设置属性值，或者删除此属性值。
```Python
print soup.p['class']
#['title']
print soup.p.get('class')
#['title']

soup.p['class']="newClass"
print soup.p
#<p class="newClass" name="dromouse"><b>The Dormouse's story</b></p>

del soup.p['class']
print soup.p
#<p name="dromouse"><b>The Dormouse's story</b></p>
```

* Tag属性之contents/children(直接子节点，相当于树上面与当前节点直接相连的子节点)：
>* contents：我们可以调用其contents属性来获取当前Tag节点的所有子节点，并且此属性值返回一个list保存所有子节点。
```Python
print soup.head.contents 
#[<title>The Dormouse's story</title>]
```

>* children:调用此属性值，返回当前Tag节点的所有子节点列表的迭代器，使用遍历可以获取所有的子节点。
```Python
print soup.head.children
# <listiterator object at 0x0316E3D0>

for child in soup.head.children:
    print child
<title>The Dormouse's story</title>
```

* Tag属性之descendants（子孙节点，相当于树上面从当前节点出发向下的所有节点），与children属性相同，返回的是一个列表迭代器，需要遍历获取所有子孙节点。
```Python
for child in soup.descendants:
    print child
# 从外到里，也即层序遍历，将所有子孙节点一一输出。
```

* Tag属性之string（获取当前Tag节点的文本内容，不加s，表示单数，也即获取一个字符串）：若当前Tag类只有一个NavigableString类型的子节点（Comment类型也可），可以使用string属性来获取此Ns类型子节点。若当前Tag类节点只有一个子节点，则调用string属性获得的结果与当前唯一的子节点调用string属性获得的结果相同。若当前的节点里面没有Tag类（标签），那么string属性即返回标签里面的文本内容。若里面只有一个唯一的标签，则string则会返回最里面的标签内容。其他情况下：无法判定返回的字符串，则返回None
```Python
print soup.head.string
# The Dormouse's story
print soup.title.string
# The Dormouse's story

print soup.html.string
# None
```

* Tag属性之strings/stripped_strings：当string属性调用返回None时我们需要获取某个标签的所有字符串，可以使用strings属性还有stripped_strings两个属性，strings属性返回的是一个列表生成器，同样可以通过遍历获取其中的所有字符串,stripped_string可以去除多余的空白内容
```Python
print soup.html.strings
# <generator object _all_strings at 0x02DEAAA8>
for s in soup.html.strings:
    print s
# The Dormouse's story
# 
# 
# 
# 
# The Dormouse's story
# 
# 
# Once upon a time there were three little sisters; and their names were
# 
# ,
# 
# Lacie
#  and
# 
# Tillie
# ;
# and they lived at the bottom of a well.
# 
# 
# ...
# 
# 
# 
# 
# 
# Process finished with exit code 0

print soup.html.stripped_strings
# <generator object stripped_strings at 0x0316AA80>

for s in soup.html.stripped_strings:
    print s
# The Dormouse's story
# The Dormouse's story
# Once upon a time there were three little sisters; and their names were
# ,
# Lacie
# and
# Tillie
# ;
# and they lived at the bottom of a well.
# ...
```

* Tag属性之 parent：获取当前节点的直接父亲节点，当前节点可以为NavigableString/Comment类节点。（parents原理同children）
```Python
p = soup.p
print p.parent.name
#body

content = soup.head.title.string
print content.parent.name
#title
```

* Tag属性之next_sibling/previous_sibling:兄弟节点可以理解为和本节点处在统一级的节点，.next_sibling 属性获取了该节点的下一个兄弟节点，.previous_sibling 则与之相反，如果节点不存在，则返回 None
> **注**：实际文档中的tag的 .next_sibling 和 .previous_sibling 属性通常是字符串或空白，因为空白或者换行也可以被视作一个节点，所以得到的结果可能是空白或者换行
```Python
print soup.p.next_sibling
#       实际该处为空白
print soup.p.prev_sibling
#None   没有前一个兄弟节点，返回 None
print soup.p.next_sibling.next_sibling
#<p class="story">Once upon a time there were three little sisters; and their names were
#<a class="sister" href="http://example.com/elsie" id="link1"><!-- Elsie --></a>,
#<a class="sister" href="http://example.com/lacie" id="link2">Lacie</a> and
#<a class="sister" href="http://example.com/tillie" id="link3">Tillie</a>;
#and they lived at the bottom of a well.</p>
#下一个节点的下一个兄弟节点是我们可以看到的节点
```

* Tag属性之next_siblings/previous_siblings：原理同children，返回列表迭代器，可以遍历输出所有的兄弟节点。
* Tag属性之next_element/previous_element：与兄弟节点不同，这两属性针对的所有的节点，不分层次。
```Python
print soup.head
# <head><title>The Dormouse's story</title></head>
print soup.head.next_element
# <title>The Dormouse's story</title>
```
* Tag属性之next_elements/previous_elements：同理，不在赘述。

* Tag节点搜索查找：
>* find_all方法（实际上调用父类PageElement的私有方法_find_all实现）：find_all() 方法搜索当前tag的所有tag子节点,并判断是否符合过滤器的条件。
```Python
    def find_all(self, name=None, attrs={}, recursive=True, text=None,
                 limit=None, **kwargs):
        """Extracts a list of Tag objects that match the given
        criteria.  You can specify the name of the Tag and any
        attributes you want the Tag to have.

        The value of a key-value pair in the 'attrs' map can be a
        string, a list of strings, a regular expression object, or a
        callable that takes a string and returns whether or not the
        string matches for some custom definition of 'matches'. The
        same is true of the tag name."""
        
        generator = self.descendants
        if not recursive:
            generator = self.children
        return self._find_all(name, attrs, text, limit, generator, **kwargs)
```
>>- name参数：name 参数可以查找所有名字为 name 的tag,字符串对象会被自动忽略掉。
>>>- 1、传入字符串：最简单的过滤器，搜索方法中传入一个字符串参数，会查找所有与字符串完整匹配的节点
```Python
soup.find_all(name='b')
# 查找所有文档中的所有b标签
```

>>>- 2、传入正则表达式：传入正则表达式作为name参数，则会通过正则表达式的```match（）```来进行匹配内容
```Python
soup.find_all(name=re.compile('^b'))
# 查找文档中的所有以b开头的标签，可以找到b还有body标签
```

>>>- 3、传入字符串列表：查找所有与字符串列表中任意一个匹配的标签。
```Python
soup.find_all(name=['a', 'b'])
# 查找所有的a,b标签
```

>>>- 4、传入True：查找所有的标签，即True可以匹配所有的标签。
```Python
soup.find_all(name=True)
# 查找所有的标签
```

>>>- 5、传函数：该函数只接受一个参数（tag类对象），返回bool型，返回True表示匹配成功，否则匹配失败。
```Python
# 下面方法校验了当前元素,如果包含 class 属性却不包含 id 属性,那么将返回 True:
def has_class_but_no_id(tag):
    return tag.has_attr('class') and not tag.has_attr('id')
    
# 将这个方法作为参数传入 find_all() 方法,将得到所有<p>标签:
soup.find_all(has_class_but_no_id)
# [<p class="title"><b>The Dormouse's story</b></p>,
#  <p class="story">Once upon a time there were...</p>,
#  <p class="story">...</p>]
```

>>- attrs参数：词典形式传入，含义为所想要查找节点的属性及属性值，此字典中的所有参数也可使用keyword参数形式进行传入。```attrs={"class":"title"}```等价于```class="title"```
```Python
soup.find(attrs={"class": "title"})
# 等价于下面语句
soup.find(class="title")
```

>>- keyword参数：等价于attrs参数的一部分。如果一个指定名字的参数不是搜索内置的参数名,搜索时会把该参数当作指定名字tag的属性来搜索，也即不会主动判断查找的节点是否具有此属性，换言之，如果包含一个名字为 id 的参数,Beautiful Soup会搜索每个tag的”id”属性。同样的，属性值也可以使用正则表达式进行匹配，原理同name参数。
```Python
# 如果传入 href 参数,Beautiful Soup会搜索每个tag的”href”属性
soup.find_all(href=re.compile("elsie"))
# [<a class="sister" href="http://example.com/elsie" id="link1">Elsie</a>]

# 使用多个指定名字的参数可以同时过滤tag的多个属性
soup.find_all(href=re.compile("elsie"), id='link1')
# [<a class="sister" href="http://example.com/elsie" id="link1">three</a>]

# 在这里我们想用 class 过滤，不过 class 是 python 的关键词，这怎么办？加个下划线就可以
soup.find_all("a", class_="sister")
# [<a class="sister" href="http://example.com/elsie" id="link1">Elsie</a>,
#  <a class="sister" href="http://example.com/lacie" id="link2">Lacie</a>,
#  <a class="sister" href="http://example.com/tillie" id="link3">Tillie</a>]

# 有些tag属性在搜索不能使用,比如HTML5中的 data-* 属性
data_soup = BeautifulSoup('<div data-foo="value">foo!</div>')
data_soup.find_all(data-foo="value")
# SyntaxError: keyword can't be an expression
# 但是可以通过 find_all() 方法的 attrs 参数定义一个字典参数来搜索包含特殊属性的tag
data_soup.find_all(attrs={"data-foo": "value"})
# [<div data-foo="value">foo!</div>]
```

>>- text参数：通过text参数搜索文档中的字符串内容，与name参数相同，接受字符串，正则表达式，列表，True等参数。
```Python
soup.find_all(text="Elsie")
# [u'Elsie']
 
soup.find_all(text=["Tillie", "Elsie", "Lacie"])
# [u'Elsie', u'Lacie', u'Tillie']
 
soup.find_all(text=re.compile("Dormouse"))
[u"The Dormouse's story", u"The Dormouse's story"]
```

>>- limit参数：find_all() 方法返回全部的搜索结构,如果文档树很大那么搜索会很慢.如果我们不需要全部结果,可以使用 limit 参数限制返回结果的数量.效果与SQL中的limit关键字类似,当搜索到的结果数量达到 limit 的限制时,就停止搜索返回结果.
```Python
# 限制搜索到两个结果就停止搜索
soup.find_all("a", limit=2)
# [<a class="sister" href="http://example.com/elsie" id="link1">Elsie</a>,
#  <a class="sister" href="http://example.com/lacie" id="link2">Lacie</a>]
```

>>- recursive 参数:调用tag的 find_all() 方法时,Beautiful Soup会检索当前tag的所有子孙节点,如果只想搜索tag的直接子节点,可以使用参数 recursive=False。
