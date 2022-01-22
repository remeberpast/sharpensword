#define _CRT_SECURE_NO_WARNINGS 1
#include "contact.h"

//静态版
//void InitContact(contact* pc)
//{
//	pc->sz = 0;
//	memset(pc->date, 0, sizeof(pc->date));
//}

//动态版初始化
//在文件版中，初始化还要加载文件
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
	//加载文件
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
	//读文件（一个一个的读取）,创建一个变量用于接受
	Peoinfo tmp = { 0 };
	//fread函数读一个返回一，都两个返回2，没读到返回0
	while (fread(&tmp, sizeof(Peoinfo), 1, pf))
	{
		//判断通量是否够，不够就增容
		CheckCapacity(pc);
		pc->date[pc->sz] = tmp;
		pc->sz++;
	}
	//关闭文件
	fclose(pf);
	pf = NULL;
}

//静态版
//void AddContact(contact* pc)
//{
//	//判断通讯录是否满了
//	if (pc->sz == MAX_DATE)
//	{
//		printf("通讯录已满，无法添加\n");
//		return;
//	}
//	//增加一个人的信息
//	printf("请输入名字：");
//	scanf("%s", pc->date[pc->sz].name);
//	printf("请输入年龄：");
//	scanf("%d", &pc->date[pc->sz].age);
//	printf("请输入性别：");
//	scanf("%s", pc->date[pc->sz].sex);
//	printf("请输入电话号码：");
//	scanf("%s", pc->date[pc->sz].tele);
//	printf("请输入地址：");
//	scanf("%s", pc->date[pc->sz].addr);
//
//	pc->sz++;
//	printf("增加成功\n");
//}

//动态版增加联系人
void AddContact(contact* pc)
{
	//判断通讯录是否满了，满了就增加空间,
	CheckCapacity(pc);
	//增加一个人的信息
	printf("请输入名字：");
	scanf("%s", pc->date[pc->sz].name);
	printf("请输入年龄：");
	scanf("%d", &pc->date[pc->sz].age);
	printf("请输入性别：");
	scanf("%s", pc->date[pc->sz].sex);
	printf("请输入电话号码：");
	scanf("%s", pc->date[pc->sz].tele);
	printf("请输入地址：");
	scanf("%s", pc->date[pc->sz].addr);

	pc->sz++;
	printf("增加成功\n");
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
			printf("通讯录空间已满，增加空间失败\n");
			return;
		}
	}
}

void PrintContact(const contact* pc)
{
	int i = 0;
	//打印标题
	printf("%-12s %-8s %-8s %-15s %-30s\n", "名字", "年龄", "性别", "电话", "地址");
	//打印数据
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
	//使用static修饰让此函数只在此文件中使用，其他源文件中看不到
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
	//判断通讯录是否为空，不能删除
	if (pc->sz == 0)
	{
		printf("通讯录为空，不能删除\n");
		return;
	}
	//输入名字
	printf("请输入要删除的人的名字：");
	char name[MAX_NAME] = { 0 };
	scanf("%s", name);
	//删除一个人的前提是找到它，所以要先查找，因为其他地方也会用到查找函数，所以先写出查找函数
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("此人不存在\n");
		return;
	}
	//删除->把后面的元素往前挪一个位置
	int i = 0;
	for (i = pos;i < pc -> sz - 1;i++)
	{
		pc->date[i] = pc->date[i + 1];
	}

	pc->sz--;
	printf("删除成功\n");
}

void SearchContact(contact* pc)
{
	//查找（可能名字相同，仍需优化）
	printf("请输入要查找的人名字：");
	char name[MAX_NAME] = { 0 };
	scanf("%s", name);
	int pos = 0;
	pos = FindByName(pc, name);
	//找到，便打印数据
	if (pos == -1)
	{
		printf("查无此人\n");
		return;
	}
	else
	{
		printf("%-12s %-8s %-8s %-15s %-30s\n", "名字", "年龄", "性别", "电话", "地址");
		printf("%-12s %-8d %-8s %-15s %-30s\n", pc->date[pos].name,
												pc->date[pos].age,
												pc->date[pos].sex,
												pc->date[pos].tele,
												pc->date[pos].addr);
	}
}

void ModifyContact(contact* pc)
{
	printf("请输入要修改的人名字：");
	char name[MAX_NAME] = { 0 };
	scanf("%s", name);
	int pos = FindByName(pc, name);
	if (pos == -1)
	{
		printf("查无此人\n");
		return;
	}
	else
	{
		//修改一个人的信息
		printf("请输入名字：");
		scanf("%s", pc->date[pos].name);
		printf("请输入年龄：");
		scanf("%d", &pc->date[pos].age);
		printf("请输入性别：");
		scanf("%s", pc->date[pos].sex);
		printf("请输入电话号码：");
		scanf("%s", pc->date[pos].tele);
		printf("请输入地址：");
		scanf("%s", pc->date[pos].addr);

		printf("修改成功\n");
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
	//写文件
	int i = 0;
	for (i = 0;i < pc->sz;i++)
	{
		fwrite(pc->date + i, sizeof(Peoinfo), 1, pf);
	}
	//关闭文件
	fclose(pf);
	pf = NULL;
}