#include<stdio.h>
int main()
{
	int i,number;
	char a,b;
	printf("How many number do you want to input: ");
	scanf("%d",&number);
	char c[number];
	printf("Enter a first name and last name: ");
	b=getchar();
	if(b==' ')
	b=getchar();
	for(a=='a';a!=' ';)
	{
	a=getchar();
	}
	
	for(i=0;i<number;i++)
	{
		c[i]=getchar();
		printf("%c",c[i]);
		
	}
	printf(", %c.",b);
	return 0;
}
