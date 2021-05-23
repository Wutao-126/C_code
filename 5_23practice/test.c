# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//枚举类型
//enum Sex
//{
//	//
//	MALE,//0
//	FEMALE,//1
//	SECRET//2
//};
//
//enum Color
//{
//	RED=4,
//	YELLOW=5,
//	BLUE=6
//};
//int main()
//{
//	enum Sex s = MALE;
//	enum Color c = RED;//只能给枚举变量赋值枚举常量
//	return 0;
//}



//union Un
//{
//	char c;
//	int i;
//};
//int main()
//{
//	union Un u;
//	printf("%d", sizeof(u));
//	return 0;
//}


//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 0)
//		printf("大端");
//	else
//		printf("小端\n");
//	printf("%d", *p);
//	return 0;
//}



//int check_sys(void)
//{
//	union un
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	return u.c;
//}
//int main()
//{
//	int ret = check_sys();
//	if (ret == 1)
//		printf("小端");
//	else
//		printf("大端");
//	return 0;
//}

union
{
	int i;
	char a[2];
}*p, u;
int main()
{
	p = &u;
	p->a[0] = 0x39;
	p->a[1] = 0x38;
	printf("%d", p->i);
}
//0011 1000 0011 1001