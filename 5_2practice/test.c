//#include<stdio.h>
//int main()
//{
//	int i = -20;
//	unsigned int j = 10;
//	printf("%u\n",  i+j);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	unsigned int i;//i��Ϊ��
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);//��ѭ��
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char a[1000];//char�ķ�Χ-128��127����charһ�����Դ�255���ַ���
//	int i = 0;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));//������0ʱֹͣ
//
//	 char b = -129;
//	printf("%d", b);
//	return 0;
//}

#include<stdio.h>
unsigned char i = 0;
int main()
{
	for (i = 0; i <= 255; i++)//unsigned char ����0-255֮�� ���������������ѭ����
	{
		printf("Hello World!\n");
	}
	return 0;
}