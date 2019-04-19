#include <stdio.h>
int main()
{
    int a[10];
    int i;
    int *p;
    printf ( "请输入10个整数：" );

    /*for ( i = 0; i < 10; i++ )
    { scanf ( "%d", &a[i] ); }

    for ( i = 0; i < 10; i++ )
    { printf ( " %d", a[i] ); }*/
    for ( p = a; p < a + 10; p++ )
    { scanf ( "%d", p ); }

    for ( p = a; p < a + 10; p++ )
    { printf ( " %d", *p ); }

    return 0;
}
