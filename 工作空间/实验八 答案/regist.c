#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//1. 扩展完善生日日期的判断
//2. 扩展完善手机号码的判断
/*
提示：可利用库函数 ，以下是在头文件ctype.h中定义的函数：
int isalpha(int c)    该函数是否传递的字符是字母。
int isdigit(int c)     该函数是否传递的字符是十进制数字。
int islower(int c)     该函数检查传递的字符是否是小写字母。
int isupper(int c)    该函数检查传递的字符是否是大写字母。
int isspace(int c)    该函数检查传递的字符是否是空白。

*/
int main()
{
    char userName[20]; //用户名
    char password[20]; //密码
    char repassword[20];// 确认密码
    char birthday[11]; //生日 格式 yyyy-mm-dd
    char phone[12];  //手机号
    char email[20];  //邮箱
    int status = 1; //1 注册成功 2 注册失败
    char result[50] = ""; //错误提示信息字符串’
    char dbuserName[100][10] = {"admin", "liping", "wangfeng"};
    char dbpassWord[100][10] = {"admin", "123456", "wangfeng"};
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
                if ( !isdigit ( phone[i] ) )  //判断手机号每一位是否是数字
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
        { break; }
    }

    if ( i < 3 )
    {
        status = 0;
        strcat ( result, "用户名已经存在\n" );
    }

    if ( status == 1 )
    {
        printf ( "用户注册成功\n" );

        // 用户名和密码加入到数据库
        strcpy ( dbuserName[3], userName );
        strcpy ( dbpassWord[3], password );
        printf ( "系统用户名和密码列表:\n" );

        for ( i = 0; i < 4; i++ )
        {
            printf ( "用户名:%s,密码%s\n", dbuserName[i], dbpassWord[i] );
        }
    }
    else
    {
        puts ( result );
    }

    return 0;
}
