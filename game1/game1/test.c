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
	InitBoard(board, ROW, COL);//��ʼ����ֵ
	DisplayBoard(board, ROW, COL);//չʾ����
	while (1) {
		PlayerMove(board, ROW, COL);//�������
		system("cls");
		DisplayBoard(board, ROW, COL);//����ߺ�չʾ����
		ret=IsWin(board, ROW, COL);
		if (ret != 'C')//�ж������Ӯ
		{
			break;
		}
		ComputerMove(board, ROW, COL);//��������
		system("cls");
		DisplayBoard(board, ROW, COL);
		ret=IsWin(board, ROW, COL);//�жϵ�����Ӯ
		if (ret != 'C')
		{
			break;
		}
	}
		if (ret == '*') 
		{
			printf("��һ�ʤ\n");
		}
		else if (ret == '$')
		{
			printf("���Ի�ʤ\n");
		}
		else if (ret == 'S') {
			printf("ƽ��\n");
		}
		Sleep(5000);
		
		
	}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
			scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			printf("������\n");
				break;
		case 0:
			printf("�˳���Ϸ\n");
				break;
		default:
			printf("������ѡ��\n");
			break;
		}
	} while (input);
}

int main() {
	test();
	return 0;
}