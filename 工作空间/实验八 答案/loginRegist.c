#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void  regist ( char [][10], char [][10] );
void  login ( char [][10], char [][10] );
void  createVerifyCode ( char [] );

int main()
{
    char dbuserName[100][10] = {"admin", "liping", "wangli"};
    char dbpassWord[100][10] = {"admin", "123456", "wangli"};
    int command;
    printf ( "-----�û���¼ע��ҳ��-----\n" );
    printf ( "   1.�û�ע��\n" );
    printf ( "   2.�û���¼\n" );
    printf ( "   3.�˳�\n" );
    printf ( "��ѡ��Ҫִ�еĲ���:\n" );
    scanf ( "%d", &command );
    fflush ( stdin );

    switch ( command )
    {
    // �����û�ע��
    case 1:
        regist ( dbuserName, dbpassWord );
        break;

    //�����û���¼
    case 2:
        login ( dbuserName, dbpassWord );
        break;

    case 3:
        exit ( 0 );

    default:
        printf ( "�����������\n" );
    }

    return 0;
}
// �û�ע��
void  regist ( char dbuserName[][10], char dbpassWord[][10] )
{
    char userName[20]; //�û���
    char password[20]; //����
    char repassword[20];// ȷ������
    char birthday[11]; //���� ��ʽ yyyy-mm-dd
    char phone[12];  //�ֻ���
    char email[20];  //����
    int status = 1; //1 ע��ɹ� 0 ע��ʧ��
    char result[50] = ""; //������ʾ��Ϣ�ַ���
    int i;
    printf ( "�������û���:" );
    gets ( userName );
    printf ( "���������룺" );
    gets ( password );
    printf ( "��˶����룺" );
    gets ( repassword );
    printf ( "�������������(yyyy-mm-dd) :" );
    gets ( birthday );
    printf ( "�������ֻ���:" );
    gets ( phone );
    printf ( "�������������:" );
    gets ( email );

    // �ж� ע����Ϣ��ʽ��ȷ

    //1.�����ж�
    if ( ! ( strcmp ( password, repassword ) == 0 ) )
    {
        status = 0;
        strcat ( result, "�����������벻һ��\n" );
    }

    //2. �����ж�
    if ( strlen ( birthday ) == 10 )
    {
        for ( i = 0; i < strlen ( birthday ); i++ )
        {
            if ( i == 4 || i == 7 ) // ��֤�м��Ƿ��� - ���
            {
                if ( birthday[i] != '-' )
                {
                    // �޸�ע��״̬Ϊʧ��
                    status = 0;
                    strcat ( result, "���ո�ʽ����ȷ\n" );
                }
            }
            else  //����λ�ñ���������
            {
                if ( !isdigit ( birthday[i] ) )
                {
                    status = 0;
                    strcat ( result, "���ո�ʽ����ȷ\n" );
                }
            }
        }
    }
    else //�޸�ע����Ϣ
    {
        status = 0;
        strcat ( result, "���ո�ʽ����ȷ\n" );
    }

    //3.�ֻ����ж�
    if ( strlen ( phone ) == 11 )
    {
        if ( ! ( ( phone[0] == '1' ) && ( phone[1] == '3' || phone[1] == '5' || phone[1] == '7' || phone[1] == '8' ) ) )
        {
            status = 0;
            strcat ( result, "�ֻ��Ÿ�ʽ����ȷ\n" );
        }
        else
        {
            for ( i = 0; i < strlen ( phone ); i++ )
            {
                if ( !isdigit ( phone[i] ) )
                {
                    status = 0;
                    strcat ( result, "�ֻ��Ÿ�ʽ����ȷ\n" );
                }
            }
        }
    }
    else
    {
        status = 0;
        strcat ( result, "�ֻ��Ÿ�ʽ����ȷ\n" );
    }

//4.�����ж�
    if ( email[0] == '@' ) //����ĸ����Ϊ@
    {
        status = 0;
        strcat ( result, "�����ʽ����ȷ\n" );
    }
    else
    {
        for ( i = 1; i < strlen ( email ); i++ )
        {
            if ( email[i] == '@' )
            {
                break;
            }
        }

        if ( i == strlen ( email ) )
        {
            status = 0;
            strcat ( result, "�����ʽ����ȷ\n" );
        }
    }

// �ж��û����Ƿ��Ѿ�����
    for ( i = 0; i < 3; i++ )
    {
        if ( strcmp ( userName, dbuserName[i] ) == 0 )
        {
            break;
        }
    }

    if ( i < 3 )
    {
        status = 0;
        strcat ( result, "�û����Ѿ�����\n" );
    }

    if ( status == 1 )
    {
        printf ( "�û�ע��ɹ�\n" );
        // �û������뵽���ݿ�
        strcpy ( dbuserName[3], userName );
        strcpy ( dbpassWord[3], password );
        printf ( "ϵͳ�û����б�:\n" );

        for ( i = 0; i < 4; i++ )
        {
            printf ( "�û���:%s,\t���룺%s\n", dbuserName[i], dbpassWord[i] );
        }
    }
    else
    {
        puts ( result );
    }
}
void login ( char dbuserName[][10], char dbpassWord[][10] )
{
    char inputUserName[20];
    char  inputPassWord[20];
    char verifyNum[5], inputVerifyNum[5];
    int flag = 0, i;

    while ( 1 )
    {
        printf ( "�������û���:" );
        gets ( inputUserName );
        printf ( "����������:" );
        gets ( inputPassWord );
        // �������У����
        createVerifyCode ( verifyNum );
        printf ( "������У����:" );
        puts ( verifyNum );
        gets ( inputVerifyNum );

        for ( i = 0; i < 4; i++ )
        {
            if ( strcmp ( dbuserName[i], inputUserName ) == 0 )
            {
                if ( strcmp ( dbpassWord[i], inputPassWord ) == 0 )
                {
                    if ( strcmp ( verifyNum, inputVerifyNum ) == 0 )
                    {
                        flag = 1;
                        break;
                    }
                }
            }
        }

        if ( flag == 1 )
        {
            printf ( "�û���¼�ɹ�\n" );
            break;
        }
        else
        {
            printf ( "û�ô��û�\n" );
        }
    }
}
// ����У����
void  createVerifyCode ( char verifyNum[] )
{
    char string[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i, j, r, len;
    // �������У����
    srand ( time ( NULL ) );
    len = strlen ( string );

    for ( i = 0; i < 4; i++ )
    {
        r = rand() % len; // 0-(len-1)
        verifyNum[i] = string[r];
    }

    verifyNum[i] = '\0';
}

