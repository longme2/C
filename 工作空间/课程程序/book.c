/*1. ����ͼ����Ϣ�ṹ�壺
     ��Ա �� ���   isbn
             ����   bookName
             ����   author
             ������  publisher
             ����    price
             ҳ��    pages
2. ����ṹ��ָ�����

3. ���ýṹ��ָ����Ϣ���

*/

#include <stdio.h>
#include <stdlib.h>
// 1. ����ṹ����������
struct BookInfo
{
   char isbn[30];
   char bookName[80];
   char author[50];
   char publisher[30];
   float price;
   int pages;
}book2={"9787234234234","C���԰����̳�","̷��ǿ","�廪��ѧ������",23.4,300};

int main()
{
    //2. ����ṹ�����
   // struct BookInfo book1;
   struct BookInfo book1;
   struct BookInfo * book2;
    //3. ������Ϣ
    printf("���������:");
    gets(book2->isbn);
    printf("����������:");
    gets(book2->bookName);
    printf("����������:");
    gets(book2->author);
    printf("�����������:");
    gets(book2->publisher);
    printf("�����뵥��:");
    scanf("%f",& book2->price);
    printf("��������ҳ��:");
    scanf("%d",& book2->pages);
    printf("---------ͼ����Ϣ------------\n");
    printf("���:%s\n����:%s\n����:%s\n����:%.2f\nҳ��:%d\n",book2->isbn,book2->bookName,book2->author,book2->price,book2->pages);
    printf("---------ͼ����Ϣ------------\n");
    printf("���:%s\n����:%s\n����:%s\n����:%.2f\nҳ��:%d\n",book2->isbn,book2->bookName,book2->author,book2->price,book2->pages);

   printf("%d\n",sizeof(struct BookInfo));





}
