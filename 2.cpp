#include<stdio.h>
//5.求两个数的最大公约数。
//int main()
//{
//	int a,b,t=0;
//	printf("请输入两个数求他们的最大公约数\n");
//	scanf("%d%d",&a,&b);
//	int c=a;
//	int d=b;
//	if(a<b)
//	{
//		t=a;
//		a=b;
//		b=t;
//	}
//	while(a%b!=0)
//	{
//		t=a%b;
//		a=b;
//		b=t;
//	}
//	printf("%d 和 %d最大公约数是：%d",c,d,b);
//	return 0;
//	
//}






//4.将三个数按从大到小输出。
//int main()
//{
//	int a=0;
//	int b=0;
//	int c=0;
//	int t=0;
//	scanf("%d%d%d",&a,&b,&c);
//	if(a<b)
//	{
//		t=a;
//		a=b;
//		b=t;
//	}
//	if(a<c)
//	{
//		t=a;
//		a=c;
//		c=t;
//	}
//	if(b<c)
//	{
//		t=b;
//		b=c;
//		c=t;
//	}
//	printf("max=%d  med=%d  min=%d",a,b,c);
//	return 0;
//}


//3.求10 个整数中最大值。
//int main()
//{
//	int i=0;
//	int max=0;
//	int arr[10]={0};
//	for(i=0;i<10;i++)
//	{
//		scanf("%d ",&arr[i]);
//	}
//	max=arr[0];
//	for(i=1;i<10;i++)
//	{
//		if(arr[i]>max)
//		{
//			max=arr[i];
//		}
//	}
//	printf("max=%d\n",max);
//	return 0;
//}
//




//2. 不允许创建临时变量，交换两个数的内容（附加题）
//int main()
//{
//	int x=10;
//	int y=20;
//	x=x^y;
//	y=x^y;
//	x=x^y;
//	printf("x=%d\ny=%d",x,y); 
//	return 0;
//}




//int main()
//{
//	int x=10;
//	int y=20;
//	x=x+y;
//	y=x-y;
//	x=x-y;
//	printf("x=%d\ny=%d",x,y); 
//	return 0;
//}









////1.交换两个数的值 
//int main()
//{
//	int x=10;
//	int y=20;
//	int tmp=0;
//	tmp=x;
//	x=y;
//	y=tmp;
//	printf("x=%d\ny=%d",x,y); 
//	return 0;
//}
