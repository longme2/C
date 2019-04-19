#include<stdio.h>
int main()
{
	int a[10]={0};
	int i,digit;
	long n;
	printf("Enter a number: ");
	scanf("%ld",&n);
	printf("0 1 2 3 4 5 6 7 8 9\n");

	   while(n>0)
	   {
	   	digit=n%10;
	   
	   a[digit]+=1;
	   
	   n/=10;
	   }
	   
	   
	   printf("%d %d %d %d %d %d %d %d %d %d ",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8],a[9]);

	   
		
	
}
