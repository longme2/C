#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	float income;
	printf("income=");
	scanf("%f",&income);
	if(income<750)
	  printf("tax= %f",0.01*income);
	else if(income<2250)
	  printf("tax= %f",0.02*(income-750)+7.5);
	else if(income<3750)
	  printf("tax= %f",0.03*(income-2250)+37.5); 
    else if(income<5250)
	  printf("tax= %f",0.04*(income-3750)+82.5);
	else if(income<7000)
	  printf("tax= %f",0.05*(income-5250)+142.5);
	else
	  printf("tax= %f",0.06*(income-7000)+230);     
	return 0;
}
