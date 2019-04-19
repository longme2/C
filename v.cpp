#include<stdio.h>
int main()
{
	int i;
	char a;
	char c[100];
	printf("Enter a sentence: ");
	while(i<100)
	{
		c[i]=getchar();
		if(c[i]=='?'||c[i]=='.'||c[i]=='!')
		{ a=c[i];break;}
		i++;
	}
	printf("%c",a);
}
