#include <stdio.h>
#include <string.h>
int main()
{
    char s[50], *p = s, *q;
    char ch;
    printf ( "�������ַ�����" );
    gets ( s );
    printf ( "��������Ҫɾ������ĸ��" );
    ch = getchar();

    for ( p = s; p < s + strlen ( s ); p++ )
    {
        if ( *p == ch )
        {
            for ( q = p + 1; q < s + strlen ( s ); p++, q++ )
            {
                *p = *q;
            }
        }
    }

    printf ( "%s", s );
    return 0;
}
