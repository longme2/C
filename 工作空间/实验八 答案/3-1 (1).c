#include <stdio.h>
#define N 80
int main()
{
	char str[N];
	int  i, letter = 0, digit = 0, space = 0, others = 0;	
	printf("Input a string:");
	gets(str);	
	for (i=0; str[i]!='\0'; i++)
	{		
		if (str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')   
			letter ++;				/* ͳ��Ӣ���ַ� */
		else if (str[i] >= '0' && str[i] <= '9')   
			digit ++;				/* ͳ�������ַ� */
		else if (str[i] == ' ')                           
			space ++;				/* ͳ�ƿո� */
		else 
			others ++;				/* ͳ�������ַ� */
    }	
	printf("English character: %d\n", letter);
	printf("digit character: %d\n", digit);
	printf("space: %d\n", space);
	printf("other character: %d\n", others);
	return 0;
}
