#include <stdio.h>
#include <stdlib.h>
/*
һ��1. �ṹ������ͬ���͵ļ��ϣ���һ���Զ�����������

    2. �ṹ�����͵Ķ���
       struct  �ṹ����
       {
           ��Ա����  ��Ա��;
           ��Ա����  ��Ա��;
           .....
       };
    3. ����ṹ�������
        struct �ṹ��������  �ṹ���������
    4. �ṹ���Ա���� ��
         �ṹ�������. ��Ա����
    5. typedef  ���б�����  �����ƣ�

���� �ṹ������
   1. �ȶ���ṹ������
   2. �ṹ�����鶨��
           struct �ṹ�������� �ṹ����������
   3. �ṹ������ʹ�ã�
           �ṹ��������[i].��Ա��
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
}

int main()
{

      struct student stu;
      printf("������ѧ����Ϣ");
      scanf("%d",&stu.sno);
      scanf("%s",stu.sname);
      fflush(stdin);
      gets(stu.sname);
      scanf("%c",&stu.sex);
      scanf("%d",&stu.age);
      fflush(stdin);
      gets(stu.address);
      printf("ѧ�ţ�%d\n������%s\n�Ա�%c\n����:%d\n��ͥסַ��%s\n",stu.sno,stu.sname,stu.sex,stu.age,stu.address);
    return 0;
}
