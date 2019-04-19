#include  <stdio.h>
#include  <string.h>
#define   MAX_LEN  10                		/* 字符串最大长度 */
#define   N         150                		/* 字符串个数 */
void SortString(char str[][MAX_LEN], int n);
int main()
{ 
	int    i, n;
	char   name[N][MAX_LEN];                /* 定义二维字符数组 */
	printf("How many countries?");
	scanf("%d",&n);
	getchar();                                /* 读走输入缓冲区中的回车符 */
	printf("Input their names:\n");
	for (i=0; i<n; i++)   
	{
		gets(name[i]);                       	/* 输入n个字符串 */ 
	}
	SortString(name, n);                    /* 字符串按字典顺序排序 */
	printf("Sorted results:\n");
	for (i=0; i<n; i++)                     
	{
		puts(name[i]);                      /* 输出排序后的n个字符串 */
	}
	return 0;
}
/* 函数功能：交换法实现字符串按字典顺序排序 */
void SortString(char str[][MAX_LEN], int n)
{
	int    i, j;
	char  temp[MAX_LEN];
	for (i=0; i<n-1; i++)         			
	{
		for (j = i+1; j<n; j++)
		{
			if (strcmp(str[j], str[i]) < 0)     
			{ 
				strcpy(temp,str[i]);        
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}  
		}    
	}  
}
