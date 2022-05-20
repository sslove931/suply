#include<stdio.h>
int main()
{
	int i=0;
	int count=0;
	for(i=1000;i<=2000;i++)
	{
		if(i%4==0 && i%100!=0)
		{
			printf("%d ",i);
			count++;	
		}
		if(i%400==0)
		{
			printf("%d ",i);
			count++;
		}
	
	}
	printf("\ncount=%d",count);
	return 0;
} 
//int main()
//{
//	int i=1;
//	int n=1;
//	int m=0;
//	scanf("%d",&m);
//	for(i=1;i<m;i++)
//	{
//		int mul=0;
//		for(n=1;n<=i;n++)
//		{
//			mul=i*n;
//			printf("%d * %d=%-4d ",n,i,mul);
//		}
//		printf("\n");
//	}
//	return 0;
//}



//int main()
//{
//	int i=0;
//	int n=0;
//	for(i=100;i<=200;i++)
//	{
//		for(n=2;n<i;n++)
//		{
//		    if(i%n==0)
//		    {
//		    	break;
//			}
//		}
//		if(i==n)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}
