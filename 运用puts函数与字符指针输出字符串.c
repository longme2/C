#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{    //1.���ַ����浽�ַ�������
     char str[14]="I Love China!";
     puts(str);     //str�������׵�ַ
     puts(str+2);
     printf("%d",strlen(str));
     return 0;

     //�ȼ��� char *pstr=str;
     //puts(pstr);
     //puts(pstr+2);

     //2.���ַ�ָ��ʹ���ַ���
     char *pstr;
     pstr="I Love China!";
     //�ȼ��� char * pstr="I Love China!";


}
