#include <stdio.h>
#include <stdlib.h>
/*
一、1. 结构体概念：不同类型的集合，是一种自定义数据类型

    2. 结构体类型的定义
       struct  结构体名
       {
           成员类型  成员名;
           成员类型  成员名;
           .....
       };
    3. 定义结构体变量：
        struct 结构体类型名  结构体变量名；
    4. 结构体成员引用 ：
         结构体变量名. 成员名；
    5. typedef  已有变量名  新名称；

二、 结构体数组
   1. 先定义结构体类型
   2. 结构体数组定义
           struct 结构体类型名 结构体数组名；
   3. 结构体数组使用：
           结构体数组名[i].成员名
*/
struct student
{
    int sno;
    char sname[20];
    char sex;
    int age;
    char address[20];
    int cscore;
    int mscore;
    int escore;
    int totalScore;
};

int main()
{

      struct student stu;
      struct student * pstu;     //定义结构体变量
      pstu=&stu;                 //实现间接访问(*pstu).sno （一般不用）  等价于 pstu->sno  等价于 stu.sno
      printf("请输入学生信息:");
      scanf("%d",& pstu->sno);
      //scanf("%s",stu.sname);
      fflush(stdin);
      gets(pstu->sname);
     // scanf("%c",& pstu->sex);
      scanf("%d",& pstu->age);
      fflush(stdin);
      gets(pstu->address);
      printf("学号：%d\n姓名：%s\n性别：%c\n年龄:%d\n家庭住址：%s\n",pstu->sno,pstu->sname,pstu->sex,pstu->age,pstu->address);
    return 0;
}
