/*#include <stdio.h>
// ��ָ����Ϊ��������ȥ��д
void copy_string(char [],char []);
int main()
{
    char a[]="I am a teacher.";
    char b[]="You are a student.";
    printf("string_a=%s\n string_b=%s\n",a,b);
    copy_string(a,b);
    printf("\nstring_a=%s\nstring_b=%s\n",a,b);
}
// �β��� �ַ�������
void copy_string(char  from[],char to[])
{
    int i=0;
    while(from[i]!='\0')
    {
        to[i]=from[i];
        i++;
    }
    to[i]='\0';
}*/


#include <stdio.h>
// ��ָ����Ϊ��������ȥ��д
// ͨ��ָ�������ַ���
void copy_string(char [],char []);
int main()
{
    char * p1="I am a teacher.";
    char b[]="You are a student.";
    printf("string_a=%s\n string_b=%s\n",p1,b);
    copy_string(p1,b);
    p1="I am a teacher.";
    printf("\nstring_a=%s\nstring_b=%s\n",p1,b);
}
// �β��� �ַ�������
void copy_string(char  *from,char *to)
{
    /*int i=0;
    while(from[i]!='\0')
    {
        to[i]=from[i];
        i++;
    }
    to[i]='\0';*/
    for( ; *from!='\0'; from++,to++)
    {
        *to=*from;
    }
    *to='\0';
}


