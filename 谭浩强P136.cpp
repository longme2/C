#include<stdio.h>
int main()
{
	int n,i=2;
	printf("n= ");
	scanf("%d",&n);
    for(i;i<=n-1;i++)
    if(n%i==0) break;
    if(i<n) printf("%d��������\n",n);
    else  printf("%d������\n",n);
    return 0;
}
