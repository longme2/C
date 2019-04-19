//1 统计单词个数
#include <stdio.h>
int main()
{
	char str[50];			       //定义保存字符串的数组
	int i, count = 1;			       //count表示单词的个数
	char blank;			  	       //表示空格
	printf("Please input a sentence:\n");
	gets(str);				       //输入字符串
	if (str[0] == '\0')     	       //判断如果字符串为空的情况
		printf("No words!\n");
	else
	{
		for (i = 0; str[i] != '\0'; i++) //循环判断每一个字符
		{
			blank = str[i];	        //得到数组中的字符元素
			if (blank == ' ')		   //判断是不是空格
				count++;		   //如果是则加1
		}
		printf("There are %d words in this sentence.\n", count);
	}
	return 0;
}
