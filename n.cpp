#include<stdio.h>
int main()
{
	char a[15];
	int i;
	printf("Enter phone number: ");
	for(i=0;i<15;i++);
	{scanf("%c",&a[i]);
	for(i=0;i<15;i++)
	printf("%c",a[i]);}
	
	printf("\nIn numeric form: ");
	for(i=0;i<15;i++)
	{
		switch(a[i])
		{
			case'A':case'B':case'C':printf("%c",a[i]=2);break;
			case'D':case'E':case'F':printf("%c",a[i]=3);break;
			case'G':case'H':case'I':printf("%c",a[i]=4);break;	
			case'J':case'K':case'L':printf("%c",a[i]=5);break;
			case'M':case'N':case'O':printf("%c",a[i]=6);break;
			case'P':case'Q':case'R':case'S':printf("%d",a[i]=7);break;
			case'T':case'U':case'V':printf("%c",a[i]=8);break;
			case'W':case'X':case'Y':case'Z':printf("%c",a[i]=9);break;	
			default:printf("%c",a[i]);
		}
	}
	return 0;
	
	
	
}
