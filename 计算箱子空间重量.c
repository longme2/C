
#include<stdio.h>
int main()
{
	int height,width,length;
	float volumn,weight;
	height=8;
	width=10;
	length=12;
	volumn=height*width*length;
	weight=volumn/166;
	printf("The weight is:%f\n",weight);
	return 0;
}