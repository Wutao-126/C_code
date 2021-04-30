//#include<stdio.h>
//int main()//本题要求编写程序，对一个以“#”结束的字符串，将其小写字母全部转换成大写字母，把大写字母全部转换成小写字母，其他字符不变输出。
//{
//	char arr[20];
//	gets_s(arr, 20);
//	int i = 0;
//	for (i = 0;; i++)
//	{
//		/*if (arr[i] > ='a' && arr[i] <= 'z')
//		{
//			arr[i] = arr[i] - 32;
//		}
//		else if (arr[i] >= 'A' && arr[i] <= 'Z')
//		{
//			arr[i] = arr[i] + 32;
//		}*/
//		if (arr[i] == '#')
//		{
//			arr[i] = '\0';
//			break;
//		}
//	}
//	puts(arr, 20);
//	return 0;
//}

//#include<stdio.h>
//#include<assert.h>
//char* fun(char* str)
//{
//	char* ret = str;
//	assert(str != NULL);
//	while (*str != '#')
//	{
//		if (*str >= 'a' && *str <= 'z')
//		{
//				*str -= 32;
//		}
//		else if (*str >= 'A' && *str <= 'Z')
//		{
//				*str += 32;
//		}
//		str++;
//	}
//	*str = '\0';
//	return ret;
//}
//int main()
//{
//	char arr[31];
//	gets_s(arr, 31);
//	fun(arr);
//	puts(arr);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr[30];
//	scanf_s("%s", arr,30);
//	return 0;
//}

//#include<stdio.h>
//int main()//本题要求编写程序，统计并输出某给定字符在给定字符串中出现的次数。
//{
//	char arr[80];
//	gets_s(arr, 80);
//	char* p = &arr;
//	char str;
//	str = getchar();
//	int count = 0;
//	while (*p != '\0')
//	{
//		if (*p == str)
//		{
//			count++;
//		}
//		p++;
//	}
//	printf("%d", count);
//	return 0;
//}

//#include<stdio.h>
//int main()//连接两个字符串，不允许使用strcat函数
//{
//	char arr1[20];
//	char arr2[20];
//	char arr3[20] = {0};
//	gets_s(arr1, 20);
//	gets_s(arr2, 20);
//	char* p1 = arr1;
//	char* p2 = arr2;
//	char* p3 = arr3;
//	while (*p1 != '\0')
//	{
//		*p3 = *p1;
//		p1++;
//		p3++;
//	}
//	while (*p2 != '\0')
//	{
//		*p3 = *p2;
//		p2++;
//		p3++;
//	}
//	*p3 = '\0';
//	puts(arr3);
//	return 0;
//}


//#include<string.h>
//#include<stdio.h>
//int main()//把一个字符串中的所有字符按从小到大排序。
//{
//	char arr[20] = { 0 };
//	gets_s(arr, 20);
//	int len = strlen(arr);
//	int i = 0;
//	for(i = 0;i<len-1;i++)
//    {
//		int j = 0;
//		for (j = 0; j < len - 1 - i; j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//			}
//		}
//    }
//	puts(arr);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	char arr[30];
//	gets_s(arr, 30);
//	int i = 0;
//	for (i = 0;i<30; i++)
//	{
//		if (arr[i] == '#')
//		{
//			break;
//		}
//		if (arr[i] > 'a' && arr[i] < 'z')
//		{
//			arr[i] -= 32;
//		}
//		else if (arr[i] > 'A' && arr[i] < 'Z')
//		{
//			arr[i] += 32;
//		}
//	}
//	arr[i] = '\0';
//	puts(arr);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char arr[50] = { 0 };
//	gets_s(arr, 50);
//	char* p = arr;
//	while (*p != '#')
//	{
//		if (*p >='a' || *p <= 'z')
//		{
//			*p -= 32;
//		}
//		else if (*p >= 'A' || *p <= 'Z')
//		{
//			*p += 32;
//		}
//		p++;
//	}
//	*p = '\0';
//	puts(arr);
//	return 0;
//}