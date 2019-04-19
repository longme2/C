#include <stdio.h>
#include <math.h>
int main ()
{
	double a,b,c,s,area;         //定义各变量，均为double型
	a=3.67;
	b=5.43;
	c=6.21;
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("a=%f\tb=%f\tc=%f\n",a,b,c);
	printf("area=%f\n",area);
	return 0;
}