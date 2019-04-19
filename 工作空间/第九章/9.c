#include<stdio.h>
#define N 10
int main()
{
    int num[N] = {10, 18, 9, 56, 23, 6, 78, 0, 11, 88};
    int key,  *p, flag = 0;
    printf ( "请输入想查找的数：" );
    scanf ( "%d", &key );

    for ( p = num; p < num+ N; p++ )
    {
        if ( *p == key )
        {
            flag = 1;
            break;
        }
    }
    if ( flag )
    { printf ( "查找成功！下标为%d\n", p - num ); }
    else
    { printf ( "查找失败！\n" ); }
}
