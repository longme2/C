 #include <stdio.h>
int main()
{
    int  array[10]={1,-2,3,-4,5,-6,7,8,-9,0};
    int *p=&array[0];
    int number;
    printf("Enter a number: ");
    scanf("%d",number);
    for(p=array;p<array+10;p++)
    {
    	if(*p=number)
    	printf("%d",p-array);
    	
    	
	}
	if(p=array+10)
    printf("NO FOUND");
    return 0;
 }
