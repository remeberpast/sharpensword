#pragma once

//���Ͷ������ͷ�ļ��У���Ϊ������ͬ�ļ��������õ������Է���ͷ�ļ��У��������ļ�Ӧ��ͷ�ļ�����
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define MAX_DATE 100
#define INC_SZ 5

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct Peoinfo
{
	char name[MAX_NAME];
	char sex[MAX_SEX];
	int age;
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}Peoinfo;

//��̬�汾
//typedef struct contact
//{
//	Peoinfo date[MAX_DATE];
//	int sz;//sz���ڼ�¼ͨѶ¼��ǰͨѶ¼�ж����ˣ��Ա���������
//}contact;

//��̬�汾
typedef struct contact
{
	Peoinfo* date;
	int sz;//sz���ڼ�¼ͨѶ¼��ǰͨѶ¼�ж����ˣ��Ա���������
	int capacity;
}contact;

//��ʼ��ͨѶ¼
void InitContact(contact* pc);

//������ϵ��
void AddContact(contact* pc);

//��ӡ��Ϣ,��Ϊ�����޸ģ���const�����Ǻ�������ȫ
void PrintContact(const contact* pc);

//ɾ����ϵ��
void DelContact(contact* pc);

//������ϵ��
void SearchContact(contact* pc);

//�޸���ϵ��
void ModifyContact(contact* pc);

//����ϵ������
void SortContact(contact* pc);

//�˳�ʱ����ͨѶ¼
void DestroyContact(contact* pc);

//����ͨѶ¼��Ϣ���ļ�
void SaveContact(contact* pc);

//�����ļ�
void LoadContact(contact* pc);

//�����������������
void CheckCapacity(contact* pc);

//ͨ�����ֲ���
int FindByName(contact* pc, char name[]);