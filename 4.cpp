#include<stdio.h>
//��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ������
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


















//2.���0��999֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ��������磻153��1��5��3?��
//��153��һ����ˮ�ɻ�������
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













//1.����Ļ���������ͼ����
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
//		for(j=1;j<=7-i;j++)//ѭ��һ�μ�1���ո� 
//		{
//			printf(" ");
//		}
//		for(k=1;k<=2*i-1;k++)//ÿ��*������
//		{
//			printf("*");
//		} 
//		printf("\n");		
//	}
//	for(i=1;i<=6;i++)
//	{
//		for(j=1;j<=i;j++)//��һ���ո� 
//		printf(" ");
//		for(k=1;k<=13-2*i;k++)
//		printf("*");
//		printf("\n");
//	}
//	return 0;
//}
