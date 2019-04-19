/*1. 定义图书信息结构体：
     成员 ： 书号   isbn
             书名   bookName
             作者   author
             出版社  publisher
             单价    price
             页码    pages
2. 定义结构体指针变量

3. 利用结构体指针信息输出

*/

#include <stdio.h>
#include <stdlib.h>
// 1. 定义结构体数据类型
struct BookInfo
{
   char isbn[30];
   char bookName[80];
   char author[50];
   char publisher[30];
   float price;
   int pages;
}book2={"9787234234234","C语言案例教程","谭浩强","清华大学出版社",23.4,300};

int main()
{
    //2. 定义结构体变量
   // struct BookInfo book1;
   struct BookInfo book1;
   struct BookInfo * book2;
    //3. 输入信息
    printf("请输入书号:");
    gets(book2->isbn);
    printf("请输入书名:");
    gets(book2->bookName);
    printf("请输入作者:");
    gets(book2->author);
    printf("请输入出版社:");
    gets(book2->publisher);
    printf("请输入单价:");
    scanf("%f",& book2->price);
    printf("请输入总页数:");
    scanf("%d",& book2->pages);
    printf("---------图书信息------------\n");
    printf("书号:%s\n书名:%s\n作者:%s\n单价:%.2f\n页数:%d\n",book2->isbn,book2->bookName,book2->author,book2->price,book2->pages);
    printf("---------图书信息------------\n");
    printf("书号:%s\n书名:%s\n作者:%s\n单价:%.2f\n页数:%d\n",book2->isbn,book2->bookName,book2->author,book2->price,book2->pages);

   printf("%d\n",sizeof(struct BookInfo));





}
