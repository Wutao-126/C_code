# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	char str[] = "I love FishC.com!";
//	int count = 0;
//	int i = 0;
//	//char* p = str;
//	while (*(str+i) != '\0')
//	{
//		count++;
//		i++;
//	}
//	printf("%d", count);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int sum = 0;
//	scanf("%d", &a);
//	while (a > 0)
//	{
//		if (a % 2 == 1)
//			sum += a;
//		scanf("%d", &a);
//	}
//	printf("%d", sum);
//	return 0;
//}
//
//int main()
//{
//	int a[4] = { 1,2,3,4 };
//	int* ptr1 = (int*)(&a + 1);
//	int* ptr2 = (int*)((int)a + 1);
//	printf("%x,%x", ptr1[-1], *ptr2);
//	return 0;
//}
//
//int main()
//{
//	int a[3][2] = { (0,1),(2,3),(4,5) };
//	int* p;
//	p = a[0];
//	printf("%d", p[0]);
//	return 0;
//}

//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	if (add(a, b) == 30)
//		printf("0");
//	else
//		printf("21");
//	return 0;
//}
// 
 
int test2(int x)
{
	while (x)
	{
		if (x % 10 == 9)
			return 1;
		else
			x /= 10;
	}
	return 0;
}

int test3(int x)
{
	while (x)
	{
		if (x % 10 == 7)
			return 0;
		x /= 10;
	}
	return 1;
}
int test(int x)
{
	if ((x % 9 == 0 || test2(x) == 1) && (x % 7 != 0) && (test3(x) == 1))
	{
		return 1;
	}
	else
		return 0;
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr1[1000] = { 0 }, arr2[1000] = { 0 };
	int i = 0;
	for (i = 0; i < n; i++)
	{
		arr1[i] = i + 1;
		arr2[i] = i + 1;
	}
	int count = 0;
	int m = n;
	for (i = 0;; i++)
	{
		if (i + 1 == n+1)
			i = 0;
		if (arr1[i] == 0)
			continue;
		else if (test(arr1[i]) == 1)
		{
			printf("%d ", arr2[i]);
			arr1[i] = 0;
			count++;
			m--;
			if (count == n)
				break;
		}
		else
			arr1[i] += m;
	}
	return 0;
}