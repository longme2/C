/* 计算欧洲商品编码的校验位 */

#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j,k,l,first_sum,second_sum,total;
	printf("Enter the first 12 digits of AN EAN: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",a,b,c,d,e,f,g,h,i,j,k,l);
	first_sum=b+d+f+h+i+k;
	second_sum=a+c+e+g+j+l;
	total=3*first_sum+second_sum-1;
	printf("Check digit: %d\n",(9-(total%10)));
	return 0;
}
