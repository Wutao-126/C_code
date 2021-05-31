
//#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFAULT_SZ 3

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE,
	EMPTY
};
typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
	int age;
}PeoInfo;

//通讯录类型
typedef struct Contact
{
	int size;//记录当前已经有的元素个数
	struct PeoInfo *date;//
	int capacity;//当前通讯录的最大容量
}Contact;


//声明函数
void Initcontact(struct Contact* ps);

//增加一个人的信息到通讯录
void Addcontact(struct Contact*ps);

void ShowContact(const struct Contact* ps);

//删除指定的联系人
void Delcontact( struct Contact* ps);

//查找指定联系人
void Search(const struct Contact* ps);

//修改联系人信息
void ModifyContact(struct Contact* ps);

//排序
void SortContact(const struct Contact* ps);

//销毁通讯录--释放动态开辟的内存
void DestroyContact(Contact* ps);

//保存文件
void SaveContact(Contact* ps);


//加载文件中的信息到通讯录
void LoadContact(Contact* ps);

//一键删除所有信息
void EmptyContact(Contact* ps);