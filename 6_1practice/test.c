# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



//int main()
//{
//	char arr[] = "abcdef";
//	char* p = arr;
//	printf("%d\n%d", sizeof(arr), sizeof(p));
//	return 0;
//}

//extern Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = Add(a, b);
//	printf("%d\n", c);
//	return 0;
//}


//int f(int a, int b, int c)
//{
//    return 0;
//}
//int main() {
//    return  f(printf("a"), printf("b"), printf("c"));
//}



//union Test
//{
//	char a[4];
//	short b;
//};
//
//int main()
//{
//	union Test test;
//	test.a[0] = 256;
//	test.a[1] = 255;
//	test.a[2] = 254;
//	test.a[3] = 253;
//	printf("%d\n", test.b);
//	return 0;
//}


//void fun(int n)
//{
//	if (n > 9)
//	{
//		fun(n / 10);
//	}
//		printf("%d", n % 10);
//	
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	fun(n);
//	return 0;
//}


//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d%d", &a, &b);
//    int c = (a + b) % 10 + ((a + b)/10 % 10) * 10;
//    printf("%d", c);
//    return 0;
//}



int main()
{
    float f = 0;
    scanf("%f", &f);
    int a = (int)f;
    printf("%d", a % 10);
    return 0;
}