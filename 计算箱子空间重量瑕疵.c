/*Computes the dimensional weight of a box from input provided bu the user*/

#include<stdio.h>
int main()
{
	int height,width,length,volume,weight;
	printf("Enter height of box:");
	scanf("%d",&height);
	printf("Enter width of box:");
	scanf("%d",&width);
	printf("Enter length of box:");
	scanf("%d",length);
	volume=width*height*length;
	weight=(volume+165)/166;
	printf("Volume (cubic inches):%d\n",volume);
	printf("Dimensional weight (pounds):%d\n",weight);
	return 0;
}

