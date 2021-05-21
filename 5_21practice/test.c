# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>



//int main()
//{
//	int i = 0;
//	int* p = NULL;
//	printf("%d", sizeof(*p));
//	//printf("%d ", sizeof i);
//	return 0;
//}

//void fun(int arr1[100])
//{
//	printf("%d", sizeof(arr1));
//} 
//int main()
//{
//	int arr[100] = { 1,2,3,4,5,6,7 };
//	fun(arr);
//	return 0;
//}


//int main()
//{
//	unsigned int i = 0;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}

//memmove的实现
//void* my_memmove(void* dest, const void* src, size_t num)
//{
//	assert(dest && src);
//	void* ret = dest;
//	if (src  <dest &&(char*)src+num>=(char*)dest)
//	{
//		while (num--)
//		{
//            //从后向前拷
//			*((char*)dest + num) = *((char*)src + num);
//		}
//	}
//	else
//	{
//		while (num--)
//		{
//			//从前向后拷
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	memmove(arr , arr+2, 16);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


//int my_memcmp(const void* str1, const void* str2, size_t num)
//{
//	int i = 0;
//	while (i < num && (*((char*)str1 + i) == *((char*)str2 + i)))
//	{
//		i++;
//	}
//	if (i == num)
//		return 0;
//	if (*((char*)str1 + i) > *((char*)str2 + i))
//		return 1;
//	else
//		return -1;
//}
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	printf("%d", my_memcmp(arr1, arr2, 12));
//	/*printf("%d", memcmp(arr1, arr2, 8));*/
//	return 0;
//}
//
////memset  -  内存设置
//int main()
//{
//	char arr[11] = "";
//	memset(arr, '#', 10);
//	printf("%s", arr);
//	int arr1[10] = { 0 };
//	memset(arr1, 1, 40);
//	return 0;
//}



//void printN(int N)
//{
//	if (N >=1 )
//	{
//		
//		printN(N-=1);
//		printf("%d\n", N+1);
//		
//	}
//}
//int main()
//{
//	printN(8);
//	return 0;
//}



//int even(int n)
//{
//	if (n % 2 == 0)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d", even(n));
//	return 0;
//}


//double calc_pow(double x, int n)
//{
//	if (n)
//	{
//		return x * calc_pow(x, --n);
//	}
//	else
//		return 1;
//}
//int main()
//{
//	double x;
//	int n;
//	scanf("%lf%d", &x, &n);
//	printf("%.0f\n", calc_pow(x, n));
//	return 0;
//}


//int gcd(int x, int y)
//{
//	if (x > y)
//	{
//		int tmp = x;
//		x = y;
//		y = tmp;
//	}
//	while (y % x)
//	{
//		int r = y % x;
//		y = x;
//		x = r;
//	}
//	return x;
//}
//int main()
//{
//	int x, y;
//	scanf("%d%d", &x, &y);
//	printf("%d\n", gcd(x, y));
//	return 0;
//}


//int FindArrayMax(int a[], int n)
//{
//	int max = 0;
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (a[i] > a[max])
//			max = i;
//	}
//	return a[max];
//}


//void bubble_sort(int arr[])
//{
//	int i = 0;
//	for (i = 0; i < 9; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 8; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//void swap(int arr[])
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] != 0)
//		{
//			int tmp = arr[i];
//			arr[i] = arr[0];
//			arr[0] = tmp;
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	bubble_sort(arr);
//	if (arr[0] == 0)
//		swap(arr);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d", arr[i]);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int i, a[10];
//    for (i = 0; i < 10; i++)
//        scanf("%d", &a[i]);
//    for (i = 1; i < 10; i++)
//        if (a[i])
//        {
//            printf("%d", i);
//            a[i]--;
//            break;
//        }
//    for (i = 0; i < 10; i++)
//    {
//        if (a[i])
//        {
//            printf("%d", i);
//            a[i]--; i--;
//        }
//    }
//    return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 1; i < 10; i++)
//		if (arr[i])
//		{
//			printf("%d", i);
//			arr[i]--;
//			break;
//		}
//	for (i = 0; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 0; j < arr[i]; j++)
//		{
//			if (arr[i])
//			{
//				printf("%d", i);
//			}
//		}
//	}
//	return 0;
//}


//
//声明一个结构体类型,是想通过学生类型来创建学生变量（对象）
//描述学生属性：名字，电话，性别，年龄
//struct stu
//{
//	//成员变量
//	char name[10];//名字
//	char tele[12];//电话
//	char sex[10];//性别
//	int age;//年龄
//}s4,s5,s6;//全局结构体变量
//
//struct stu s3;//全局结构体变量
//
//int main()
//{
//	//创建局部结构体变量
//	struct stu s1;
//	struct stu s2;
//	printf("%d", sizeof(s1));
//	return 0;
//}

//
//typedef struct Node
//{
//	int date;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	struct s1;
//	Node s2;
//	return 0;
//}


//struct T
//{
//	double weight;
//	short age;
//};
//
//struct S
//{
//	char c;
//	struct T st;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	//结构体变量的初始化
//	struct S s = { 'c',{55.6,30},100,3.14,"hello" };//嵌套初始化
//	printf("%lf", s.st.weight);
//	return 0;
//}

struct S1
{
	char c1;
	int a;
	char c2;
};
struct S2
{
	char c1;
	char c2;
	int a;
};
int main()
{
	struct S1 s1 = { 0 };
	struct S2 s2 = { 0 };
	printf("%d\n", sizeof(s1));//12
	printf("%d\n", sizeof(s2));//8
	return 0;
}