#define _CRT_SECURE_NO_WARNINGS 1
 
#include<stdio.h>   //2.ʵ����������Ϸ��
#include<Windows.h>  //Sleep() RAND_MAX ��ͷ�ļ�
#include<time.h>
 
void menu()      //��ӡ�˵�
{
 printf("****************************\n");
 printf("**** ��ӭ������������Ϸ ****\n");
 printf("**** 1�� ������Ϸ  ****\n");
 printf("**** 0�� �˳���Ϸ  ****\n");
 printf("****************************\n");
 printf("������:->");
}
 
void print_chessboard(char coord[][3]) //��ӡ���̺���
{  //��ά�����ڴ���ʱ������������β����ֻ���ǵ�һ����������û�����֣��±귶Χ��
   //����ͻ������Ϊ��ʱ��������֪����Ҫ�Ѵ������������Ԫ�ػ��ֳɼ��м��У�
   //���ǵ�����һ�������ŵ����������Ŷ���ֵʱ���Ϳ��Ծ�������֪����һ�������ŵ�ֵ�Ƕ���
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
  if (i % 17 == 0)     //ÿ��� 17 ���ַ�����һ�����
  {
   printf("\n");
  }
 }
}
 
void winer(char coord[][3], int *flag);  //Ӯ���жϺ���������
 
int computer(char coord[][3])        //��������
{
 int flag = 0;
 int index_x2 = 0;
 int index_y2 = 0;
 srand((unsigned)time(NULL));
 while (1)
 {
  index_x2 = 2 * rand() / RAND_MAX;     //���� 0--2 �������
  index_y2 = 2 * rand() / RAND_MAX;
  if ((coord[index_x2][index_y2] != '*') && (coord[index_x2][index_y2] != 'o'))
  {             //�жϸ�λ���Ƿ���������
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
 
int player(char coord[][3], int index_x1, int index_y1) //�������
{
 int flag = 0;
 int ret = 0;
 if ((coord[index_x1][index_y1] == '*') || (coord[index_x1][index_y1] == 'o'))
 {              //�жϸ�λ���Ƿ���������
  printf("��λ���������ӣ�������!\n");
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
  print_chessboard(coord);  //�Ѵ�ӡ���̷�������Ϊ�������˶�����һ�κ��ٴ�ӡ��ǰ����״̬
 }
 return 0;
}
 
void winer(char coord[][3],int *flag)   //�ж��Ƿ����Ӯ�ң�Ӯ����˭
{
 char line_ch[8][4] = { { coord[0][0], coord[1][1], coord[2][2] }, { coord[0][0], coord[0][1], coord[0][2] }, \
       { coord[0][0], coord[1][0], coord[2][0] }, { coord[0][1], coord[1][1], coord[2][1] }, \
       { coord[0][2], coord[1][2], coord[2][2] }, { coord[1][0], coord[1][1], coord[1][2] }, \
       { coord[2][0], coord[2][1], coord[2][2] }, { coord[0][2], coord[1][1], coord[2][0] } };
       //��������Ӯ����������һ���ַ�������
 int i = 0;
 for (i = 0; i < 8; i++)
 {
  if (strcmp(line_ch[i],"***") == 0) //�жϴ�ʱ���������������ܲ������һ��ʹ�����Ӯ���ַ���
  {
   print_chessboard(coord);   //�ȴ�ӡ���̣����ж�˭ʤ˭��
   printf("\n��ϲ��Ӯ��!\n");
   *flag = 1;      //���Ӯ��ʹ�ʼ���õ�Ӯ�ı�־λΪ1�������˴���Ϸ
   return;
  }
  else if (strcmp(line_ch[i],"ooo") == 0)
  {
   print_chessboard(coord);
   printf("\n���ź���������!\n");
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
  int num = 0;   //������ʼ���˳���Ϸ
  int x = 0;
  int y = 0;
  int i = 4;    //һ����Ϸ�����ڲ�whileѭ����ѭ���Ĵ���
  int ret = 0;   //�Ƿ�����˴���Ϸ�ı�־λ
  int is_play = 0;  //�Ƿ��ٴ�����Ϸ�ı�־λ
  char coordinate[3][3] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
        //Ϊ����չ��Ϸ�ȽϷ��㣬���԰��к��ж���ɺ궨��
  menu();     
  scanf("%d", &num);
  if (num == 0)
  {
   printf("5����˳�����!\n");
   Sleep(5000);
   exit(0);
  }
  computer(coordinate);  //��Ϊ��Ƶ������̵ͣ�������Ϸ��ʼǰ���õ�����һ��
  print_chessboard(coordinate);
  while ((i))    //��Ϊ�ܹ��оŸ�λ�ÿ������ӣ�����һ������ʣ�˸���ÿ��ѭ���������Ļ����õ�����
         //�������ѭ���Ĵ�
  {
   printf("������ X��Y ������(0--2)��ȷ���������λ�ã�"); //Ҳ���Լ�һ���ж������Ƿ�Ϸ�
   scanf("%d %d", &x, &y);
   ret = player(coordinate, x, y);
   if (ret == 1)
   {
    break;
   }
   i--;
  } 
  printf("\n");
  printf("��ѡ��������Ĳ���:\n");
  printf("1�� ����һ����Ϸ 0���˳���Ϸϵͳ\n");
  scanf("%d", &is_play);
  if(is_play == 0)
  {
   printf("5����˳�����!\n");
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

