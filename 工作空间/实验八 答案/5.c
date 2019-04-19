#include<stdio.h>
int main()
{
    char c1[80],c2[80];
    int i,j;
    printf("Input string1:");
    gets(c1);
    printf("Input string2:");
    gets(c2);
    for(i=0;c1[i]!='\0';i++)
    {
    }
    for(j=0;c2[j]!='\0';i++,j++)
    {
        c1[i]=c2[j];
    }
    c1[i] = '\0';
    puts(c1);
    return 0;
}
