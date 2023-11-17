# 我们是JieDevFuStudio(接地府)

**这是我们第一个上传的项目：电报机**

### 这个项目的文件构成：

| README.md         | ~~不用多说~~            |
| ----------------- | ------------------- |
| encoder.cpp       | 电报机的编码器             |
| decoder.cpp       | 电报机的解码器             |
| exercise.cpp      | 练习打码速度              |
| Complie_CPlus.bat | 编译命令，**需要自备g++编译器** |

如果您没有g++编译器，可以跳转到`release`页面下载编译好的exe文件。

### 请放心，bat文件没有任何病毒，请放心运行。

bat文件内容:

```batch
g++ decoder.cpp -o decoder.exe -std=c++14
g++ encoder.cpp -o encoder.exe -std=c++14
g++ exercise.cpp -o exercise.exe -std=c++14
```

### 使用方法：

* 执行bat文件编译cpp文件（若没有g++编译器请到`release`页面下载exe文件）

* 运行`encoder.exe`，按照程序的指引输入内容，输入完成后会得到一个编码结果，请把它截图，发给（或保存）要解码的人（自己）。

* 运行`decoder.exe`，在键盘（建议在数字小键盘区）依次按下相对应的按键（编码器结果中有按键顺序），屏幕上会依次显示色块，**（注意：打错了不能删除，只能重新打，所以建议编码的长度不要太长）**。当按照编码器的结果依次输入完，解码结果会立即显示在下方。
  
  ### 祝您使用愉快
