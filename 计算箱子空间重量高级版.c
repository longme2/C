/* Computes the dimensional weight of a 12" x 10 " x 8" box */
#include<stdio.h>
int main()
{
	int height,length,width,volume,weight;

	height=8;
	width=10;
	length=12;
	volume=height*width*length;
	weight=(volume+165)/166;
	printf("Dimensions:%d*%d*%d\n",length,width,height);
	printf("Volume(cubic inches):%d\n",volume);
	printf("Dimensional weight (pounds):%d\n",weight);
	return 0;
}