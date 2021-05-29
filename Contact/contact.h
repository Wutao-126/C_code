
//#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX 5
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFAULT_SZ 3

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
typedef struct PeoInfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
	int age;
}PeoInfo;

//ͨѶ¼����
typedef struct Contact
{
	int size;//��¼��ǰ�Ѿ��е�Ԫ�ظ���
	struct PeoInfo *date;//
	int capacity;//��ǰͨѶ¼���������
}Contact;


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

//����ͨѶ¼--�ͷŶ�̬���ٵ��ڴ�
void DestroyContact(Contact* ps);