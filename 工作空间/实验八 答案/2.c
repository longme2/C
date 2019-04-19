#include <stdio.h>
#include <string.h>
int main()
{
	int flag = 1;
	int i;
	int count = 0;
	char MingWen[128] = { '\0' };                    //定义一个明文字符数组
	char MiWen[128] = { '\0' };                      //定义一个密文字符数组
	while (1)
	{
		if (flag == 1)                                  //如果是加密明文
		{
			printf("请输入要加密的明文：");
			scanf("%s", &MingWen);                    //获取输入的明文
			count = strlen(MingWen);
			for (i = 0; i < count; i++)              //遍历明文
			    //扩展 如果再a-w 或 A-W  范围内+3 否则 在 x y z 或 XYZ三个范围内 -23
				MiWen[i] = MingWen[i] + 3;           //设置加密字符
			MiWen[i] = '\0';                           //设置字符串结束标记
			/*输出密文信息*/
			printf("加密后的密文：%s\n", MiWen);
		}
		else if (flag == 2)                            //如果是解密字符串
		{
			printf("请输入要解密的密文：");
			scanf("%s", &MiWen);                       //获取输入的密文
			count = strlen(MiWen);
			for (i = 0; i < count; i++)               //遍历密文字符串
				MingWen[i] = MiWen[i] - 3;            //设置解密字符
			MingWen[i] = '\0';                          //设置字符串结束标记
			/*输出明文信息*/
			printf("解密后的明文：%s\n", MingWen);
		}
		else if (flag == 3)                             //如果是退出程序
			break;
		else
			printf("命令错误，请重新输入！\n");
		printf("################\n");
		printf("# 1、加密明文  #\n");
		printf("# 2、解密密文  #\n");
		printf("# 3、退出程序  #\n");
		printf("################\n");
		scanf("%d", &flag);                             //获取输入的命令字符
	}
	return 0;
}
