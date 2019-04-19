#include<stdio.h>
int main()
{
	float a=20000,r=6,r2;
	int turn;
	printf("还贷次数（月数）: %d",turn);
	scanf("%d",&turn);
	r2=r/1200;
	while(turn>0)
	{
		a=a-386.66+a*r2;
        turn--;
	}
	

	printf("a=%f\n",a);
	return 0;
	
}
