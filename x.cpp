/* 读取一个5*5的数组，并求每行与每列的和
#include<stdio.h>
int main()
{
    int a[5][5],b[2][5]={0},i,j,n=1;
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
    		case 0:b[0][0]+=a[i][j];break;
    		case 1:b[0][1]+=a[i][j];break;
    		case 2:b[0][2]+=a[i][j];break;
    		case 3:b[0][3]+=a[i][j];break;
    		case 4:b[0][4]+=a[i][j];break;
		}
		switch(j)                                                             //计算每列的和
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

}*/



#include<stdio.h>
int main()
{
    char a[]="I am a boy.",b[20],*p1,*p2;
    for(p1=a,p2=b;*p1!='\0';p1++,p2++)
    {

        *p2=*p1;

    }
    *p2='\0';
    printf("String a is: %s\n",a);
    printf("String b is%: s\n",b);
    return 0;
}
