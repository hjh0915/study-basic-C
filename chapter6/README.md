数组
====
1、不能用变量对数组进行定义   
2、数组在内存中是按行存放的   
3、计算数组的容量大小使用sizeof()

一维数组
=======
hello_01.c
----------
输入数组形式的学号及成绩并输出最高分及其学号

hello_02.c
----------
使用交换法降序排序成绩
*使用到了temp过渡变量*

hello_03.c
----------
分模块，封装函数Sort()   
向函数传递一维数组 

hello_04.c
----------
使用选择法降序排序成绩   
引入k作为中间变量

hello_05.c
----------
顺序查找：依据学号查找到对应的成绩

hello_06.c
----------
二分法查找：分为左右两部分以及中间部分，循环除以2判断大小

注意：
====
1、所有的实参都是单项传值的。   
2、声明形参数组时，可定义为固定长度数组，也可定义为可变长度数组。