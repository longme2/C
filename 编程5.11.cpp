#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a two-digit number:");
	scanf("%d",&a);
	b=a/10;
	c=a%10;
	if(b<=1)
	{
		switch(a)
		{
			case 10:printf("You entered the number ten.");break;
			case 11:printf("You entered the number eleven.");break;
			case 12:printf("You entered the number twelve.");break;
			case 13:printf("You entered the number thirteen.");break;
			case 14:printf("You entered the number fourteen.");break;
			case 15:printf("You entered the number fiveteen.");break;
			case 16:printf("You entered the number sixteen.");break;
			case 17:printf("You entered the number seventeen.");break;
			case 18:printf("You entered the number eighteen.");break;
			case 19:printf("You entered the number nineteen.");break;
		}
		
	}
	else
	{
		switch(b)
		{
			case 2:printf("You entered the number twenty");break;
			case 3:printf("You entered the number thirty");break;
			case 4:printf("You entered the number forty");break;
			case 5:printf("You entered the number fifty");break;
			case 6:printf("You entered the number sixty");break;
			case 7:printf("You entered the number seventy");break;
			case 8:printf("You entered the number eigthty");break;
			case 9:printf("You entered the number ninety");break;
			default:printf("Wrong");break;
		}
	
        switch(c)
		{
			case 1:printf("-one.");break;
			case 2:printf("-two.");break;
			case 3:printf("-three.");break;
			case 4:printf("-four.");break;
			case 5:printf("-five.");break;
			case 6:printf("-six.");break;
			case 7:printf("-seven.");break;
			case 8:printf("-eight.");break;
			case 9:printf("-nine.");break;
	    }
    }
	return 0;
}
