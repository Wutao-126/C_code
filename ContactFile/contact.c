# define _CRT_SECURE_NO_WARNINGS
#include"contact.h"

void Initcontact(struct Contact* ps)
{
	ps->date = (struct PeoInfo*)malloc(DEFAULT_SZ * sizeof(struct PeoInfo));
	if (ps->date == NULL)
	{
		return ;
	}
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
	//���ļ����Ѿ���ŵ�ͨѶ¼��Ϣ���ص�ͨѶ¼����
	LoadContact(ps);
}
void CheckCapacity(struct Contact* ps);
void LoadContact(Contact* ps)
{
	PeoInfo tmp = { 0 };
	FILE* pfRead = fopen("contact.dat", "rb");
	if (pfRead == NULL)
	{
		printf("LoadContact:%s\n", strerror(errno));
		return;
	}
	//��ȡ�ļ���ŵ�ͨѶ¼��
	while(fread(&tmp, sizeof(PeoInfo), 1, pfRead))
	{
		CheckCapacity(ps);
		ps->date[ps->size] = tmp;
		ps->size++;
	}
	fclose(pfRead);
	pfRead = NULL;
}
void CheckCapacity(struct Contact* ps)
{
	if (ps->size == ps->capacity )
	{
		struct PeoInfo* ptr = (struct PeoInfo*)realloc(ps->date, (ps->capacity + 2) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			ps->date  = ptr;
			ps->capacity += 2;
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
}
void Addcontact(struct Contact* ps)
{
	//��⵱ǰͨѶ¼������
	//1.������˾����ӿռ�
	//2.����������Ͳ���
	CheckCapacity(ps);
	//��������
		printf("����������:>");
		scanf("%s", ps->date[ps->size].name);
		printf("������绰:>");
		scanf("%s", ps->date[ps->size].tele);
		printf("�������ձ�:>");
		scanf("%s", ps->date[ps->size].sex);
		printf("����������:>");
		scanf("%d", &(ps->date[ps->size].age));
		printf("������סַ:>");
		scanf("%s", ps->date[ps->size].addr);

		ps->size++;
		printf("��ӳɹ�\n");
}

void ShowContact(const struct Contact* ps)
{
	if (ps->size == 0)
	{
		printf("ͨѶ¼Ϊ��\n");
	}
	else
	{
		int i = 0;
		//����
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "סַ");
		//����
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

static int FindbyName(struct Contact* ps, char* name)
{
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		if (0 == strcmp(ps->date[i].name, name))
		{
			return 1;
		}
	}
	return -1;
}


void Delcontact( struct Contact* ps)
{
	int pos = 0;
	char name[MAX_NAME];
	printf("������Ҫɾ���˵�����:>");
	scanf("%s", name);
	//1.����Ҫɾ�����˵�λ��
	 pos = FindbyName(ps, name);
	//�ҵ��˷�����������Ԫ�ص��±�
	//�Ҳ�������-1��
	if (pos==-1)
	{
		printf("����ϵ�˲�����\n");
	}
	//2.ɾ��
	else
	{
		int j = 0;
		for (j = pos; pos < ps->size-1; j++)
		{
			ps->date[j] = ps->date[j + 1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}
}


void Search(const struct Contact* ps)
{
	int pos = 0;
	char name[MAX_NAME];
	printf("������Ҫ�����˵�����:>");
	scanf("%s", name);
	pos = FindbyName( ps, name);
	if (pos==-1)
	{
		printf("�޴���ϵ��\n");
	}
	else
	{
		printf("%-20s\t%-4s\t%-5s\t%-12s\t%-20s\n", "����", "����", "�Ա�", "�绰", "סַ");
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
	printf("��������Ҫ�޸ĵ���ϵ�˵�����:>");
	scanf("%s", name);
	int pos = FindbyName(ps, name);
	if (pos == -1)
	{
		printf("�޴���ϵ��");
	}
	else
	{
		printf("����������:>");
		scanf("%s", ps->date[pos].name);
		printf("������绰:>");
		scanf("%s", ps->date[pos].tele);
		printf("�������ձ�:>");
		scanf("%s", ps->date[pos].sex);
		printf("����������:>");
		scanf("%d", &(ps->date[pos].age));
		printf("������סַ:>");
		scanf("%s", ps->date[pos].addr);

		printf("�޸ĳɹ�");
	}
}


int com_name(const void* a, const void* b)
{
	return strcmp(((PeoInfo*)a)->name , ((PeoInfo*)b)->name );
}
void SortContact(const struct Contact* ps)
{
	qsort(ps->date, ps->size, sizeof(ps->date[0]), com_name);
}

void DestroyContact(Contact* ps)
{
	free(ps->date);
	ps->date = NULL;
}


void SaveContact(Contact* ps)
{
	FILE* pfWrite = fopen("contact.dat", "wb");
	if (pfWrite == NULL)
	{
		printf("SaveContact:%s", strerror(errno));
		return ;
	}
	//дͨѶ¼���е����ݵ��ļ���
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		fwrite(&(ps->date[i]), sizeof(PeoInfo), 1, pfWrite);
	}
	fclose(pfWrite);
	pfWrite = NULL;
	printf("����ɹ�\n");
}



void EmptyContact(Contact* ps)
{
	memset(ps->date, 0, (ps->capacity) * (sizeof(PeoInfo)));
	ps->size = 0;
	ps->capacity = DEFAULT_SZ;
	printf("��ʽ���ɹ�\n");
}