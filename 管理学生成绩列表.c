#include <stdio.h>
#include <stdlib.h>
#define N 80

int InputScore ( int [] );
void OutputScore ( int [], int );
float Average ( int [], int );
int FailedNum ( int [], int );
int AboveAver ( int [], int );
void ScoreSort ( int [], int );
int MaxScore ( int [], int );
int MinScore ( int [], int );
int InsertScore ( int [], int, int, int );
int DeleteScore ( int [], int, int );
int main()
{
    int n, m, stu[N];
    int count1, count2;
    int max, min;
    float aver;
    int score, index;
    printf ( "==========MENU==========\n" );
    printf ( "输入学生成绩…………………1\n" );
    printf ( "输出已录入的学生成绩………2\n" );
    printf ( "统计平均分……………………3\n" );
    printf ( "统计不及格人数………………4\n" );
    printf ( "统计成绩高于平均分的人数…5\n" );
    printf ( "将学生成绩从高到低排序……6\n" );
    printf ( "计算最高分……………………7\n" );
    printf ( "计算最低分……………………8\n" );
    printf ( "插入学生成绩…………………9\n" );
    printf ( "删除学生成绩…………………10\n" );
    printf ( "Exit……………………………11\n" );

    while ( 1 )
    {
        printf ( "请输入选择的操作：" );
        scanf ( "%d", &m );

        switch ( m )
        {
        case 1:
            n = InputScore ( stu );
            break;

        case 2:
            printf ( "学生的成绩为：" );
            OutputScore ( stu, n );
            break;

        case 3:
            aver = Average ( stu, n );
            printf ( "学生的平均分为%g\n", aver );
            break;

        case 4:
            count1 = FailedNum ( stu, n );
            printf ( "不及格的学生人数为%d\n", count1 );
            break;

        case 5:
            count2 = AboveAver ( stu, n );
            printf ( "高于平均分的学生人数为%d\n", count2 );
            break;

        case 6:
            ScoreSort ( stu, n );
            printf ( "学生成绩从高到低位：" );
            OutputScore ( stu, n );
            break;

        case 7:
            max = MaxScore ( stu, n );
            printf ( "学生的最高分为%d\n", max );
            break;

        case 8:
            min = MinScore ( stu, n );
            printf ( "学生的最低分为%d\n", min );
            break;

        case 9:
            printf ( "请输入要插入的分数:" );
            scanf ( "%d", &score );
            printf ( "请输入要插入的位置:" );
            scanf ( "%d", &index );
            n = InsertScore ( stu, n, index, score );
            OutputScore ( stu, n );
            break;

        case 10:
            printf ( "请输入要删除的位置:" );
            scanf ( "%d", &index );
            n = DeleteScore ( stu, n, index );
            OutputScore ( stu, n );
            break;

        case 11:
            exit ( 0 );
        }
    }

    return 0;
}

int InputScore ( int stu[] )
{
    int i, n;
    printf ( "请输入学生人数：" );
    scanf ( "%d", &n );
    printf ( "请输入学生成绩：" );

    for ( i = 0; i < n; i++ )
    {	scanf ( "%d", &stu[i] );	}

    return n;
}

void OutputScore ( int stu[], int n )
{
    int i;

    for ( i = 0; i < n; i++ )
    { printf ( "%d ", stu[i] ); }

    printf ( "\n" );
}

float Average ( int stu[], int n )
{
    float ave, sum = 0;
    int i;

    for ( i = 0; i < n; i++ )
    { sum += stu[i]; }

    ave = ( float ) ( sum / n );
    return ave;
}

int FailedNum ( int stu[], int n )
{
    int i, count = 0;

    for ( i = 0; i < n; i++ )
    {
        if ( stu[i] < 60 )
        { count++; }
    }

    return count;
}

int AboveAver ( int stu[], int n )
{
    int i, count = 0;

    for ( i = 0; i < n; i++ )
        if ( stu[i] > Average ( stu, n ) )
        { count++; }

    return count;
}

void ScoreSort ( int stu[], int n )
{
    int i, j, k;

    for ( i = 0; i < n - 1; i++ )
        for ( j = 0; j < n - 1 - i; j++ )
            if ( stu[j] < stu[j + 1] )
            {
                k = stu[j];
                stu[j] = stu[j + 1];
                stu[j + 1] = k;
            }
}

int MaxScore ( int stu[], int n )
{
    int i, max = 0;

    for ( i = 0; i < N; i++ )
        if ( max < stu[i] )
        { max = stu[i]; }

    return max;
}

int MinScore ( int stu[], int n )
{
    int i, min;
    min = stu[0];

    for ( i = 0; i < n; i++ )
        if ( min > stu[i] )
        { min = stu[i]; }

    return min;
}


int InsertScore ( int stu[], int n, int index, int score )
{
    int i;

    if ( index < 0 || index > n )
    {
        printf ( "插入位置不正确!\n" );
    }

    for ( i = n - 1; i >= index; i-- )
    {
        stu[i + 1] = stu[i];
    }

    stu[index] = score;
    return n + 1;
}

int DeleteScore ( int stu[], int n, int index )
{
    int i;

    if ( index < 0 || index > n - 1 )
    {
        printf ( "删除位置不正确!\n" );
    }

    for ( i = index; i < n - 1; i++ )
    {
        stu[i] = stu[i + 1];
    }

    return n - 1;
}
