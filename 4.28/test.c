//#include<stdio.h>
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf_s("%d", &num);
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((num >> i) & 1 == 1)
//			count++;
//	}
//	 
//	printf("%d", count);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a = 1;
//	int b = 2;
//	int c = (a > b ? a: b);
//	printf("%d", c);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int M = 0;
//	int N = 0;
//	scanf_s("%d%d", &M, &N);
//	int tmp;
//	if (M < N)
//	{
//		tmp = M;
//		M = N;
//		N = tmp;
//	}
//	if (M % N == 0)
//	{
//		printf("%d %d", N, M);
//	}
//	int k = 0;
//	int i = M;
//	int j = N;
//	while (M%N!=0)
//	{
//		int r = M % N;
//		M = N;
//		N = r;
//	}
//	i = i / N;
//	j = j / N;
//	k = N * i * j;
//	printf("%d %d", N, k);
//	
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int M = 0;
//	int N = 0;
//	scanf_s("%d%d", &M, &N);
//	printf("%d%d", M,N);
	/*if (M < N)
	{
		int tmp = 0;
		tmp = M;
		M = N;
		N = tmp;
	}
	int i = 0;
	int max = 0;
	for (i = 1; i <= N; i++)
	{
		if (M % i == 0 && N % i == 0)
			max = i;
	}
	printf("%d", max);*/
	//
	//#include<stdio.h>
	//int main()
	//{
	//	int i = 0;
	//	double pi = 0.00;
	//	double j =0.00;
	//	double n =3.00;
	//	double k = 0;
	//	for(i=1;;i++)
	//	{
	//		n += 2;
	//		if (i % 2 == 0)
	//			k = k + (-1 / n );
	//		else
	//			j = j + (1 / n);
	//		if ((1/n) < 0.000001)
	//			break;
	//	}
	//	printf("pi=  %.4lf", 4 * (2.00 / 3.00 + j + k));
	//	return 0;
	//}
	//#include<stdio.h>
	//#include<math.h>
	//int main()
	//{
	//	int M = 0;
	//	int N = 0;
	//	scanf_s("%d%d", &M, &N);
	//	int i = 0;
	//	int count = 0;
	//	int sum = 0;
	//	for (i = M; i <= N; i++)
	//	{
	//		int j = 0;
	//		for (j = 2; j <= sqrt(i); j++)
	//		{
	//			if (i % j == 0)
	//			{
	//				break;
	//			}
	//			if (j > sqrt(i))
	//			{
	//				count++;
	//				sum += i;
	//			}
	//		}
	//	}
	//		printf("%d %d", count, sum);
	//		return 0;
	//	}
	//#include<stdio.h>
	//#include<math.h>
	//int main()
	//{
	//	int M, N;
	//	agin:
	//	scanf_s("%d%d", &M, &N);
	//	if (M <= 0 || N <= 0)
	//		goto agin;
	//	int i = 0;
	//	int count = 0;
	//	int sum = 0;
	//	for (i = M; i <= N; i++)
	//	{
	//		if (0 ==M&&0==N||M==1&&N==1)
	//		{
	//			printf("%d%d", count, sum);
	//				break;
	//		}
	//		int j = 0;
	//		for (j = 2; j <= sqrt(i); j++)
	//		{
	//			if (i % j == 0)
	//				break;
	//		}
	//		if (j > sqrt(i))
	//		{
	//			count++;
	//			sum += i;
	//		}
	//	}
	//	printf("%d %d", count, sum);
	//	return 0;
	//}
	//#include<stdio.h>
	//int main()
	//{
	//	int M, N;
	//	scanf_s("%d%d", &M, &N);
	//	int i = 0;
	//	int count = 0;
	//	int sum = 0;
	//	for (i = M; i <= N; i++)
	//	{
	//		int k = 0;
	//		int j = 1;
	//		for (j = 1; j <= i; j++)
	//		{
	//			if (i % j != 0)
	//				k++;
	//		}
	//		if (k == i - 2)
	//		{
	//			count++;
	//			sum += i;
	//		}
	//	}
	//	printf("%d %d", count, sum);
	//	return 0;
	//}
	//#include<stdio.h>
	//int main()
	//{
	//	int n = 0;
	//	scanf_s("%d", &n);
	//	int x = n / 100 % 10;
	//	int y = n / 10 % 10;
	//	int z = n / 1 % 10;
	//	int i = 0;
	//	for (i = 0; i < x; i++)
	//	{
	//		printf("B");
	//	}
	//	for (i = 0; i < y; i++)
	//	{
	//		printf("S");
	//	}
	//	for (i = 0; i <= z; i++)
	//	{
	//		if (i > 0)
	//			printf("%d",i);
	//	}
	//	return 0;
	//}
	//#include<stdio.h>
	//int main()
	//{
	//	int N, a, b, c, d;
	//	int i = 0;
	//	int m = 0;
	//	int n = 0;
	//	scanf_s("%d", &N);
	//	for (i = 1; i <= N; i++)
	//	{
	//		scanf("%d%d%d%d", &a, &b, &c, &d);
	//		if (a + c == b)
	//		{
	//			m++;
	//			
	//		}
	//		if (a + c == d)
	//		{
	//			n++;
	//			
	//		}
	//	}
	//	printf("%d %d", m, n);
	//	return 0;
	//}
	//#include<stdio.h>
	//int main()
	//{
	//	int N = 0;
	//	scanf_s("%d", &N);
	//	int a = 0;
	//	int b = 0;
	//	int c = 0;
	//	int i = 0;
	//	for (i = 1; i <= N; i++)
	//	{
	//		scanf_s("%d-%d %d", &a, &b, &c);
	//	}
	//
	//	return 0;
	//}
	//#include<stdio.h>
	//int main()
	//{
	//	printf("%d", sizeof(int*));
	//	return 0;
	//
	//}
	//#include<stdio.h>
	//int main()
	//{
	//	int n = 0;
	//	int count = 0;
	//	int i = 0;
	//	scanf_s("%d", &n);
	//	for(i = 1;;i++)
	//	{
	//		if (n % 2 == 0)
	//		{
	//			n /= 2;
	//			count++;
	//		}
	//		else
	//		{
	//			n = (3*n + 1) / 2;
	//			count++;
	//		}
	//		if (n == 1)
	//			break;
	//	}
	//	printf("%d", count);
	//	return 0;
	//}
	//#include<stdio.h>
	//int main()
	//{
	//    int n = 0;
	//	int i = 0;
	//	int j = 0;
	//	int sum = 0;
	//	scanf_s("%d", &n);
	//	for (i = 1;; i * 10)
	//	{
	//		j = n / i % 10;
	//		sum += j;
	//		n /= 10;
	//		if (n == 0)
	//			break;
	//	}
	//	for (i = 1;; i * 10)
	//	{
	//		j = sum / i % 10;
	//		switch (j)
	//		{
	//		case 1:
	//			printf("yi");
	//			break;
	//		case 2:
	//			printf("er");
	//			break;
	//		case 3:
	//			printf("san");
	//			break;
	//		case 4:
	//			printf("si");
	//			break;
	//		case 5:
	//			printf("wu");
	//			break;
	//		case 6:
	//			printf("liu");
	//			break;
	//		case 7:
	//			printf("qi");
	//			break;
	//		case 8:
	//			printf("ba");
	//			break;
	//		case 9:
	//			printf("jiu");
	//			break;
	//		}
	//		sum /= 10;
	//		if (sum == 0)
	//			break;
	//	}
	//
	//	return 0;
	//}
	//#include<math.h>
	//int is_prime(int x)
	//{
	//	int y,z = 0;
	//	for (y = 1; y <x; y++)
	//	{
	//		if (x % y != 0)
	//			z++;
	//	}
	//	if (z == x - 2)
	//		return 1;
	//	else
	//		return 0;
	//}
	//#include<stdio.h>
	//int main()
	//{
	//	int i = 0;
	//	int N = 0;
	//	int count = 0;
	//	scanf_s("%d", &N);
	//	for (i = 1; i <= N-2; i++)
	//	{
	//		
	//		int j = is_prime(i);
	//		int k = is_prime(i + 2);
	//		if (j == 1 && k == 1)
	//			count++;
	//	}
	//	printf("%d", count);
	//			return 0;
	//}
	//#include<stdio.h>
	//int main()
	//{
	//	int arr[1000] = { 0 };
	//	int a, b, c;
	//	int i = 0;
	//	int N = 0;
	//	scanf_s("%d", &N);
	//	for (i = 1; i <= N; i++)
	//	{
	//		scanf_s("%d-%d%d", &a, &b, &c);
	//			arr[a] += c;
	//	}
	//	int max = arr[1];
	//	int t = 0;
	//	for (i = 1; i <= 1000; i++)
	//	{
	//		if (arr[i] > max)
	//		{
	//			max = arr[i];
	//			t = i;
	//		}
	//	}
	//	printf("%d %d",t , max);
	//		return 0;
	//
	//}
	//#include<stdio.h>
	//int main()
	//{
	//	int N = 0;
	//	scanf_s("%d", &N);
	//	int i = 0;
	//	char a, b;
	//	char T = 'T', F = 'F', A = 'A', B = 'B', C = 'C', D = "D";
	//	for (i = 1; i <= N; i++)
	//	{
	//		int j = 0;
	//		for (j = 1; j <= 4; j++)
	//		{
	//			scanf_s("%c-%c",&a,&b);
	//			if (b == T)
	//			{
	//				if (a == A)
	//					printf("1");
	//				if (a == B)
	//					printf("2");
	//				if (a == C)
	//					printf("3");
	//				if (a == D)
	//					printf("4");
	//			}
	//		}
	//		
	//	}
	//	return 0;
	//}
	//#include<stdio.h>
	//#include<math.h>
	//int main()
	//{
	//	int N = 0;
	//	scanf_s("%d", &N);
	//	int i = 0;
	//	double max = 0;
	//	double j = 0;
	//	for (i = 1; i <= N; i++)
	//	{
	//		double a, b;
	//		scanf_s("%lf%lf", &a, &b);
	//		j = sqrt(a * a + b * b);
	//		if (j > max)
	//			max = j;
	//
	//	}
	//	printf("%.2lf", max);
	//	return 0;
	//}
	//#include<stdio.h>
	//int main()
	//{
	//	int N = 0;
	//	scanf_s("%d", &N);
	//	int i = 0;
	//	int arr[10] = { 0 };
	//	int a = 0;
	//	for (i = 1; i <= N; i++)
	//	{
	//		scanf_s("%d", &a);
	//		arr[i] = a;
	//	}
	//	int sum = 0;
	//	for (i = 1; i <= N; i++)
	//	{
	//		int j = 0;
	//		for (j = 1; j <= N; j++)
	//		{
	//			if (i == j)
	//				continue;
	//			sum =sum+(arr[i] * 10 + arr[j]);
	//		}
	//	}
	//	printf("%d", sum);
	//	return 0;
	//}
	//#include<stdio.h>
	//int main()
	//{
	//	int a = 0;
	//	int* p = &a;
	//	*p = 20;
	//	printf("%d", a);
	//	return 0;
	//}
	//#include<stdio.h>
	//int main()
	//{
	//	int arr1[100] = { 0 };
	//	int arr2[100] = { 0 };
	//	int M, N,k;
	//	int i = 0;
	//	for (i = 1; i <= N; i++)
	//	{
	//		int j = 0;
	//		for (j = 1; j <= M; j++)
	//		{
	//			scanf("%d", k);
	//		}
	//	}
	//
	//}
	//#include<stdio.h>
	//int main()
	//{
	//	int arr[] = { 0 };
	//	int M, N;
	//	scanf_s("%d%d", &M, &N);
	//	int i = 0;
	//	int j = 0;
	//	for (i = 0; i < M ; i++)
	//	{
	//		scanf_s("%d", &arr[i]);
	//	}
	//	for (i = 0; i < N; i++)
	//	{
	//		j = arr[M - 1];
	//			for (i = M - 1; i > 0; i--)
	//			{
	//				arr[i] = arr[i - 2];
	//			}
	//		arr[0] = j;
	//	}
	//	for (i = 0; i < M; i++)
	//	{
	//		if (i == M - 1)
	//			printf("%d", arr[i]);
	//		else
	//			printf("%d ", arr[i]);
	//	}
	//	return 0;
	//}
	//#include<stdio.h>
	//int main()
	//{
	//	int m, n;
	//	int i = 0;
	//	int count = 0;
	//	int sum = 0;
	//	scanf_s("%d%d", &m, &n);
	//	for (i = m; i <= n; i++)
	//	{
	//		int j = 0;
	//		int k = 0;
	//		for (j = 1; j <= i; j++)
	//		{
	//			if (i % j != 0)
	//				k++;
	//		}
	//		if (k == i - 2)
	//		{
	//			count++;
	//			sum += i;
	//		}
	//		}
	//	printf("%d %d", count, sum);
	//	return 0;
	//} 
	//#include<stdio.h>
	//int main()
	//{
	//	int n = 0;
	//	scanf_s("%d", &n);
	//	int arr[10] = {0};
	//	int i = 0;
	//	int j = 0;
	//	int count = 0;
	//	for (i = 0; i < n; i++)
	//	{
	//		scanf_s("%d", arr[i]);
	//	}
	//	for (i = 0; i < n; i++)
	//	{
	//		for (j = 0; j < n; j++)
	//		{
	//			if (i == j)
	//				continue;
	//			if (i > j)
	//			{
	//				if (arr[i] < arr[j])
	//					break;
	//			}
	//			if (i < j )
	//			{
	//				if (arr[i] > arr[j])
	//					break;
	//			}
	//			count++; 
	//			printf("%d", arr[i]);
	//		}
	//	}
	//	printf("%d", count);
	//	return 0;
	//}
	//struct
	//#include<stdio.h>
	//int main()
	//{
	//	int n = 0;
	//	scanf_s("%d", &n);
	//	char arr1[10] = { 0 };
	//    char arr2[10] = { 0 };
	//	int arr3[10] = { 0 };
	//	int i = 0;
	//	for (i = 0; i < n; i++)
	//	{
	//		scanf_s("%s%s%d", &arr1[i], &arr2[i], &arr3[i]);
	//	}
	//	int max =min = 0;
	//	for (i = 0; i < n; i++)
	//	{
	//		if (arr3[max] < arr3[i])
	//			max = i;
	//		if (arr3[min] > arr3[i])
	//			min = i;
	//	}
	//	printf("%s%s\n, arr1[max], arr2[max]);
	//		printf("%s%s", arr1[min], arr2[min]);
	//	return 0;
	//}

	//#include<stdio.h>
	//int main()
	//{
	//	int A = 0;
	//	int a = 0;
	//	int B = 0;
	//	int b = 0;
	//	scanf_s("%d%d%d%d", &A, &a, &B, &b);
	//	int i = 0;
	//	int j = 0;
	//	int ret = 0;
	//	int sum = 0;
	//	for (i = 1;;i*=10)
	//	{
	//		if (A / i % 10 == a)
	//			j++;
	//		if (A == 0)
	//			break;
	//	}
	//	for (i = 0; i < j; i++)
	//	{
	//		if (j == 0)
	//		{
	//			ret = 0;
	//			break;
	//		}
	//		ret = a* (10 * i) + a;
	//	}
	//	int k = 0;
	//	for (i = 1;; i *= 10)
	//	{
	//		if (B / i % 10 == b)
	//			k++;
	//		if (B == 0)
	//			break;
	//	}
	//	for (i = 0; i < k; i++)
	//	{
	//		if (k == 0)
	//		{
	//			sum = 0;
	//			break;
	//		}
	//		sum = b* (10 * i) + b;
	//	}
	//	printf("%d", ret+sum);
	//	return 0;
	//}
	//#include<stdio.h>
	//int is(int x)
	//{
	//	int i = 0,j=0;
	//	for (i = 1;; i *= 10)
	//	{
	//		j = j + x / i % 10;
	//		if (x/i==0)
	//			break;
	//	}
	//	if (j % 5 == 0)
	//		return 1;
	//	else
	//		return 0;
	//}
	//void count_sum(int a, int b)
	//{
	//	int i = 0;
	//	int count = 0;
	//	int sum = 0;
	//	for (i = a; i <= b; i++)
	//	{
	//		if (is(i) == 1)
	//		{
	//			count++;
	//			sum += i;
	//		}
	//	}
	//	printf("count = %d,sum = %d", count, sum);
	//}
	//
	//int main()
	//{
	//	int m, n;
	//	scanf_s("%d%d", &m, &n);
	//	if (is(m) == 1)
	//		printf("%d is counted\n", m);
	//	if (is(n) == 1)
	//		printf("%d is counted\n", n);
	//	count_sum(m, n);
	//	return 0;
	//}

	//#include<stdio.h>
	//int main()
	//{
	//	int a = 10;
	//	int b = 20;
	//	int c = 30;
	//	int* arr[3] = { &a,&b,&c };
	//	int i = 0;
	//	for (i = 0; i < 3; i++)
	//	{
	//		printf("%p\n", arr[i]);
	//		printf("%d\n", *(arr[i]));
	//
	//	}
	//	return 0;
	//}
	//#include<stdio.h>
	//void print(int arr[10],int sz)
	//{
	//	int i = 0;
	//	for (i = 0; i < sz; i++)
	//	{
	//		printf("%d ", arr[i]);
	//	}
	//}
	//void Init(int arr[10], int sz)
	//{
	//	int i = 0;
	//	for (i = 0; i < sz; i++)
	//	{
	//		arr[i] = 0;
	//	}
	//}
	//void reverse(int arr1[9], int sz1)
	//{
	//	int left = 0;
	//	int right = sz1 - 1;
	//	while (left < right)
	//	{
	//		int tmp = arr1[left];
	//		arr1[left] = arr1[right];
	//		arr1[right] = tmp;
	//		left++;
	//		right--;
	//	}
	//	int i = 0;
	//	for (i = 0; i < sz1; i++)
	//	{
	//		printf("%d ", arr1[i]);
	//	}
	//}
	//
	//int main()
	//{
	//	int arr[10] = { 0 };
	//	int arr1[9] = { 1,2,3,4,5,6,7,8,9};
	//	int sz = sizeof(arr) / sizeof(arr[0]);
	//	int sz1 = sizeof(arr1) / sizeof(arr[0]);
	//	print(arr,sz);
	//	Init(arr, sz);
	//	printf("\n");
	//	reverse(arr1, sz1);
	//	return 0;
	//}
	//
	//#include<stdio.h>
	//void exchange(int arr1[10], int arr2[10],int sz)
	//{
	//	int i = 0;
	//	for (i = 0; i < sz; i++)
	//	{
	//		int tmp = arr1[i];
	//		arr1[i] = arr2[i];
	//		arr2[i] = tmp;
	//	}
	//	for (i = 0; i < sz; i++)
	//	{
	//		printf("%d ", arr1[i]);
	//	}
	//	printf("\n");
	//	for (i = 0; i < sz; i++)
	//	{
	//		printf("%d ", arr2[i]);
	//	}
	//}
	//int main()
	//{
	//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//	int arr2[10] = { 11,12,13,14,15,16,17,18,19,20 };
	//	int sz = sizeof(arr1) / sizeof(arr1[0]);
	//	exchange(arr1, arr2,sz);
	//	return 0;
	//}
	//
	//#include<stdio.h>
	//int main()
	//{
	//	int arr[] = { 1,2,3,4,5 };
	//	short* p = (short*)arr;
	//	int i = 0;
	//	for (i = 0; i < 7; i++)
	//	{
	//		*(p + i) = 0;
	//	}
	//	for (i = 0; i < 5; i++)
	//	{
	//		printf("%d ", arr[i]);
	//	}
	//	return 0;
	//}


		/*int i = 0;
		int count = 0;
		for (i = 0; i < 32; i++)
		{
			if (((a >> i) & 1) == 1)
				count++;
		}*/
		//#include<stdio.h>
		//int Count(int a)
		//{
		//	int count = 0;
		//	while (a != 0)
		//	{
		//		a = a & ((a - 1));
		//		count++;
		//	}
		//	return count;
		//}
		//int main()
		//{
		//	int a = 0;
		//	scanf_s("%d", &a);
		//	int count = Count(a);
		//	printf("%d", count);
		//	return 0;
		//}
		//int different_bit(int a, int b)
		//{
		//	int count = 0;
		//	int m = 0;
		//	m = a ^ b;
		//	while (m)
		//	{
		//		m = m & (m - 1);
		//		count++;
		//	}
		//	return count;
		//}
		//#include<stdio.h>
		//int main()
		//{
		//	int a, b;
		//	scanf_s("%d%d", &a, &b);
		//	int count = different_bit(a, b);
		//	printf("%d", count);
		//	return 0;
		//}
		//#include<stdio.h>
		//void print(int m)
		//{
		//	int i = 0;
		//	for (i = 30; i >=0; i -= 2)
		//	{
		//		int j = (m>>i) & 1;
		//		printf("%d ", j);
		//	}
		//	printf("\n");
		//	for (i = 31; i >=1; i -= 2)
		//	{
		//		int j = (m >> i) & 1;
		//		printf("%d ", j);
		//	}
		//}
		//
		//int main()
		//{
		//	int  m = 0;
		//	scanf_s("%d", &m);
		//	print(m);
		//	return 0;
		//}
		//#include<stdio.h>
		//void exchange(int m, int n)
		//{
		//	m = m ^ n;
		//	n = m ^ n;
		//	m = m ^ n;
		//	printf("m = %d\nn = %d", m, n);
		//}
		//int main()
		//{
		//	int m = 0;
		//	int n = 0;
		//	scanf_s("%d%d", &m, &n);
		//	exchange(m, n);
		//	return 0;
		//}

		//#include<stdio.h>
		//int main()
		//{
		//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
		//	int* p = arr;
		//	int sz = sizeof(arr) / sizeof(arr[0]);
		//	int i = 0;
		//	for (i = 0; i < sz; i++)
		//	{
		//		printf("%d ",*(p+i));
		//	}
		//	return 0;
		//}

		//#include<stdio.h>
		//void fun(int a)
		//{
		//	int i = 0;
		//	for (i = 0; i <= a; i++)
		//	{
		//		int j = 0;
		//		for (j = 1; j <=i; j++)
		//		{
		//			printf("%d*%d = %-3d ", i, j, i * j);
		//		}
		//		printf("\n");
		//	}
		//}
		//int main()
		//{
		//	int a = 0;
		//	scanf_s("%d", &a);
		//	fun(a);
		//	return 0;
		//}

		//#include<stdio.h>
		//void print(int a)
		//{
		//	if (a > 9)
		//	{
		//		print(a/10);
		//	}
		//	printf("%d ", a%10);
		//}
		//int main()
		//{
		//	int a = 0;
		//	scanf_s("%d", &a);
		//	print(a);
		//	return 0;
		//}

		//#include<stdio.h>
		//int jiecheng(n)
		//{
		//	int ret = 1;
		//	int i = 0;
		//	for (i= 1; i <= n; i++)
		//	{
		//		ret *= i;
		//	}
		//	return ret;
		//}
		//int main()
		//{
		//	int n = 0;
		//	scanf_s("%d", &n);
		//	int ret = jiecheng(n);
		//	printf("%d", ret);
		//	return 0;
		//}
		//
		//int get_ret(int n)
		//{
		//	if (n <= 1)
		//	{
		//		return 1;
		//	}
		//	return n * get_ret(n - 1);
		//}
		//#include<stdio.h>
		//int main()
		//{
		//	int n = 0;
		//	scanf_s("%d", &n);
		//	int ret = get_ret(n);
		//	printf("%d", ret);
		//	return 0;
		//}

		//#include<stdio.h>
		//#include<string.h>
		//int main()
		//{
		//	char arr[] = "abcdef";
		//	int i = 0;
		//	int left = 0;
		//	int right = strlen(arr) - 1;
		//	while(left<right)
		//	{
		//		int tmp = arr[left];
		//		arr[left] = arr[right];
		//		arr[right] = tmp;
		//		left++;
		//		right--;
		//	}
		//	for (i = 0;i < strlen(arr);i++)
		//	{
		//		printf("%c ", arr[i]);
		//	}
		//	return 0;
		//}4

		//#include<stdio.h>
		//int digit_sum(int n)
		//{
		//	if (n > 9)
		//	{
		//		return (n % 10) + digit_sum(n / 10);
		//	}
		//	else
		//	return n;
		//}
		//int main()
		//{
		//	int n = 0;
		//	scanf_s("%d", &n);
		//	int s = digit_sum(n);
		//	printf("%d", s);
		//	return 0;
		//}

		//double fun(int n,int k)
		//{
		//	if (k > 0)
		//		return n * fun(n, k - 1);
		//	else if (k == 0)
		//		return 1;
		//	else 
		//		return (1.0 /(fun(n, -k)));
		//}
		//#include<stdio.h>
		//int main()
		//{
		//	int n = 0;
		//	int k = 0;
		//	scanf_s("%d%d", &n,&k);
		//	double ret = fun(n,k);
		//	printf("%lf", ret);
		//	return 0;
		//}

		//int Fac(int n)
		//{
		//	if (n <= 2)
		//		return 1;
		//	else
		//		return Fac(n - 1) + Fac(n - 2);
		//}
		//#include<stdio.h>
		//int main()
		//{
		//	int n = 0;
		//	scanf_s("%d", &n);
		//	int s = Fac(n);
		//	printf("%d", s);
		//	return 0;
		//}

		//#include<stdio.h>
		//int main()
		//{
		//	int n ;
		//	scanf_s("%d", &n);
		//	int arr[10];
		//	int i = 0;
		//	for (i = 0; i < n; i++)
		//	{
		//		scanf_s("%d", &arr[i]);
		//	}
		//	int left = 0;
		//	int right = n - 1;
		//	while (left < right)
		//	{
		//		int tmp = arr[left];
		//		arr[left] = arr[right];
		//		arr[right] = tmp;
		//		left++;
		//		right--;
		//	}
		//	for (i = 0; i < n - 1; i++)
		//	{
		//		printf("%d ", arr[i]);
		//	}
		//	printf("%d", arr[n - 1]);
		//	return 0;
		//}

		//#include<stdio.h>
		//int main()
		//{
		//	int n = 0;
		//	int x = 0;
		//	scanf_s("%d%d", &n, &x);
		//	int i = 0;
		//	int arr[20] = { 0 };
		//	for (i = 0; i < n; i++)
		//	{
		//		scanf_s("%d", &arr[i]);
		//	}
		//	int flag = 1;
		//	for (i = 0; i < n; i++)
		//	{
		//		
		//		if (arr[i] == x)
		//		{
		//			printf("%d", i);
		//			flag = 0;
		//			break;
		//		}
		//	}
		//	if (flag == 1)
		//		printf("Not Found");
		//	return 0;
		//}

		//#include<stdio.h>
		//int main()
		//{
		//	int x = 0;
		//	int y = 0;
		//	int n = 0;
		//	scanf_s("%d", &n);
		//	int i = 0;
		//	int arr[10] = { 0 };
		//	for (i = 0; i < n; i++)
		//	{
		//		scanf_s("%d", &arr[i]);
		//	}
		//	int max, min;
		//	max = arr[0];
		//	min = arr[0];
		//	for (i = 1; i < n; i++)
		//	{
		//		if (arr[i] > max)
		//		{
		//			max = arr[i];
		//			x = i;
		//		}
		//		if (arr[i] < min)
		//		{
		//			min = arr[i];
		//			y = i;
		//		}
		//	}
		//	if (n > 2)
		//	{
		//		if (max != arr[0])
		//		{
		//			int tmp = arr[0];
		//			arr[0] = arr[y];
		//			arr[y] = tmp;
		//			tmp = arr[n - 1];
		//			arr[n - 1] = arr[x];
		//			arr[x] = tmp;
		//		}
		//		if (max == arr[0])
		//		{
		//			int tmp = arr[0];
		//			arr[0] = arr[y];
		//			arr[y] = arr[n - 1];
		//			arr[n - 1] = tmp;
		//		}
		//	}
		//	else
		//	{
		//		int tmp = arr[0];
		//		arr[0] = arr[y];
		//		arr[y] = tmp;
		//	}
		//	for (i = 0; i < n; i++)
		//	{
		//		printf("%d ", arr[i]);
		//	}
		//	return 0;
		//}

		//#include<stdio.h>
		//int main()
		//{
		//	int n = 0;
		//	scanf_s("%d", &n);
		//	int arr[1000] = { 0 };
		//	int i = 0;
		//	int count = 0;
		//	int max = 0;
		//	int x = 0;
		//	for (i = 0; i < n; i++)
		//	{
		//		scanf_s("%d", &arr[i]);
		//	}
		//	for (i = 0; i < n; i++)
		//	{
		//		int j = 0;
		//		count = 0;
		//		for (j = i; j < n; j++)
		//		{
		//			if (arr[i] == arr[j])
		//			{
		//				count++;
		//			}
		//		}
		//		if (count > max)
		//		{
		//			max = count;
		//			x = arr[i];
		//		}
		//	}
		//	printf("%d %d", x, max);
		//	return 0;
		//}

		//#include<stdio.h>
		//int main()
		//{
		//	int i = 0;
		//	int arr[10] = { 0 };
		//	for (i = 0; i < 10; i++)
		//	{
		//		scanf_s("%d",&arr[i]);
		//	}
		//	for (i = 0; i < 10; i++)
		//	{
		//		if (arr[i] % 2 == 0)
		//			arr[i] /= 2;
		//		else
		//			arr[i] *= 2;
		//	}
		//	for (i = 0; i < 10; i++)
		//	{
		//		printf("%4d", arr[i]);
		//	}
		//	return 0;
		//}

		//#include<stdio.h>
		//int main()
		//{
		//	int n = 0;
		//	scanf_s("%d", &n);
		//	int i = 0;
		//	int arr[10] = { 0 };
		//	for (i = 0; i < n; i++)
		//	{
		//		scanf_s("%d", &arr[i]);
		//	}
		//	for (i = 0; i < n - 1; i++)
		//	{
		//		int j = 0;
		//		int flag = 0;//假设该数组已经有序
		//		for (j = 0; j < n - 1 - i; j++)
		//		{
		//			if (arr[j] > arr[j + 1])
		//			{
		//				int tmp = arr[j];
		//				arr[j] = arr[j + 1];
		//				arr[j + 1] = tmp;
		//				flag = 1;//若flag==1；则说明交换步骤运行，则说明数组还不完全有序；
		//			}
		//		}
		//
		//		if (flag == 0)//若flag==0则说明上述交换步骤一次都没有运行，则说明数组已经有序；
		//			break;
		//	}
		//	for (i = 0; i < n; i++)
		//	{
		//		printf("%d ", arr[i]);
		//	}
		//	return 0;
		//}

		//typedef struct stu
		//{
		//	char name[10];
		//	short age[10];
		//	char tele[20];
		//	char sex[10];
		//
		//}stu;
		//#include<stdio.h>
		//int main()
		//{
		//	stu s = { "张三",20,"15982702043","男" };
		//	printf("%s", s.name );
		//	return 0;
		//}
		//#include<stdio.h>
		//#include<stdlib.h>
		//int main()
		//{
		//	int n = 0;
		//	scanf_s("%d", &n);
		//	int i = 0;
		//	int arr[10] = { 0 };
		//	for (i = 0; i < n; i++)
		//	{
		//		scanf_s("%d", &arr[i]);
		//	}
		//	int max = 0;
		//	int min = 0;
		//	for (i = 1; i < n; i++)
		//	{
		//		if (arr[i] < arr[min])
		//			min = i;
		//	}
		//	int tmp = arr[0];
		//	arr[0] = arr[min];
		//	arr[min] = tmp;
		//	for (i = 1; i < n; i++)
		//	{
		//		if (arr[i] > arr[max])
		//			max = i;
		//	}
		//	tmp = arr[n - 1];
		//	arr[n - 1] = arr[max];
		//	arr[max] = tmp;
		//	for (i = 0; i < n; i++)
		//	{
		//		printf("%d ", arr[i]);
		//	}
		//	system("pause");
		//	return 0;
		//}
		//
		//#include<stdio.h>
		//int main()
		//{
		//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
		//	int i = 0;
		//	for (i = 0; i <= 12; i++)
		//	{
		//		printf("%d ", i);
		//		arr[i] = 0;
		//	}
		//		return 0;
		//}
		//#include<stdio.h>
		//double m(double i)
		//{
		//	double n = 1;
		//		if (n<=i)
		//		return  1+m(n+1);
		//	
		//}
		//int main()
		//{
		//	double i = 0;
		//	scanf_s("%lf", &i);
		//	double ret = m(i);
		//	printf("%lf", ret);
		//	return 0;
		//}