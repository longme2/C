#include<stdio.h>
int main()
{
	int d1,d2,b1,b2,b3,b4,c1,c2,c3,c4,time,i;
	int a[8]={8*60,9*60+43,11*60+19,12*60+47,14*60,15*60+45,19*60,21*60+45};
	int b[8]={10*60+16,11*60+52,13*60+31,15*60,16*60+8,17*60+55,21*60+20,23*60+58};
	printf("Enter a 24-hour time: ");
	scanf("%d:%d",&d1,&d2);
	time=d1*60+d2;
	for(i=0;i<8;i++)
	{
		if(time>a[i] && time<a[i+1])
	  {
	  	if(time-a[i]<a[i+1]-time)
	  	{
	  	  b1=a[i]/60;
	  	  if(b1>12)
	  	  b1-=12;
	  	  b2=a[i]%60;
	  	  b3=b[i]/60;
	  	  if(b3>12)
	  	  b3-=12;
	  	  b4=b[i]%60;
	  	  printf("Closest departure time is %d:%.2d a.m.,arriving at %d:%.2d p.m.",b1,b2,b3,b4);
		}

	  	else
	  	{
	  	  c1=a[i+1]/60;
	  	  if(b1>12)
	  	  c1-=12;
	  	  c2=a[i+1]%60;
	  	  c3=b[i+1]/60;
	  	  if(b3>12)
	  	  c3-=12;
	  	  c4=b[i+1]%60;
	  	  printf("Closest departure time is %d:%.2d a.m.,arriving at %d:%.2d p.m.",c1,c2,c3,c4);
		}
	  	  
		    
	  }
	}
	return 0;
}
