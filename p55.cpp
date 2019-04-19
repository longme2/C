/* 计算股票经纪人的佣金 Calculates a broker's commission */

#include<stdio.h>
int main()
{
	float a,b;                       //a是交易额，b是佣金
    printf("Enter value of trade: "); 
	scanf("%f",&a);
	
	if(a<2500)
	  b=30+0.017*a;
	else if(a<6250)
	  b=56+0.066*a;
	else if(a<20000)
	  b=76+0.0034*a;
	else if(a<50000)
	  b=100+0.0022*a;
	else if(a<500000)
	  b=155+0.0011*a;
	else
	  b=2255+0.0009*a;
	  
	  if(b<39)
	  b=39.00f;
	  
	  printf("Commision: $%.2f\n",b);
	  return 0;           
} 
