#include <stdio.h>
void Fun(int par);
int main()
{
	int arg = 1 ;
	printf("arg = %d\n", arg);	
	Fun(arg);                            /* ����ʵ��ֵ�Ŀ��������� */
	printf("arg = %d\n", arg);
	return 0;
}
void Fun(int  par)
{
	printf("par = %d\n", par);
	par = 2;                             /* �ı��βε�ֵ */
    
}
