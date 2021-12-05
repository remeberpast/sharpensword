#pragma once

#define ROW 9       //用作存放雷
#define COL 9
#define ROWS ROW+2      //用作存放扫雷的信息
#define COLS COL+2
#define easy_count 10


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//初始化棋盘
void InitBoard(char board[ROWS][COLS], int rows, int cols, char set);
//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col);
//布置雷
void SetMine(char mine[ROWS][COLS], int row, int col);
//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
