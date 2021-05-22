# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//
//int char_cmp(const char* str1, const char* str2)
//{
//    while (*str1== *str2)
//    {
//        if (str1 == '\0')
//            return 0;
//       str1++;
//       str2++;
//    }
//    return (*str1 - *str2);
//}
//void _swap(char* p1, char* p2, int width)
//{
//    int i = 0;
//    for (i = 0; i < width; i++)
//    {
//        char tmp = *p1;
//        *p1 = *p2;
//        *p2 = tmp;
//        p1++;
//        p2++;
//    }
//}
//void bubble(void* base, int count, int width/*, int(*cmp)(const void* p1, const void* p2)*/)
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < count - 1; i++)
//    {
//        for (j = 0; j < count - i - 1; j++)
//        {
//            if (strcmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
//            {
//                _swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
//            }
//        }
//    }
//}
//int main()
//{
//    //int arr[] = { 1, 3, 5, 7, 9, 2, 4, 6, 8, 0 };
//    char* arr[] = { "aaaa","dddd","cccc","bbbb" };
//    int i = 0;
//    bubble(arr, sizeof(arr) / sizeof(arr[0]), sizeof(arr[0])/*, char_cmp*/);
//    for (i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
//    {
//        printf("%s ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}
// 
// 
//#include<stddef.h>
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//int main()
//{
//	printf("%d\n", offsetof(struct S ,c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}


//
//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S* ps)
//{
//	ps->a = 100;
//	ps->c = 'w'; 
//	ps->d = 3.14;
//}
//void Print(struct S tmp)
//{
//	printf("%d\n%c\n%lf\n", tmp.a, tmp.c, tmp.d);
//}
//void Print2(const struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//int main()
//{
//	struct S s = {0};
//	Init(&s);
//	//Print(s);
//	Print2(&s);
//	return 0;
//}



//struct S
//{
//	int a : 1;
//	int b : 2;
//	int c : 30;
//	int d : 4;
//};
//int main()
//{
//	printf("%d", sizeof(struct S));
//	return 0;
//}


char fun(void)
{
	return ;
}
int main()
{
	printf("%c", fun());
	return 0;
}