#define _CRT_SECURE_NO_WARNINGS 1
//ͨѶ¼��(��̬�����汾)
// �ڴ治����ʱ������
//1.���Դ��1000����Ϣ
//2.�������������䡢�Ա𡢵�ַ���绰
//3.���Բ��ҡ���ɾ�������޸�
//�汾3��ʹ���ļ���ͨѶ¼�˳���Ҳ�ܼ�ס����

#include "contact.h"

void menu()
{
	printf("*****************************************\n");
	printf("*****1.������ϵ�� ***** 2.ɾȥ��ϵ��*****\n");
	printf("*****3.������ϵ�� ***** 4.�޸���Ϣ  *****\n");
	printf("*****5.��ϵ������ ***** 6.��ӡ��Ϣ  *****\n");
	printf("*****0.�˳������� ***** *****************\n");
	printf("*****************************************\n");
}

//��ѡ���Ϊö�����ͷ������
enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SORT,
	PRINT
};
int main(void)
{
	int input = 0;
	////����ͨѶ¼con
	contact con;
	//Peoinfo date[MAX_DATE];
	////����֪����ǰͨѶ¼���ж��ٸ�Ԫ�أ��Ա���ӣ���һ����������¼
	//int sz = 0;
	//���ǿ��ԸĽ�Ϊ��ͨѶ¼��szͳһ��һ�𣬷�װ������ͷ�ļ��У�
	//��ʼ��ͨѶ¼
	
	//���ڶ�̬�汾����Ҫ֪��ͨѶ¼���������������ʱ�ټ�

	//��̬�汾�ĵĳ�ʼ����������Ҫ�ڶ������ٿռ�
	InitContact(&con);
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DEL:
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case PRINT:
			PrintContact(&con);
			break;
		case EXIT:
			//������֮ǰ����
			SaveContact(&con);
			//��̬��ʱ���˳�ʱ������ͨѶ¼,�黹�ڴ�
			DestroyContact(&con);
			printf("�˳�ͨѶ¼\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}