#include<stdio.h>
#include<ctype.h>
int main()
{
	    
	char ch; 
	int number;
	int sum=0;
    while((ch=getchar())!='\n')
	{
		ch=toupper(ch);
		switch(ch)
		{
			case 'A':case 'T':case 'E':case 'I':case 'L':case 'N':case 'O':case 'R':case 'S': case 'U':number=1;break;
			case 'D':case 'G':number=2;break;
			case 'B':case 'M':case 'C':case 'P':number=3;break;
			case 'F':case 'H':case 'V':case 'W':case 'Y':number=4;break;
			case 'K':number=5;break;
			case 'J':case 'X':number=8;break;
			case 'Q':case 'Z':number=10;break;
		}
		sum+=number;
	}
	printf("%d",sum);
	return 0;
}
	
