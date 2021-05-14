# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	unsigned char a = 200;
//	unsigned char b = 100;
//	unsigned char c = 0;
//	c = a + b;
//	printf("%d %d", a + b, c);
//	return 0;
//}
//#include<string.h>
//int main()
//{
//	char a[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//
//	}
//	printf("%d", strlen(a));
//	return 0;
//}
//
//int main()
//{                            //打印杨辉三角
//	int arr[10][10] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0 || j == i)
//				arr[i][j] = 1;
//			else
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < n - i; j++)
//		{
//			printf(" "); 
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//char* solve(char *s, char *t)
//{
//	*s = (*(int*)s + *(int*)t);
//	
//	return s;
//}
//int main()
//{
//	char s[100] = { 0 };
//	char t[100] = { 0 };
//	gets(s);
//	gets(t);
//	printf("%s",solve(s, t));
//	return 0;
//}


//int sum(int m, int n)
//{
//	int sum = 0;
//	while (m <= n)
//	{
//		sum += m;
//		m++;
//	}
//	return sum;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m, &n);
//	printf("%d", sum(m, n));
//	return 0;
//}

//#include <stdio.h>
//
//int max(int a, int b);
//
//int main()
//{
//    int a, b;
//
//    scanf("%d %d", &a, &b);
//    printf("max = %d\n", max(a, b));
//
//    return 0;
//}
//
//int max(int a, int b)
//{
//    return a > b ? a : b;
//}


//#include <stdio.h>
//
//int f(int n);
//
//int main()
//{
//    int n;
//
//    scanf("%d", &n);
//    printf("%d\n", f(n));
//
//    return 0;
//}
//
//int f(int n)
//{
//    int i = 1;
//    int j = 1;
//    int c = 1;
//    while (n > 2)
//    {
//        c = i + j;
//        i = j;
//        j = c;
//        n--;
//    }
//    return c;
//   
//}


#include <stdio.h>

void dectobin(int n);

int main()
{
    int n;

    scanf("%d", &n);
    dectobin(n);

    return 0;
}

void dectobin(int n)//用递归将十进制数转化为二进制
{
    if (n == 0)
        printf("0");
    else if (n == 1)
        printf("1");
    else
    {
        dectobin(n / 2);
        printf("%d", n % 2);
    }
}



#include <stdio.h>

double fact(int n);

int main(void)
{
    int i;
    double sum;

    sum = 0;
    for (i = 1; i <= 10; i++)
        sum = sum + fact(i);

    printf("1!+2!+...+10! = %f\n", sum);
    return 0;
}

double fact(int n)
{
   if(n<=1)
        return 1;
    else
        return n * fact(n - 1);
}