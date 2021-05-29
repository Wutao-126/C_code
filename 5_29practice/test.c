# define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//
//#define X 3
//#define Y X*2
//#undef X
//#define X 2
//
//
//int main()
//{
//	int z = Y;//undef后 原X的值已不能使用
//	printf("%d", z);
//	return 0;
//}

//int main()
//{
//	char a[5] = { 'A','B','C','D' };
//	char(*p3)[5] = &a;
//	char(*p4)[5] = a;
//	printf("%p\n%p", p4, p4 + 1);
//	return 0;
//}


//int main()
//{
//	char a[5] = { 'A','B','C','D' };
//	char(*p3)[10] = &a;
//	char(*p4)[10] = a;
//	printf("%p\n%p", p4, p4 + 1);
//	return 0;
//}

//#include<assert.h>
//char* my_strcpy(char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	char* ret = str1;
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	return ret;
//
//}
//int main()
//{
//	char arr1[10] = { 0 };
//	char arr2[] = "abcd";
//	printf("%s", my_strcpy(arr1, arr2));
//	return 0;
//}



//void move(int(*p)[3])
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = i; j < 3; j++)
//		{
//			int tmp = p[i][j];
//			p[i][j] = p[j][i];
//			p[j][i] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[3][3] = { 0 };
//	
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	move(arr);
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("%d", arr[i][2]);
//		printf("\n");
//	}
//	return 0;
//}


//
//void max_min(int* arr,int n)
//{
//	int max = *arr;
//	int min = *arr;
//	int i = 0;
//	for (i = 1; i < n; i++)
//	{
//		if (max < *(arr + i))
//			max = *(arr + i);
//		if (min > *(arr + i))
//			min = *(arr + i);
//	}
//	printf("max = %d\n", max);
//	printf("min = %d", min);
//}
//int main()
//{
//	int n = 0;
//	int arr[10];
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max_min(arr,n);
//	return 0;
//}


//int fun(int* p)
//{
//	int i = 0;
//	int max = *p;
//	int min = *p;
//	for (i = 1; i < 10; i++)
//	{
//		if (max < *(p + i))
//			max = *(p + i);
//		if (min > *(p + i))
//			min = *(p + i);
//	}
//	return max - min;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int ret = fun(arr);
//	printf("%d", ret);
//	return 0;
//}


//#include<assert.h>
//char* my_strcat(char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	char* ret = str1;
//	while (*str1++)
//	{
//		;
//	}
//	str1--;
//	while (*str1++ = *str2++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr1[40] = { 0 };
//	char arr2[40] = { 0 };
//	gets(arr1);
//	gets(arr2);
//	printf("%s", my_strcat(arr1, arr2));
//	return 0;
//}



void sort(float* arr,int n)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < n - i - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				float tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}
int main()
{
	int n = 0;
	int i = 0;
	float arr[10] = { 0.0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%f", &arr[i]);
	}
	sort(arr,n);
	for (i = 0; i < n-1; i++)
	{
		printf("%.2f ", arr[i]);
	}
	printf("%.2f", arr[n-1]);
	return 0;
}