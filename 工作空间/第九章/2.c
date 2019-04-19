#include <stdio.h>
int main()
{
    int  a[ ]={1,2,3,4,5,6};
    int   *p ,i ;
    p=a;
    *(p+4)+=3;
	p++;
    printf("n1=%d ,n2=%d \n",*p , *(p+3));
   return 0;
}
