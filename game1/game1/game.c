#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void InitBoard(char board[ROW][COL], int row, int col) {//将所有字符转变为空格
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < col; j++) {
			board[i][j] =  ' ' ;
		}
	}
}
void DisplayBoard(char board[ROW][COL], int row, int col) {//打印棋盘
	int i = 0; 
		
	for (i = 0; i < row; i++) {
		int j = 0;
		int k = 0;
		for (j = 0; j < col; j++)//数据加分隔线
		{
			printf(" %c ", board[i][j]);//   |   |   数组中每个字符都是空格
			if (j < col - 1)            //---|---|---
				printf("|");            //   |   |    除最后一格都要在末尾加上边界线|
			else                        //---|---|---
				printf("\n");           //   |   |   这是目标棋盘
		}
		for (k = 0; k < col && i < row - 1; k++)//打印数据和分隔线
		{
			printf("---");
			if (k < col - 1)//最后一列末尾不打印|
				printf("|");
			else
				printf("\n");//最后打印完要换行	
		}
	}
}
void PlayerMove(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	printf("玩家走\n");
	while(1)
	{
		printf("请输入坐标");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) {
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] ='*';
				break;
			}
			else {
				printf("该空间已占用，请重新输入");
			}
		}
		else
			printf("坐标非法，请重新输入");
	}
	
}
void ComputerMove(char board[ROW][COL], int row, int col) {
	int x = 0;
	int y = 0;
	printf("电脑走：>\n");
	while (1) {

		x = rand() % row;
		y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '$';
			break;
		}
	}
}
char IsWin(char board[ROW][COL], int row, int col)
	{
		int i = 0;
		int j = 0;
		for (i = 0; i < row; i++) {
			if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ')
				return board[i][0];
		}
		for (j = 0; j < col; j++) 
		{
			if (board[0][j] == board[1][j] && board[0][j] == board[2][j] && board[0][j] != ' ')
			{
				return  board[0][j];
			}
		}
		if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ')
		{
			return board[0][0];
		}
		if (board[0][2] == board[1][1] && board[0][2] == board[2][0] && board[1][1] != ' ')
		{
			return board[1][1];
		}
		for(i=0;i<row;i++)
		{	for (j = 0; j < col; j++)
			{
				if (board[i][j] == ' ')
				return 'C';
			}
	    }
		return 'S';
}