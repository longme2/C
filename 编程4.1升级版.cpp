/* �������ָ�ķ������һ���������� */

#include<stdio.h >
int main()
{
	int a,b,c;                                   //b������ʮλ��c�����ĸ�λ
	printf("Enter a two-digit number: ");
	scanf("%d",&a);
	b=a/10;
	c=(a%10)/1;
	printf("The reversal is: %d%d\n",c,b);
	return 0;
	 
}

