#include<stdio.h>
//求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字
//int main()
//{
//	int i=0;
//	int sum=0;
//	int ret=1;
//	int a=0;
//	scanf("%d",&a);
//	for(i=0;i<5;i++)
//	{
//		ret=ret*a;
//		sum=sum+ret;
//	}
//	printf("%d",sum);
//	return 0;
//}


















//2.求出0～999之间的所有“水仙花数”并输出。
//“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3?，
//则153是一个“水仙花数”。
//int judge(int i)
//{
//	int single=0;
//	int ten=0;
//	int hund=0;
//	hund=i/100;
//	ten=(i-hund*100)/10;
//	single=i-hund*100-ten*10;
//	if(i==hund*hund*hund+ten*ten*ten+single*single*single)
//	return 1;
//	else
//	return 0;
//}
//int main()
//{
//	int i;
//	for(i=0;i<1000;i++)
//	{
//		judge(i);
//		if(judge(i)==1)
//		printf("%d\n",i);
//	}
//	return 0;
//} 













//1.在屏幕上输出以下图案：
//      *
//     ***
//    *****
//   *******
//  *********
// ***********
//*************
// ***********
//  *********
//   *******
//    *****
//     ***
//      *
//int main()
//{
//	int i,j,k;
//	for(i=1;i<=7;i++)
//	{
//		for(j=1;j<=7-i;j++)//循环一次减1个空格 
//		{
//			printf(" ");
//		}
//		for(k=1;k<=2*i-1;k++)//每次*加两个
//		{
//			printf("*");
//		} 
//		printf("\n");		
//	}
//	for(i=1;i<=6;i++)
//	{
//		for(j=1;j<=i;j++)//加一个空格 
//		printf(" ");
//		for(k=1;k<=13-2*i;k++)
//		printf("*");
//		printf("\n");
//	}
//	return 0;
//}
