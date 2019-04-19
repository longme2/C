#include<stdio.h>
#define N 10

int main(void)
{
	double ident[N][N];
	double *p=&ident[0][0],*q=&ident[0][0];
	
	
	for(p=&ident[0][0];p<&ident[0][0]+N;p++){
		printf("\n");
	
	  for(q=&ident[0][0];q<&ident[0][0]+N;q++)
	    if(p==q)
	      printf("1.0 ");
	    else
		  printf("0.0 ");  
   }
		  
	 
	return 0;
}
