#include<stdio.h>
int main()
{
	int n,c=1,d=1;
	float sum=0,b;
	scanf("%d",&n);
	while(d<=n)
	{
		b=1/c;
		sum+=b;
		printf("now sum= %f ",sum);
		c=c*d;
		printf("now c= %d\n",c);
		d++;
	}
	printf("e= %f\n",sum);
	return 0;
}
