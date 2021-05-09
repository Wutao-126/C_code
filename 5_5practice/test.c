//#include<stdio.h>
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

//#include<stdio.h>
//void test(int arr[3][5])
//{}
//void test1(int arr[][5])
//{}
////void  test2(int arr[3][])//列不能省略
////{}
//void test3(int (*arr)[5])err
//{}
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	test1(arr);
//	//test2(arr);
//	test3(arr);
//	return 0;
//}

//
//void test1(int arr[3][5])//(int arr[][5])
//{}
//
//void test2(int(*arr)[5])
//{}
//
//#include<stdio.h>
//int main()
//{
//	int arr[3][5] = { 0 };
//	test1(arr);
//	test2(arr);
//	return 0;
//}


//函数指针 - 是指向函数的指针 - 存放函数地址的一个指针
//int Add(int x, int y)
//{
//	return x + y;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Add(a, b);
//	int(*p)(int, int) = Add;// &函数名 和 函数名 都是函数的地址
//	printf("%d", (*p)(a, b));
//	return 0;
//}

#include<stdio.h>
#include<string.h>
int main()//福尔摩斯的约会
{
	char arr1[61];
	char arr2[61];
	char arr3[61];
	char arr4[61];
	gets_s( arr1, 61);
	gets_s( arr2, 61);
	gets_s( arr3, 61);
	gets_s( arr4, 61);
	char m = 0;
	char n = 0;
	int x = 0;
	int flag = 0;
    int i = 0;
	for (i = 0; i < 61; i++)
	{
		if ((arr1[i] == arr2[i]) && (arr1[i] >= 'A' && arr1[i] <= 'G') && (flag == 0))
		{
			m = arr1[i];
			flag = 1;
			continue;
		}
		if (arr1[i] == arr2[i]&& ((arr1[i] >= 'A' && arr1[i] <= 'N')||(arr1[i]>='0'&&arr1[i]<='9'))&&flag==1)
		{
			n = arr1[i];
			flag++;
		}
		if (flag == 3)
			break;
	}
	printf("%c\n", m);
	printf("%c\n", n);
	for (i = 0; i < 61; i++)
	{
		if ((arr3[i] >= 'a' && arr4[i] <= 'z') || (arr3[i] >= 'A' && arr3[i] <= 'Z'))
		{
			if (arr3[i] == arr4[i])
			{
				x = i;
				break;
			}
		}
	}
	switch (m)
	{
	case 'A':
		printf("MON ");
		break;
	case 'B':
		printf("TUE ");
		break;
	case 'C':
		printf("WED ");
		break;
	case 'D':
		printf("THU ");
		break;
	case 'E':
		printf("FRI ");
		break;
	case 'F':
		printf("SAT ");
		break;
	case 'G':
		printf("SUN ");
		break;
	}
	if (n >= '0' && n <= '9')
	{
		printf("0%c", n);
	}
	else
		printf("%d", n - 55);
	printf(":");
	if (x < 10)
	{
		printf("0%d", x);
	}
	else
		printf("%d", x);
	return 0;
}

