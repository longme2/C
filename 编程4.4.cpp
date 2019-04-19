#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("Enter a number bewteen 0 and 32767: ");
	scanf("%d",&a);
	b=a%8;
	c=(a/8)%8;
	d=(a/64)%8;
	e=(a/64/8)%8;
	f=(a/64/64)%8;
	printf("%d%d%d%d%d\n",f,e,d,c,b);
	return 0;
}
