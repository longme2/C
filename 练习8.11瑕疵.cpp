#include<stdio.h>
int main(void)
{
	char checker_board[8][8];
	int i,j;

	for(i=0;i<8;i++)
	{
		for(j=0;j<8;j++)
		{
			if((i+j+2)%2==0)
			checker_board[j]='66';
			else
			checker_board[j]='80';
			if(j==7)
			printf("\n");
		}
	}
	return 0;
}
