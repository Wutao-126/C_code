# define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//struct S
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	struct S s = { "张三",20,55.6 };
//	struct S tmp = { 0 };
//	FILE* pf = fopen("test.txt", "rb");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	二进制的形式写文件
//	fwrite(&s, sizeof(struct S), 1, pf);
//	二进制的形式读文件
//	fread(&tmp, sizeof(struct S), 1, pf);
//	printf("%s %d %lf\n", tmp.name, tmp.age, tmp.score);
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


enum aa 
{ a = 5, 
  b,
  c 
}bb; 
int main()
{
	bb = (enum aa)5;
	return 0;
}