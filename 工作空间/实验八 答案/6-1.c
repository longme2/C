#include  <stdio.h>
#include <stdlib.h>
int main( )
{
	int i, j = 0;
	char ch;
	char str[100];
	printf("�������ַ���:\n");
	gets(str);
	printf("������һ���ַ�:\n");
	fflush(stdin);
	scanf("%c", &ch);
	for (i=0; str[i]!='\0'; i++)
	{
		if (str[i] != ch)
		{
			str[j++] = str[i];
		}
	}
	str[j] = '\0';
	printf("%s\n", str);
	return 0;
}

