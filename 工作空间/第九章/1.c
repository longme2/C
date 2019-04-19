#include <stdio.h>
int main( )
{
	int  *p,a=15,b=5;
	p=&a;
	a=*p+b;
	printf("a=%d,%d \n",a,*p);
	return 0;
}
