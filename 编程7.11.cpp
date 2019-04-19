#include<stdio.h>
int main()
{
	char a,b;
	printf("Enter a first name and last name: ");
	b=getchar();
	if(b==' ')
	b=getchar();
	for(a=='a';a!=' ';){
	a=getchar();
	}
	for(;a!='\n';){
		    printf("%c",a);
			a=getchar();
			
		}
	
	
	printf(" ,%c.",b);
	return 0;
}

