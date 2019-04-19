#include<stdio.h>
int main()
{

	int mm1,mm2,dd1,dd2,yy1,yy2;
	printf("Enter first date (mm/dd/yy):");
	scanf("%d/%d/%d",&mm1,&dd1,&yy1);
	printf("Enter second date(mm/dd/yy):");
	scanf("%d/%d/%d",&mm2,&dd2,&yy2);
	if(yy1<yy2)
	  printf("%d/%d/%d is earlier than %d/%d/%d  1  \n",mm1,dd1,yy1,mm2,dd2,yy2);    
	else
	 {
	   if(yy1=yy2)
	       
	   
	   if(dd1<dd2)
	     printf("%d/%d/%d is earlier than %d/%d/%d  2  \n",mm1,dd1,yy1,mm2,dd2,yy2);
	   else
	   {
	   	  
	   if(dd1=dd2)
	    {
	        if(mm1<mm2)
	          printf("%d/%d/%d is earlier than %d/%d/%d  3  \n",mm1,dd1,yy1,mm2,dd2,yy2);
	        else
			{
			 
	        if(mm1=mm2)
		      printf("%d/%d/%d is equto to %d/%d/%d  4  \n",mm1,dd1,yy1,mm2,dd2,yy2); 
			else
			  printf("%d/%d/%d is earlier than %d/%d/%d",mm2,dd2,yy2,mm1,dd1,yy1);  
		    }
		} 
	    else 
	      printf("%d/%d/%d is earlier than %d/%d/%d  5  \n",mm2,dd2,yy2,mm1,dd1,yy1);  
	    }
	
	    else 
	      printf("%d/%d/%d is earlier than %d/%d/%d  6   \n",mm2,dd2,yy2,mm1,dd1,yy1);  
     

       }
    }
     return 0;  
}
	      

