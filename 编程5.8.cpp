#include<stdio.h>
#include<stdbool.h>
int main()
{
	int a1,a2, a,b,c,d,e,f,g,h,i;
	int b1=8,b2=0,b3=0;
	int c1=9,c2=43;
	int d1=11,d2=19;
	int e1=12,e2=47;
	int f1=2,f2=0,f3=0;
	int g1=3,g2=45;
	int h1=7,h2=0;
	int i1=9,i2=45;
	printf("Enter a 24-hour time: ");
	scanf("%d:%d",&a1,&a2);
	a=a1*60+a2;
	b=b1*60+b2;
	c=c1*60+c2;
	d=d1*60+d2;
	e=e1*60+e2;
	f=(f1+12)*60+f2;
	g=(g1+12)*60+g2;
	h=(h1+12)*60+h2;
	i=(i1+12)*60+i2;
	if(a>b && a<c)
	  {
	  	if(a-b<c-a)
	  	  printf("Closest departure time is %d:%d%d a.m.,arriving at 10:16 p.m.",b1,b2,b3);
	  	else
	  	  printf("Closest departure time is %d:%d a.m.,arriving at 11:52 p.m.",c1,c2);
		    
	  }
	if(a>c && a<d)
	  {
	  	if(a-c<d-a)
	  	  printf("Closest departure time is %d:%d a.m.,arriving at 11:52 p.m.",c1,c2);
	  	else
		  printf("Closest departure time is %d:%d a.m.,arriving at 1:31 p.m.",d1,d2);  
      }  
	if(a>d && a<e)
	  {
	  	if(a-d<e-a)
	  	  printf("Closest departure time is %d:%d a.m.,arriving at 1:31 p.m.",d1,d2);
	  	else
		  printf("Closest departure time is %d:%d a.m.,arriving at 3:00 p.m.",e1,e2);  
	  }  
	if(a>e && a<f)
	  {
	  	if(a-e<f-a)
	  	  printf("Closest departure time is %d:%d a.m.,arriving at 3:00 p.m.",e1,e2);
	  	else
		  printf("Closest departure time is %d:%d%d a.m.,arriving at 4:08 p.m.",f1,f2,f3);  
	  }
	if(a>f && a<g)
	  { 
	    if(a-f<g-a)
	      printf("Closest departure time is %d:%d%d a.m.,arriving at 4:08 p.m.",f1,f2,f3);
	    else
		  printf("Closest departure time is %d:%d a.m.,arriving at 5:55 p.m.",g1,g2);  
	  }  
	if(a>g && a<h)
	  {
	  	if(a-g<h-a)
	  	  printf("Closest departure time is %d:%d a.m.,arriving at 5:55 p.m.",g1,g2);
	  	else
		  printf("Closest departure time is %d:%d a.m.,arriving at 9:20 p.m.",h1,h2);  
	  }  
	if(a>h && a<i)
	  {
	  	if(a-h<i-a)
	  	  printf("Closest departure time is %d:%d a.m.,arriving at 9:20 p.m.",h1,h2);
	  	else
		  printf("Closest departure time is %d:%d a.m.,arriving at 11:58 p.m.",i1,i2);  
	  }  
	  return 0;   




}


















    	  
