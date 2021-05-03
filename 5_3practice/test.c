//#include<stdio.h>
//#include<math.h>
//int main()//数字分类
//{
//	int n = 0;
//	scanf_s("%d", &n);
//	int arr[1000];
//	int i = 0,j = 0;
//	int A1 = 0;
//	int A2 = 0;
//	int A3 = 0;
//	int A5 = 0;
//	int ret = 0;
//	int a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0;
//	int k = 0;
//	for (i = 0; i < n; i++)
//	{
//		agin:
//		scanf_s("%d", &arr[i]);
//		if (arr[i] < 0)
//			goto agin;
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (arr[i] % 10 == 0)
//		{
//			A1 += arr[i];
//			a1 = 1;
//		}
//		 else if (arr[i] % 5 == 1)
//		{
//			A2 += arr[i] * pow(-1, j);
//			j++;
//			a2 = 1;
//		}
//		else if (arr[i] % 5 == 2)
//		{
//			A3++;
//			a3 = 1;
//		}
//		else if (arr[i] % 5 == 3)
//		{
//			ret += arr[i];
//			a4 = 1;
//			k++;
//		}
//		else if (arr[i] % 5 == 4)
//		{
//			if (arr[i] > A5)
//				A5 = arr[i];
//			a5 = 1;
//		}
//		else
//			continue;
//	}
//	double  A4 = ret / k;
//	if (a1 == 0 || a2 == 0 || a3 == 0 || a4 == 0 || a5 == 0)
//	{
//		if (a1 == 0)
//			printf("N ");
//		else
//			printf("%d ", A1);
//		if (a2 == 0)
//			printf("N ");
//		else
//			printf("%d ", A2);
//		if (a3 == 0)
//			printf("N ");
//		else
//			printf("%d ", A3);
//		if (a4 == 0)
//			printf("N ");
//		else
//			printf("%.1lf ", A4);
//		if (a5 == 0)
//			printf("N");
//		else
//			printf("%d", A5);
//	}
//	else
//		printf("%d %d %d %.1lf %d", A1,A2, A3, A4,A5);
//	return 0;
//}
#include<stdio.h>
int main()//读入一个正整数 n，计算其各位数字之和，用汉语拼音写出和的每一位数字
{
	char ch;
	ch = getchar();
	int i = 0;
	int arr[100] = {0};
	int sum = 0;

	while (ch != '\n')
	{
		switch (ch)
		{
		case '1':
			sum += 1;
			break;
		case '2':
			sum += 2;
			break;
		case '3':
			sum += 3;
			break;
		case '4':
			sum += 4;
			break;
		case '5':
			sum += 5;
			break;
		case '6':
			sum += 6;
			break;
		case '7':
			sum += 7;
			break;
		case '8':
			sum += 8;
			break;
		case '9':
			sum += 9;
			break;
		default:
			sum += 0;
			break;
		}
		ch = getchar();
	}
	int j = 0;
	while (sum)
	{
		arr[i] = sum % 10;
		sum /= 10;
		if (sum == 0)
		{
			j = i;
			break;
		}
		i++;
	}
	for (i = j; i >=1; i--)
	{
		switch (arr[i])
		{
		case 0:
			printf("ling ");
			break;
		case 1:
			printf("yi ");
			break;
		case 2:
			printf("er ");
			break;
		case 3:
			printf("san ");
			break;
		case 4:
			printf("si ");
			break;
		case 5:
			printf("wu ");
			break;
		case 6:
			printf("liu ");
			break;
		case 7:
			printf("qi ");
			break;
		case 8:
			printf("ba ");
			break;
		case 9:
			printf("jiu ");
			break;
		}
	}
		switch (arr[0])
		{
		case 0:
			printf("ling");
			break;
		case 1:
			printf("yi");
			break;
		case 2:
			printf("er");
			break;
		case 3:
			printf("san");
			break;
		case 4:
			printf("si");
			break;
		case 5:
			printf("wu");
			break;
		case 6:
			printf("liu");
			break;
		case 7:
			printf("qi");
			break;
		case 8:
			printf("ba");
			break;
		case 9:
			printf("jiu");
			break;
		}
	
	return 0;
}