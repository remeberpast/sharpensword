#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
////switch�����case�����break��ҪҲ�ɲ�Ҫ���������������
////default����䣬�����벻����Ҫ��ʱ�������á���Ҳ�ɼ�break��䡣
// //switch��Ƕ��ʹ�á���breakֻ�������Լ����ڵ�switch��䡣
//int main(void)
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:             //û��break������һֱ����ִ��ֱ��break
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}
//

//whileѭ��������if������ƣ�
//#include <stdio.h>
//int main(void)
//{
//	/*if (1)
//		printf("hehe\n");
//	while (1)
//		printf("hehe");*/
//	/*while�����Ҳ��������break��continue���*/
//	/*��whileѭ����break�������õ���ֹѭ������ֻҪ����break��䣬ֱ������ѭ��*/
//	/*int i = 1;
//	while (i <= 10)
//	{
//		if (i == 5)
//		{
//			break;
//		}
//		printf("%d", i);
//		i++;
//	}*/
//
//	/*whileѭ���е�continue�Ǽ�������ֻ����������ѭ��������ʵ��Continue������������ѭ��ĩβ��Ȼ�������һ��ѭ����*/
//	//int i = 1;
//	//while (i <= 10)
//	//{
//	//	if (i == 5)
//	//	{
//	//		continue;     //�������ֻ��1234����Ϊi=5���γ�����ѭ������Ϊ��ʱi=5ֱ�������˱���ѭ����û��i++���˺�iһֱΪ5���������ѭ����
//	//	}				  //��continueǰ��һ��i++�������1~4��6~10��	
//	//	printf("%d", i);
//	//	i++;
//	//}
//	
//	return 0;
//}

//gerchar��putchar
//#include <stdio.h>
//int main(void)
//{
//	int ch = getchar();
//	printf("%c", ch);
//	putchar(ch);
//	return 0;
//}
// 
//EOF:end od file,��ʾ�ļ��Ľ�����EOF=-1����getchar����е�getchar��ȡ��һ��ctrl+zʱ����ȡ��һ��EOF
//#include <stdio.h> 
//int main(void)
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);   //����crtl+z������ֹ��ctrl+z��EOF
//	}
//	return 0; 
//}

//#include <stdio.h>
//int main(void)
//{
//	char password[20] = { 0 };  //����passwordʱ�ַ������������ֹ�123����1 2 3������һ�ٶ�ʮ����
//re:
//	printf("���������룺");
//	scanf("%s", password);
//	getchar();       //
//  getchar();
//	printf("��ȷ�����루Y/N��");
//	int ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("�ɹ�\n");
//	}
//	else
//	{
//		printf("ʧ��\n");
//		goto re;
//	}
//	return 0;
//}

