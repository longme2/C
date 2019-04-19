/* 显示已经输入的最大非负数 */ 
#include<stdio.h>
int main()
{
	float max=0.00,a;
	printf("Enter a number: ");
	scanf("%f",&a);
    if(a>0)
	{
	do
	{
		printf("Enter a number: ");
		scanf("%f",&a);
		if(max<a)
		  max=a;  
   
 
	}
	while (a>0);
    
    printf("The largest number entered was %f\n",max);
	}
	else
		printf("wrong");
	return 0;
}
