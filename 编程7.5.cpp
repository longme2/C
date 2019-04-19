#include<stdio.h>
#include<ctype.h>
int main()
{
    
	char ch;
	int sum=0;
	do
	{
		ch=getchar();
        if(ch=='A'|| ch=='E'||ch=='I'||ch=='L'||ch=='N'||ch=='O'||ch=='R'||ch=='S'||ch=='T'||ch=='U')
        ch=1;
        if(ch=='D'||ch=='G')
        ch=2;
        if(ch=='B'||ch=='C'||ch=='M'||ch=='P')
        ch=3;
        if(ch=='F'||ch=='H'||ch=='V'||ch=='W'||ch=='Y')
        ch=4;
        if(ch=='K')
        ch=5;
        if(ch=='J'||ch=='X')
        ch=8;
        if(ch=='Q'||ch=='Z')
        ch=10;
		sum+=ch;

	}while((ch=getchar())!='\n');
	printf("%d",sum);

    return 0;
}
