#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a date (mm/dd/yyyy):");
	scanf("%d/%d/%d",&a,&b,&c);

	printf("You entered the date %d",c);
	printf("0%d",a);
	printf("%d",b);
	return 0;
}
