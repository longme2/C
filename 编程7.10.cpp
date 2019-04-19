#include<stdio.h>
#include<ctype.h>
int main()
{
	int sum=0;
	char ch;
	printf("Enter a sentence: ");
	while((ch=getchar())!='\n')
	{
		ch=tolower(ch);
		switch(ch)
		{
			case'a':case'e':case'i':case'o':case'u':sum+=1;break;
		}
		
	}
	printf("Your sentence contains %d vowels.",sum);
	return 0;
}
