#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu() {
	printf("*********扫雷*********\n");
	printf("***1.play 0.exit**\n");
	printf("*********扫雷********\n");
}

void game() {
	char show[ROWS][CLOS] = { '0' };
	char mine[ROWS][CLOS] = { '0' };
	//1.初始化棋盘
	InitBoard(show, ROWS, CLOS, '*');
	InitBoard(mine, ROWS, CLOS, '0');
	//布置雷
	PlaceMine(mine, ROW, CLO);
	//2.显示棋盘
	ShowBoard(show, ROW, CLO);
	ShowBoard(mine, ROW, CLO);

	//3.玩家输入坐标扫雷
	PlayerDo(mine,show,ROW,CLO);


}
void test() {
	int input = 0;
	srand((unsigned int)time(NULL));
	do {
		menu();
		scanf("%d", &input);
		switch (input) {
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("请重新输入\n");
			break;
		}
	} while (input);
}

int main() {

	test();
	return 0;
}