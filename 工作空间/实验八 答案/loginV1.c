#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char useName[] ="admin",inputUserName[20];
    char password[]="123456",inputPassWord[20];

    printf("请输入用户名:");
    gets(inputUserName);
    printf("请输入密码:");
    gets(inputPassWord);

    if(strcmp(useName,inputUserName)==0 && strcmp(password,inputPassWord)==0)
    {
        printf("登录成功\n");
    }
    else
    {
        printf("用户名密码错误\n");
    }

    return 0;
}

