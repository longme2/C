/* 用数字表示的成绩转化为用字母表示的等级*/ 
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter numerical grade:");
	scanf("%d",&a);
	
	if(a>=0 && a<=100)
	{
     a=a/10;
	switch(a)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:printf("Letter grade: F");break;
		case 6:printf("Letter grade: D");break;	
		case 7:printf("Letter grade: C");break;	
	    case 8:printf("Letter grade: B");break;
		case 9: case 10: printf("Letter grade: A");break;	
	}
    }
    else
      printf("wrong");
			
	
	
	return 0;
}
