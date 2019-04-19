#include<stdio.h>

void split_time(long total_sec,int *hr,int *min,int *sec);
int main(void)
{
	long total_sec;
	int hr1,min1,sec1;
    int *hr,*min,*sec;
	printf("Enter a total_sec: ");
	scanf("%d",&total_sec);
	if(total_sec<23*3600+59*60+59)
	{split_time(total_sec,&hr1,&min1,&sec1);
	printf("The 24-hour is: %d:%d:%d\n",hr1,min1,sec1);}
	else
	printf("´íÎóÊäÈë£¡"); 
	return 0;
}

void split_time(long total_sec,int *hr,int *min,int *sec)
{
	
    *hr=total_sec/3600;
    *min=total_sec%3600/60;
    *sec=total_sec%3600%60;
    
}
