# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
//#define a int[10]
//int main()
//{
//	//a[10] a[10];
//	 //a[10] a;
//	//int a[10];
//	//int a;
//	//a b[10];
//	 //a b;
//	//a* b[10];
//	//a* b;
//	printf("/*����*/#/*һ��*/define/*�Ϸ���*/ID/*Ԥ����*/replacement/*ָ*/list/*��*/");
//	//����һ���Ϸ���\
//	����һ���Ϸ��ĵ���ע��\
//	k
//	return 0;
//}


//int main()
//{
//	 //���ڴ�����10�����οռ䣻
//	int *p=(int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		//��ӡ����ԭ��
//		printf("%s", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p+i));
//		}
//	}
//	//����̬����Ŀռ䲻��ʹ�õ�ʱ��Ӧ�û�������ϵͳ
//	free(p);
//	p = NULL;
//	return 0;
//
//}


//int main()
//{
//	//calloc��������ÿ��Ԫ�س�ʼ��Ϊ0������Ϊ������Ԫ�ظ�����ÿ��Ԫ�ش�С���ֽڣ���
//	int* p = (int*)calloc(10, sizeof(int));
//	
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p +i));
//		}
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}


int main()
{
	int* p = (int*)malloc(20);
	if (p == NULL)
	{
		printf("%s\n", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 5; i++)
		{
			*(p + i) = i;
		}
	}
	//��������20�ֽڲ�������ʹ��
	//ϣ�������ܹ���40���ֽڵĿռ�
	//����Ϳ���ʹ��realloc��������̬�����ڴ�
	//
	//reallocʹ�õ�ע�����
	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
	//2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ�
	//�ڴ����򿪱�һ����������Ŀռ䣬���Ұ�ԭ���ڴ��е����ݿ����������ͷžɵ��ڴ�ռ�
	//��󷵻��¿����ڴ�ռ�ĵ�ַ
	//3.����һ���µı���������realloc�����ķ���ֵ

	int*ptr = (int*)realloc(p, 40);
	if (ptr != NULL)
	{
		p = ptr;
		int i = 0;
		for (i = 5; i < 10; i++)
		{
			*(p + i) = i;
		}
		for (i = 0; i < 10; i++)
		{
			printf("%d ", *(p + i));
		}
	}
	//�ͷſռ�
	free(p);
	p = NULL;
	return 0;
}


int main()
{
	int *p= (int*)malloc(40);
	if (p == NULL)
	{
		//һ��Ҫ�ж��ڴ��Ƿ񿪱ٳɹ�
		printf("%s", strerror(errno));
	}
	else
	{
		int i = 0;
		for (i = 0; i < 10; i++)//һ��ע�⶯̬�ڴ���ʲ���Խ��
		{
			*(p + i) = i;
		}

	}
	//�ڴ�һ��Ҫ�ͷţ��Ҳ��ܶԷǶ�̬�����ڴ�Ŀռ�����ͷ�
	free(p);
	p = NULL;
	return 0;
}

//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int arr[100] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int max = 0;
//	int min = 0;
//	for (i = 0; i < n; i++)
//	{
//		if (arr[max] < arr[i])
//			max = i;
//		if (arr[min]>= arr[i])
//			min = i;
//	}
//	arr[max] = 0;
//	arr[min] = 0;
//	int sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		sum += arr[i];
//	}
//	printf("%d\n",sum / (n - 2));
//	return 0;
//
//}