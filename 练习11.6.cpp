/* Fing largest ang second-largest elements in an array */
#include<stdio.h>

void find_largest(int a[],int n,int *max,int *max2);
int main(void)
{
	int n;
	printf("How many number do you want to input: ");
	scanf("%d",&n);
	printf("Enter %d numbers: ",n);
	int b[n],i,big,small;
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	find_largest(b,n,&big,&small);
	printf("Largest: %d\n",big);
	printf("Second-largest: %d\n",small);
	return 0;
}

void find_largest(int a[],int n,int *max,int *max2)
{
	int i,b;
	*max=*max2=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>*max)
		*max=a[i];
		b=i;
	}
	for(i=0;i<n;i++)
	{
		while(i!=b)
		{if(a[i]>*max2)
		*max2=a[i];}
	}
}
