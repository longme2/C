//1 ͳ�Ƶ��ʸ���
#include <stdio.h>
int main()
{
	char str[50];			       //���屣���ַ���������
	int i, count = 1;			       //count��ʾ���ʵĸ���
	char blank;			  	       //��ʾ�ո�
	printf("Please input a sentence:\n");
	gets(str);				       //�����ַ���
	if (str[0] == '\0')     	       //�ж�����ַ���Ϊ�յ����
		printf("No words!\n");
	else
	{
		for (i = 0; str[i] != '\0'; i++) //ѭ���ж�ÿһ���ַ�
		{
			blank = str[i];	        //�õ������е��ַ�Ԫ��
			if (blank == ' ')		   //�ж��ǲ��ǿո�
				count++;		   //��������1
		}
		printf("There are %d words in this sentence.\n", count);
	}
	return 0;
}
