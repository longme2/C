#include<stdio.h>
int main()
{
	char ch;
	int i=0,n=0;
	float d;
	printf("Enter a sentence: ");
	while((ch=getchar())!='\n')
	{
		i+=1;
		if(ch==' ')
		n+=1;
	}
	printf("%d\n%d\n",i,n);
	d=(i-n-1)/n;
	printf("%.1f",d);
	return 0;
}
