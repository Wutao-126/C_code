# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
//strlen的实现
//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str++ != '\0')
//	{
//		count++;
//	}
//		return count;
//}
//int my_strlen1(const char* str)
//{
//	assert(str);
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	else
//	return 1 + my_strlen1(str+1);
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	printf("%d",my_strlen1(arr));
//	return 0;
//}

//strcpy的实现
//char* my_strcpy(char* arr1, const char* arr2)
//{
//	assert(arr1);
//	assert(arr2);
//	char* ret = arr1;
//	//拷贝arr2指向的字符串到arr1指向的空间包括'\0'
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	//返回目的空间的起始地址
//	return ret;
//}
//void my_strcpy2(char* arr1, const char* arr2)
//{
//	assert(arr1);
//	assert(arr2);
//	if (*arr2)
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//		my_strcpy2(arr1, arr2);
//	}
//	else
//	   *arr1 = *arr2;
//}
//int main()
//{
//	char arr1[] = "abcdefg";
//	char arr2[] = "bit";
//	my_strcpy2(arr1,arr2);
//	printf("%s", my_strcpy(arr1,arr2));
//	return 0;
//}

//strcat的实现
char* my_strcat(char* arr1, const char* arr2)
{
	assert(arr1 && arr2);
	char* ret = arr1;
	while (*arr1 != '\0')
	{
		arr1++;
	}
	while (*arr1++ = *arr2++)
	{
		;
	}
	return ret;
}
int main()
{
	char arr1[30] = "abcdef";
	char arr2[] = "gh";
	//strcat(arr1, arr2);
	my_strcat(arr1, arr2);
	printf("%s", arr1);
	return 0;
}