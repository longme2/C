#include <stdio.h>
#include <string.h>
int main()
{
    char  weekday[7][10] = { "Monday", "Tuesday", "Wednesday", "Thursday",
                             "Friday", "Saturday", "Sunday"
                           };
    int i;
    printf ( "一周七天为：\n" );

    for ( i = 0; i < 7; i++ )
    {
        puts ( weekday[i] );
    }

    return 0;
}

