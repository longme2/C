#include<stdio.h>
int main()
{
	int a[]={10,20,30};
	int *pa=a;
	printf("++*pa:%d",++*pa);
	printf("*pa:%d",*pa);
	pa=a;
	printf("(*pa)++:%d",(*pa)++);
	printf("*pa:%d\n",*pa);
	pa=a;
	printf("*pa++:%d\n",*pa++);
	printf("*pa:%d\n",*pa);
	pa=a;
	printf("*++pa:%d",*++pa);
	printf("*pa:%d\n",*pa);
	return 0;
}
