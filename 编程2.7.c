#include<stdio.h>
int main(void)
{
   int amount,a,b,c,d;
   printf("Enter a dollar amount:");
   scanf("%d",&amount);
   a=amount/20;
   b=(amount%20)/10;
   c=((amount%20)%10)/5;
   d=(((amount%20)%10)%5)/1;
   printf("$20 bills: %d\n",a);
   printf("$10 bills: %d\n",b);
   printf("$5 bills: %d\n",c);
   printf("$1 bills: %d\n",d);
   return 0;
}
