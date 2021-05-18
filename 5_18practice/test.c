# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
//int fun()
//{
//	char* p = "abcd";
//	return p == "abcd";
//}
//int main()
//{
//	printf("%d", fun());
//	return 0;
//} 

//strcmp的实现
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	while (*str1 == *str2 )
//	{
//		if (*str1 == '\0')
//			return 0;
//			str1++;
//			str2++;
//	}
//	/*if (*str1 > *str2)//vs
//		return 1;
//	else 
//		return -1;*/
//	return (*str1 - *str2);//gcc
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdez";
//	
//	printf("%d", my_strcmp(arr1, arr2));
//	/*printf("%d",strcmp(p1, p2));*/
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &m, &n);
//	int i = 0;
//	for (i = m; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//			printf("%d ", i);
//			
//	}
//	return 0;
//}


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int a = 0;
//	int i = 0;
//	for (i = 1; i <= n; i++)//15   1~15;    1 2   15;
//	{
//		if (n % i != 0)    //    7                                  1  7;  2 3  4 5 6
//			a++;
//	}                      //     6      1 6 2 3  4 5 
//	if (a == n - 2)
//		printf("是素数");
//	else
//		printf("不是素数\n");
//
//	printf("%d   ", a);
//	return 0;
//}