#include<stdio.h>

int num_digits(int k)
{
	int i=0;
	while(k!=0)
	{
		k/=10;
		i++;
	}
	return i;
}
int main()
{
	int n;
	scanf("%d",&n);
	if(n>=0)
	printf("%d",num_digits(n));
	else
	printf("����Ǹ�����");
	
	

	return 0;
	
	
}
