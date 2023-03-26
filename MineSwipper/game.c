#define _CRT_SECURE_NO_WARNINGS
#include "game.h"


void InitBoard(char board[ROWS][CLOS], int rows, int clos, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++) {
		for (j = 0; j < clos; j++) {
			board[i][j] = set;
		}
	};
}

void ShowBoard(char board[ROWS][CLOS], int row, int clo)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= clo; i++) {
		printf("%d ",i);
	}
	printf("\n");
	for (i = 1; i <= row; i++) {
		printf("%d ", i);
		for (j = 1; j <= clo; j++) {
			
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void PlaceMine(char board[ROWS][CLOS], int row, int clo)
{
	int count = Count;
	int x = 0;
	int y = 0;
	while (count) {
		 x = (rand() % row) + 1;
		 y = (rand() % clo) + 1;
		 if (board[x][y] == '0')
		 {
			 board[x][y] = '1';
			 count--;
		 }
		 
	}

}
int MineIn(char mine[ROWS][CLOS],int x ,int y) {

	return mine[x - 1][y] + mine[x + 1][y] + mine[x - 1][y + 1] + 
		mine[x + 1][y + 1] + mine[x][y - 1] + mine[x - 1][y - 1] + mine[x][y + 1]+
		mine[x + 1][y - 1] - 8 * '0';
}

void PlayerDo(char mine[ROWS][CLOS],char show[ROWS][CLOS], int row, int clo)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("输入坐标开始扫雷>");
		scanf("%d%d", &x, &y);
		if (mine[x][y] == '1') {
			printf("你被炸死了\n");
			break;
			
		}
		else {
			
			int num = MineIn(mine,x,y);
			show[x][y] = num + '0';
			ShowBoard(show, ROW, CLO);
			printf("继续输入坐标>");
		}
	}
}
