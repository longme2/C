#include <stdio.h>
#include <ctype.h>
#define N 80
int main()
{
	char str[N];
	int  i, letter = 0, digit = 0, space = 0, others = 0;	
	printf("Input a string:");
	gets(str);	
	for (i=0; str[i]!='\0'; i++)
	{		
		if (isalpha(str[i]))   
			letter ++;				/* 统计英文字符 */
		else if (isdigit(str[i]))   
			digit ++;				/* 统计数字字符 */
		else if (isspace(str[i]))                           
			space ++;				/* 统计空格 */
		else 
			others ++;				/* 统计其他字符 */
    }	
	printf("English character: %d\n", letter);
	printf("digit character: %d\n", digit);
	printf("space: %d\n", space);
	printf("other character: %d\n", others);
	return 0;
}
