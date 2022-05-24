#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("*************************\n");
	printf("*****1.play   2.exit*****\n");
	printf("*************************\n");
}
void game()
{
	int ret=0;
	int guess=0;
	ret=rand()%100+1;
	printf("开始猜你的数字："); 
	while(1)
	{
		scanf("%d",&guess);
		if(ret>guess)
		{
			printf("猜小了\n");
		}
		else if(ret<guess)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你猜对了！\n");
			break;
		}
	}
}
int main()
{
	int input=0;
	srand((unsigned int)time(NULL));
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
			    printf("退出游戏！\n");
				break;
			default:
			    printf("输入错误，请重新选择！\n");
				break;	
		}
	}
	while(input);
	return 0;
}















//4.编写一个程序，可以一直接收键盘字符，
//如果是小写字符就输出对应的大写字符，
//如果接收的是大写字符，就输出对应的小写字符，
//如果是数字不输出。
//int main()
//{
//	char ch=0;
//	//scanf("%c",&ch);
//	while((ch=getchar())!=0)
//	{
//		if((ch>='a')&&(ch<='z'))
//		{
//			printf("%c\n",ch-32);
//		}
//		if((ch>='A')&&(ch<='Z'))
//		{
//			printf("%c\n",ch+32);
//		}
//	}
//	return 0;
// } 












//int main()
//{
//	char i=0;
//	int n=0;
//	for(n=0;n<26;n++)
//	{
//	scanf("%c",&i);
//	if((i>=65&&i<=90))
//	printf("%c\n",i+32);
//	if((i>=96&&i<=122))
//	printf("%c\n",i-32);
//	}
//	return 0;
//}
















//3.编写代码模拟三次密码输入的场景。
//  最多能输入三次密码，密码正确，提示“登录成功”,密码错误，
//  可以重新输入，最多输入三次。三次均错，则提示退出程序。
//int main()
//{
//	int i=1;
//	char arr[20]={0};
//	while(i<4)
//	{
//		if(i<2)
//		{
//			printf("请输入密码：\n");
//		}
//		scanf("%s",&arr);
//		if((strcmp(arr,"123456"))==0)
//		{
//			printf("登入成功\n");
//			break;
//		}
//		else
//		{
//			if(i<3)
//			{
//				printf("输入密码错误，请重新输入！\n");
//			}
//			i++;
//		}
//	}
//	if(i==4)
//	{
//		printf("三次密码均输入错误，退出程序！"); 
//	}
//	return 0;
// } 











//2.写代码可以在整型有序数组中查找想要的数字，
//找到了返回下标，找不到返回-1.（折半查找）
//int search(int arr[],int k,int sz)
//{
//	int left=0;
//	int right=sz-1;
//	while(right>=left)
//	{
//		int mid=(right+left)/2;
//		if(arr[mid]>k)
//		{
//			right=mid-1;
//		}
//		else if(arr[mid]<k)
//		{
//			left=mid+1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	if(left>right)
//	{
//		return -1;
//	}
//}
//int main()
//{
//	int k=0;
//	int arr[]={1,2,3,4,5,6,7,8,9,10};
//	int sz=sizeof(arr)/sizeof(arr[0]);
//	scanf("%d",&k);
//	if(search(arr,k,sz)==-1)
//	{
//		printf("找不到指定的数字\n");
//	}
//	else
//	{
//		printf("找到了！下标是%d\n",search(arr,k,sz));
//	}
//	return 0;
// } 
