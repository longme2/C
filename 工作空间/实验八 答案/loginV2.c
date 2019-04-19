#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void createVerifyNum(char []);
int main()
{
    char useName[] ="admin",inputUserName[20]; // 用户名
    char password[]="123456",inputPassWord[20];  // 密码
    // 登录失败次数计数
    int count=0;
    // 定义校验码
    char verifyNum[5],inputVerifyNum[5];
    //1.系统生成
    createVerifyNum(verifyNum);
    //2.用户输入

    while(1)
    {
        printf("请输入用户名:");
        gets(inputUserName);
        printf("请输入密码:");
        gets(inputPassWord);
        printf("请输入校验码：");
        puts(verifyNum);
        gets(inputVerifyNum);

        if(strcmp(useName,inputUserName)==0 && strcmp(password,inputPassWord)==0&&strcmp(verifyNum,inputVerifyNum)==0)
        {
            printf("登录成功\n");
            break;
        }
        else
        {
            printf("用户名密码校验码错误,请重新输入\n");
            count++;
            if(count == 3)
            {
                printf("3次登录失败，24小时内禁止登录系统\n");
                break;
            }
        }
    }


    return 0;
}

void createVerifyNum(char verifyNum[])
{
    char string[] ="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
      int len;
      int i,r;
      len = strlen(string);
      srand(time(NULL));
      for(i=0;i<4;i++)
      {
          r = rand()%len;
          verifyNum[i]=string[r];
      }
      verifyNum[i]='\0';

}


