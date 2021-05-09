# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	/*int a[] = { 1,2,3,4 };
//	char b[] = { 'a','b','c','d','e','g' };
//	printf("%d\n", sizeof(a + 0));
//	printf("%d\n", sizeof(b));
//	printf("%d", strlen(&b));*/
//
//	char a[] = "abcdef";
//	printf("%d", strlen((const char*)&a));
//	return 0;
//}

//int main()
//{
//	int arr[100];
//	int i = 0;
//	char c = 0;
//	int j = 0;
//	int flag = 0;
//	int m = 0;
//	do
//	{
//		scanf("%d", &arr[i++]);
//		c = getchar();
//	} while (c != '\n');
//	{
//		for (j = 0; j < i; j += 2)
//		{
//			if (arr[j] == 0 && arr[j + 1] != 0 || arr[j] != 0 && arr[j + 1] == 0)
//				flag = 1;
//			m = j;
//		}
//		if (flag == 0)
//		{
//			for (j = 0; j < i - 2; j += 2)
//			{
//				printf("%d %d ", arr[j] * arr[j + 1], arr[j + 1] - 1);
//			}
//			printf("%d %d", arr[i - 2] * arr[i - 1], arr[i - 1] - 1);
//		}
//		else
//		{
//			if (i - 2 == 0 || i - 1 == 0)
//			{
//				for (j = 0; j < i-2; j += 2)
//				{
//						printf("%d %d ", arr[j] * arr[j + 1], arr[j + 1] - 1);
//				}
//				printf("%d %d",arr[i - 4] * arr[i - 3], arr[i - 3] - 1);
//			}
//			else
//			{
//				for (j = 0; j < i-2; j += 2)
//				{
//					if (j == m)
//					{
//						printf("");
//					}
//					else
//						printf("%d %d ", arr[j] * arr[j + 1], arr[j + 1] - 1);
//				}
//				printf("%d %d", arr[i - 2] * arr[i - 1], arr[i - 1] - 1);
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[100] = { 0 };
//	int i = 0;
//	int j = 0;
//	int x = 0, z = 0, k = 0;
//	char c = 0;
//	int flag = 0;
//	do
//	{
//		scanf("%d", &arr[i++]);
//		c = getchar();
//	} while (c != '\n');
//	{
//		for (j = 0; j < i; j += 2)
//		{
//			x = arr[j];
//			z = arr[j + 1];
//			if ((x == 0) && (z != 0) || (x != 0) && (z == 0))
//				continue;
//			else if ((x == 0) && (z == 0))
//			{
//				arr[k] = 0;
//				arr[k + 1] = 0;
//			}
//			else
//			{
//				arr[k] = x * z;
//				arr[k + 1] = z - 1;
//				if (arr[k] != 0 || arr[k + 1] != 0)
//					flag = 1;
//			}
//			k += 2;
//		}
//		
//	}
//	if (flag == 0)
//		printf("0 0");
//	else
//	{
//
//		printf("%d", arr[0]);
//		for (i = 1; i < k; i++)
//		{
//			printf(" %d", arr[i]);
//		}
//	}
//	return 0;
//}
int main()
{
	char arr[100] = { 0 }, arr1[50] = {0};
	scanf("%s", arr);
	int n = strlen(arr);
	int i = 0;
	int count = 0;
	if (n % 2 == 0)
	{
		for (i = 0; i < n / 2; i++)
		{
			if (arr[i] == arr[n/2+i])
			{
				count++;
				arr1[i] = arr[i];
			}
		}
		if (count == n / 2 )
		{
			printf("Yes\n");
			printf("Let T=%s,and S=T+T", arr1);
		}
		else
			printf("NO");
	}
	else
		printf("NO");
	
	return 0;
}