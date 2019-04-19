#include<stdio.h>
int cerson(char str[],int n);
int main(void)
{
	char str[]="food fool";
	cerson(str,10);
	printf("改变后的字符串：");
	puts(str);
	 
	return 0;
}

int cerson(char str[],int n)
{
	int i;
	for(i=0;i<n;i++)
	if(str[i]=='f' && str[i+1]=='o' && str[i+2]=='o')
	{
		str[i]=str[i+1]=str[i+2]='x';
	}
}
