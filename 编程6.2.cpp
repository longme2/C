#include<stdio.h>
int main()
{
	int m,n,c,min;
	printf("Enter two integers:");
	scanf("%d %d",&m,&n);
	if(m==0 && n!=0)
	  printf("Greatest common divisor: %d\n",n);
	if(n==0 && m!=0)
	  printf("Greatest common divisor: %d\n",m);
	if(m!=0 && n!=0)
	{
	while(m!=0 && n!=0)
	{
    if(m>n)
    {
    	c=m%n;
        min=n;
    	
	}
	else
	{
		c=n%m;
		min=m;
		
		
	}
	n=min;
	m=c;
	
	}
	printf("Greatest common divisor: %d\n",n);
	}
    if(m==0 && n==0)
	  printf("∑«∑® ‰»Î");  
	return 0;    
}
