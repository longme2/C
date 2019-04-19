/* switch中嵌套if的用法*/ 
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int b=2,c=1;
     switch(b)
     {
     	if(c=1){case 0:printf("2");break;
     	case 1:printf("3");break;
     	
		 };
		if(c=2){
		case 2:printf("4");break;
		case 3:printf("5");break;
		} ;
		default:printf("wrong");break;
	 }
	 return 0;

}
