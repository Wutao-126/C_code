# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

//void left(char* str, int n)//暴力求解法
//{
//	assert(str);
//	int len = strlen(str);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		char tmp = *str;
//		int j = 0;
//		for (j = 0; j < len-1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		*(str + len - 1) = tmp;  
//	}
//}
//
//void right(char* str, int n)
//{
//	assert(str);
//	int len = strlen(str);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		char tmp = *(str + len - 1);
//		int j = 0;
//		for (j = len - 1; j >= 0; j--)
//		{
//			*(str + j) = *(str + j - 1);
//		}
//		*str = tmp;
//	}
//}

//三步翻转法
//void reverse(char* left, char*right)
//{
//	assert(left);
//	assert(right);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++; 
//		right--;
//	}
//}
//void fun(char* str, int n)
//{
//	assert(str);
//	int len = strlen(str);
//	n = n % len;
//	reverse(str, str + n - 1);
//	reverse(str + n, str + len - 1);
//	reverse(str, str + len - 1);
//	
//}
//int main()
//{
//	char arr[10] = "ABCDEF";
//	int n = 0;
//	scanf("%d", &n);
//	/*left(arr,n);*/
//	/*printf("%s\n", arr);
//	right(arr, n);
//	printf("%s", arr);*/
//	fun(arr, n);
//	printf("%s", arr);
//
//	return 0;
//}


//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void fun(char* str, int n)
//{
//	assert(str);
//	int len = strlen(str);
//	n = n % len;
//	reverse(str, str + n - 1);
//	reverse(str + n, str + len - 1);
//	reverse(str, str + len - 1);
//
//}
//
//int is_left_move(char*s1,char*s2)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		fun(s1, 1);
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}

//is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 == len2)
//	{
//		strncat(str1, str1, len1);//在str1后面追加一个str1字符串
//		//strstr()找子串函数；
//		char* ret = strstr(str1, str2);
//		if (ret == NULL)
//			return 0;
//		else
//			return 1;
//	}
//	else
//		return 0;
//	
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1,arr2);
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}

//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,7,8,9,10},{3,12,13,14,15} };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		if ( n <= arr[i][4])
//		{
//			for (j = 0; j < 5; j++)
//			{
//				if (n == arr[i][j])
//					printf("row = %d,line = %d\n", i, j);
//			}
//		}
//	}
//	return 0;
//}


//int fun(int arr[3][3], int k, int cow, int col)
//{
//	int x = 0; 
//	int y = col - 1;
//	int flag = 0;
//	while (x<cow&&y>=0)
//	{
//		if (arr[x][y] > k)
//			y--;
//		else if (arr[x][y] < k)
//			x++;
//		else
//		{
//			return 1;
//		}
//	}	
//	return 0;
//}


int fun(int arr[3][3], int k, int* px, int* py)
{
	int x = 0;
	int y = *py - 1;
	int flag = 0;
	while (x < *px && y >= 0)
	{
		if (arr[x][y] > k)
			y--;
		else if (arr[x][y] < k)
			x++;
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[3][3] = { {1,2,3},{3,4,5},{4,5,6} };
	int k = 3;
	int x = 3;
	int y = 3;
	int ret = fun(arr, k, &x, &y);
	if (ret == 1)
		printf("找到了下标是:%d %d\n",x,y);
	else
		printf("找不到");
	return 0;
}