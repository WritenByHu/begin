#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu() {
	printf("*********ɨ��*********\n");
	printf("***1.play 0.exit**\n");
	printf("*********ɨ��********\n");
}

void game() {
	char show[ROWS][CLOS] = { '0' };
	char mine[ROWS][CLOS] = { '0' };
	//1.��ʼ������
	InitBoard(show, ROWS, CLOS, '*');
	InitBoard(mine, ROWS, CLOS, '0');
	//������
	PlaceMine(mine, ROW, CLO);
	//2.��ʾ����
	ShowBoard(show, ROW, CLO);
	ShowBoard(mine, ROW, CLO);

	//3.�����������ɨ��
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
			printf("����������\n");
			break;
		}
	} while (input);
}

int main() {

	test();
	return 0;
}