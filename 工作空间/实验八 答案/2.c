#include <stdio.h>
#include <string.h>
int main()
{
	int flag = 1;
	int i;
	int count = 0;
	char MingWen[128] = { '\0' };                    //����һ�������ַ�����
	char MiWen[128] = { '\0' };                      //����һ�������ַ�����
	while (1)
	{
		if (flag == 1)                                  //����Ǽ�������
		{
			printf("������Ҫ���ܵ����ģ�");
			scanf("%s", &MingWen);                    //��ȡ���������
			count = strlen(MingWen);
			for (i = 0; i < count; i++)              //��������
			    //��չ �����a-w �� A-W  ��Χ��+3 ���� �� x y z �� XYZ������Χ�� -23
				MiWen[i] = MingWen[i] + 3;           //���ü����ַ�
			MiWen[i] = '\0';                           //�����ַ����������
			/*���������Ϣ*/
			printf("���ܺ�����ģ�%s\n", MiWen);
		}
		else if (flag == 2)                            //����ǽ����ַ���
		{
			printf("������Ҫ���ܵ����ģ�");
			scanf("%s", &MiWen);                       //��ȡ���������
			count = strlen(MiWen);
			for (i = 0; i < count; i++)               //���������ַ���
				MingWen[i] = MiWen[i] - 3;            //���ý����ַ�
			MingWen[i] = '\0';                          //�����ַ����������
			/*���������Ϣ*/
			printf("���ܺ�����ģ�%s\n", MingWen);
		}
		else if (flag == 3)                             //������˳�����
			break;
		else
			printf("����������������룡\n");
		printf("################\n");
		printf("# 1����������  #\n");
		printf("# 2����������  #\n");
		printf("# 3���˳�����  #\n");
		printf("################\n");
		scanf("%d", &flag);                             //��ȡ����������ַ�
	}
	return 0;
}
