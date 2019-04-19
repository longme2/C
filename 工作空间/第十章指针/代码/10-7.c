#include <stdio.h>
#define N 40
int ReadScore(int score[]);                /* 成绩输入函数原型 */
void PrintScore(int score[], int n);      /* 成绩输出函数原型 */
void AscendingSort(int a[], int n);       /* 升序排序函数原型 */
void DescendingSort(int a[], int n);      /* 降序排序函数原型 */
void Swap(int *x, int *y);                  /* 两数交换函数原型 */
int main()
{
	int score[N], n;
	int order;                       /* 值为1表示升序排序，值为2表示降序排序 */
	n = ReadScore(score);          /* 输入成绩，返回学生人数 */
	printf("Total students are %d\n",n);
	printf("Enter 1 to sort in ascending order,\n");
	printf("Enter 2 to sort in descending order:");
	scanf("%d", &order);
	printf("Data items in original order\n");
	PrintScore(score, n);           /* 输出排序前的成绩 */
	if (order == 1) 
	{
		AscendingSort(score, n);  /* 按升序排序 */
		printf("Data items in ascending order\n");
	} 
	else  
	{
		DescendingSort(score, n); /* 按降序排序 */
		printf("Data items in descending order\n");
	} 
	PrintScore(score, n);            /* 输出排序后的成绩 */
	return 0;
}
/* 函数功能：输入学生某门课的成绩，当输入负值时，结束输入，返回学生人数 */
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
/* 函数功能：输出学生成绩 */
void PrintScore(int score[], int n)
{
	int i;
	for (i=0; i<n; i++)
	{
		printf("%4d", score[i]);
	}
	printf("\n");
}
/* 函数功能： 选择法实现数组a的升序排序 */
void AscendingSort(int a[], int n) /* 升序排序函数定义 */
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
/* 函数功能：选择法实现数组a的降序排序 */
void DescendingSort(int a[], int n) /* 降序排序函数定义 */
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
/* 函数功能：两整数值互换 */
void  Swap(int *x, int *y)                
{
	int  temp;
	temp = *x;                          
	*x = *y;                
	*y = temp;            
}
