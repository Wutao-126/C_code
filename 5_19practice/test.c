# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>

////my_strncpy的实现
//char*my_strncpy(char* str1, const char* str2, int n)
//{
//	assert(str1 && str2);
//	char* ret = str1;
//	while (n&&(* str1++ = *str2++))
//	{
//		n--;
//	}
//	if (n)
//		while (--n)
//			*str1++ = '\0';
//	return ret;
//}
//
//char* my_strncat(char* str1, const char* str2, int n)
//{
//	assert(str1 && str2);
//	char* ret = str1;
//	while (*str1++)
//	{
//		;
//	}
//	str1--;
//	while (n&&(* str1++ = *str2++))
//	{
//		n--;
//	}
//	*str1 = '\0';
//	return ret;
//}
//
//int my_strncmp(const char* str1, const char* str2,int n)
//{
//	while (n)
//	{
//		if (*str1 > *str2)
//			return 1;
//		else if (*str1 < *str2)
//			return -1;
//		str1++;
//		str2++;
//		n--;
//	}
//	return 0;
//}
////int main()
////{
////	char arr1[20] = "abcde\0fgkjuh";
////	char arr2[] =   "abcdeasdf";
////	/*strncpy(arr1, arr2, 10);*/
////	/*strncat(arr1, arr2, 10);*/
////	//printf("%s", my_strncpy(arr1, arr2, 8));
////	/*printf("%s", arr1);*/
////	/*printf("%s", my_strncat(arr1, arr2, 3));*/
////	printf("%d ",my_strncmp(arr1, arr2, 7));
////	/*printf("%d", strlen(arr1) - strlen(arr2));*/
////	return 0;
////}
//
////strstr的实现
//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	char* s1=NULL;
//	char* s2 = NULL;
//	char* cur = (char*)str1;
//	if (*str2 == '\0')
//		return (char*)str1;
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)str2;
//		while (*s1&&*s2&&(*s1 == *s2))
//		{
//			s1++;
//			s2++;
//			
//		}
//		if (*s2 == '\0')
//			return cur;
//		if (*str1 == '\0')
//			return NULL;
//		cur++;
//	}
//	return NULL;
//	
//}
//int main()
//{
//	const char* p1 = "abbbcdef";
//	const char* p2 = "bbc";
//	char*ret= my_strstr(p1, p2);
//	if (ret == NULL)
//		printf("不存在");
//	else
//		printf("存在\n%s", ret);
//	return 0;
//}

//C语言标准输入语句中出现的常规字符。包括标点符号空格都需要原样输入，此题如果只输入数字，将出现乱码
int main()
{
	int a = 0;
	float b = 0.0;
	//scanf("a=%d,b=%f", &a, &b);
	//scanf("%f", &b);
	printf("%d  %f", a, b);
	return 0;
}