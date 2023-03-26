#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu() {

	printf("***************\n");
	printf("**1.play 0.exit**\n");
	printf("***************\n");
}
game() {
	char ret = 0;
	char board[ROW][CLO] = { 0 };
	InitBoard(board, ROW, CLO);
	DisplayBoard(board,ROW, CLO);

	while (1) {
		// 玩家下棋
		PlayerMove(board, ROW, CLO);
		DisplayBoard(board, ROW, CLO);
		ret = IsWin(board, ROW, CLO);
		if (ret == '*') {
			printf("玩家赢\n");
			break;
		}
		else if (ret == "C") {
			printf("平局\n");
			break;
		}
		//电脑下棋
		AutoMove(board, ROW, CLO);
		DisplayBoard(board, ROW, CLO);
		ret = IsWin(board, ROW, CLO);
		if (ret == '#') {
			printf("电脑赢\n");
			break;
		}
		else if (ret == "C") {
			printf("平局\n");
			break;
		}


	}
}
void test()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 2:
			break;
		default:
			break;
		}
	} while (input);
}


int main() {


	test();
	return 0;
}