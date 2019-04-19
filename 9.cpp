#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Enter a number: ");
	scanf("%d",&a);
    do
    {   
        b=a%10;
        d=b;
        printf("%d",d);
        a=a/10;	   
	}while (a>=10);
	printf("%d",a);
	return 0;
}
	
