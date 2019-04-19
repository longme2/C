#include <stdio.h>
int main()
{
	int  a = 0;
	float b = 1;
	char c = 'A';
	printf("a is %d, &a is %p\n", a, &a);
	printf("b is %g, &b is %p\n", b, &b);
	printf("c is %c, &c is %p\n", c, &c);
	return 0;
}
