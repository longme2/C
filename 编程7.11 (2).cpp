#include<stdio.h>
int main()
{
	char ch,ch1;
	printf("Enter a first and last name: ");
	do
	{
		ch=getchar();
	    ch1=ch;
	    
	}while(ch<=65||ch>=90);
	do
	{
		ch=getchar();
		if(ch>=65&&ch<=90)
		{
			printf("%c",ch);
		}
		
		
	}while(ch<=65||ch>=90);
	
    while((ch=getchar())!='\n')
    {
    	printf("%c",ch);
	}
	printf(", %c.",ch1);
	return 0;
}
	

