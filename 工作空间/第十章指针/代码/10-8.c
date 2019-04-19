#include <stdio.h>
#define N 40
int ReadScore(int score[]); 
void PrintScore(int score[], int n);                     
void SelectionSort(int a[], int n, int (*compare)(int a, int b));
int Ascending( int a, int b );
int Descending( int a, int b );
void Swap(int *x, int *y);                  
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
	PrintScore(score, n);          /* �������ǰ�ĳɼ� */
	if (order == 1) 
	{
		SelectionSort(score, n, Ascending);/*����ָ��ָ��Ascending()*/
		printf("Data items in ascending order\n");
	} 
	else  
	{
		SelectionSort(score, n, Descending);/*����ָ��ָ��Descending()*/
		printf("Data items in descending order\n");
	} 
	PrintScore(score, n);          /* ��������ĳɼ� */
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
/* �������ܣ����ú���ָ��compareָ��ĺ���ʵ�ֶ�����a�Ľ��������� */
void SelectionSort(int a[], int n, int (*compare)(int a, int b)) 
{
	int i, j, k;
	for (i=0; i<n-1; i++)
	{
		k = i;
		for (j=i+1; j<n; j++)      
		{
			if ((*compare)(a[j], a[k]))  k = j;
		}
		if (k != i) 	Swap(&a[k], &a[i]);    
	}  
}
/* ʹ���ݰ��������� */                                               
int Ascending( int a, int b )
{
	return a < b;     /* �����ȽϾ����˰������������a<b���򽻻� */                
}                                  
/* ʹ���ݰ��������� */                                               
int Descending( int a, int b )
{
	return a > b;    /* �����ȽϾ����˰������������a>b���򽻻� */             
}  
/* �������ܣ�������ֵ���� */
void  Swap(int *x, int *y)                
{
	int  temp;
	temp = *x;                          
	*x = *y;                
	*y = temp;            
}                  
