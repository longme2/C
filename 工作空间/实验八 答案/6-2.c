#include<stdio.h>
#include<string.h>
int main()
{
    char str[80] ;
    char ch;
    int i, j;
    int len;
    printf ( "输入一行字符:\n" );
    gets ( str );
    printf ( "输入要删除字符:\n " );
    ch = getchar();
    i = 0;
  while ( str[i] != '\0' )
  {
        while ( str[i] != '\0' && str[i] != ch )
            { i++; } // 查找定位要删除字符的位置

        len = strlen ( str );

        for ( j = i; j < len - 1; j++ )
        { str[j] = str[j + 1]; }

        str[j] = '\0';
    }

    puts ( str );
    return 0;
}
