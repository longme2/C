#include<stdio.h>

void split_time(long,int * ,int *,int *);
int main(void)
{
	int hr1,min1,sec1;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d:%d",&hr1,&min1,&sec1);
	split_time(0,&hr1,&min1,&sec1);
	return 0;
}

void split_time(long total_sec,int *hr ,int *min,int *sec)
{
	
	int a,b,c;
	a=*hr;
	b=*min;
	c=*sec;
	total_sec=3600*a+60*b+c;
	printf("The total_sec is: %ld\n",total_sec);
}
