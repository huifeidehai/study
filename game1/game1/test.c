#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"
#include<windows.h>
void menu()
{
	printf("********************8***\n");
	printf("*****1.play 0. exit*****\n");
	printf("************************\n");
}
void game() {
	char ret = 0;
	srand((unsigned int)time(NULL));
	char board[ROW][COL] = {0};
	InitBoard(board, ROW, COL);//初始化数值
	DisplayBoard(board, ROW, COL);//展示棋盘
	while (1) {
		PlayerMove(board, ROW, COL);//玩家走棋
		system("cls");
		DisplayBoard(board, ROW, COL);//玩家走后展示棋盘
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')//判断玩家输赢
		{
			break;
		}
		ComputerMove(board, ROW, COL);//电脑走棋
		system("cls");
		DisplayBoard(board, ROW, COL);
		ret=IsWin(board, ROW, COL);//判断电脑输赢
		if (ret != 'C')
		{
			break;
		}
	}
		if (ret == '*') 
		{
			printf("玩家获胜\n");
		}
		else if (ret == '$')
		{
			printf("电脑获胜\n");
		}
		else if (ret == 'S') {
			printf("平局\n");
		}
		Sleep(5000);
		
		
	}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：");
			scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			printf("三子棋\n");
				break;
		case 0:
			printf("退出游戏\n");
				break;
		default:
			printf("请重新选择\n");
			break;
		}
	} while (input);
}

int main() {
	test();
	return 0;
}