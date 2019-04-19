/*1. 定义图书信息结构体：
     成员 ： 书号   isbn
             书名   bookName
             作者   author
             出版社  publisher
             单价    price
             页码    pages
2. 定义结构体指针变量

3. 利用结构体指针输出书籍信息

4. 完成按书名 查找书籍信息

*/
//运用指针变量指向结构体数组输出书籍信息
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

struct BookInfo
{
   char isbn[30];
   char bookName[80];
   char author[50];
   char publisher[30];
   float price;
   int pages;
}book[3]={{"9787234234234","C语言案例教程","谭浩强","清华大学出版社",23.4,300},
{"9787234234123","C语言程序设计基础","王平","高等教育出版社",33.2,340},
{"9787234231204","Java程序设计","李明","清华大学出版社",45.4,512}};

int main()
{

    struct BookInfo *p;
    p=book;

    printf("书号\t\t书名\t\t作者\t\t出版社\t\t单价\t\t页数\n");
    for(p=book;p<book+3;p++)
    {
        printf("%d\t\t%s\t\t%s\t\t%s\t\t%f\t\t%d\n",p->isbn,p->bookName,p->author,p->publisher,p->price,p->pages);
    }
    return 0;






}
