#pragma once
#define ROW 10
#define COL 10

#include <stdlib.h>
#include <time.h>
#include <stdio.h> //����������ͷ�ļ�֮���������ļ�������game.h��Ͳ�����������ͷ�ļ���
//��������

//��ʼ������
void InitBoard(char board[ROW][COL], int row, int col);
//��ӡ���̵ĺ���
void DisplayBoard(char board[ROW][COL], int row, int col);
//�������
void PlayerMove(char board[ROW][COL], int row, int col);
//��������
void CommputerMove(char board[ROW][COL], int row, int col);
//�ж���Ӯ
char IsWin(char board[ROW][COL], int row, int col);
