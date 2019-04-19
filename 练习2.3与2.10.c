/*Computes the dimensional weight of a 12"x10"x8" box*/

#include<stdio.h>
int main()
{
	int length=12,width=10,height=8,volume;
	volume=width*length*height;
	printf("Dimensions:%d*%d*%d\n",width,height,length);
	printf("volume(cubic inches):%d\n",volume);
	printf("Dimensional weight (pounds):%d\n",(volume+165)/166);
	return 0;
}