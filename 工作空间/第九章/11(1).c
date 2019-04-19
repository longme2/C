#include <stdio.h>
#include <string.h>
int main()
{
    char s[50], *p = s, *q;
    char ch;
    printf ( "ÇëÊäÈë×Ö·û´®£º" );
    gets ( s );
    printf ( "ÇëÊäÈëÄãÒªÉ¾³ıµÄ×ÖÄ¸£º" );
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
