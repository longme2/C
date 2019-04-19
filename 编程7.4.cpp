#include<stdio.h>
int main()
{
	int i=0;
	char ch;
	printf("Enter phone number: ");
	while((ch=getchar())!='\n')
	{
		switch(ch)
		{
			case'A':case'B':case'C':printf("%d",i=2);break;
			case'D':case'E':case'F':printf("%d",i=3);break;
			case'G':case'H':case'I':printf("%d",i=4);break;	
			case'J':case'K':case'L':printf("%d",i=5);break;
			case'M':case'N':case'O':printf("%d",i=6);break;
			case'P':case'Q':case'R':case'S':printf("%d",i=7);break;
			case'T':case'U':case'V':printf("%d",i=8);break;
			case'W':case'X':case'Y':case'Z':printf("%d",i=9);break;	
			default:printf("%c",ch);
		}
		
		
	}
	return 0;
}
