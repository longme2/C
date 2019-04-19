#include<stdio.h>
void reduce(int numerator,int denominator,int *reduced_numerator,int *reduced_denominator);
int main()
{
	int a1,b1,d,e;
	printf("Enter two fraction: ");
	scanf("%d/%d",&a1,&b1);
	reduce(a1,b1,&d,&e);
	printf("In lowest term: %d/%d",d/e);
	return 0;
}
void reduce(int numerator,int denominator,int *reduced_numerator,int *reduced_denominator)
{
	int a1=numerator,b1=denominator,a2,b2,c,d,e,min;
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
	*reduced_numerator=a2/c;
	*reduced_denominator=b2/c;
}
