
#define ROW 3
#define COL 3
#include <stdio.h>
#include <stdlib.h>
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
//  $表示电脑赢
//  *表示玩家赢
//  C表示没有人赢继续
//  S表示游戏结束，平局 

char IsWin(char board[ROW][COL], int row, int col);









