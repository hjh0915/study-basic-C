结构体
=====
声明
----
``` c
struct 结构体名 {
    成员变量声明语句
} 结构体变量1, 结构体变量2;
```
注意：   
1、记得在句尾有一个';'   
2、只为结构体变量分配内存

结构体变量的指针
--------------
可以使用圆点运算符，也可以使用箭头运算符   
```c 
struct STUDENT *pt, student1;
pt = &student1;
pt -> studentID = 12;

struct STUDENT *pt, student1;
pt = &student1;
(*pt).studentID = 12;
```