#include <stdio.h>
int max(int a,int b);
main()
{  
 
   int x,y,z;
                                     //*pmax是一个指针变量，指向返回值为整型的函数
                                     //pmax指向函数max
   printf("input two numbers:\n"); 
   scanf("%d%d",&x,&y);
   z=max(a,b);
                                 //调用pmax所指函数max，返回一个整型值，赋给
    printf("maxnum=%d\n",z);  
}

int max(int a,int b)
{ 
   if(a>b) return a;
   else    return b;
}
