#include<stdio.h>
#define AMOUNT 100
int main()
{
	int a;
	a=1.05*AMOUNT;
	printf("Enter an amount:%d\n",AMOUNT);
	printf("With tax added:%d\n",a);
	return 0;
}