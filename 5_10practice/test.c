# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	char arr[100] = {0};
//	gets(arr);
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		if (arr[i] == '\0')
//			break;
//	}
//	printf("%d", i);
//	return 0;
//
//}
//
//int main()
//{
//	int a[10] = { 1,2,3,4,5 };
//	int* ptr = &a;
//	printf("%d ", *ptr);
//	return 0;
//}
//
//struct stu
//{
//	char id[10];
//	int d;
//	int c;
//};
//int test(struct stu* s,int n,int l,int h)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (((s->d) >= l) && ((s->c) >= l))
//			count++;
//		s++;
//	}
//	return count;
//}
//
//int main()
//{
//	struct stu s[100];
//	int n = 0, l = 0, h = 0;
//	scanf("%d%d%d", &n, &l, &h);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%s%d%d",s->id , &(s->d), &(s->c));
//	}
//	int count = test1(s,n,l,h);
//	return 0;
//}

//int fun(int x, int y)
//{
//	int sum = 0;
//	int Y = y;
//	while (x)
//	{
//		if (x % 10 == y)
//		{
//			sum += Y;
//			Y *= 10;
//		}
//		x /= 10;
//	}
//	return sum;
//}
//int fun(int x, int y,int Y)
//{
//	//ตÝน้
//	if (x > 0)
//	{
//		if (x % 10 == y)
//		{
//			x /= 10;
//			Y *= 10;
//			return Y / 10 + fun(x, y, Y);
//
//		}
//		else
//		{
//			x /= 10;
//			return 0 + fun(x, y, Y);
//		}
//	}
//	else
//		return 0;
//	
//}
//int main()
//{
//	int A = 0, a = 0;
//	int B = 0, b = 0;
//	scanf("%d%d%d%d", &A, &a, &B, &b);
//	int ret = fun(A,a,a);
//	int ret1 = fun(B, b,b);
//	printf("%d", ret1 + ret);
//	return 0;
//
//}

#include<math.h>
int is_prime(int x)
{
	int y, z = 0;
	for (y = 2; y <=sqrt(x); y++)
	{
		if (x % y == 0)
			return 0;
	}
		return 1;
}
int main()
{
	int i = 0;
	int N = 0;
	int count = 0;
	scanf("%d", &N);
	for (i = 2; i <= N - 2; i++)
	{
		int j = is_prime(i);
		int k = is_prime(i + 2);
		if (j == 1 && k == 1)
			count++;
	}
	printf("%d", count);
	return 0;
}