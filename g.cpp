#include<stdio.h>
int main()
{
	int a[5][5];
	int i,j,n=0;
	for(i=0;i<5;i++)
	for(j=0;j<5;j++)
	{
		n++;
		printf("\nEnter row %d: ",n);
		scanf("%d",&a[j]);
	}
	return 0;
}
