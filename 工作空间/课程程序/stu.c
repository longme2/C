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

����ָ��ṹ���ָ��
    1. int *p;
       int a;
       p=&a;
       ���壺struct �ṹ���� * ָ�������
       ��ֵ�� ָ����� = & �ṹ�����
       ���ʳ�Ա��ʵ�ּ�ӷ���(*pstu).sno ��һ�㲻�ã�  �ȼ��� pstu->sno  �ȼ��� stu.sno
                 ָ�����-����Ա��
�ġ�ָ��ṹ������ı���
       int *p��   == struct student *p;    struct  �ṹ����  *ָ����
       int a;     ==                       ָ����=�ṹ����������
       p=a;       ==                       ָ��-����Ա��


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
} stu[3] = {{1001, "��Ƽ", 'F', 20, "����ʡ����", 90, 80, 88},
    {1002, "������", 'F', 25, "����", 100, 90, 60},
     {1003, "������", 'M', 30, "�Ϻ�", 80, 70, 80}};

int main()
{
    int i, sum = 0;
    float aver;
    struct student * p;
    p=stu;

    printf ( "ѧ��\t����\t�Ա�\t����\t��ͥסַ\n" );
    for ( p = stu; p < stu+3; p++ )
    {
        printf ( "%d\t%s\t %c\t %d\t%s\n", p->sno, p->sname, p->sex, p->age,p->address );
    }

    for ( p=stu; p <stu+3; p++ )
    {
        p->totalScore = p->cscore + p->escore + p->mscore;
    }
    printf("-----------------------------------------------\n");
    printf ( "ѧ��\t����\tC����\t��ѧ\tӢ��\t�ܳɼ�\n" );

    for ( p= stu; p< stu+3; p++ )
    {
        printf ( "%d\t%s\t %d\t %d\t%d\t %d\n", p->sno,p->sname, p->cscore,p->mscore, p->escore, p->totalScore );
    }

//  STU  stu;
    /*  stu.sno = 1001;
      strcpy(stu.sname,"����");
      stu.sex='M';
      stu.age = 20;
      strcpy(stu.address,"����ʡ����");*/
    /*  scanf("%d",&stu.sno);
     // scanf("%s",stu.sname);
      fflush(stdin);
      gets(stu.sname);
      scanf("%c",&stu.sex);
      scanf("%d",&stu.age);
      fflush(stdin);
      gets(stu.address);*/
    //  printf("ѧ�ţ�%d\n������%s\n�Ա�%c\n����:%d\n��ͥסַ��%s\n",stu2.sno,stu2.sname,stu2.sex,stu2.age,stu2.address);
    return 0;
}
