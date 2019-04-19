/* Fing largest ang second-largest elements in an array */
#include<stdio.h>

void find_largest(const int *a,int n,int *max,int *max2);
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

void find_largest(const int *a,int n,int *max,int *max2)
{
	const int *b;
	const int *p;
	p=a;                      //p也指向a所指向的地址，a充当首地址，p指针进行自增或自减 
	*max=*max2=*a;            //将max与max2赋初值为a【0】 
	for(p=a;p<a+n;p++)
	{
		if(*p>*max)
		{
		*max=*p;
		b=p;}                //搜索最大值所在地址并存在指针变量b中 
	}
	for(p=a+1;p<a+n;p++)
	{
		while(p!=b)          //越过最大值所在地址，即不将数组中最大值纳入排序，以达到搜索次大值的目的 
		{if(*p>*max2)
		*max2=*p;
		p++;}
	}
}
