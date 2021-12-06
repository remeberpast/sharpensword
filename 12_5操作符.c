//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main(void)
//{
//	//int a = 7 % (-3);
//	//printf("%d", a);
//	//int b = (-1) >> 1; //-1的补码全是1.如果补1，那结果还是-1，如果补0，那会变成一个很大的正数。
//	//printf("%d", b);
//	/*int a = 2;
//	int b = 1;
//	int c = a & b;
//	int d = a | b;
//	int e = a ^ b;
//	printf("%d %d %d %d %d\n",a, b, c, d, e);*/
//	return 0;
//}

//不引入变量交换两个数的值
//法一：只用加减法（有缺陷，两数相加可能会溢出）
//#include <stdio.h>
//int main(void)
//{
//	int a = 2;
//	int b = 5;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d", a, b);
//	return 0;
//}
//法二：利用位操作符,与同一个数异或两次，就可以得到这个数本身
//#include <stdio.h>
//int main(void)
//{
//	int a = 2;
//	int b = 5;
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("%d %d", a, b);
//	return 0;
//}

//求一个整数在二进制时1的个数
//#include <stdio.h>
//int main(void)
//{
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	scanf("%d", &n);
//	for (i = 0; i < 31;i++)
//	{
//		if (n & 1 == 1)
//		{
//			count++;
//		}
//		n = n >> 1;
//	}
//	printf("%d\n", count);
//	return 0;
//}
//#include <stdio.h>
//int main(void)
//{
//	int n = 0;
//	int i = 0;
//	int count = 0;
//	int a = 1;
//	scanf("%d", &n);
//	for (i = 0;i < 31;i++)
//	{
//		if ((n & a) == a)
//		{
//			count++;
//		}
//		a = a << 1;
//	}
//	printf("%d", count);
//	return 0;
//}

//#include <stdio.h>
//#include <windows.h>
//
//int main()
//{
//    MessageBox(NULL, "Hello World", "WinMain", MB_OK);
//    return 0;
//}

//#include <graphics.h>              // 引用图形库头文件
//#include <conio.h>
//#include <stdio.h>
//#include <windows.h>				//用到了定时函数sleep()
//#include <math.h>
//int r1[] = { 30,20,130,60 };//输入按钮的矩形参数
//int r2[] = { 170,20,220,60 };//运行按钮的矩形参数
//int r3[] = { 260,20,310,60 };//退出按钮的矩形参数
//int main()
//{
//	int i;
//	short win_width, win_height;//定义窗口的宽度和高度
//	win_width = 480;win_height = 360;
//	initgraph(win_width, win_height);//初始化窗口（黑屏）
//	for (i = 0;i < 256;i += 5)
//	{
//		setbkcolor(RGB(i, i, i));//设置背景色，原来默认黑色
//		cleardevice();//清屏（取决于背景色）
//		Sleep(15);//延时15ms
//	}
//	RECT R1 = { r1[0],r1[1],r1[2],r1[3] };//矩形指针R1
//	RECT R2 = { r2[0],r2[1],r2[2],r2[3] };//矩形指针R2
//	RECT R3 = { r3[0],r3[1],r3[2],r3[3] };//矩形指针R3
//	LOGFONT f;//字体样式指针
//	gettextstyle(&f);					//获取字体样式
//	_tcscpy(f.lfFaceName, _T("宋体"));	//设置字体为宋体
//	f.lfQuality = ANTIALIASED_QUALITY;    // 设置输出效果为抗锯齿  
//	settextstyle(&f);                     // 设置字体样式
//	settextcolor(BLACK);				//BLACK在graphic.h头文件里面被定义为黑色的颜色常量
//	drawtext("输入参数", &R1, DT_CENTER | DT_VCENTER | DT_SINGLELINE);//在矩形区域R1内输入文字，水平居中，垂直居中，单行显示
//	drawtext("运行", &R2, DT_CENTER | DT_VCENTER | DT_SINGLELINE);//在矩形区域R2内输入文字，水平居中，垂直居中，单行显示
//	drawtext("退出", &R3, DT_CENTER | DT_VCENTER | DT_SINGLELINE);//在矩形区域R3内输入文字，水平居中，垂直居中，单行显示
//	setlinecolor(BLACK);
//	rectangle(r1[0], r1[1], r1[2], r1[3]);
//	rectangle(r2[0], r2[1], r2[2], r2[3]);
//	rectangle(r3[0], r3[1], r3[2], r3[3]);
//	system("pause");//暂停，为了显示
//	closegraph();
//	return 0;



