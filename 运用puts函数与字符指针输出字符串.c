#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{    //1.把字符串存到字符数组中
     char str[14]="I Love China!";
     puts(str);     //str数组名首地址
     puts(str+2);
     printf("%d",strlen(str));
     return 0;

     //等价于 char *pstr=str;
     //puts(pstr);
     //puts(pstr+2);

     //2.用字符指针使用字符串
     char *pstr;
     pstr="I Love China!";
     //等价于 char * pstr="I Love China!";


}
