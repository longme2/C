#include<stdio.h>
int main()
{
	int i,sum=0;
	char word;
	int a[26]={1,3,3,2,1,4,2,4,1,8,5,1,3,1,10,3,10,1,1,1,1,4,4,8,4,10};
	printf("Enter a word: ");
    while((word=getchar())!='\n')
    {
    	sum+=a[word-97];
	}
	printf("Scrabble value: %d",sum);
	return 0;
}
