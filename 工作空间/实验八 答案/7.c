#include  <stdio.h>
#include  <string.h>
#define   MAX_LEN  10                		/* �ַ�����󳤶� */
#define   N         150                		/* �ַ������� */
void SortString(char str[][MAX_LEN], int n);
int main()
{ 
	int    i, n;
	char   name[N][MAX_LEN];                /* �����ά�ַ����� */
	printf("How many countries?");
	scanf("%d",&n);
	getchar();                                /* �������뻺�����еĻس��� */
	printf("Input their names:\n");
	for (i=0; i<n; i++)   
	{
		gets(name[i]);                       	/* ����n���ַ��� */ 
	}
	SortString(name, n);                    /* �ַ������ֵ�˳������ */
	printf("Sorted results:\n");
	for (i=0; i<n; i++)                     
	{
		puts(name[i]);                      /* ���������n���ַ��� */
	}
	return 0;
}
/* �������ܣ�������ʵ���ַ������ֵ�˳������ */
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
