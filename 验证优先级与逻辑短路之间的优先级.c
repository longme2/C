#include<stdio.h>
int main()
{
	int i=3,j=1,k=4;
	if(i>j||++j<k)
	   printf("%d %d %d\n",i,j,k);
	else
	  printf("wrong\n");
	return 0;
	  
}
/*   逻辑短路优先于优先级   */ 
