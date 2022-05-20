#include<stdio.h>
#include<string.h>
int main()
{
	int arr1[]={1,2,3,4,5,6,7,8,9,10};
	int k=0;
	scanf("%d",&k);
	int left=0;
	int right =sizeof(arr1)/sizeof(arr1[0])-1;
	while(right>=left)
	{
		int mid=(right+left)/2;
		if(arr1[mid]<k)
		{
			left=mid;
		}
		else if(arr1[mid]>k)
		{
			right=mid;
		}
		else
		{
			printf("找到了，下标是%d",mid);
			break;
		}
	}
	return 0;
} 


//int main()
//{
//	int i=0;
//	char password[20]={0};
//	for(i=0;i<3;i++) 
//	{
//	scanf("%s",&password);
//	if(strcmp(password,"123456")==0)
//	{
//		printf("密码正确\n");
//		break;
//	}
//	else
//	{
//		printf("密码错误\n");
//	}
//    }
//    if(i==3)
//	printf("三次密码错误，退出程序\n");
//	return 0;
//}











//int main()
//{
//	int a=1;
//	int b=2;
//	int c=a^b;
//	printf("%d",c); 
////	int num1=0;
////	scanf("%d",&num1);
////	if(num1<=10)
////	printf("老启德你不行啊！");
////	else
////	printf("老启德你可以啊！"); 
//	//char arr1[]={'a','b','c','d','\0'};
//	//printf("%d\n",strlen(arr1));
//	return 0;
//}
