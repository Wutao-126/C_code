//#include<stdio.h>
//int main()
//{
//	printf("Practice makes perfect!");
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 1234;
//	printf("0%o 0x%x", a, a);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	scanf_s("%d", &a);
//	int i = 0;
//	int sum = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int j = 0;
//		int k = a % 10;
//		for (j = i; j < 3; j++)
//		{
//			 k=k* 10;
//		}
//		a /= 10;
//		sum += k;
//	}
//	printf("%d", sum);
//	return 0;
//}

#/*include<stdio.h>
int main()
{
	int a = 0;
	scanf_s("%d", &a);
	while (a)
	{
		printf("%d", a % 10);
		a /= 10;
	}
	return 0;
}*/
//
//#include<stdio.h>
//int main()
//{
//	while ((ch = getchar()) != '\0')
//	{
//		printf("%c\n", (ch + 32));
//		getchar();
//	}
//	return 0;
//}

//#include<stdio.h>
//
//int main()
//
//{
//
//	char a[20];
//
//	//scanf("%s", a);
//	 gets_s(a,20);
//	printf("输入的字符串是:%s\n", a);
//
//	return 0;
//
//}

//#include<stdio.h>
//int main()
//{
//	char ch[20] = "Hello world!";
//	int t = printf("%s\n", ch);
//	printf("%d", t);
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char ch;
//	scanf_s("%c", &ch,3);
//	while (getchar(ch) != '\0')
//	{
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//			printf("Yes");
//		else
//			printf("No");
//		getchar();
//	}
//	return 0;
//}
//数字金字塔
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int a = 1;
//	for (i = 0; i<5;i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5 - i - 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ",a);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	while (a)
//	{
//		scanf_s("%d", &a);
//		printf("%c\n", a);
//	}
//	return 0;
//}