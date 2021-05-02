//#include<stdio.h>
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%u\n",  i+j);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	unsigned int i;//i不为负
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);//死循环
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[1000];//char的范围-128到127，则char一共可以存255个字符；
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));//当遇到0时停止
//
//	 char b = -129;
//	printf("%d", b);
//	return 0;
//}

#include<stdio.h>
unsigned char i = 0;
int main()
{
	for (i = 0; i <= 255; i++)//unsigned char 介于0-255之间 ，条件恒成立，死循环；
	{
		printf("Hello World!\n");
	}
	return 0;
}