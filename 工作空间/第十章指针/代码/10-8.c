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
	int order;                       /* 值为1表示升序排序，值为2表示降序排序 */
	n = ReadScore(score);          /* 输入成绩，返回学生人数 */
	printf("Total students are %d\n",n);
	printf("Enter 1 to sort in ascending order,\n");
	printf("Enter 2 to sort in descending order:");
	scanf("%d", &order);
	printf("Data items in original order\n");
	PrintScore(score, n);          /* 输出排序前的成绩 */
	if (order == 1) 
	{
		SelectionSort(score, n, Ascending);/*函数指针指向Ascending()*/
		printf("Data items in ascending order\n");
	} 
	else  
	{
		SelectionSort(score, n, Descending);/*函数指针指向Descending()*/
		printf("Data items in descending order\n");
	} 
	PrintScore(score, n);          /* 输出排序后的成绩 */
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
/* 函数功能：调用函数指针compare指向的函数实现对数组a的交换法排序 */
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
/* 使数据按升序排序 */                                               
int Ascending( int a, int b )
{
	return a < b;     /* 这样比较决定了按升序排序，如果a<b，则交换 */                
}                                  
/* 使数据按降序排序 */                                               
int Descending( int a, int b )
{
	return a > b;    /* 这样比较决定了按降序排序，如果a>b，则交换 */             
}  
/* 函数功能：两整数值互换 */
void  Swap(int *x, int *y)                
{
	int  temp;
	temp = *x;                          
	*x = *y;                
	*y = temp;            
}                  
