# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
//int fun(int n)
//{
//	if (n > 1)
//	{
//		return n * fun(n - 1);
//	}
//	else
//		return 1;
//}
//int test(int ret)
//{
//	int count = 0;
//	if (ret > 0)
//	{
//		int a = ret % 10;
//		if (a==0)
//			count++;
//		return count + test(ret / 10);
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fun(n);
//	int count = test(ret);
//	printf("%d", count);
//	return 0;
//}



//struct S
//{
//	int n;
//	int arr[0];//柔性数组成员
//};
//int main()
//{
//	int i = 0;
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 10 * sizeof(int));
//	if (ps == NULL)
//	{
//		return 0;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		ps->arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", ps->arr[i]);
//	}
//	free(ps);
//	ps = NULL;
//	return 0;
//}
//
//
//
//struct S
//{
//	int n;
//	int* arr;
//};
//int main()
//{
//	int i = 0;
//	struct S s = { 0 };
//	s.n = 100;
//	s.arr = (struct S*)malloc(40);
//	for (i = 0; i < 10; i++)
//	{
//		s.arr[i] = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", s.arr[i]);
//	}
//	free(s.arr);
//	s.arr = NULL;
//	return 0;
//}

int main()
{
	int a = 0, b = 1;
	for (a = b = 0;;)
	{
		printf("%d %d", a, b);
		break;

	}
		
	return 0;
}