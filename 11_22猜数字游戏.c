//#define _CRT_SECURE_NO_WARNINGS 1
////猜数字游戏，随机产生一个1到100的随机数，然后去猜，会告诉你猜大了还是猜小了，游戏可以一直玩除非退出游戏
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>     //使用生成随机数函数时需要引用此头文件
//void menu()
//{
//	printf("***************************\n");
//	printf("*********1.play************\n");
//	printf("*********0.exit************\n");
//	printf("***************************\n");
//}
//
//void game()           //猜数字游戏的实现
//{
//	int ret = rand() % 100 + 1;      //生成随机数函数；返回值是一个0到32767的一个数,而%100的余数是0到99，再+1即为1到100
//	int guess = 0;
//	while (1)
//	{
//		printf("请猜数字：");
//		scanf("%d", &guess);
//		if (guess < ret)
//			printf("猜小啦\n");
//		else if (guess > ret)
//			printf("猜大啦\n");
//		else
//		{
//			printf("恭喜，猜对了！\n");
//			break;
//		}
//	}
//}
//
//int main(void)
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));               //()里面需要一个随时变化的值，时间刚好吻合
//	do
//	{
//		menu();    //打印一个菜单
//		printf("请选择：");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("请猜一个数字\n");
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误,请重新选择（1/0）\n");
//			break;
//		}
//	} while (input);         //此处input为0判断为假，大于零就为真
//	
//	return 0;
//}