//调试代码
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[11] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	
//	/*for (i = 0; i < 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}*/
//	printf("%p\n", &arr[12]);
//	printf("%p", &i);
//	system("pause");
//	return 0;
//}

//模拟strcpy

//void my_strcpy(char* arr1, char* arr2)
//{
//
//	while ((*arr2) != '\0')
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1 = *arr2;//'\0'
//
//}
//#include<string.h>
//void my_strcpy(char* arr1, char* arr2)//优化
//{
//	if ((arr1 != NULL) &&( arr2 != NULL))
//	{
//		while (*arr1++ = *arr2++)
//		{
//			;
//		}
//
//	}
//	
//
//}
//#include<string.h>//再次优化
//#include<assert.h>
//char* my_strcpy(char* arr1, const char* arr2)//优化
//{
//	char* ret = arr1;
//	assert(arr1!=NULL);//断言:如果表达式为真不报错，表达式为假就会报错
//	assert(arr2 != NULL);
// //把arr2指向的字符串拷贝到arr1指向的空间，包含'\0'字符
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;
//}
//#include<stdio.h>
////#include<string.h>
//int main()
//{
//	char arr1[20] = "#############";
//	char arr2[20] = "LOVE";
//	//strcpy(arr1, arr2);
//	//printf("%s  %s",arr1,  arr2);
//	printf("%s\n", my_strcpy(arr1, arr2) );
//	printf("%s", arr2);
//	return 0;
//}


//double fun(double n)//计算1+1/2+...+1/n
//{
//	if (n > 1)
//	{
//		return 1 / n + fun(n - 1);
//	}
//	return 1;
//}
//#include<stdio.h>
//int main()
//{
//	double n = 0;
//	agin:
//	scanf_s("%lf", &n);
//	if (n <= 0)
//	{
//		printf("请输入正确的数字\n");
//			goto agin;
//	}
//	double ret = fun(n);
//	printf("%lf", ret);
//	return 0;
//}

#include<assert.h>
int my_strlen(const char* str)//实现strlen函数
{
	assert(str != NULL);//保证指针的有效性
	int count = 0;
	while (*str++!= '\0')
	{
		count++;
	}
	return count;
}
#include<stdio.h>
int main()
{
	char arr[] = "abcdef";
	printf("%d\n", my_strlen(arr));
	return 0;
}