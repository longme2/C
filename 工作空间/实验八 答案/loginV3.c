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
	char result[80]=""; //������ʾ��Ϣ�ַ���
    while(1)
    {
		printf("�������û���:");
        gets(inputUserName);
        printf("����������:");
        gets(inputPassWord);
        // �������У����
        createVerifyCode(verifyNum);
        printf("������У����:");
        puts(verifyNum);
        gets(inputVerifyNum);
        if(stricmp(useName,inputUserName)==0 && stricmp(password,inputPassWord)==0&&stricmp(verifyNum,inputVerifyNum)==0)  //strcasecmp
        {
            printf("��¼�ɹ�\n");
            break;
        }
        else
        {
           if(strcmp(useName,inputUserName)!=0)
		   {
			    strcat(result,"�û�������,����������\n");
		   }
		   if(strcmp(password,inputPassWord)!=0)
		   {
			   strcat(result,"�������,����������\n");
		   }
           if(strcmp(verifyNum,inputVerifyNum)!=0)
		   {
			   	strcat(result,"��֤����������������\n");
		   }
		    puts(result);
			//�������result����ַ���
	        strcpy(result,"");
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

// ����У����
void  createVerifyCode(char verifyNum[])
{
    char string[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int i,r,len;

    // �������У����
    srand(time(NULL));
    len = strlen(string);
    for(i=0; i<4; i++)
    {
        r = rand()%len;  // 0-(len-1)
        verifyNum[i]=string[r];
    }
    verifyNum[i]='\0';

}
