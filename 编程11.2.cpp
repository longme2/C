#include<stdio.h>
#include<stdbool.h>
void find_close_flight(int desired_time,int *departure_time,int *arrival_time);
int main()
{
	int a,de,ar;
	printf("Enter a desired_time: ");
	scanf("%d",&a);
	find_close_flight(a,&de,&ar);
	printf("The departure_time is: %d,The arrival_time is: %d\n",de,ar);
	
	  return 0;   




}
void find_close_flight(int desired_time,int *departure_time,int *arrival_time)
{
	int a=desired_time;
	int b,c,d,e,f,g,h,i;
	int b1=8,b2=0,b3=0;
	int c1=9,c2=43;
	int d1=11,d2=19;
	int e1=12,e2=47;
	int f1=2,f2=0,f3=0;
	int g1=3,g2=45;
	int h1=7,h2=0;
	int i1=9,i2=45;
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
	  	{
		  *departure_time=60*b1+b2;*arrival_time=10*60+16;}
	  	else
	  	{
		  *departure_time=60*c1+c2;*arrival_time=11*60+52;}
		    
	  }
	if(a>c && a<d)
	  {
	  	if(a-c<d-a)
	  {
		  	*departure_time=60*c1+c2;*arrival_time=11*60+52;}
	  	else
	  {
		  	*departure_time=60*d1+d2;*arrival_time=13*60+31;}
      }  
	if(a>d && a<e)
	  {
	  	if(a-d<e-a)
	 {
		 	*departure_time=60*d1+d2;*arrival_time=13*60+31;}
	  	else
	  	{
			  	*departure_time=60*e1+e2;*arrival_time=15*60+0; }
	  }  
	if(a>e && a<f)
	  {
	  	if(a-e<f-a)
	  	{
		*departure_time=60*e1+e2;*arrival_time=15*60+0;}
	  	else
	  	{
		  *departure_time=60*f1+f2;*arrival_time=16*60+8;}
	  }
	if(a>f && a<g)
	  { 
	    if(a-f<g-a)
	    {
				*departure_time=60*f1+f2;*arrival_time=16*60+8;}
	    else
	    {*departure_time=60*g1+g2;*arrival_time=17*60+55;}
	  }  
	if(a>g && a<h)
	  {
	  	if(a-g<h-a)
	  	  	{
				*departure_time=60*g1+g2;*arrival_time=17*60+55;}
	  	else
	  	{
			  	*departure_time=60*h1+h2;*arrival_time=21*60+20;}
	
	  }  
	if(a>h && a<i)
	  {
	  	if(a-h<i-a)
	  	 {
			 *departure_time=60*h1+h2;*arrival_time=21*60+20;}
	  	else
	  	{
		  *departure_time=60*i1+i2;*arrival_time=23*60+58;}
	  }  
}
