# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int sort1(int* arr)//ð�����򣬽�������
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
//	//��������ֱ�ӷ��ؽ������к���ɵ�����
//}
//int sort2(int* arr)
//{
//	return (arr[3] * 1000 + arr[2] * 100 + arr[1] * 10 + arr[0] * 1);
//	//����ǰ���Ѿ����й��������У�����Ϊ�˼������ֱ�ӽ���Ӧÿһλ��ת����
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[4] = { 0 };
//	int i = 0, m = n;
//	//��Ϊ���滹���õ�n���������������ٶ���һ������m�����n��ֵ
//	for (i = 0; i < 4; i++)
//	{
//		arr[i] = m % 10;
//		//��arr����洢��λ��n��ÿһλ
//		m /= 10;
//	}
//	if (arr[0] == arr[1] && arr[1] == arr[2] && arr[2] == arr[3])
//	{
//		//�����ж�ÿһλ�����Ƿ���ͬ
//		if (arr[0] != 0)
//			printf("%d - %d = 0000\n", n, n);
//		else
//			printf("0000-0000 = 0000\n");
//	}
//	else
//	{
//		int j = 0;
//		for (j = 0;; j++)
//		{//��m�����ÿһ�ε��������м��������еõ���ֵ
//			m = sort1(arr) - sort2(arr);
//			if (sort2(arr) < 1000 && sort2(arr) >= 100)
//			{
//				//����ֻ����λ���������������ĿҪ��Ӧ����ǰ�油0
//				if (m < 1000)
//					printf("%d - 0%d = 0%d\n", sort1(arr), sort2(arr), m);
//				//m����ֻ����λ������������ҲҪ��ǰ�油0
//				else
//					printf("%0d - %0d = %0d\n", sort1(arr), sort2(arr), m);
//			}
//			else if (sort2(arr) < 100 && sort2(arr) >= 10)
//			{
//				//����ֻ����λλ�������
//				if (m < 1000)
//					printf("%d - 00%d = 0%d\n", sort1(arr), sort2(arr), m);
//				else
//					printf("%d - 00%d = %d\n", sort1(arr), sort2(arr), m);
//			}
//			else if (sort2(arr) < 10)
//			{
//				//����ֻ��һλλ�������
//				if (m < 1000)
//					printf("%d - 000%d = 0%d\n", sort1(arr), sort2(arr), m);
//				else
//					printf("%d - 000%d = %d\n", sort1(arr), sort2(arr), m);
//			}
//			else
//			{
//				//����Ǽ�������λ��
//				if (m < 1000)
//					printf("%d - %d = 0%d\n", sort1(arr), sort2(arr), m);
//				else
//					printf("%d - %d = %d\n", sort1(arr), sort2(arr), m);
//			}
//			if (m == 6174)
//				break;
//			//��m=6174ʱ���˳�ѭ��
//			for (i = 0; i < 4; i++)
//			{
//				//�����ظ�����Ĳ��裬���õ���m��ÿһλ��������arr��
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
//	char name[12];//����
//	char id[12];//ѧ��
//	int  sco;//�ɼ�
//};
//int compare_sco(const void* a, const void* b)
//{
//	return ((struct stu*)b)->sco - ((struct stu*)a)->sco;
//	//�ɼ��Ƚ�
//}
//void test()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	struct stu s[1000] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		//����ÿ���˵���Ϣ
//		scanf("%s", s[i].name);
//		scanf("%s", s[i].id);
//		scanf("%d", &s[i].sco);
//	}
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), compare_sco);
//	//ʹ�ÿ��������������ɼ���������
//	printf("%s %s\n%s %s", s[0].name, s[0].id, s[n - 1].name, s[n - 1].id);
//	//����ɼ���ߺ���͵�ѧ����������ѧ��
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