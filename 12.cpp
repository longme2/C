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
