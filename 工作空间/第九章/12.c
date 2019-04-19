#include<stdio.h>
void subString(char *,char []);
int main()
{
   // char str[40];
   // gets(str);
    char *pstr = "adsfsA123456Adfsdfs";
    char sub[40];
    subString(pstr,sub);
    puts(sub);
    return 0;

}

void subString(char *p,char sub[])
{
    int i;
    for(;*p!='\0';p++)
    if(*p=='A')
        break;
    p++;
    for(i=0;*p!='A';i++,p++)
        sub[i]=*p;
    sub[i]='\0';
}


