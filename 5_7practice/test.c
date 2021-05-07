#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int arr[100] = { 0 };
//	int i = 0;
//	int j = 0;
//	int arr1[100] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf_s("%d", &arr[i]);
//		arr1[i] = arr[i];
//	}
//	for (i = 0; i < n; i++)
//	{
//		
//		while (arr[i] != 1)
//		{
//			if (arr[i] % 2 != 0)
//			{
//				arr[i] = (3 * arr[i] + 1) / 2;
//				for (j = 0; j < n; j++)
//				{
//					if (arr1[j] == arr[i])
//					{
//						arr1[j] = 0;
//						break;
//					}
//				}
//			}
//			if (arr[i] % 2 == 0)
//			{
//				arr[i] /= 2;
//				for (j = 0; j < n; j++)
//				{
//					if (arr1[j] == arr[i])
//					{
//						arr1[j] = 0;
//						break;
//					}
//				}
//			}
//		}
//		
//	}
//	for (i = 0; i < n-1; i++)
//	{
//		for (j = 0; j < n - 1 - i; j++)
//		{
//			if (arr1[j] < arr1[j + 1])
//			{
//				int tmp = arr1[j];
//				arr1[j] = arr1[j + 1];
//				arr1[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//      
//		if (arr1[i] == 0)
//		{
//			j = i;
//			break;
//		}
//		
//	}
//	for (i = 0; i < j; i++)
//	{
//      if(i<j-1)
//		printf("%d ", arr1[i]);
//      else
//      printf("%d", arr1[i]);
//	}
//	
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int K, n[101] = { 0 };
//    scanf_s("%d", &K);
//    for (int i = 0; i < K; i++) 
//    {
//        int temp;
//        scanf_s("%d", &temp);
//        if (n[temp] == 0) 
//        {    //当对应下标的数组元素为默认值0时，将其值改为１
//            n[temp] = 1;
//        }
//        while (temp > 1) 
//        {
//            if (temp % 2!=0)  
//                temp = (3 * temp + 1) / 2;
//            else         
//                temp /= 2;
//            if 
//                (temp < 101 && n[temp] == -1)  break;         //当此前已经被覆盖时break加速循环，temp<101避免超出数组范围
//            else if (temp < 101)              
//                n[temp] = -1;  //当此前未被覆盖时将其值改为-1表示已覆盖
//        }
//    }
//    int flag = 0;  //用来标记是否需要输出空格
//    for (int i = 100; i > 1; i--) 
//    {
//        if (n[i] == 1) 
//        {
//            if (flag == 0)   
//                flag = 1;
//            else            
//                printf(" ");
//            printf("%d", i);
//        }
//    }
//    return 0;
//}

//void print(char* str)
//{
//	printf("hehe:%s", str);
//}
//void test(void (*p)(char*))
//{
//	 p("iiiiii");
//}
//int main()
//{
//	test(print);//print 被称为回调函数
//		return 0;
//}
//void print(int* arr)
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(arr+i));
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	print(arr);
//	return 0;
//}

////qsort
//
//#include<stdlib.h>
//#include<string.h>
//int compare_int(const void* a, const void* b)
//{
//	return (*(int*)a - *(int*)b);//升序；
//}///return (*(int*)b - *(int*)a);//降序；
//void test1()
//{
//	int arr[5] = { 10,10,-2,5, 4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), compare_int);
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int compare_float(const void* a, const void* b)
//{
//	if (*(float*)a == *(float*)b)
//		return 0;
//	else if (*(float*)a < *(float*)b)
//		return 1;
//	else
//		return -1;
//
//}
//void test2()
//{
//	float f[5] = { 10.0,10.0,-2.0,5.0, 4.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), compare_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f ", f[i]);
//	}
//}
//
//struct stu
//{
//	char name[20];
//	int age;
//};
//
//int compare_age(const void*a,const void*b)
//{
//	return ((struct stu*)a)->age - ((struct stu*)b)->age;
//}
//
//int compare_name(const void* a, const void* b)
//{
//	return strcmp(((struct stu*)a)->name, ((struct stu*)b)->name);
//}
//void test3()
//{
//	struct stu s[3] = { {"zhangsan",20},{"lisi",30},{"wangwu",18} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), compare_age);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s %d\n", s[i].name ,s[i].age);
//	}
//}
//int main()
//{
//	//test1();
//	//test2();
//	test3();
//	return 0;
//}

#include<stdlib.h>
struct stu
{
	char name[11];
	char id[11];
	int  sco;
};
int compare_sco(const void* a, const void* b)
{
	return ((struct stu*)b)->sco - ((struct stu*)a)->sco;
}
void test()
{
	int n = 0;
	scanf_s("%d", &n);
	int i = 0;
	struct stu s[100] = { 0 };
	for (i = 0; i < n; i++)
	{
		scanf_s("%s", s[i].name,10);
		scanf_s("%s", s[i].id,10);
		scanf_s("%d", &s[i].sco);
	}
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), compare_sco);
	printf("%s %s\n%s %s", s[0].name, s[0].id, s[n-1].name, s[n-1].id);
	
}
int main()
{
	test();
	return 0;
}

//struct stu
//{
//	char name[20];
//	char id[20];
//	int sco;
//};
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int i = 0;
//	struct stu s[10];
//	for (i = 0; i < n; i++)
//	{
//		scanf_s("%s", s[i].name, 20);
//		scanf_s("%s", s[i].id, 20);
//		scanf_s("%d", &s[i].sco);
//	}
//	
//	return 0;
//}