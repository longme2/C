#include <stdio.h>
int main()
{
    int c1 = 0, c2 = 0, c3 = 0, a[10], *p;
    int sum1 = 0 ,sum2 =0;
    printf ( "����10������:\n" );

    for ( p = a; p < a + 10; p++ )
    {
        scanf ( "%d", p );
        if ( *p > 0 )
            { c1++; sum1+=*p;}
        else if ( *p < 0 ) { c2++; sum2+=*p;}
        else { c3++; }
    }

    printf ( "����:%d\n", c1 );
    printf ( "����:%d\n", c2 );
    printf ( "��:%d\n", c3 );
    printf("����֮��Ϊ:%d\n",sum1);
    printf("����֮��Ϊ%d\n",sum2);
    return 0;
}
