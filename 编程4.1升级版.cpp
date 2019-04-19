/* 用算术分割的方法输出一个数的逆序 */

#include<stdio.h >
int main()
{
	int a,b,c;                                   //b是数的十位，c是数的个位
	printf("Enter a two-digit number: ");
	scanf("%d",&a);
	b=a/10;
	c=(a%10)/1;
	printf("The reversal is: %d%d\n",c,b);
	return 0;
	 
}

