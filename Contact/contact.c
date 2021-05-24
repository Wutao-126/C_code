# define _CRT_SECURE_NO_WARNINGS
#include"contact.h"

void Initcontact(struct Contact* ps)
{
	memset(ps->date, 0, sizeof(ps->date));
	ps->size = 0;//设置通讯录最初只有0个元素
}

void Addcontact(struct Contact* ps)
{
	if (ps->size == MAX)
	{
		printf("通讯录已满，无法增加");
	}
	else
	{
		printf("请输入姓名:>");
		scanf("%s", ps->date[ps->size].name);
		printf("请输入电话:>");
		scanf("%s", ps->date[ps->size].tele);
		printf("请输入姓别:>");
		scanf("%s", ps->date[ps->size].sex);
		printf("请输入年龄:>");
		scanf("%d", &(ps->date[ps->size].age));
		printf("请输入住址:>");
		scanf("%s", ps->date[ps->size].addr);

		ps->size++;
		printf("添加成功\n");
	}
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("通讯录为空\n");
	}
	else
	{
		int i = 0;
		//标题
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "住址");
		//数据
		for (i = 0; i < ps->size; i++)
		{
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->date[i].name,
				ps->date[i].age,
				ps->date[i].sex,
				ps->date[i].tele,
				ps->date[i].addr);
		}
	}
}

static int FindbyName(struct Contact* ps, char* name[MAX_NAME])
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->date[i].name, name))
		{
			return i;
		}
	}
	return -1;
}


void Delcontact( struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要删除人的名字:>");
	scanf("%s", name);
	//1.查找要删除的人的位置
	int pos = FindbyName(ps, name);
	//找到了返回名字所在元素的下标
	//找不到返回-1；
	if (pos==-1)
	{
		printf("该联系人不存在\n");
	}
	//2.删除
	else
	{
		int j = 0;
		for (j = pos; pos < ps->size-1; j++)
		{
			ps->date[j] = ps->date[j + 1];
		}
		ps->size--;
		printf("删除成功\n");
	}
}


void Search(const struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入要查找人的名字:>");
	scanf("%s", name);
	int pos = FindbyName(ps, name);
	if (pos==-1)
	{
		printf("无此联系人");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "姓名", "年龄", "性别", "电话", "住址");
			printf("%-20s\t%-4d\t%-5s\t%-12s\t%-20s\n",
				ps->date[pos].name,
				ps->date[pos].age,
				ps->date[pos].sex,
				ps->date[pos].tele,
				ps->date[pos].addr);
	}
}


void ModifyContact(struct Contact* ps)
{
	char name[MAX_NAME];
	printf("请输入需要修改的联系人的名字:>");
	scanf("%s", name);
	int pos = FindbyName(ps, name);
	if (pos == -1)
	{
		printf("无此联系人");
	}
	else
	{
		printf("请输入姓名:>");
		scanf("%s", ps->date[pos].name);
		printf("请输入电话:>");
		scanf("%s", ps->date[pos].tele);
		printf("请输入姓别:>");
		scanf("%s", ps->date[pos].sex);
		printf("请输入年龄:>");
		scanf("%d", &(ps->date[pos].age));
		printf("请输入住址:>");
		scanf("%s", ps->date[pos].addr);

		printf("修改成功");
	}
}


int com_name(const void* a, const void* b)
{
	return strcmp(((struct Contact*)a)->date ->name , ((struct Contact*)b)->date ->name );
}
void SortContact(const struct Contact* ps)
{
	qsort(ps->date, ps->size, sizeof(ps->date[0]), com_name);
}