# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<errno.h>
//int main()
//{
//    int i = 0;
//    for (i = 0; i < 2; i++)
//    {
//        printf("     **     \n");
//    }
//    for (i = 0; i < 2; i++)
//    {
//        printf("************\n");
//    }
//    for (i = 0; i < 2; i++)
//    {
//        printf("    *  *     \n");
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int a = 1234;
//    printf("%#0o %#0X", a, a);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int a = 0XABCDEF;
//    printf("%15d", a);
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    printf("\n%d", printf("Hello world!"));
//    return 0;
//}

//
//#include<string.h>
//#include<errno.h>
//int main()
//{
//	//���ļ� test.txt
//	//���·��
//	//..��ʾ��һ��·��
//	//.��ʾ��ǰ·��
//	//fopen("../../test.txt", "r");
//	
//	
//	//����·��
//	//fopen("E:\Code(githup)\C_code\5_30practice\\test.txt", "r");
//
//	FILE *pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		//��ʧ��
//		printf("%s", strerror(errno));
//		return 0;
//	}
//	//�򿪳ɹ�
//	//���ļ�
//	//�ر��ļ�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//
//
//int main()
//{
//	FILE*pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//д�ļ�
//	fputc('b', pf);
//	fputc('i', pf);
//	fputc('t', pf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//
//
//
//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	//���ļ�
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//	printf("%c", fgetc(pf));
//	//�ر�
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//
//
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	fgets(buf, 1024, pf);//һ��ֻ�ܶ�ȡһ��
//	//printf("%s", buf);
//	puts(buf);
//	fgets(buf, 1024, pf);
//	//printf("%s", buf);
//	puts(buf);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//
//
//int main()
//{
//	char buf[1024] = { 0 };
//	FILE* pf = fopen("test.txt", "w");
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//		return 0;
//	}
//	
//	fputs("hello world", pf);//�Ὣԭ��������ɾ��
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//
//int main()
//{
//	//�Ӽ����϶�ȡһ����Ϣ
//	char buf[1024] = { 0 };
//	fgets(buf, 1024, stdin);//�ӱ�׼��������ȡ=gets
//	fputs(buf, stdout);//�������׼�����=puts
//	return 0;
//}


//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,3.14f,"bit" };
//	FILE* pf = fopen("tes.txt", "w");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//��ʽ������ʽд�ļ�
//	fprintf(pf,"%d %f %s",s.n ,s.score ,s.arr );
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 0 };
//	FILE* pf = fopen("tes.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//��ʽ������ʽ��������
//	fscanf(pf, "%d %f %s", &(s.n), &(s.score), s.arr);
//	printf("%d %f %s", s.n, s.score, s.arr);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}
//
//
//
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 0 };
//	//��ʽ������ʽ��������
//	fscanf(stdin, "%d %f %s", &(s.n), &(s.score), s.arr);
//	fprintf(stdout,"%d %f %s", s.n, s.score, s.arr);
//
//	return 0;
//}


//
//struct S
//{
//	int n;
//	float score;
//	char arr[10];
//};
//
//int main()
//{
//	struct S s = { 100,3.14f,"abcdef" };
//	struct S tmp = { 0 };
//	char buf[1024] = { 0 };
//	//�Ѹ�ʽ��������ת�����ַ������浽buf
//	sprintf(buf, "%d %f %s",s.n ,s.score ,s.arr  );
//	//printf("%s", buf);
//	//��buf�ж�ȡ��ʽ�������ݵ� tmp
//	sscanf(buf, "%d %f %s", &(tmp.n), &(tmp.score), tmp.arr);
//	printf("%d %f %s\n", tmp.n, tmp.score, tmp.arr);
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 1;
//	int d = 2;
//	a = b = c = d = 1;
//	printf("%d %d %d %d", a, b, c,d);
//	return 0;
//}
//
//#define EPSINON 0.00001
//int main()
//{
//	float a = 0.000000022;
//	if (a >= -EPSINON && a <= EPSINON)
//	{
//		printf("1");
//	}
//	else
//	{
//		printf("0");
//	}
//	return 0;
//}

//int main()
//{
//    char c[20] = { 0 };
//    float x = 0;
//    float y = 0;
//    float z = 0;
//    scanf("%s;%f,%f,%f", c, &x, &y, &z);
//    printf("The each subject score of  No. %s  %.2f, %.2f, %.2f.", c, x, y, z);
//    return 0;
//}



int main()
{
    int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
    int i = 0;
    for (i = 0; i < 12; i++)
    {
        printf("%c", arr[i]);
    }
    return 0;
}