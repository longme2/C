#include <stdio.h>
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
}


