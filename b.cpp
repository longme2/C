#include<stdio.h>
#include<math.h>
int main()
{
	double x,y,i,j;
	j=1;
	printf("Enter a positive number: ");
	scanf("%lf",&x);
	do {
		i=x/y;
		j=(y+i)/2;
		if(fabs(y-j)>=0.00001*y)
		y=j;
	} while(fabs(y-j)>=0.00001*y);
	printf("Square roof: %f",y);
	return 0;
}
