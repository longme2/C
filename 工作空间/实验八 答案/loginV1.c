#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char useName[] ="admin",inputUserName[20];
    char password[]="123456",inputPassWord[20];

    printf("�������û���:");
    gets(inputUserName);
    printf("����������:");
    gets(inputPassWord);

    if(strcmp(useName,inputUserName)==0 && strcmp(password,inputPassWord)==0)
    {
        printf("��¼�ɹ�\n");
    }
    else
    {
        printf("�û����������\n");
    }

    return 0;
}

