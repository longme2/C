/* ��ȡһ��5*5�����飬����ÿ����ÿ�еĺ�*/ 
#include<stdio.h>
int main()
{
    int a[5][5],b[2][5]={0},i,j,n=1;
    for(i=0;i<5;i++)                                                          //��������a��һ�еĸ�Ԫ�� 
    {
    	printf("\n");
    	printf("Enter row %d: ",n);
    	n++;
    	for(j=0;j<5;j++)                                                      //��������a��һ�еĸ�Ԫ�� 
    {
    	scanf("%d",&a[i][j]);
    	switch(i)                                                             //����ÿ�еĺ�  
    	{
    		case 0:b[0][0]+=a[i][j];break;
    		case 1:b[0][1]+=a[i][j];break;
    		case 2:b[0][2]+=a[i][j];break;
    		case 3:b[0][3]+=a[i][j];break;
    		case 4:b[0][4]+=a[i][j];break;
		}
		switch(j)                                                             //����ÿ�еĺ� 
    	{
    		case 0:b[1][0]+=a[i][j];break;
    		case 1:b[1][1]+=a[i][j];break;
    		case 2:b[1][2]+=a[i][j];break;
    		case 3:b[1][3]+=a[i][j];break;
    		case 4:b[1][4]+=a[i][j];break;
		}
		
	}
	
    	
	}
	
	for(i=0;i<2;i++)
	{
		if(i==0)
		printf("\nRow totals: ");
		if(i==1)
		printf("\nColumn totals: ");
		for(j=0;j<5;j++)
		{
			if(i==0)
			printf("%d ",b[i][j]);
			if(i==1)
			printf("%d ",b[i][j]);
			
		}
	}

	
	return 0;

}
