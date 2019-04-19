#include<stdio.h>
#include<stdbool.h>

bool search(const int a[], int n, int key);
int main(void)
{
	int n,key,i;                                           //n是数组中元素的数量,key是搜索键 
	printf("How many numbers do you want to input: ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]); 
	printf("Which number do you want to find: (key): ");
	scanf("%d",&key);
	if(search(a,n,key))
	printf("TRUE!");
	else
	printf("FALSE!");
	 
	return 0;
}

bool search(const int a[], int n, int key)
{

        int *p;
        p=&a[0];             //等价于const int *p=a;
	for(p=a;p<a+n;p++)
	{
        if(*p==key)
        return true;

	}
    return false;

}
