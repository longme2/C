#include <stdio.h>
int main ()
{
	char y;
	int x;
	if(x>85)
		y='A';
	if(70<x<84)
		y='B';
	if(60<x<69)
		y='C';
	else y='D';
	printf("%d,y=%lf",x,y);
	return 0;
}
