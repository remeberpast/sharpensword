#pragma once
#define ROW 10
#define COL 10

#include <stdlib.h>
#include <time.h>
#include <stdio.h> //在这里引用头文件之后，在其他文件中引用game.h后就不用引用其他头文件了
//函数声明

//初始化棋盘
void InitBoard(char board[ROW][COL], int row, int col);
//打印棋盘的函数
void DisplayBoard(char board[ROW][COL], int row, int col);
//玩家下棋
void PlayerMove(char board[ROW][COL], int row, int col);
//电脑下棋
void CommputerMove(char board[ROW][COL], int row, int col);
//判断输赢
char IsWin(char board[ROW][COL], int row, int col);
