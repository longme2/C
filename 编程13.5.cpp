#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	char a1[4],a[2],b[2],c[2];
	scanf("%s%s%s%s",a1,a,b,c);
	int d;
	d=atoi(a)+atoi(b)+atoi(c);
	printf("Total: %d\n",d);
	return 0;
}
