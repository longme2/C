#include<stdio.h>
#include<string.h>
int main()
{
    char str[80] ;
    char ch;
    int i, j;
    int len;
    printf ( "����һ���ַ�:\n" );
    gets ( str );
    printf ( "����Ҫɾ���ַ�:\n " );
    ch = getchar();
    i = 0;
  while ( str[i] != '\0' )
  {
        while ( str[i] != '\0' && str[i] != ch )
            { i++; } // ���Ҷ�λҪɾ���ַ���λ��

        len = strlen ( str );

        for ( j = i; j < len - 1; j++ )
        { str[j] = str[j + 1]; }

        str[j] = '\0';
    }

    puts ( str );
    return 0;
}
