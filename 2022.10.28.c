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
//	printf("�������������");
//	char password[20] = { 0 };
//	
//	scanf("%s", password);
//	printf("�����������Ϊ%s", password);
//	while ((duqu = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ���������(y/n)");
//	decision = getchar();
//	if (decision == 'y')
//	{
//		printf("����ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("����ȷ��");
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
//	printf("�������������");
//	scanf("%s", password);
//	while ((x = getchar() != '\n'))
//	{
//		;
//	}
//	/*�����while ѭ����Ϊ���������뻺�������'\n'*/
//	printf("��ȷ����������(y/n)");
//	if ((ch = getchar) == 'y')
//		printf("����ȷ�ϳɹ�");
//	return 0;
//}


//int main()
//{
//	int x = 0;
//	int result = 0;
//	printf("�������������");
//	char password = scanf("%s", &password);
//	/*��������*/
//	/*������Ϊ�˰����뻺������ġ�\n'��ȥ��*/
//	while ((x = getchar()) != '\n')
//	{
//		;
//	}
//	printf("��ȷ��������������루Y/N��");
//	 result = getchar();
//		/*�����ַ�*/
//	if (result == "Y")
//		printf("ȷ������ɹ�");
//	else
//		printf("����ȷ��ʧ��");
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

