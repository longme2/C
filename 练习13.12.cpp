#include<stdio.h>
#include<string.h>
void get_extension(const char *file_name , char *extension);
int main(void)
{
	char file_name[20],extension[20];
	printf("����һ���ļ�����");
	gets(file_name);
	get_extension(file_name,extension);
	printf("����ļ�������չ����");
	puts(file_name); 
	puts(extension); 
	 
	return 0;
}

void get_extension(const char *file_name , char *extension)
{
	int i,len=1;
	char str1[20];
	strcpy(str1,file_name);
	
	for(i=0;i<len;i++)
	if(file_name[i]!='.')
	len++;
	
	for(i=len;i<20;i++)
	extension[i]=str1[len++];
}
