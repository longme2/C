/* 读入一个数，逆序输出 */

#include<stdio.h>
int main()
{
	int a,b;              //a是数的十位，b是数的个位 
	printf("Enter a two-digit number: ");
	scanf("%1d%1d",&a,&b);
	printf("The reversal is: %d%d\n",b,a);
	return 0; 
} 
