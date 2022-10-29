#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		if (5 == i)
			continue;
		printf("%d\n", i);
	}
	return 0;
}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		else
//			putchar(ch);
//
//	}
//	return 0;
//}


//int main()
//{
//	int decision = 0;
//	int duqu = 0;
//	printf("请输入你的密码");
//	char password[20] = { 0 };
//	
//	scanf("%s", password);
//	printf("你输入的密码为%s", password);
//	while ((duqu = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认你的密码(y/n)");
//	decision = getchar();
//	if (decision == 'y')
//	{
//		printf("密码确认成功");
//	}
//	else
//	{
//		printf("放弃确认");
//
//	}
//	 
//	
//	return 0;
//}
//

//int main()
//{
//	int ch = 0;
//	int x = 0;
//	char password[20] = { 0 };
//	printf("请输入你的密码");
//	scanf("%s", password);
//	while ((x = getchar() != '\n'))
//	{
//		;
//	}
//	/*这里的while 循环是为了消除输入缓冲区里的'\n'*/
//	printf("请确认密码输入(y/n)");
//	if ((ch = getchar) == 'y')
//		printf("密码确认成功");
//	return 0;
//}


//int main()
//{
//	int x = 0;
//	int result = 0;
//	printf("请输入你的密码");
//	char password = scanf("%s", &password);
//	/*输入密码*/
//	/*这里是为了把输入缓冲区里的‘\n'给去掉*/
//	while ((x = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请确认是你输入的密码（Y/N）");
//	 result = getchar();
//		/*接受字符*/
//	if (result == "Y")
//		printf("确认密码成功");
//	else
//		printf("密码确认失败");
//
//	return 0;
//}

//int main()
//{
//	int x = 0;
//	x = getchar();
//	printf(x);
//	return 0;
//}

