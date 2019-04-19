#include<stdio.h>
int main()
{
    int i,j;
    scanf("%d %d",&i,&j);
    if(i<j)
      i=-1;
    else if(i=j)
	  i=0;
	else 
	  i=1;
	  printf("%d %d\n",i,j);
	  return 0;
	      
}
