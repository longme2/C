
#include<stdio.h>
#include<ctype.h>
int main()
{
    
	char ch; 
	int a;
	int sum=0;
    while((ch=getchar())!='\n')
	{
		ch=toupper(ch);
		if(ch=='A'|| ch=='E'||ch=='I'||ch=='L'||ch=='N'||ch=='O'||ch=='R'||ch=='S'||ch=='T'||ch=='U')
        a=1;
        if(ch=='D'||ch=='G')
        a=2;
        if(ch=='B'||ch=='C'||ch=='M'||ch=='P')
        a=3;
        if(ch=='F'||ch=='H'||ch=='V'||ch=='W'||ch=='Y')
        a=4;
        if(ch=='K')
        a=5;
        if(ch=='J'||ch=='X')
        a=8;
        if(ch=='Q'||ch=='Z')
        a=10;
		sum+=a;
	}


	
	printf("%d",sum);

    return 0;
}

