#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
void createVerifyNum(char []);
int main()
{
    char useName[] ="admin",inputUserName[20]; // �û���
    char password[]="123456",inputPassWord[20];  // ����
    // ��¼ʧ�ܴ�������
    int count=0;
    // ����У����
    char verifyNum[5],inputVerifyNum[5];
    //1.ϵͳ����
    createVerifyNum(verifyNum);
    //2.�û�����

    while(1)
    {
        printf("�������û���:");
        gets(inputUserName);
        printf("����������:");
        gets(inputPassWord);
        printf("������У���룺");
        puts(verifyNum);
        gets(inputVerifyNum);

        if(strcmp(useName,inputUserName)==0 && strcmp(password,inputPassWord)==0&&strcmp(verifyNum,inputVerifyNum)==0)
        {
            printf("��¼�ɹ�\n");
            break;
        }
        else
        {
            printf("�û�������У�������,����������\n");
            count++;
            if(count == 3)
            {
                printf("3�ε�¼ʧ�ܣ�24Сʱ�ڽ�ֹ��¼ϵͳ\n");
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


