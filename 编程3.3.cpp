#include<stdio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d",&b,&c,&d,&e);
	printf("GS1 prefix: %d\n",b);
	printf("Group identifier: %d\n",c);
	printf("Publisher code: %d\n",d);
	printf("Item number: %d\n",e);
	printf("Check digit: %d\n",f);
	return 0;
}
