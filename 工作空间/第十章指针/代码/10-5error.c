#include  <stdio.h>
#define  N  40
void FindMax(int score[], long num[], int n, int pMaxScore, long pMaxNum); 
int main()
{
	   int  score[N], maxScore;
	   int    n, i;
	   long   num[N], maxNum;
	   printf("How many students?");
	   scanf("%d", &n);    		                 /* �Ӽ�������ѧ������n */
	   printf("Input student's ID and score:\n");
	   for (i=0; i<n; i++)		
	   {
		   scanf("%ld%d", &num[i], &score[i]);   /* ��ĸdǰΪ��ĸl */
	   }
	   FindMax(score, num, n, maxScore, maxNum); /* ��ֵ���ú��� */
	   printf("maxScore = %d, maxNum = %ld\n", maxScore, maxNum); 
	   return 0;
}
/* �������ܣ�������߷ּ�����Ӧѧ����ѧ�� */
void FindMax(int score[], long num[], int n, int pMaxScore, long pMaxNum)
{ 
	   int    i;
	   pMaxScore = score[0];          	/* ����score[0]Ϊ��ǰ��߷� */
	   pMaxNum = num[0];               	/* ��¼��ǰ��߷�ѧ����ѧ��num[0] */
	   for (i=1; i<n; i++)             	/* ������score[i]���бȽ� */
	   {
		   if (score[i] >pMaxScore)/* ���score[i]���ڵ�ǰ��߷� */
		   {  
			   pMaxScore = score[i]; /* ��score[i]�޸ĵ�ǰ��߷� */
			   pMaxNum = num[i];      /* ��¼��ǰ��߷�ѧ����ѧ��num[i] */
		   } 
	   } 
	   
}
