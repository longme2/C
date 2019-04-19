#include<stdio.h>
int main()
{
	int a,b,i=1;
	printf("Enter number of days in month: ");
	scanf("%d",&a);
	printf("Enter starting days of the week (1=Sun, 7=Sat): ");
	scanf("%d",&b);
	while(i<=b-1)
	{
		printf("\t");
		i++;
	}
	for(i;i<=a+b-1;i++)
	{
		if(i==7 || i==14 || i==21 || i==28 )
		  printf("%d\n",i+1-b);    
		else
		  printf("%d\t",i+1-b);  
	}
	return 0;
}
