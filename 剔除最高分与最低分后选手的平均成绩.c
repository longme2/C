/*�޳���߷�����ͷֺ�ѡ�ֵ�ƽ���ɼ�*/ 
#include<stdio.h>
#define N 13
int main()
{
    int score[N],*p=&score[N],sum=0,i=0,high,low;
    for(p=score;p<score+N;p++,i++)
    {
        printf("�������%dλ��ί�ɼ�:",i+1);
        scanf("%d",p);
        sum+=*p;
    }
    p=score;
    high=*p;
    low=*p;
    for(;p<score+N;p++)
    {
        if (high<*p) high=*p;
        if (low>*p) low=*p;
    }
    printf("�������÷�Ϊ:%g\n",(float)(sum-high-low)/(N-2));
    return 0;
}




