#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	int a,b;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d",&a,&b);
	if(a<=12)
	  printf("Equivalent 12-hour time: %d:%d",a,b);
	else if(a>12 && a<24)
	  printf("Equivalent 12-hour time: %d:%d",a-12,b);
	else
	  printf("Wrong");  
	return 0;
}
