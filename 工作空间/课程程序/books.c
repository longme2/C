/*1. ����ͼ����Ϣ�ṹ�壺
     ��Ա �� ���   isbn
             ����   bookName
             ����   author
             ������  publisher
             ����    price
             ҳ��    pages
2. ����ṹ��ָ�����

3. ���ýṹ��ָ������鼮��Ϣ

4. ��ɰ����� �����鼮��Ϣ

*/
//����ָ�����ָ��ṹ����������鼮��Ϣ
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
}book[3]={{"9787234234234","C���԰����̳�","̷��ǿ","�廪��ѧ������",23.4,300},
{"9787234234123","C���Գ�����ƻ���","��ƽ","�ߵȽ���������",33.2,340},
{"9787234231204","Java�������","����","�廪��ѧ������",45.4,512}};

int main()
{

    struct BookInfo *p;
    p=book;

    printf("���\t\t����\t\t����\t\t������\t\t����\t\tҳ��\n");
    for(p=book;p<book+3;p++)
    {
        printf("%d\t\t%s\t\t%s\t\t%s\t\t%f\t\t%d\n",p->isbn,p->bookName,p->author,p->publisher,p->price,p->pages);
    }
    return 0;






}
