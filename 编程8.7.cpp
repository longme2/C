/* 读取一个5*5的数组，并求每行与每列的和*/ 
#include<stdio.h>
int main()
{
    int a[5][5],i,j,n=1,b1=0,b2=0,c1=0,c2=0,d1=0,d2=0,e1=0,e2=0,f1=0,f2=0;
    for(i=0;i<5;i++)                                                          //处理数组a中一行的各元素 
    {
    	printf("\n");
    	printf("Enter row %d: ",n);
    	n++;
    	for(j=0;j<5;j++)                                                      //处理数组a中一列的各元素 
    {
    	scanf("%d",&a[i][j]);
    	switch(i)                                                             //计算每行的和  
    	{
    		case 0:b1+=a[i][j];break;
    		case 1:c1+=a[i][j];break;
    		case 2:d1+=a[i][j];break;
    		case 3:e1+=a[i][j];break;
    		case 4:f1+=a[i][j];break;
		}
		switch(j)                                                             //计算每列的和 
    	{
    		case 0:b2+=a[i][j];break;
    		case 1:c2+=a[i][j];break;
    		case 2:d2+=a[i][j];break;
    		case 3:e2+=a[i][j];break;
    		case 4:f2+=a[i][j];break;
		}
		
	}
	
    	
	}
	printf("\nRow totals: %d %d %d %d %d",b1,c1,d1,e1,f1);
	printf("\nColumn totals: %d %d %d %d %d",b2,c2,d2,e2,f2);
	return 0;

}
