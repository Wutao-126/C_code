//#include<stdio.h>
//int main()
//{
//	/*char ch = 'w';
//	char* pc = &ch;*/
//	/*char arr[] = "abcdefg";
//	char* pc = arr;
//	char* p = &arr;
//	printf("%s %s", pc, p);*/
//
//	char* p = "abcdefg";
//	printf("%c\n", *p);
//	printf("%s\n", p);//所以字符串的打印可以用首字符的地址
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = "abcdef";//arr1,arr2是两个不同的地址
//	char* p1 = "abcdef";
//	char* p2 = "abcdef";//p1,p2指向同一块空间
//	if (arr1 == arr2)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	if (p1 == p2)
//		printf("hehe\n");
//	else
//		printf("haha\n");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int arr[10] = { 1,2,3,1 };
//	int(* p)[10] = &arr;
//	char* arr1[5];
//	char*(*pa)[5] = &arr1;
//	//printf("%p\n%p", &arr, &arr[0]);
//	return 0;
//}

//#include<stdio.h>
//int main()//数组指针不这样使用
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int(*pa)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		/*printf("%d ", (*pa)[i]);*/
//		printf("%d ", *(*pa + i));
//	}
//	return 0;
//}

//#include<stdio.h>
////参数是数组的形式
//void print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
////参数是指针的形式
//void print2(int(*p)[5], int x, int y)//p=arr[3]
//{
//	int i = 0;
//	for(i = 0 ;i<x;i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", p[i][j]);
//			printf("%d ", *(p[i] + j));
//			printf("%d ", *(*(p + i)+j));
//			printf("%d ", (*(p + i))[j]);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	print1(arr, 3, 5);
//	print2(arr, 3, 5);//将arr看成一维数组arr[3]
//	return 0;
//}

//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int m, n;
//	scanf_s("%d%d", &m, &n);
//	int count = 0;
//	int count1 = 0;
//	int i = 0;
//	int arr[1000] = { 0 };
//	int k = 0;
//	for (i = 2;; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			if ((count >= m) && (count <= n))
//			{
//				arr[k] = i;
//				k++;
//			}
//		}
//		if (count == n)
//			break;
//	}
//	count = 0;
//	for (k = 0; k < n - m; k++)
//	{
//		count++;
//		if (count>0&&count % 10 == 0)
//		{
//			printf("%d", arr[k]);
//			printf("\n");
//			continue;
//		}
//		printf("%d ", arr[k]);
//	}
//	printf("%d", arr[n - m]);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int i = 0;
//	long arr[10][3];
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		
//		for (j = 0; j < 3; j++)
//		{
//			scanf_s("%ld", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i][0] + arr[i][1] > arr[i][2])
//			printf("Case #%d: true\n", i+1);
//		else
//			printf("Case #%d: false\n", i+1);
//	}
//	
//	return 0;
//}
// 
// 
//#include<stdio.h>
//int main()
//{
//	int t;
//	long a, b, c;
//	while (scanf_s("%d", &t) != EOF)
//	{
//		for (int i = 1; i <= t; i++)
//		{
//			scanf_s("%ld%ld%ld", &a, &b, &c);
//			if ((a + b) > c) 
//              printf("Case #%d: true\n", i);
//			else 
//              printf("Case #%d: false\n", i);
//		}
//
//	}
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	agin:
//	scanf_s("%d", &n);
//	if (n < 1)
//		goto agin;
//	int i = 0;
//	long a, b, c;
//	for (i = 1; i <= n; i++)
//	{
//			scanf_s("%ld%ld%ld", &a, &b, &c);
//		if(a+b>c)
//			printf("Case #%d: true\n", i);
//		else
//			printf("Case #%d: false\n", i);
//	}
//	return 0;
//}