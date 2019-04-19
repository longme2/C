 #include <stdio.h>
int main()
{
    int  a[10]={1,2,3,4,5,6,7,8,9,0};
    int   max ,*p ;
    p=&a;
    max=*p;
    while( p < p+10)
       if(*p>max)  max = *p;
     printf("max=%d\n",max);
    return 0;
 }
