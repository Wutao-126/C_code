# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


//char* getmemory(void)
//{
//	//char p[] = "hello world";//erro  栈区
//	static char p[] = "hello world";//静态区
//	char* p = (char*)malloc(100);//堆区
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = getmemory();
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}




//struct S
//{
//	int n;
//	int arr[0];//柔性数组成员-数组的大小是可以调整的
//};
//
//int main()
//{
//	//struct S s;
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5*sizeof(int));
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		ps->arr[i] = i;
//	} 
//	struct S*ptr = realloc(ps,44);
//	if (ptr != NULL)
//		{
//			ps = ptr;
//		}
//		for (i = 5; i < 10; i++)
//		{
//			ps->arr[i] = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", ps->arr[i]);
//		}
//	free(ps);
//	ps = NULL;
//	return 0;
//}


int main()
{
	char arr1[] = "a";
	char arr2[] = { 'a','b','c','d','e','f','g' };
	printf("%d\n%d", strlen(arr1), strlen(arr2));
	//printf("%d\n%d", sizeof(arr1), sizeof(arr2));
	return 0;
}