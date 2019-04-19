#include  <stdio.h>
#include <stdlib.h>
int main( )
{
	int i, j = 0;
	char ch;
	char str[100];
	printf("ÇëÊäÈë×Ö·û´®:\n");
	gets(str);
	printf("ÇëÊäÈëÒ»¸ö×Ö·û:\n");
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

