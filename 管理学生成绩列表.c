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
    printf ( "����ѧ���ɼ���������������1\n" );
    printf ( "�����¼���ѧ���ɼ�������2\n" );
    printf ( "ͳ��ƽ���֡���������������3\n" );
    printf ( "ͳ�Ʋ���������������������4\n" );
    printf ( "ͳ�Ƴɼ�����ƽ���ֵ�������5\n" );
    printf ( "��ѧ���ɼ��Ӹߵ������򡭡�6\n" );
    printf ( "������߷֡���������������7\n" );
    printf ( "������ͷ֡���������������8\n" );
    printf ( "����ѧ���ɼ���������������9\n" );
    printf ( "ɾ��ѧ���ɼ���������������10\n" );
    printf ( "Exit����������������������11\n" );

    while ( 1 )
    {
        printf ( "������ѡ��Ĳ�����" );
        scanf ( "%d", &m );

        switch ( m )
        {
        case 1:
            n = InputScore ( stu );
            break;

        case 2:
            printf ( "ѧ���ĳɼ�Ϊ��" );
            OutputScore ( stu, n );
            break;

        case 3:
            aver = Average ( stu, n );
            printf ( "ѧ����ƽ����Ϊ%g\n", aver );
            break;

        case 4:
            count1 = FailedNum ( stu, n );
            printf ( "�������ѧ������Ϊ%d\n", count1 );
            break;

        case 5:
            count2 = AboveAver ( stu, n );
            printf ( "����ƽ���ֵ�ѧ������Ϊ%d\n", count2 );
            break;

        case 6:
            ScoreSort ( stu, n );
            printf ( "ѧ���ɼ��Ӹߵ���λ��" );
            OutputScore ( stu, n );
            break;

        case 7:
            max = MaxScore ( stu, n );
            printf ( "ѧ������߷�Ϊ%d\n", max );
            break;

        case 8:
            min = MinScore ( stu, n );
            printf ( "ѧ������ͷ�Ϊ%d\n", min );
            break;

        case 9:
            printf ( "������Ҫ����ķ���:" );
            scanf ( "%d", &score );
            printf ( "������Ҫ�����λ��:" );
            scanf ( "%d", &index );
            n = InsertScore ( stu, n, index, score );
            OutputScore ( stu, n );
            break;

        case 10:
            printf ( "������Ҫɾ����λ��:" );
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
    printf ( "������ѧ��������" );
    scanf ( "%d", &n );
    printf ( "������ѧ���ɼ���" );

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
        printf ( "����λ�ò���ȷ!\n" );
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
        printf ( "ɾ��λ�ò���ȷ!\n" );
    }

    for ( i = index; i < n - 1; i++ )
    {
        stu[i] = stu[i + 1];
    }

    return n - 1;
}
