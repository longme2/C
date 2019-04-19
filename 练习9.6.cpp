#include<stdio.h>
int digit(int n,int k)
{
    int c;
    while(k!=0)
    {
    	c=n%10;
    	n/=10;
    	k--;
	}
	return c;
	
}
int main()
{
	int a,b;
	printf("ÊäÈëÊı×Ö£º");
	scanf("%d %d",&a,&b);
	printf("\n%d",digit(a,b));
	return 0;
}
