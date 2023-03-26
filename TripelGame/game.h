
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define CLO 3
#define ROW 3

void InitBoard(char board[ROW][CLO], int row, int clo);
void DisplayBoard(char board[ROW][CLO], int row, int clo);

void PlayerMove(char board[ROW][CLO], int row, int clo);
void AutoMove(char board[ROW][CLO], int row, int clo); 
char IsWin(char board[ROW][CLO], int row, int clo);