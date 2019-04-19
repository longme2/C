#include<stdio.h>
int main()
{
	int mm2,dd2,yy2,mm1,dd1,yy1,mme,dde,yye,mm3,dd3,yy3;
	printf("Enter a date (mm/dd/yy) : ");
	scanf("%d/%d/%d",&mm2,&dd2,&yy2);
	printf("Enter a date (mm/dd/yy) : ");
	scanf("%d/%d/%d",&mm1,&dd1,&yy1);
	if(mm1==0 && dd1==0 && yy1==0)
	  printf("%d/%d/%d is the earlier date",mm2,dd2,yy2);
	else
	{
        	if(yy1>yy2)
	  {
	  			mme=mm2;
				dde=dd2;
				yye=yy2;
	  }
	else
	{
		if(yy1<yy2)
		{
			mme=mm1;
			dde=dd1;
			yye=yy1;
		}
		else
		{
			if(dd1>dd2)
			{
				mme=mm2;
				dde=dd2;
				yye=yy2;
			}
			else
			{
				if(dd1>dd2)
				  {
				  	mme=mm2;
				    dde=dd2;
				    yye=yy2;
				  }
				else
				  {
				  	if(mm1>mm2)
				  	{
				  	  mme=mm2;
				    dde=dd2;
				    yye=yy2;	
					}
				  	else{
				  		if(mm1<mm2)
				  		  {
				  		  	mme=mm1;
			                dde=dd1;
			                yye=yy1;
							}
				  		else
						  {
						  	 mme=mm2;
				             dde=dd2;
				            yye=yy2;
						   } 
					  }  
					}  
			  }  
		  }  
	  } 
	  while(mm3!=0 || dd3!=0 || yy3!=0)
	  {
	  	printf("Enter a date (mm/dd/yy): ");
	  	scanf("%d/%d/%d",&mm3,&dd3,&yy3);
	  		if(yye>yy3)
	  printf("%d/%d/%d is the earliest date\n",mm3,dd3,yy3);
	else
	{
		if(yye<yy3)
		  printf("%d/%d/%d is the earliest date\n",mme,dde,yye);
		else
		{
			if(dde>dd3)
			  printf("%d/%d/%d is the earliest date",mm3,dd3,yy3);
			else
			{
				if(dde>dd3)
				  printf("%d/%d/%d is the earliest date\n",mm3,dd3,yy3);
				else
				  {
				  	if(mme>mm3)
				  	  printf("%d/%d/%d is the earliest date\n",mm3,dd3,yy3);
				  	else{
				  		if(mme<mm3)
				  		  printf("%d/%d/%d is the earliest date\n",mme,dde,yye);
				  		else
						  printf("%d/%d/%d is the earliest date\n",mm3,dd3,yy3);  
					  }  
					}  
			  }  
		  }  
	  }
	  }
	}
	return 0;
}
