#include<stdio.h>
#include<math.h>
int main()
{
	double x,y=1,y1=0,b;
	printf("Enter a positive number: ");
	scanf("%lf",&x);
	while(fabs(y-y1)>=0.00001*y)
	{
		b=x/y;
		y1=y;
		y=0.5*(b+y1);
		
	}
	printf("Square root: %lf",y);
	return 0;
	
}
