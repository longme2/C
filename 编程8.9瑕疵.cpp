#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define N 10
int main()
{
	char a[N][N];
	char alp='B';
	int i,j,b;
	for(i=0;i<N;i++)
	  for(j=0;j<N;j++)
        a[i][j]='.';
        a[0][0]='A';
        
     srand((unsigned) time(NULL));
	 for(i=0;i<N;i++)
	 {
	    for(j=0;j<N;j++)  
	    {
	    if(i==0&&j==0)
	    printf("A");
	    else
		{
		while(alp!='[')
	   	{
	    	b=rand()%4;
	    	if(i==0||i==N-1)
	    		switch(b)
	   			{
	   				
	   				case 1:printf("%c",a[i][j-1]=alp);break;
	   				case 2:printf("%c",a[i+1][j]=alp);break;
	   				case 3:printf("%c",a[i][j+1]=alp);break;
				}
			if(j==0||j==N-1)
				switch(b)
	   			{
	   				case 0:printf("%c",a[i-1][j]=alp);break;
	   				case 2:printf("%c",a[i][j-1]=alp);break;
	   				case 3:printf("%c",a[i][j-1]=alp);break;
				}
			if((i!=0&&j==0)||(j!=0&&i==0)||(i!=0&&j!=0))
	   		switch(b)
	   			{
	   				case 0:printf("%c",a[i-1][j]=alp);break;
	   				case 1:printf("%c",a[i+1][j]=alp);break;
	   				case 2:printf("%c",a[i][j-1]=alp);break;
	   				case 3:printf("%c",a[i][j+1]=alp);break;
				}
			
	    	alp++;
	    }

		}

	   }
	 }
	 for(i=0;i<N;i++)
	 {
	 	printf("\n");
	 	for(j=0;j<N;j++)
	   printf(" %c",a[i][j]);
	 }


	return 0;
}
