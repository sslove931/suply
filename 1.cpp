#define _CRT_SECURE_NO_WARNINGS 1
 
#include<stdio.h>   //2.实现三子棋游戏。
#include<Windows.h>  //Sleep() RAND_MAX 的头文件
#include<time.h>
 
void menu()      //打印菜单
{
 printf("****************************\n");
 printf("**** 欢迎来到三子棋游戏 ****\n");
 printf("**** 1、 进入游戏  ****\n");
 printf("**** 0、 退出游戏  ****\n");
 printf("****************************\n");
 printf("请输入:->");
}
 
void print_chessboard(char coord[][3]) //打印棋盘函数
{  //多维数组在传参时，接收数组的形参最多只能是第一个方括号里没有数字（下标范围）
   //否则就会出错（因为此时编译器不知道你要把传过来的数组的元素划分成几行几列，
   //但是当除第一个方括号的其他方括号都有值时，就可以经过计算知道第一个方括号的值是多少
 int i = 0;
 int index_x = 0;
 int index_y = 0;
 for (i = 1; i <= 153; i++)
 {    
  char out_ch = ' ';
  if ((i % 51 == 20) || (i % 51 == 26) || (i % 51 == 32) )
  {
   out_ch = coord[index_x][index_y];
   index_x++;
   if (index_x < 3)
   {
    index_x = 0;
    index_y++;
   }
  }
  else if ((i % 17 == 6) || (i % 17 == 12))
  {
   out_ch = '|';
  }
  else if( (i >= 35 && i <= 51 && i != 40 && i != 46) || \
     (i >= 86 && i <= 102 && i != 91 && i != 97))
  {
   out_ch = '_';
  }
  putchar(out_ch);
  if (i % 17 == 0)     //每输出 17 个字符换下一行输出
  {
   printf("\n");
  }
 }
}
 
void winer(char coord[][3], int *flag);  //赢家判断函数的声明
 
int computer(char coord[][3])        //电脑下棋
{
 int flag = 0;
 int index_x2 = 0;
 int index_y2 = 0;
 srand((unsigned)time(NULL));
 while (1)
 {
  index_x2 = 2 * rand() / RAND_MAX;     //产生 0--2 的随机数
  index_y2 = 2 * rand() / RAND_MAX;
  if ((coord[index_x2][index_y2] != '*') && (coord[index_x2][index_y2] != 'o'))
  {             //判断该位置是否已有落子
   coord[index_x2][index_y2] = 'o';
   winer(coord, &flag);
   if (flag == 1)
   {
    return 1;
   }
   return 0;
  }
 }
}
 
int player(char coord[][3], int index_x1, int index_y1) //玩家下棋
{
 int flag = 0;
 int ret = 0;
 if ((coord[index_x1][index_y1] == '*') || (coord[index_x1][index_y1] == 'o'))
 {              //判断该位置是否已有落子
  printf("此位置已有棋子，请重下!\n");
  return 0;
 }
 else
 {
  coord[index_x1][index_y1] = '*';
  winer(coord, &flag);
  if (flag == 1)
  {
   return 1;
  }
  ret = computer(coord);
  if (ret == 1)
  {
   return 1;
  }
  print_chessboard(coord);  //把打印棋盘放在是因为想在两人都走完一次后再打印当前棋盘状态
 }
 return 0;
}
 
void winer(char coord[][3],int *flag)   //判断是否产生赢家，赢家是谁
{
 char line_ch[8][4] = { { coord[0][0], coord[1][1], coord[2][2] }, { coord[0][0], coord[0][1], coord[0][2] }, \
       { coord[0][0], coord[1][0], coord[2][0] }, { coord[0][1], coord[1][1], coord[2][1] }, \
       { coord[0][2], coord[1][2], coord[2][2] }, { coord[1][0], coord[1][1], coord[1][2] }, \
       { coord[2][0], coord[2][1], coord[2][2] }, { coord[0][2], coord[1][1], coord[2][0] } };
       //把所有能赢的情况定义成一个字符串数组
 int i = 0;
 for (i = 0; i < 8; i++)
 {
  if (strcmp(line_ch[i],"***") == 0) //判断此时玩家已输入的落子能不能组成一个使玩家能赢的字符串
  {
   print_chessboard(coord);   //先打印棋盘，再判断谁胜谁负
   printf("\n恭喜您赢了!\n");
   *flag = 1;      //玩家赢，使最开始设置的赢的标志位为1，结束此次游戏
   return;
  }
  else if (strcmp(line_ch[i],"ooo") == 0)
  {
   print_chessboard(coord);
   printf("\n很遗憾，您输了!\n");
   *flag = 1;
   return;
  }
  else
  {
   ;
  }
 }
}
 
int main()
{
 while (1)
 {
  int num = 0;   //决定开始或退出游戏
  int x = 0;
  int y = 0;
  int i = 4;    //一次游戏最多的内层while循环可循环的次数
  int ret = 0;   //是否结束此次游戏的标志位
  int is_play = 0;  //是否再次玩游戏的标志位
  char coordinate[3][3] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
        //为了拓展游戏比较方便，可以把行和列定义成宏定义
  menu();     
  scanf("%d", &num);
  if (num == 0)
  {
   printf("5秒后退出程序!\n");
   Sleep(5000);
   exit(0);
  }
  computer(coordinate);  //因为设计电脑智商低，所以游戏开始前先让电脑落一子
  print_chessboard(coordinate);
  while ((i))    //因为总共有九个位置可以落子，已用一个，还剩八个，每次循环不结束的话会用掉两个
         //所以最多循环四次
  {
   printf("请输入 X、Y 的坐标(0--2)来确定你下棋的位置："); //也可以加一个判断输入是否合法
   scanf("%d %d", &x, &y);
   ret = player(coordinate, x, y);
   if (ret == 1)
   {
    break;
   }
   i--;
  } 
  printf("\n");
  printf("请选择接下来的操作:\n");
  printf("1、 再玩一次游戏 0、退出游戏系统\n");
  scanf("%d", &is_play);
  if(is_play == 0)
  {
   printf("5秒后退出程序!\n");
   Sleep(5000);
   exit(0);
  }
  else
  {
   system("cls");
  }
 }
 system("pause");
 return 0;
}

