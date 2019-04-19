#include <stdio.h>
int main ()
{
	int i,score1,score2,score3,score4,score5;
	float aver;
	i=1;
	while(i<=1)
	{scanf("%f%f%f%f%f",&score1,&score2,&score3,&score4,&score5);
	aver=(score1+score2+score3+score4+score5)/5;
	printf("aver=%7.2f",aver);
	i++;
	}
	printf("aver=%7.2f",aver);
	return 0;
}
