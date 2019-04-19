#include <stdio.h>
#include <string.h>
int main()
{
    char s[50] = "I have 150 Yuan!!";
    char *p = s, *q;

    for ( p = s; p < s + strlen ( s ); p++ )
    {
        if ( *p == '0' )
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
