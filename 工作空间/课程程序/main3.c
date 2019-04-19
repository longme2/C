 #include <stdio.h>
int main()
{
    int  array[10];
    int a=0,b=0,c=0,sum1=0,sum2=0;
	int *p=&array[0];
	for(p=array;p<array+10;p++)
	{
		scanf("%d",p);
		if(*p==0)
	    a++;
		if(*p>0)
		{
			sum1+=*p;
			b++;

		}
		if(*p<0)
		{
			sum2+=*p;
			c++;
		}

	 }
	 printf("a=%d b=%d c=%d sum1=%d sum2=%d",a,b,c,sum1,sum2);
    return 0;
 }
