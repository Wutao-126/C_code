#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int (*p)(int ,int ) = Add;//����ָ�룻
//	int (*pa[4])(int, int) = { Add,Sub,Mul,Div };//����ָ�����飻
//	printf("%d\n", p(a, b));
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", pa[i](a, b));//����ָ������ĵ��ã�
//	}
//	return 0;
//}

//char* my_strcpy(char*dest,const char*src)
//{}
//char* (*pf)(char*, const char*) = my_strcpy;
//char* (*pfarr[4])(char*, const char*)=my_strcpy;



//������
//
//void menu()
//{
//	printf("*************************\n");
//	printf("**   1.add    2.sub    **\n");
//	printf("**   3.mul    4.div    **\n");
//	printf("********  0.exit  *******\n");
//	printf("*************************\n");
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//
//int main()
//{
//	int input = 0;
//	int x, y;
//	int (*pfarr[])(int, int) = { 0,add,sub,mul,div };//����ָ������---ת�Ʊ�
//	do
//	{
//		menu();
//		printf("��ѡ��> ");
//		scanf_s("%d", &input);
//		if(input==0)
//		{
//			printf("�˳�����\n");
//			break;
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("����������������\n");
//			scanf_s("%d%d", &x, &y);
//			printf("%d \n", pfarr[input](x, y));
//		}
//		else
//		{
//			printf("�����������������\n");
//		}
//		
//	} 	while (input);
//	return 0;
//}


void menu()
{
	printf("*************************\n");
	printf("**   1.add    2.sub    **\n");
	printf("**   3.mul    4.div    **\n");
	printf("********  0.exit  *******\n");
	printf("*************************\n");
}
int add(int x, int y)
{
	return x + y;
}
int sub(int x, int y)
{
	return x - y;
}
int mul(int x, int y)
{
	return x * y;
}
int div(int x, int y)
{
	return x / y;
}

void calc(int(*p)(int,int))//���պ�����ַ
{
	int x, y;
	printf("����������������\n");
	scanf_s("%d%d", &x, &y);
	printf("%d\n",p(x,y) );//ͨ��������ַ���ú���---�ص�����
}
int main()
{
	int input = 0;
	
	do
	{
		menu();
		printf("��ѡ��> ");
		scanf_s("%d", &input);
		switch (input)
		{
		case 1 :
			calc(add);
			break;
		case 2:
			calc(sub);
			break; 
		case 3:
			calc(mul);
			break;
		case 4:
			calc(div);
			break;
		case 0:
			printf("�˳�����");
		default:
			printf("�������������");
			break;
		}
	} while (input);
	return 0;
}
