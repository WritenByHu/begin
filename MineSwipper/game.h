#define ROW 9
#define CLO 9
#define ROWS  ROW + 2
#define CLOS  CLO + 2
#define Count 10
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void InitBoard(char board[ROWS][CLOS], int rows, int clos, char set);
void ShowBoard(char board[ROWS][CLOS], int row, int clo);
void PlaceMine(char board[ROWS][CLOS], int row, int clo);
void PlayerDo(char mine[ROWS][CLOS],char show[ROWS][CLOS],int row,int clo);