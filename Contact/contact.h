
#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};
struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
	int age;
};

//ͨѶ¼����
struct Contact
{
	struct PeoInfo date[MAX];//���1000����Ϣ
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
};


//��������
void Initcontact(struct Contact* ps);

//����һ���˵���Ϣ��ͨѶ¼
void Addcontact(struct Contact*ps);

void ShowContact(const struct Contact* ps);

//ɾ��ָ������ϵ��
void Delcontact( struct Contact* ps);

//����ָ����ϵ��
void Search(const struct Contact* ps);

//�޸���ϵ����Ϣ
void ModifyContact(struct Contact* ps);

//����
void SortContact(const struct Contact* ps);