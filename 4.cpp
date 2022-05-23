#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=0;i<=6;i++)
	{
		for(j=0;j<=6-i;j++)//循环一次减两个空格 
		{
			printf(" ");
		}
		for(k=0;k<=2*i;k++)//每次*加两个
		{
			printf("*");
		} 
		printf("\n");		
	}
	for(i=0;i<=5;i++)
	{
		for(j=0;j<=i+1;j++)
		printf(" ");
		for(k=1;k<=11-2*i;k++)
		printf("*");
		printf("\n");
	}
	return 0;
}
//int main()
//{
// int i,j,k;
//
//for(i=0;i<=3;i++) //控制行
//{
//   for(j=0;j<=2-i;j++) //控制空格
//
//   printf(" ");
//
//   for(k=0;k<=2*i;k++) //控制星号
//
//   printf("*");
//
//  printf("\n");
//
//}
//
//for(i=0;i<=2;i++)
//
//{
//   for(j=0;j<=i;j++)
//
//   printf(" ");
//
//   for(k=0;k<=4-2*i;k++)
//
//   printf("*");
//
//   printf("\n");
//}
//	return 0;
//}
