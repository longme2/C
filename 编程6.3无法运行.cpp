#include<stdio.h>
int main()
{
	int a1,b1,a2,b2,c,d,e,min;
	printf("Enter two fraction: ");
	scanf("%d/%d",&a1,&b1);
	a2=a1;
	b2=b1;
	while(a1!=0&&b1!=0)
	{
		if(a1>b1)
		{
			c=a1%b1;
			min=b1;
		}
		else
		{
			c=b1%a1;
			min=a1;
		}
		a1=min;
		b1=c;
	}
	d=a2/c;
	e=b2/c;
	printf("In lowest term: %d/%d",d/e);
	return 0;
}
