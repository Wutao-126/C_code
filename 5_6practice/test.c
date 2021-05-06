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
//	int (*p)(int ,int ) = Add;//函数指针；
//	int (*pa[4])(int, int) = { Add,Sub,Mul,Div };//函数指针数组；
//	printf("%d\n", p(a, b));
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", pa[i](a, b));//函数指针数组的调用；
//	}
//	return 0;
//}

//char* my_strcpy(char*dest,const char*src)
//{}
//char* (*pf)(char*, const char*) = my_strcpy;
//char* (*pfarr[4])(char*, const char*)=my_strcpy;



//计算器
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
//	int (*pfarr[])(int, int) = { 0,add,sub,mul,div };//函数指针数组---转移表
//	do
//	{
//		menu();
//		printf("请选择：> ");
//		scanf_s("%d", &input);
//		if(input==0)
//		{
//			printf("退出程序\n");
//			break;
//		}
//		else if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数\n");
//			scanf_s("%d%d", &x, &y);
//			printf("%d \n", pfarr[input](x, y));
//		}
//		else
//		{
//			printf("输入错误，请重新输入\n");
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

void calc(int(*p)(int,int))//接收函数地址
{
	int x, y;
	printf("请输入两个操作数\n");
	scanf_s("%d%d", &x, &y);
	printf("%d\n",p(x,y) );//通过函数地址调用函数---回调函数
}
int main()
{
	int input = 0;
	
	do
	{
		menu();
		printf("请选择：> ");
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
			printf("退出程序");
		default:
			printf("输入错误，请重试");
			break;
		}
	} while (input);
	return 0;
}
