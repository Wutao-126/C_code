# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int n = 0;//打印行数
//	scanf("%d", &n);
//	int i = 0;
//	int k = 1;//上半部分打印*的个数
//	int l = n;//下半部分打印*的个数
//	for (i = 0; i < n; i++)//控制打印行数
//	{
//		int j = 0;
//		if (i < n / 2)
//		{
//			for (j = 0; j <= (n - k) / 2; j++)
//			{
//				printf(" ");//上半部分打印空格
//			}
//
//			for (j = 0; j < k; j++)
//			{
//				printf("*");//上半部分打印*
//			}
//			k += 2;//每行依次递增2个*
//		}
//		else
//		{
//			for (j = 0; j <= (n-l)/2; j++)
//			{
//				printf(" ");//下半部分打印空格
//			}
//
//			for (j = 0; j < l; j++)
//			{
//
//				printf("*"); //下半部分打印*
//			}
//			l -= 2;//每行依次递减2个*
//		}
//		printf("\n");//每行打印完换行
//	}
//	return 0;
//}

//int fun(int n)//计算换的瓶数
//{
//	if (n > 1)
//	{
//		return n / 2 + fun(n / 2 + n % 2);
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count =n+ fun(n);//喝的总瓶数
//	printf("%d", count);
//	return 0;
//}

//void fun(char* str)
//{
//	while (*str != '\0')
//	{
//		if (*str >= 'a' && *str <= 'z')
//		{
//			*str -= 32;
//		}
//		str++;
//	}
//}
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr[80] = {0};
//	//gets(arr);
//	scanf("%s", arr);
//	/*int len = strlen(arr);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		if (arr[i] >= 'a' && arr[i] <= 'z')
//			arr[i] -= 32;
//	}*/
//	fun(arr);
//	printf("%s", arr);
//	return 0;
//}

//int main()
//{
//	char ch[80];
//	int i = 0;
//	while ((ch[i] = getchar()) != '\n')
//		i++;
//	ch[i] = '\0';
//	if (ch[i] >= 'a' && ch[i] <= 'z')
//		ch[i] = ch[i] - 32;
//	printf("%s", ch);
//	return 0;
//}


void fun(int arr[],int sz)
{
	int left = 0;
	int right = sz - 1;
	while(left<right)
	{

		while ((left<right)&&(arr[left] % 2 == 1))
		{
			left++;
		}
		while ((left<right)&&(arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
		/*left++;
		right--;*/
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	fun(arr,sz);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}