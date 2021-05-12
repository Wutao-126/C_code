# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int test1(char str1, char str2)//用来判断甲乙的胜负
//{
//	if ((str1 == 'C' && str2 == 'J') || (str1 == 'J' && str2 == 'B') || (str1 == 'B' && str2 == 'C'))
//		return -1;
//	else if ((str1 == 'C' && str2 == 'B') || (str1 == 'J' && str2 == 'C') || (str1 == 'B' && str2 == 'J'))
//		return 1;
//	else if ((str1 == 'C' && str2 == 'C') || (str1 == 'J' && str2 == 'J') || (str1 == 'B' && str2 == 'B'))
//		return 0;
//	else
//		return 2;
//
//}
//void test2(int* arr)//将不同手势赢的次数按从大到小排序
//{
//
//	if (arr[0] < arr[1])
//	{
//		int tmp = arr[0];
//		arr[0] = arr[1];
//		arr[1] = tmp;
//	}
//	if (arr[0] < arr[2])
//	{
//		int tmp = arr[0];
//		arr[0] = arr[2];
//		arr[2] = tmp;
//	}
//	if (arr[1] < arr[2])
//	{
//		int tmp = arr[1];
//		arr[1] = arr[2];
//		arr[1] = tmp;
//	}
//}
//void print(int arr[], int Ac, int Ab, int Aj)
//{//打印出获胜次数最多的手势，若存在多个则打印字母序最小的那个
//	if (arr[0] == Ac&&Ac!=Ab)
//		printf("C ");
//	else if (arr[0] == Ab)
//		printf("B ");
//	else if (arr[0] == Aj)
//		printf("J ");
//	else if (Ac == Ab && Ac > Aj)
//		printf("B ");
//	else if (Ac == Aj && Ac > Ab)
//		printf("C ");
//	else if (Aj == Ab && Aj > Ac)
//		printf("B ");
//	else if (Ac == Ab == Aj)
//		printf("B ");
//}
//void print2(int arr[], int Ac, int Ab, int Aj)
//{//打印出获胜次数最多的手势，若存在多个则打印字母序最小的那个
//	if (arr[0] == Ac && Ac != Ab)
//		printf("C");
//	else if (arr[0] == Ab)
//		printf("B");
//	else if (arr[0] == Aj)
//		printf("J");
//	else if (Ac == Ab && Ac > Aj)
//		printf("B");
//	else if (Ac == Aj && Ac > Ab)
//		printf("C");
//	else if (Aj == Ab && Aj > Ac)
//		printf("B");
//	else if (Ac == Ab == Aj)
//		printf("B");
//}
//int main()
//{
//	int n = 0, A = 0, B = 0, C = 0;//A代表甲赢的次数，B代表乙赢的次数，C代表平局数
//	scanf("%d", &n);
//	char a[100] = { 0 }, b[100] = { 0 };//a,b字符数组分别存放甲乙给出的手势
//	int i = 0;
//	char c = getchar();
//	for(i=0; i <  n; i++)
//	{                   //循环输入甲乙手势
//		scanf("%c", &a[i]);
//		c = getchar();//避免空格影响数组
//		scanf("%c", &b[i]);
//			c = getchar();//避免回车影响数组
//
//	}
//	for (i = 0; i < n; i++)
//	{
//		int ret = test1(a[i], b[i]);
//		if (ret == -1)
//			A++;
//		else if (ret == 1)
//			B++;
//		else
//			C++;
//	}
//	int Ac = 0, Ab = 0,Aj=0;//Ac,Ab,Aj分别代表使用锤，布，剪赢的次数
//	int Bc = 0, Bb = 0, Bj = 0;//同理
//	for (i = 0; i < n; i++)
//	{                     //判断甲乙赢的那一局是用的什么手势
//		if (a[i] == 'C' && test1(a[i], b[i]) == -1)
//			Ac++;
//		else if (a[i] == 'B' && test1(a[i], b[i]) == -1)
//			Ab++;
//		else if (a[i] == 'J' && test1(a[i], b[i]) == -1)
//			Aj++;
//		if (b[i] == 'C' && test1(a[i], b[i]) == 1)
//			Bc++;
//		else if (b[i] == 'B' && test1(a[i], b[i]) == 1)
//			Bb++;
//		else if (b[i] == 'J' && test1(a[i], b[i]) == 1)
//			Bj++;
//	}
//	printf("%d %d %d\n", A, C, B);
//	printf("%d %d %d\n", B, C, A);
//	int arr[3], arr1[3];
//	arr[0] = Ac, arr[1] = Ab, arr[2] = Aj;//将甲每种手势赢的次数分别存入arr数组中
//	arr1[0] = Bc, arr1[1] = Bb, arr1[2] = Bj;//同理
//	test2(arr);//将甲每种手势赢的次数按从大到小排序
//	print(arr, Ac, Ab, Aj);//将甲获胜次数最多的手势打印
//	test2(arr1);//将乙每种手势赢的次数按从大到小排序
//	print2(arr1, Bc, Bb, Bj);//将乙获胜次数最多的手势打印
//	return 0;
//}
//int main()
//{
//	int aa[2][5] = { 1,2,3,4,5,6,7,8,9,10 };	
//	int* p1 = (int*)(&aa + 1);
//	int* p2 = (int*)(*(aa + 1));
//	printf("%d,%d", *(p1 - 1), *(p2 - 1));
//		return 0;
//}
//int main()
//{
//	char* a[] = { "work","at","alibaba" };
//	char** pa = a;
//	pa++;
//	printf("%s", *pa);
//	return 0;
//}
#include<string.h>
//void fun(char*str,int sz)
//{
//	int i = 0;
//	int right = sz - 1;
//	int left = 0;
//	for (i = 0; i < sz / 2; i++)
//	{
//		int tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//#include<assert.h>
//void fun(char* str)//字符串逆序
//{
//	assert(str);
//	int len = strlen(str);
//	char* left = str;
//	char* right = str + len - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[256] = {0};
//	gets(arr);
//	//int sz = strlen(arr);
//	fun(arr);
//	puts(arr);
//	return 0;
//}
//int fun(int x, int y,int X)
//{
//	int sum = 0;
//	if (y > 0)
//	{
//		y--;
//		return x + fun( X+ x * 10, y,X);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d%d", &n, &m);
//	int M = m;
//	int ret = fun(m, n,M);
//	printf("%d", ret);
//	return 0;
//}
#include<math.h>

int main()
{//判断水仙花数
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		int tmp = i;
		int n = 1;
		int sum = 0;
		while (tmp /= 10)
		{
			n++;
		}
		tmp = i;
		while (tmp)
		{
			sum +=(int) pow(tmp % 10, n);
			tmp /= 10;
		}
		if (sum == i)
			printf("%d ", i);
	}
	return 0;
}