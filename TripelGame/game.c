#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void InitBoard(char board[ROW][CLO], int row, int clo) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < clo; j++) {
			board[i][j] = ' ';
		}
	}
};
void DisplayBoard(char board[ROW][CLO], int row, int clo) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < clo; j++) {
			printf(" %c ", board[i][j]);
			if(j < clo - 1)
				printf("|");	
		}
		printf("\n");
		if (i < row - 1) {
			for (j = 0; j < clo; j++) {
				printf("---");
				if (j < clo - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}

void PlayerMove(char board[ROW][CLO], int row, int clo)
{
	int x = 0;
	int y = 0;
	printf("输入下棋坐标:");
	while (1) {
		scanf("%d%d", &x, &y);
		if (x > 0 && y < 4) {
			if (board[y - 1][x- 1 ] == ' ') {
				board[y - 1][x - 1] = '*';
				break;
			}
			else {
				printf("格子被占用\n");
				printf("重新输入：");
			}
		}
		else{
			printf("输入坐标不在范围内\n");
			printf("重新输入：");
		}
	}
	
}

void AutoMove(char board[ROW][CLO], int row, int clo)
{
	int x = 0;
	int y = 0;
	printf("电脑走\n");
	while (1)
	{
		x = rand() % row;
		y = rand() % clo;
		if (board[y][x] == ' ') {
			board[y][x] = '#';
			break;
		}
	}
	
}
int IsFull(char board[ROW][CLO], int row, int clo) {
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) {
		for (j = 0; j < clo; j++) {
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char IsWin(char board[ROW][CLO], int row, int clo) {
	int i = 0;
	for (i = 0; i < row; i++) {
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ') {
			return board[i][0];
		}
	}
	for (i = 0; i < row; i++) {
		if (board[0][i] == board[1][i] && board[0][i] == board[2][i] && board[0][i] != ' ') {
			return board[0][i];
		}
	}
	
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
		return board[0][0];
	if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
		return board[1][1];
	if (IsFull(board ,ROW,CLO)) {
		return 'C';
	}
	return 'Q';
}