/* 计算欧洲商品编码的校验位 */

#include<stdio.h>
int main()
{
	int x1,x2,x3,x4,x5,x6,y1,y2,y3,y4,y5,y6,first_sum,second_sum,total;
	printf("Enter the first 12 digits of AN EAN: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",x1,x2,x3,x4,x5,x6,y1,y2,y3,y4,y5,y6);
	first_sum=x2+x4+x6+y2+y4+y6;
	second_sum=x1+x3+x5+y1+y3+y5;
	total=first_sum*3+second_sum-1;
	printf("Check digit: %d\n",9-(total%10));
	return 0;
}
