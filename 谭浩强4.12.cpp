#include<stdio.h>
#include<stdbool.h>
#include<math.h>
int main()
{
	double h,s,x,y,disc1,disc2,disc3,disc4;
	bool a,b,c,d,e,f,g,i;
	printf("x=");
	scanf("%lf",&x);
	printf("y=");
	scanf("%lf",&y);
	a=(x>=1 && x<=3);
	b=(y>=1 && y<=3);
	c=(x<=-1 && x>=-3);
	d=(y>=1 && y<=3);
	e=(x<=-1 && x>=-3);
	f=(y<=-1 && y>=-3);
	g=(x>1 && x<3);
	h=(y<=-1 && y>=-3);
	disc1=(x-2)*(x-2)+(y-2)*(y-2);
	disc2=(x+2)*(x-2)+(y-2)*(y-2);
	disc3=(x+2)*(x+2)+(y+2)*(y+2);
	disc4=(x-2)*(x-2)+(y+2)*(y+2);
	if(a && b)
	  s=sqrt(disc1);
	if(c && d)
	  s=sqrt(disc2);
	if(e && f)
	  s=sqrt(disc3);
	if(g && i)
	  s=sqrt(disc4);
	if(s>=0 && s<=1)
	  printf("s=%lf\n",s);
	else
	  s=1;
	h=10*(1-s);
	printf("height= %lf\n",h);
	return 0;    
}
