#include <stdio.h>
#define N 40
int ReadScore(int score[]);                /* �ɼ����뺯��ԭ�� */
void PrintScore(int score[], int n);      /* �ɼ��������ԭ�� */
void AscendingSort(int a[], int n);       /* ����������ԭ�� */
void DescendingSort(int a[], int n);      /* ����������ԭ�� */
void Swap(int *x, int *y);                  /* ������������ԭ�� */
int main()
{
	int score[N], n;
	int order;                       /* ֵΪ1��ʾ��������ֵΪ2��ʾ�������� */
	n = ReadScore(score);          /* ����ɼ�������ѧ������ */
	printf("Total students are %d\n",n);
	printf("Enter 1 to sort in ascending order,\n");
	printf("Enter 2 to sort in descending order:");
	scanf("%d", &order);
	printf("Data items in original order\n");
	PrintScore(score, n);           /* �������ǰ�ĳɼ� */
	if (order == 1) 
	{
		AscendingSort(score, n);  /* ���������� */
		printf("Data items in ascending order\n");
	} 
	else  
	{
		DescendingSort(score, n); /* ���������� */
		printf("Data items in descending order\n");
	} 
	PrintScore(score, n);            /* ��������ĳɼ� */
	return 0;
}
/* �������ܣ�����ѧ��ĳ�ſεĳɼ��������븺ֵʱ���������룬����ѧ������ */
int ReadScore(int score[])    
{
	int i = -1;         
	do{
		i++;
		printf("Input score:");
		scanf("%d", &score[i]);
	} while (score[i] >= 0);   
	return i;                     
}
/* �������ܣ����ѧ���ɼ� */
void PrintScore(int score[], int n)
{
	int i;
	for (i=0; i<n; i++)
	{
		printf("%4d", score[i]);
	}
	printf("\n");
}
/* �������ܣ� ѡ��ʵ������a���������� */
void AscendingSort(int a[], int n) /* �������������� */
{
	int i, j, k;
	for (i=0; i<n-1; i++)
	{
		k = i;
		for (j=i+1; j<n; j++)      
		{
			if (a[j] < a[k])    k = j;
		}
		if (k != i) 	Swap(&a[k], &a[i]);  
	}  
}
/* �������ܣ�ѡ��ʵ������a�Ľ������� */
void DescendingSort(int a[], int n) /* �������������� */
{
	int i, j, k;
	for (i=0; i<n-1; i++)
	{
		k = i;
		for (j=i+1; j<n; j++)      
		{
			if (a[j] > a[k])    k = j;
		}
		if (k != i) 	Swap(&a[k], &a[i]);    
	}  
}
/* �������ܣ�������ֵ���� */
void  Swap(int *x, int *y)                
{
	int  temp;
	temp = *x;                          
	*x = *y;                
	*y = temp;            
}
