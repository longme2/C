/*
#include<stdio.h>
int main()
{
	int a,b,c=2,divisor;
	printf("Enter two intergers: ");
	scanf("%d %d",&a,&b);
	do
	{
		if(a%c==0 && b%c==0)
		  divisor=c;
		  c++;  
	}
	while (c<=10000);
	printf("Greatest common divisor: %d\n",divisor);
	return 0;
}*/
#include<stdio.h>
int main()
{
	int m,n;
	printf("Enter two integers:");
	scanf("%d %d",&m,&n);
	if(m==0)  
		printf("Greatest common divisor: %d",n);
	if(n==0)
		printf("Greatest common divisor: %d",m);
	else
	{
	do
	{
		  	m=n;
		  	n=m%n;	  
	}
	while(m!=0);
	}		

	printf("Greatest common divisor: %d",n);
	return 0;
}
