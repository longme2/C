#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a;
	printf("Enter a number: ");
	scanf("%d",&a);
	if(a>0 && a<9)
	{
		printf("The number %d",a);
		printf(" has 1 digits");
	}
    else if(a>10 && a<99)
	{
		printf("The number %d",a);
		printf(" has 2 digits");
	} 
	else if(a>100 && a<999)
	{
		printf("The number %d",a);
		printf(" has 3 digits");
	} 
	  
	  
	  
	return 0;
}
