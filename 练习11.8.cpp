#include<stdio.h>
int *find_largest(int a[],int n);
int main(void)
{
	int i,n,*q;
	printf("How many numbers do you want to input : ");
	scanf("%d",&n);
	printf("Enter %d numbers: ",n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	q=find_largest(a,n);
    
    printf("The max element is : %d\n",*q);

	
	return 0;
}

int *find_largest(int a[], int n)
{
	int *p=&a[0];
	int max=0;
	for(p=a;p<a+n-1;p++)
	{
		if(*p>max)
		max=*p;
		printf("%d\n",max);
    }
    return p;
}
