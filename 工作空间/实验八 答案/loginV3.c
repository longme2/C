#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void  createVerifyCode(char []);
int main()
{
    char useName[] ="admin",inputUserName[20];
    char password[]="123456",inputPassWord[20];
    char verifyNum[5],inputVerifyNum[5];
	int count =0;
	char result[80]=""; //错误提示信息字符串
    while(1)
    {
		printf("请输入用户名:");
        gets(inputUserName);
        printf("请输入密码:");
        gets(inputPassWord);
        // 生成随机校验码
        createVerifyCode(verifyNum);
        printf("请输入校验码:");
        puts(verifyNum);
        gets(inputVerifyNum);
        if(stricmp(useName,inputUserName)==0 && stricmp(password,inputPassWord)==0&&stricmp(verifyNum,inputVerifyNum)==0)  //strcasecmp
        {
            printf("登录成功\n");
            break;
        }
        else
        {
           if(strcmp(useName,inputUserName)!=0)
		   {
			    strcat(result,"用户名错误,请重新输入\n");
		   }
		   if(strcmp(password,inputPassWord)!=0)
		   {
			   strcat(result,"密码错误,请重新输入\n");
		   }
           if(strcmp(verifyNum,inputVerifyNum)!=0)
		   {
			   	strcat(result,"验证码有误，请重新输入\n");
		   }
		    puts(result);
			//重新清空result结果字符串
	        strcpy(result,"");
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

// 生成校验码
void  createVerifyCode(char verifyNum[])
{
    char string[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i,r,len;

    // 生成随机校验码
    srand(time(NULL));
    len = strlen(string);
    for(i=0; i<4; i++)
    {
        r = rand()%len;  // 0-(len-1)
        verifyNum[i]=string[r];
    }
    verifyNum[i]='\0';

}
