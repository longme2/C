#include<stdio.h>
int *fun(int *,int *);
int main()
{

    int *p,i,j;
    printf("��������������: ");
    scanf("%d%d",&i,&j);
    p=fun(&i,&j);
    printf("i=%d,j=%d\n",i,j);
    printf("�������������ֵ: %d\n",*p);
    return 0;
}
int *fun(int *p1,int *p2)
{
    if(*p1>*p2)   return p1;
    return p2;
}
