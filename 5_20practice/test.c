# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<assert.h>



//int main()
//{
//	char arr[] = "1260569390@qq.com";
//	char* p = "@.";
//	printf("%s\n", strtok(arr, p));
//	printf("%s\n", strtok(NULL, p));
//	printf("%s\n", strtok(NULL, p));
//
//	return 0;
//}

//strtok:字符串分割
//int main()
//{
//	char arr[] = "1260569390@qq.com";
//	char* p = "@.";
//	char arr1[100] = { 0 };
//	strcpy(arr1, arr);
//	char* ret = NULL;
//	for (ret = strtok(arr1, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}



//int main()
//{
//	char* str = strerror(3);
//	printf("%s", str);
//	return 0;
//}



//字符分类和字符转换函数
//int main()
//{
//	char arr[] = "I am A sTudenT";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		else
//		{
//			arr[i] = toupper(arr[i]);
//		}
//		i ++ ;
//	}
//	printf("%s", arr);
//	return 0;
//}




//struct stu
//{
//	char name[10];
//	int age;
//};
//memcpy
//void* my_memcpy(void*dest,const void*src,size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;//如果后置++，dest会先和++结合，导致空类型++，错误
//		++(char*)src;
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6 };
//	int arr2[10] = { 0 };
//	struct stu arr3[] = { {"zhangsan",20},{"lisi",18} };
//	struct stu arr4[3] = { 0 };
//	my_memcpy(arr2, arr, sizeof(arr));
//	my_memcpy(arr4, arr3, sizeof(arr3));
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

//如果需要将一个数组里面的一些元素拷贝到这个数组的其他位置（重叠内存拷贝）
//则我们需要使用memmove函数(在Vs编译器上memcpy也能实现重叠内存拷贝，即VS中memcpy=memmove)


void* my_memmove(void* dest, const void* src,size_t num)
{
	void* ret = dest;
	if ((char*)src + num >= (char*)dest&&(char*)src>(char*)dest+num)
	{
		while (num--)
		{
			*((char*)dest+num) = *((char*)src+num);
			--* (char*)dest;
			++* (char*)src;
		}
	}
	else
	{
		while (num--)
			{
				*(char*)dest = *(char*)src;
				++(char*)dest;
				++(char*)src;
			}
	}
	return ret;
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	my_memmove(arr+6 , arr+3, 16);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//
//int main()
//{
//	int arr[] = { 1,2,3 };
//	if (arr < arr + 2)
//		printf("0");
//	return 0;
//
//}


//int main()
//{
//	int arr[10] = { 5,7,9,13,15 };
//	int n = 0;
//	scanf("%d", &n);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	arr[sz-1] = n;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz-1- i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for(i = 0; i < sz; i++)
//	{
//		if (arr[i] == 0)
//			continue;
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}