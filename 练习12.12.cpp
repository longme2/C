/* Fing largest ang second-largest elements in an array */
#include<stdio.h>

void find_largest(const int *a,int n,int *max,int *max2);
int main(void)
{
	int n;
	printf("How many number do you want to input: ");
	scanf("%d",&n);
	printf("Enter %d numbers: ",n);
	int b[n],i,big,small;
	for(i=0;i<n;i++)
	scanf("%d",&b[i]);
	find_largest(b,n,&big,&small);
	printf("Largest: %d\n",big);
	printf("Second-largest: %d\n",small);
	return 0;
}

void find_largest(const int *a,int n,int *max,int *max2)
{
	const int *b;
	const int *p;
	p=a;                      //pҲָ��a��ָ��ĵ�ַ��a�䵱�׵�ַ��pָ������������Լ� 
	*max=*max2=*a;            //��max��max2����ֵΪa��0�� 
	for(p=a;p<a+n;p++)
	{
		if(*p>*max)
		{
		*max=*p;
		b=p;}                //�������ֵ���ڵ�ַ������ָ�����b�� 
	}
	for(p=a+1;p<a+n;p++)
	{
		while(p!=b)          //Խ�����ֵ���ڵ�ַ�����������������ֵ���������Դﵽ�����δ�ֵ��Ŀ�� 
		{if(*p>*max2)
		*max2=*p;
		p++;}
	}
}
