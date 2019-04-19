#include<stdio.h>
int main()
{
	int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p;
	printf("Enter the numbers from 1 to 16 in any order\n");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l,&m,&n,&o,&p);
	printf("%4d%4d%4d%4d\n",a,b,c,d);
	printf("%4d%4d%4d%4d\n",e,f,g,h);
	printf("%4d%4d%4d%4d\n",i,j,k,l);
	printf("%4d%4d%4d%4d\n\n",m,n,o,p);
	printf("Row sums: %4d%4d%4d%4d\n",a+b+c+d,e+f+g+h,i+j+k+l,m+n+o+p);
	printf("Column sums: %4d%4d%4d%4d\n",a+e+i+m,b+f+j+n,c+g+k+o,d+h+l+p);
	printf("Diagonal sums: %4d%4d\n",a+f+k+p,d+g+j+m);
    return 0;
	
	
	
}
