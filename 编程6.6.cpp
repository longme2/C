#include<stdio.h>
int main()
{
	int j=2,n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if(n>=4)
	{
		while(j*j<=n)
		{
			if(j*j%2==0)
			  printf("%d\n",j*j);
			j++;  
		}
	}
	else
	  printf("wrong");
	return 0;
}
