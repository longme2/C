#include<stdio.h>
int main()
{

	int i;
	char a[30];
	printf("Enter message: ");
	i=0;
	scanf("%c",&a[i]);
	while(a[i]!='\n')
	{  
		i++;
		scanf("%c",&a[i]);
		
		
		
	}
	
	
	printf("\nIn B1FF_speak: ");
	switch(a[i])
		{
			case 'A':case'a':printf("4");break;
			case 'B':case'b':printf("8");break;
			case 'E':case'e':printf("3");break;
			case 'I':case'i':printf("1");break;
			case 'O':case'o':printf("0");break;
			case 'S':case's':printf("5");break;
			default:printf("%c",a[i]);break;
		}
	
	
	printf("!!!!!!!!!!");
	return 0;
}
