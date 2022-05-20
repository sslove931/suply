#define ROW 3
#define COL 3
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdio.h>
#include<time.h>
//#include<stdlib.h>
void initboard(char board[ROW][COL],int row,int col);
void displayboard(char board[ROW][COL],int row,int col);
void playermove(char board[ROW][COL],int row,int col);
void computermove(char board[ROW][COL],int row,int col);
char iswin(char board[ROW][COL],int row,int col);
int isfull(char board[ROW][COL],int row,int col);
