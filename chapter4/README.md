分离个十百位的数
==============
hello_01.c

计算一元二次方程
==============
hello_02.c   
----------
计算的方程为：ax^2+bx+c=0（即b^2-4ac>0）

hello_02_2.c
------------
1、引入<stdlib.h>，调用标准库函数exit()终止整个个程序的执行。stdlib.h里面定义了五种类型、一些宏和通用工具函数。 类型例如：size_t、wchar_t、div_t、ldiv_t和lldiv_t; 宏例如：EXIT_FAILURE、EXIT_SUCCESS、RAND_MAX和MB_CUR_MAX等等; 常用的函数如：malloc()、calloc()、realloc()、free()、system()、atoi()、atol()、rand()、srand()、exit()等等。   
2、使用宏定义
``` c
#define  标识符  常量(字符串)   //注意, 最后没有分号
```

1、需要引用<math.h>   
2、因为引用了math头文件，所以在编译时gcc需要在后部添加-lm   
3、使用了数学中判别式的计算方法

条件运算符
=========
hello_03.c
----------
if、else、else if
-----------------
常用条件结构体

三目运算符
---------
表达式1 ? 表达式2 : 表达式3   
*注：*
1、表达式1的值为真，则此表达式的值为表达式2, 反之为表达式3   
2、表达式也可以是函数调用

开关语句
=======
hello_04.c