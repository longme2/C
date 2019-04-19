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

三、指向结构体的指针
    1. int *p;
       int a;
       p=&a;
       定义：struct 结构体名 * 指针变量；
       赋值： 指针变量 = & 结构体变量
       访问成员：实现间接访问(*pstu).sno （一般不用）  等价于 pstu->sno  等价于 stu.sno
                 指针变量-〉成员名
四、指向结构体数组的变量
       int *p；   == struct student *p;    struct  结构体名  *指针名
       int a;     ==                       指针名=结构体数组名；
       p=a;       ==                       指针-〉成员名


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
} stu[3] = {{1001, "李萍", 'F', 20, "海南省三亚", 90, 80, 88},
    {1002, "王丽丽", 'F', 25, "北京", 100, 90, 60},
     {1003, "张晓峰", 'M', 30, "上海", 80, 70, 80}};

int main()
{
    int i, sum = 0;
    float aver;
    struct student * p;
    p=stu;

    printf ( "学号\t姓名\t性别\t年龄\t家庭住址\n" );
    for ( p = stu; p < stu+3; p++ )
    {
        printf ( "%d\t%s\t %c\t %d\t%s\n", p->sno, p->sname, p->sex, p->age,p->address );
    }

    for ( p=stu; p <stu+3; p++ )
    {
        p->totalScore = p->cscore + p->escore + p->mscore;
    }
    printf("-----------------------------------------------\n");
    printf ( "学号\t姓名\tC语言\t数学\t英语\t总成绩\n" );

    for ( p= stu; p< stu+3; p++ )
    {
        printf ( "%d\t%s\t %d\t %d\t%d\t %d\n", p->sno,p->sname, p->cscore,p->mscore, p->escore, p->totalScore );
    }

//  STU  stu;
    /*  stu.sno = 1001;
      strcpy(stu.sname,"张磊");
      stu.sex='M';
      stu.age = 20;
      strcpy(stu.address,"海南省三亚");*/
    /*  scanf("%d",&stu.sno);
     // scanf("%s",stu.sname);
      fflush(stdin);
      gets(stu.sname);
      scanf("%c",&stu.sex);
      scanf("%d",&stu.age);
      fflush(stdin);
      gets(stu.address);*/
    //  printf("学号：%d\n姓名：%s\n性别：%c\n年龄:%d\n家庭住址：%s\n",stu2.sno,stu2.sname,stu2.sex,stu2.age,stu2.address);
    return 0;
}
