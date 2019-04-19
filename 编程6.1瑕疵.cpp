#include<stdio.h>
int main()
{
	float max,a,b;
	printf("Enter a number: ");
	scanf("%f",&b);
	while(b>0)
	{
		printf("Enter a number: ");
		scanf("%f",&a);
		if(a>b)
		  max=a;
		else 
		  max=b;
		printf("Enter a number: ");
		scanf("%f",&b);   
	}
	printf("The lagerest number entered was: %f\n",max);
	return 0;
}
