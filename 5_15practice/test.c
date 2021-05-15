# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int sort1(int* arr)//冒泡排序，降序排列
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3 - i; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	return (arr[0] * 1000 + arr[1] * 100 + arr[2] * 10 + arr[3] * 1);
//	//这里我们直接返回降序排列后组成的数字
//}
//int sort2(int* arr)
//{
//	return (arr[3] * 1000 + arr[2] * 100 + arr[1] * 10 + arr[0] * 1);
//	//由于前面已经进行过降序排列，这里为了简便我们直接将对应每一位逆转返回
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[4] = { 0 };
//	int i = 0, m = n;
//	//因为后面还会用到n，所以我们这里再定义一个变量m来存放n的值
//	for (i = 0; i < 4; i++)
//	{
//		arr[i] = m % 10;
//		//用arr数组存储四位数n的每一位
//		m /= 10;
//	}
//	if (arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == arr[3])
//	{
//		//这里判断每一位数字是否相同
//		if (arr[0] != 0)
//			printf("%d - %d = 0000\n", n, n);
//		else
//			printf("0000-0000 = 0000\n");
//	}
//	else
//	{
//		int j = 0;
//		for (j = 0;; j++)
//		{//用m来存放每一次的升序排列减降序排列得到的值
//			m = sort1(arr) - sort2(arr);
//			if (sort2(arr) < 1000 && sort2(arr) >= 100)
//			{
//				//减数只有三位数的情况，按照题目要求应该在前面补0
//				if (m < 1000)
//					printf("%d - 0%d = 0%d\n", sort1(arr), sort2(arr), m);
//				//m可能只有三位数，所以我们也要在前面补0
//				else
//					printf("%0d - %0d = %0d\n", sort1(arr), sort2(arr), m);
//			}
//			else if (sort2(arr) < 100 && sort2(arr) >= 10)
//			{
//				//减数只有两位位数的情况
//				if (m < 1000)
//					printf("%d - 00%d = 0%d\n", sort1(arr), sort2(arr), m);
//				else
//					printf("%d - 00%d = %d\n", sort1(arr), sort2(arr), m);
//			}
//			else if (sort2(arr) < 10)
//			{
//				//减数只有一位位数的情况
//				if (m < 1000)
//					printf("%d - 000%d = 0%d\n", sort1(arr), sort2(arr), m);
//				else
//					printf("%d - 000%d = %d\n", sort1(arr), sort2(arr), m);
//			}
//			else
//			{
//				//最后是减数是四位数
//				if (m < 1000)
//					printf("%d - %d = 0%d\n", sort1(arr), sort2(arr), m);
//				else
//					printf("%d - %d = %d\n", sort1(arr), sort2(arr), m);
//			}
//			if (m == 6174)
//				break;
//			//当m=6174时，退出循环
//			for (i = 0; i < 4; i++)
//			{
//				//否则重复上面的步骤，将得到的m，每一位存在数组arr中
//				arr[i] = m % 10;
//				m /= 10;
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	//int* p = NULL;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*p)[10] = &arr;
//	printf("%d ", *p[0]+9);
//	return 0;
//}


//#include<stdio.h>
//struct stu
//{
//	char name[12];//姓名
//	char id[12];//学号
//	int  sco;//成绩
//};
//int compare_sco(const void* a, const void* b)
//{
//	return ((struct stu*)b)->sco - ((struct stu*)a)->sco;
//	//成绩比较
//}
//void test()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	struct stu s[1000] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		//输入每个人的信息
//		scanf("%s", s[i].name);
//		scanf("%s", s[i].id);
//		scanf("%d", &s[i].sco);
//	}
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), compare_sco);
//	//使用快速排序函数，将成绩降序排列
//	printf("%s %s\n%s %s", s[0].name, s[0].id, s[n - 1].name, s[n - 1].id);
//	//输出成绩最高和最低的学生的姓名和学号
//
//}
//int main()
//{
//	test();
//	return 0;
//}

//void bubble_sort(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for(j = 0; j < sz - 1 - i; j++)
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
//int main()
//{
//	long long n = 0;
//	scanf("%lld", &n);
//	int arr[1000] = { 0 };
//	int i = 1;
//    long long m = n;
//	int count = 1;
//	int a = 1;
//	int b = 0;
//	arr[0] = m % 10;
//	m /= 10;
//	while(m)
//	{
//			int j = 0;
//			int flag = 0;
//			for (j = 0; j < i; j++)
//			{
//				if (m % 10 == arr[j])
//					flag = 1;
//			}
//			if (flag == 0)
//			{
//				arr[i] = m % 10;
//				a++;
//				i++;
//			}
//			m /= 10;
//			count++;
//	}
//	bubble_sort(arr, a);
//	for (i = 0; i < a; i++)
//	{
//		m = n;
//		b = 0;
//		int j = 0;
//		
//		for (j = 0; j < count; j++)
//		{
//			if (arr[i] == m % 10)
//				b++;
//			m /= 10;
//		}
//		printf("%d : %d\n", arr[i], b);
//	}
//	return 0;
//}



int main()
{
	char num[] = { '0','1','2','3','4','5','6','7','8','9' };
	char arr[1001] = { 0 };
	gets(arr);
	int i = 0;
	int arr2[10] = { 0 };
	while (arr[i] != '\0')
	{
		switch (arr[i])
		{
		case'0':arr2[0]++; break;
		case'1':arr2[1]++; break;
		case'2':arr2[2]++; break;
		case'3':arr2[3]++; break;
		case'4':arr2[4]++; break;
		case'5':arr2[5]++; break;
		case'6':arr2[6]++; break;
		case'7':arr2[7]++; break;
		case'8':arr2[8]++; break;
		case'9':arr2[9]++; break;
		}
		i++;
	}
	for (i = 0; i < 10; i++)
	{
		if (arr2[i] != 0)
			printf("%c:%d\n", num[i], arr2[i]);
		
	}
	return 0;
}