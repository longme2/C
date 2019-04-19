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
    printf ( "-----用户登录注册页面-----\n" );
    printf ( "   1.用户注册\n" );
    printf ( "   2.用户登录\n" );
    printf ( "   3.退出\n" );
    printf ( "请选择要执行的操作:\n" );
    scanf ( "%d", &command );
    fflush ( stdin );

    switch ( command )
    {
    // 调用用户注册
    case 1:
        regist ( dbuserName, dbpassWord );
        break;

    //调用用户登录
    case 2:
        login ( dbuserName, dbpassWord );
        break;

    case 3:
        exit ( 0 );

    default:
        printf ( "输出操作有误！\n" );
    }

    return 0;
}
// 用户注册
void  regist ( char dbuserName[][10], char dbpassWord[][10] )
{
    char userName[20]; //用户名
    char password[20]; //密码
    char repassword[20];// 确认密码
    char birthday[11]; //生日 格式 yyyy-mm-dd
    char phone[12];  //手机号
    char email[20];  //邮箱
    int status = 1; //1 注册成功 0 注册失败
    char result[50] = ""; //错误提示信息字符串
    int i;
    printf ( "请输入用户名:" );
    gets ( userName );
    printf ( "请输入密码：" );
    gets ( password );
    printf ( "请核对密码：" );
    gets ( repassword );
    printf ( "请输入出生日期(yyyy-mm-dd) :" );
    gets ( birthday );
    printf ( "请输入手机号:" );
    gets ( phone );
    printf ( "请输入电子邮箱:" );
    gets ( email );

    // 判断 注册信息格式正确

    //1.密码判断
    if ( ! ( strcmp ( password, repassword ) == 0 ) )
    {
        status = 0;
        strcat ( result, "两次输入密码不一致\n" );
    }

    //2. 生日判断
    if ( strlen ( birthday ) == 10 )
    {
        for ( i = 0; i < strlen ( birthday ); i++ )
        {
            if ( i == 4 || i == 7 ) // 验证中间是否以 - 间隔
            {
                if ( birthday[i] != '-' )
                {
                    // 修改注册状态为失败
                    status = 0;
                    strcat ( result, "生日格式不正确\n" );
                }
            }
            else  //其余位置必须是数字
            {
                if ( !isdigit ( birthday[i] ) )
                {
                    status = 0;
                    strcat ( result, "生日格式不正确\n" );
                }
            }
        }
    }
    else //修改注册信息
    {
        status = 0;
        strcat ( result, "生日格式不正确\n" );
    }

    //3.手机号判断
    if ( strlen ( phone ) == 11 )
    {
        if ( ! ( ( phone[0] == '1' ) && ( phone[1] == '3' || phone[1] == '5' || phone[1] == '7' || phone[1] == '8' ) ) )
        {
            status = 0;
            strcat ( result, "手机号格式不正确\n" );
        }
        else
        {
            for ( i = 0; i < strlen ( phone ); i++ )
            {
                if ( !isdigit ( phone[i] ) )
                {
                    status = 0;
                    strcat ( result, "手机号格式不正确\n" );
                }
            }
        }
    }
    else
    {
        status = 0;
        strcat ( result, "手机号格式不正确\n" );
    }

//4.邮箱判断
    if ( email[0] == '@' ) //首字母不能为@
    {
        status = 0;
        strcat ( result, "邮箱格式不正确\n" );
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
            strcat ( result, "邮箱格式不正确\n" );
        }
    }

// 判断用户名是否已经存在
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
        strcat ( result, "用户名已经存在\n" );
    }

    if ( status == 1 )
    {
        printf ( "用户注册成功\n" );
        // 用户名加入到数据库
        strcpy ( dbuserName[3], userName );
        strcpy ( dbpassWord[3], password );
        printf ( "系统用户名列表:\n" );

        for ( i = 0; i < 4; i++ )
        {
            printf ( "用户名:%s,\t密码：%s\n", dbuserName[i], dbpassWord[i] );
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
        printf ( "请输入用户名:" );
        gets ( inputUserName );
        printf ( "请输入密码:" );
        gets ( inputPassWord );
        // 生成随机校验码
        createVerifyCode ( verifyNum );
        printf ( "请输入校验码:" );
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
            printf ( "用户登录成功\n" );
            break;
        }
        else
        {
            printf ( "没用此用户\n" );
        }
    }
}
// 生成校验码
void  createVerifyCode ( char verifyNum[] )
{
    char string[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i, j, r, len;
    // 生成随机校验码
    srand ( time ( NULL ) );
    len = strlen ( string );

    for ( i = 0; i < 4; i++ )
    {
        r = rand() % len; // 0-(len-1)
        verifyNum[i] = string[r];
    }

    verifyNum[i] = '\0';
}

