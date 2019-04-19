#include<stdio.h>
int main()
{
	int fib_number[40]={0,1},n=2;
	printf("%d %d",fib_number[0],fib_number[1]);
	while(n<40)
	{
		fib_number[2]=fib_number[0]+fib_number[1];
		n++;
		printf(" %d",fib_number[2]);
		fib_number[0]=fib_number[1];
		fib_number[1]=fib_number[2];
	}
	return 0;
}
