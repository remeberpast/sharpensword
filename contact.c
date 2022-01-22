#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//��̬��
//void InitContact(contact* pc)
//{
//	pc->sz = 0;
//	memset(pc->date, 0, sizeof(pc->date));
//}

//��̬���ʼ��
//���ļ����У���ʼ����Ҫ�����ļ�
void InitContact(contact* pc)
{
	pc->date = (Peoinfo*)malloc(MAX_DATE * sizeof(Peoinfo));
	if (pc->date == NULL)
	{
		perror("Initcontact");
		return;
	}
	pc->sz = 0;
	memset(pc->date, 0, sizeof(pc->date));
	pc->capacity = MAX_DATE;
	//�����ļ�
	LoadContact(pc);
}

void LoadContact(contact* pc)
{
	FILE* pf = fopen("contact.dat", "r");
	if (pf == NULL)
	{
		perror("LoadContact");
		return;
	}
	//���ļ���һ��һ���Ķ�ȡ��,����һ���������ڽ���
	Peoinfo tmp = { 0 };
	//fread������һ������һ������������2��û��������0
	while (fread(&tmp, sizeof(Peoinfo), 1, pf))
	{
		//�ж�ͨ���Ƿ񹻣�����������
		CheckCapacity(pc);
		pc->date[pc->sz] = tmp;
		pc->sz++;
	}
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
}

//��̬��
//void AddContact(contact* pc)
//{
//	//�ж�ͨѶ¼�Ƿ�����
//	if (pc->sz == MAX_DATE)
//	{
//		printf("ͨѶ¼�������޷����\n");
//		return;
//	}
//	//����һ���˵���Ϣ
//	printf("���������֣�");
//	scanf("%s", pc->date[pc->sz].name);
//	printf("���������䣺");
//	scanf("%d", &pc->date[pc->sz].age);
//	printf("�������Ա�");
//	scanf("%s", pc->date[pc->sz].sex);
//	printf("������绰���룺");
//	scanf("%s", pc->date[pc->sz].tele);
//	printf("�������ַ��");
//	scanf("%s", pc->date[pc->sz].addr);
//
//	pc->sz++;
//	printf("���ӳɹ�\n");
//}

//��̬��������ϵ��
void AddContact(contact* pc)
{
	//�ж�ͨѶ¼�Ƿ����ˣ����˾����ӿռ�,
	CheckCapacity(pc);
	//����һ���˵���Ϣ
	printf("���������֣�");
	scanf("%s", pc->date[pc->sz].name);
	printf("���������䣺");
	scanf("%d", &pc->date[pc->sz].age);
	printf("�������Ա�");
	scanf("%s", pc->date[pc->sz].sex);
	printf("������绰���룺");
	scanf("%s", pc->date[pc->sz].tele);
	printf("�������ַ��");
	scanf("%s", pc->date[pc->sz].addr);

	pc->sz++;
	printf("���ӳɹ�\n");
}

void CheckCapacity(contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		Peoinfo* ptr = (Peoinfo*)realloc(pc->date, (pc->capacity + INC_SZ) * sizeof(Peoinfo));
		if (ptr != NULL)
		{
			pc->date = ptr;
			pc->capacity += INC_SZ;
		}
		else
		{
			perror("AddContact");
			printf("ͨѶ¼�ռ����������ӿռ�ʧ��\n");
			return;
		}
	}
}

void PrintContact(const contact* pc)
{
	int i = 0;
	//��ӡ����
	printf("%-12s %-8s %-8s %-15s %-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	//��ӡ����
	for (i = 0;i < pc->sz;i++)
	{
		printf("%-12s %-8d %-8s %-15s %-30s\n", pc->date[i].name,
												pc->date[i].age,
												pc->date[i].sex,
												pc->date[i].tele,
												pc->date[i].addr);
	}
}

static int FindByName(contact* pc, char name[])
{
	//ʹ��static�����ô˺���ֻ�ڴ��ļ���ʹ�ã�����Դ�ļ��п�����
	static int i = 0;
	for (i = 0;i < pc->sz;i++)
	{
		if (strcmp(name, pc->date[i].name) == 0)
		{
			return i;
		}
	}
	return -1;
}

void DelContact(contact* pc)
{
	//�ж�ͨѶ¼�Ƿ�Ϊ�գ�����ɾ��
	if (pc->sz == 0)
	{
		printf("ͨѶ¼Ϊ�գ�����ɾ��\n");
		return;
	}
	//��������
	printf("������Ҫɾ�����˵����֣�");
	char name[MAX_NAME] = { 0 };
	scanf("%s", name);
	//ɾ��һ���˵�ǰ�����ҵ���������Ҫ�Ȳ��ң���Ϊ�����ط�Ҳ���õ����Һ�����������д�����Һ���
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("���˲�����\n");
		return;
	}
	//ɾ��->�Ѻ����Ԫ����ǰŲһ��λ��
	int i = 0;
	for (i = pos;i < pc -> sz - 1;i++)
	{
		pc->date[i] = pc->date[i + 1];
	}

	pc->sz--;
	printf("ɾ���ɹ�\n");
}

void SearchContact(contact* pc)
{
	//���ң�����������ͬ�������Ż���
	printf("������Ҫ���ҵ������֣�");
	char name[MAX_NAME] = { 0 };
	scanf("%s", name);
	int pos = 0;
	pos = FindByName(pc, name);
	//�ҵ������ӡ����
	if (pos == -1)
	{
		printf("���޴���\n");
		return;
	}
	else
	{
		printf("%-12s %-8s %-8s %-15s %-30s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-12s %-8d %-8s %-15s %-30s\n", pc->date[pos].name,
												pc->date[pos].age,
												pc->date[pos].sex,
												pc->date[pos].tele,
												pc->date[pos].addr);
	}
}

void ModifyContact(contact* pc)
{
	printf("������Ҫ�޸ĵ������֣�");
	char name[MAX_NAME] = { 0 };
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("���޴���\n");
		return;
	}
	else
	{
		//�޸�һ���˵���Ϣ
		printf("���������֣�");
		scanf("%s", pc->date[pos].name);
		printf("���������䣺");
		scanf("%d", &pc->date[pos].age);
		printf("�������Ա�");
		scanf("%s", pc->date[pos].sex);
		printf("������绰���룺");
		scanf("%s", pc->date[pos].tele);
		printf("�������ַ��");
		scanf("%s", pc->date[pos].addr);

		printf("�޸ĳɹ�\n");
	}
}

void DestroyContact(contact* pc)
{
	free(pc->date);
	pc->date = NULL;
	pc->sz = 0;
	pc->capacity = MAX_DATE;
}

int cmp(void* e1, void* e2)
{
	return strcmp(((Peoinfo*)e1)->name, ((Peoinfo*)e2)->name);
}

void SortContact(contact* pc)
{
	qsort(pc->date,
		pc->sz,
		sizeof(pc->date[0]), 
		cmp);
}

void SaveContact(contact* pc)
{
	FILE* pf = fopen("contact.dat", "w");
	if (pf == NULL)
	{
		perror("SaveContact");
		return;
	}
	//д�ļ�
	int i = 0;
	for (i = 0;i < pc->sz;i++)
	{
		fwrite(pc->date + i, sizeof(Peoinfo), 1, pf);
	}
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
}