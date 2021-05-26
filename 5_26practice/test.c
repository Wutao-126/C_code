# define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	/*int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int* p2 = realloc(p, 80);
//	if (p2 != NULL)
//	{
//		p = p2;
//	}*/
//	int* p = (int*)realloc(NULL, 40);// =malloc(40)
//	return 0;
//}


//int main()
//{
//	//1.对NULL指针解引用操作
//	int* p = (int*)malloc(40);
//	*p = 10;//malloc开辟空间失败-对NULL指针解引用
//	return 0;
//}


//int main()
//{
//	int* p = (int*)malloc(40);
//	if (p = NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*p++ = i;
//		}
//		free(p);
//		p = NULL;
//		
//	}
//	return 0;
//}


void getmemory(char** p)
{
	*p = (char*)malloc(100);
}
void Test(void)
{
	char* str = NULL;
	getmemory(&str);
	strcpy(str, "hello,world");
	printf(str);
	free(str);
	str = NULL;
}
int main()
{ 
	Test();
	return 0;
}


//char* test(char* p)
//{
//	p++;
//	return p;
//}
//int main()
//{
//	char str[] = "abcd";
//	char*ret=test(str);
//	printf(ret);
//	return 0;
//}