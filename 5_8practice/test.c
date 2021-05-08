# define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//Í¨ÓÃÃ°ÅÝÅÅÐò
struct stu
{
	char name[10];
	int age;
	int score;
};
cmp_int(const void*e1,const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
cmp_name(const void* e1, const void* e2)
{
	return strcmp(((struct stu*)e1)->name, ((struct stu*)e2)->name);
}
cmp_age(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
}
cmp_score(const void* e1, const void* e2)
{
	return ((struct stu*)e1)->score  - ((struct stu*)e2)->score ;
}
void swap(char*buf1,char*buf2,int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void*base,int sz,int width,int (*cmp)(void* e1,void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width )> 0)
			{
				swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
			}
		}
	}
}
void test()
{
	int arr[10] = { 2,3,8,9,10,1,4,5,6,7 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

void test2()
{
	struct stu s[3] = { {"xiaoming",18,100},{"lihua",20,99},{"zhangsan",19,95} };
	int sz = sizeof(s) / sizeof(s[0]);
	bubble_sort(s, sz, sizeof(s[0]), cmp_score);
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%s %d %d\n",s[i].name ,s[i].age ,s[i].score );
	}
}
int main()

{
	test();
	test2();
	return 0;
}