#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//1. ��չ�����������ڵ��ж�
//2. ��չ�����ֻ�������ж�
/*
��ʾ�������ÿ⺯�� ����������ͷ�ļ�ctype.h�ж���ĺ�����
int isalpha(int c)    �ú����Ƿ񴫵ݵ��ַ�����ĸ��
int isdigit(int c)     �ú����Ƿ񴫵ݵ��ַ���ʮ�������֡�
int islower(int c)     �ú�����鴫�ݵ��ַ��Ƿ���Сд��ĸ��
int isupper(int c)    �ú�����鴫�ݵ��ַ��Ƿ��Ǵ�д��ĸ��
int isspace(int c)    �ú�����鴫�ݵ��ַ��Ƿ��ǿհס�

*/
int main()
{
    char userName[20]; //�û���
    char password[20]; //����
    char repassword[20];// ȷ������
    char birthday[11]; //���� ��ʽ yyyy-mm-dd
    char phone[12];  //�ֻ���
    char email[20];  //����
    int status = 1; //1 ע��ɹ� 2 ע��ʧ��
    char result[50] = ""; //������ʾ��Ϣ�ַ�����
    char dbuserName[100][10] = {"admin", "liping", "wangfeng"};
    char dbpassWord[100][10] = {"admin", "123456", "wangfeng"};
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
                if ( !isdigit ( phone[i] ) )  //�ж��ֻ���ÿһλ�Ƿ�������
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
        { break; }
    }

    if ( i < 3 )
    {
        status = 0;
        strcat ( result, "�û����Ѿ�����\n" );
    }

    if ( status == 1 )
    {
        printf ( "�û�ע��ɹ�\n" );

        // �û�����������뵽���ݿ�
        strcpy ( dbuserName[3], userName );
        strcpy ( dbpassWord[3], password );
        printf ( "ϵͳ�û����������б�:\n" );

        for ( i = 0; i < 4; i++ )
        {
            printf ( "�û���:%s,����%s\n", dbuserName[i], dbpassWord[i] );
        }
    }
    else
    {
        puts ( result );
    }

    return 0;
}
