#include<stdio.h>
#include<string.h>
void build_index_url(char *domain, char *index_url);
int main(void)
{

	char domain[20];
	char index_url[50];
	printf("输入一个包含域名的字符串：");
	gets(domain); 
	build_index_url(domain,index_url);
	puts(index_url);
	return 0;
}
void build_index_url(char *domain, char *index_url)
{
	char str1[]="http://www.";
	char str2[]="/index.html";
	strcpy(index_url,str1);
	strcat(index_url,domain);
	strcat(index_url,str2);
	
}
