#include<stdio.h>
int main()
{
	float a,b,c,d,e;      //a «item number,b «unit price,c «purchase date
	printf("Enter item number: ");
	scanf("%f",&a);
	printf("Enter unit price: ");
	scanf("%f",&b);
	printf("Enter purchase date (mm/dd/yyyy): ");
	scanf("%f/%f/%f",&c,&d,&e); 
	printf("Item    Unit        Purchase\n");
	printf("        Price       Date\n");
	printf("%3.f     $  %5.2f    %2.f/%2.f/%2.f",a,b,c,d,e);    
	return 0;
	
}
