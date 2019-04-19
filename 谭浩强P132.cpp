#include<stdio.h>
#include<math.h>
int main()
{
	float pi=1,a;
	int n=1,term=-1;
	do
	{
		a=term/(n+2);
		pi=pi+a;
		n=n+2;
		term=-term;
		
	}while(fabs(a)>=1e-6);
	
	pi=4*pi;
	printf("pi=%10.8f\n",pi);
	return 0;
}
