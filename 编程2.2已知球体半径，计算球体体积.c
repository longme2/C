/* 计算球体体积，半径=10m */
#include<stdio.h>
#define PI 3.1416
int main()
{
	float r,v;
	printf("r=");
	scanf("%f",&r);
	v=4.0f/3.0f*PI*r*r*r;
	printf("%.2f\n",v);
	return 0;
}
