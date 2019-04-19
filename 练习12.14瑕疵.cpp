#include<stdio.h>
#include<stdbool.h>

bool search(int a[][len], int n,int key);
int main(void)
{
	int key,i;                                           //n是数组中元素的数量,key是搜索键 
    int len=4
	int temperatures[4][4];
	int *p=&temperatures[0][0];
	int *q=&temperatures[0][0];
	for(p=&temperatures[0][0];p<&temperatures[0][0]+4;p++)
	  for(q=&temperatures[0][0];q<&temperatures[0][0]+4;q++)
	  scanf("%d ",q); 
	printf("Which number do you want to find: (key): ");
	scanf("%d",&key);
	if(search(&temperatures[0][0],4,key))
	printf("TRUE!");
	else
	printf("FALSE!");
	 
	return 0;
}

bool search(int a[][len], int n,int key)
{

        int *p,*q;
        p=&a[0][0];
		q=&a[0][0];             
	for(p=&a[0][0];p<&a[0][0]+n;p++)
	  for(q=&a[0][0];q<&a[0][0]+m;q++)
	{
        if(*p==key)
        return true;

	}
    return false;

}
