# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
//#define a int[10]
//int main()
//{
//	//a[10] a[10];
//	 //a[10] a;
//	//int a[10];
//	//int a;
//	//a b[10];
//	 //a b;
//	//a* b[10];
//	//a* b;
//	printf("/*这是*/#/*一条*/define/*合法的*/ID/*预处理*/replacement/*指*/list/*令*/");
//	//这是一条合法的\
//	这是一条合法的单行注释\
//	k
//	return 0;
//}


//int main()
//{
//	 //向内存申请10个整形空间；
//	int *p=(int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//打印错误原因
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p+i));
//		}
//	}
//	//当动态申请的空间不再使用的时候，应该还给操作系统
//	free(p);
//	p = NULL;
//	return 0;
//
//}


//int main()
//{
//	//calloc：将数组每个元素初始化为0，参数为（数组元素个数，每个元素大小（字节））
//	int* p = (int*)calloc(10, sizeof(int));
//	
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p +i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//假设这里20字节不能满足使用
//	//希望我们能够有40和字节的空间
//	//这里就可以使用realloc来调整动态开辟内存
//	//
//	//realloc使用的注意事项：
//	//1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//	//2.如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的
//	//内存区域开辟一块满足需求的空间，并且把原来内存中的数据拷贝回来，释放旧的内存空间
//	//最后返回新开辟内存空间的地址
//	//3.得用一个新的变量来接收realloc函数的返回值
//
//	int*ptr = (int*)realloc(p, 40);
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放空间
//	free(p);
//	p = NULL;
//	return 0;
//}
//
//
//int main()
//{
//	int *p= (int*)malloc(40);
//	if (p == NULL)
//	{
//		//一定要判断内存是否开辟成功
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)//一定注意动态内存访问不能越界
//		{
//			*(p + i) = i;
//		}
//
//	}
//	//内存一定要释放，且不能对非动态开辟内存的空间进行释放
//	free(p);
//	p = NULL;
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[100] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = 0;
//	int min = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[max] < arr[i])
//			max = i;
//		if (arr[min]>= arr[i])
//			min = i;
//	}
//	arr[max] = 0;
//	arr[min] = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum += arr[i];
//	}
//	printf("%d\n",sum / (n - 2));
//	return 0;
//
//}


int main()
{
	/*int i = 3;
	int x = (++i, i++, i + 10);
	printf("%d  %d", x, i);*/
	//int j = (i++, i++, i++);
	//int k = (i++) + (i++) + (i++);
	//printf("j=%d i=%d  k=%d", j,i,k);
	int a = 0;
	printf("%d", 2 % (-2));
	return 0;
}