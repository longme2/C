#include<stdio.h>
#define N 3
double inner_product(const double *a,const double *b,int n);
int main(void)
{
	double a[N],b[N];
	double *p=a,*q=b;
	printf("a[N] : ");
	for(;p<a+N;p++)
	scanf("%d",p);
	printf("\n");
	printf("b[N] :");
	for(;q<b+N;q++)
	scanf("%d",q);
	printf("\n");
	printf("The sum is: %d",inner_product(a,b,N)); 
	return 0;
}

double inner_product(const double *a,const double *b,int n)
{
	const double *p=a,*q=b;
	double c,d,sum=0;
	for(;p<a+n,q<b+n;p++,q++)
	{
		c=*p;
		d=*q;
		printf("%d %d \n",c,d);
		sum+=c*d;
		printf("%d\n",sum);
	}
	return sum;
}
