#include<stdio.h>
int main()
{
	int a,sum=1,n;
	printf("Enter a positive integer: ");
	scanf("%d",&a);
	n=a;
	
	while(a!=0)
	{
		
		
		sum*=a;
		a--;
	}
	printf("Factorial of %d: %d",n,sum);
	return 0;
}
