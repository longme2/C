#include <stdio.h>
int max(int a,int b);
main()
{  
 
   int x,y,z;
                                     //*pmax��һ��ָ�������ָ�򷵻�ֵΪ���͵ĺ���
                                     //pmaxָ����max
   printf("input two numbers:\n"); 
   scanf("%d%d",&x,&y);
   z=max(a,b);
                                 //����pmax��ָ����max������һ������ֵ������
    printf("maxnum=%d\n",z);  
}

int max(int a,int b)
{ 
   if(a>b) return a;
   else    return b;
}
