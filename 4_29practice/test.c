//���Դ���
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[11] = { 1,2,3,4,5,6,7,8,9,10,11 };
//	
//	/*for (i = 0; i < 12; i++)
//	{
//		printf("hehe\n");
//		arr[i] = 0;
//	}*/
//	printf("%p\n", &arr[12]);
//	printf("%p", &i);
//	system("pause");
//	return 0;
//}

//ģ��strcpy

//void my_strcpy(char* arr1, char* arr2)
//{
//
//	while ((*arr2) != '\0')
//	{
//		*arr1 = *arr2;
//		arr1++;
//		arr2++;
//	}
//	*arr1 = *arr2;//'\0'
//
//}
//#include<string.h>
//void my_strcpy(char* arr1, char* arr2)//�Ż�
//{
//	if ((arr1 != NULL) &&( arr2 != NULL))
//	{
//		while (*arr1++ = *arr2++)
//		{
//			;
//		}
//
//	}
//	
//
//}
//#include<string.h>//�ٴ��Ż�
//#include<assert.h>
//char* my_strcpy(char* arr1, const char* arr2)//�Ż�
//{
//	char* ret = arr1;
//	assert(arr1!=NULL);//����:������ʽΪ�治�������ʽΪ�پͻᱨ��
//	assert(arr2 != NULL);
// //��arr2ָ����ַ���������arr1ָ��Ŀռ䣬����'\0'�ַ�
//	while (*arr1++ = *arr2++)
//	{
//		;
//	}
//	return ret;
//}
//#include<stdio.h>
////#include<string.h>
//int main()
//{
//	char arr1[20] = "#############";
//	char arr2[20] = "LOVE";
//	//strcpy(arr1, arr2);
//	//printf("%s  %s",arr1,  arr2);
//	printf("%s\n", my_strcpy(arr1, arr2) );
//	printf("%s", arr2);
//	return 0;
//}


//double fun(double n)//����1+1/2+...+1/n
//{
//	if (n > 1)
//	{
//		return 1 / n + fun(n - 1);
//	}
//	return 1;
//}
//#include<stdio.h>
//int main()
//{
//	double n = 0;
//	agin:
//	scanf_s("%lf", &n);
//	if (n <= 0)
//	{
//		printf("��������ȷ������\n");
//			goto agin;
//	}
//	double ret = fun(n);
//	printf("%lf", ret);
//	return 0;
//}

#include<assert.h>
int my_strlen(const char* str)//ʵ��strlen����
{
	assert(str != NULL);//��ָ֤�����Ч��
	int count = 0;
	while (*str++!= '\0')
	{
		count++;
	}
	return count;
}
#include<stdio.h>
int main()
{
	char arr[] = "abcdef";
	printf("%d\n", my_strlen(arr));
	return 0;
}