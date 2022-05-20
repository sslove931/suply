#include<stdio.h>
#include"game.h"
#define ROW 3
#define COL 3
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdio.h>
#include<time.h>
//#include<stdlib.h>
void menu()
{
	printf("************************\n");
	printf("*****1.play  0.exit*****\n");
	printf("************************\n");
}
void game()
{
	char ret=0;
	char board[ROW][COL]={0};
	initboard(board,ROW,COL);
	displayboard(board,ROW,COL);
	while(1)
	{
		//玩家下棋
		playermove(board,ROW,COL);
		displayboard(board,ROW,COL);
		//判断玩家是否输赢
		ret=iswin(board,ROW,COL);
		if(ret!='C')
		{
			break;
		 } 
		//电脑下棋 
		computermove(board,ROW,COL);
		displayboard(board,ROW,COL);
		//判断电脑是否输赢 
		ret=iswin(board,ROW,COL);
		if(ret!='C')
		{
			break;
		}
		
	} 
	
		if(ret=='*')
		{
			printf("玩家赢\n");
		}
		else if(ret=='#')
		{
			printf("电脑赢\n");
		}
		else
		{
			printf("平局\n");
		}
}
void test()
{
	int input=0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
				printf("退出游戏\n");
				break;
			default:
				printf("选择错误，请重新选择！\n");
				break;
		} 
	}
	while(input);
}
int main()
{
	test();
	return 0;
}
