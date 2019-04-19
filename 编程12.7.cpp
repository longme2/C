/*Finds the largest and smallest elements in an array*/

#include<stdio.h>
#define N 5

void max_min(int a[],int n,int *max,int *min);
int main(void)
{
	int b[N],i,big,small;
	int *p=b;
	printf("Enter %d numbers: ",N);
	for(p=b;p<b+N;p++)
	scanf("%d",p);
	
	max_min(b,N,&big,&small);
	
	printf("Largest: %d\n",big);
	printf("Smallest: %d\n",small);
	 
	return 0;
}

void max_min(int a[],int n,int *max,int *min)
{
	int *p=a;
	*max=*min=*p;
	for(p=a;p<a+n;p++)
	{
		if(*p>*max)
		*max=*p;
		else if(*p<*min)
		*min=*p;
	}
}
