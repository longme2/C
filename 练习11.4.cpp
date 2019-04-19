#include<stdio.h>
swap(int  *p1, int  *p2)
{   int p;
    p=*p1;
    *p1=*p2;
    *p2=p;
}
int main()
{   int a,b;
    int *pointer_1,*pointer_2;
    printf("Enter two number: ");
    scanf("%d %d",&a,&b);
    pointer_1=&a;  pointer_2=&b;
   swap(pointer_1,pointer_2);
    printf("\n%d %d\n",a,b);
}

