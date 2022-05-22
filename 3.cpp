#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
//3. 编写程序数一下 1到 100 的所有整数中出现多少个数字9。
int main()
{
	int i=0;
	int count=0;
	for(i=1;i<=100;i++)
	{
		if(i%10==9)
		{
			count++;
		}
		if(i/10==9)
		{
			count++;
		}
	}
	printf("%d\n",count);
	return 0;
}















//2. 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。
//int main()
//{
//	int i=0;
//	float ret=0.0;
//	for(i=1;i<=100;i++)
//	{
//		if((i%2)==0)
//		{
//		   ret=ret-1.0/i;
//		}
//		else
//		{
//		   ret=ret+1.0/i;
//		}
//	}
//	printf("%f ",ret);
//	return 0;
//} 











//1. 将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//int main()
//{
//	char arr1[]="wei sheng";
//	char arr2[]="#########";
//	strcpy(arr2,arr1);
//	printf("%s ",arr2);
//	return 0;
//} 





//int main()
//{
//    char arr1[]={"hello weisheng!"};
// 	char arr2[]={"###############"};
// 	int left=0;
//	int right = strlen(arr1)-1;
// 	while(left<=right)
// 	{
// 		arr2[left]=arr1[left];
// 		arr2[right]=arr1[right];
// 		printf("%s\n",arr2);
// 		left++;
// 		right--;
// 		Sleep(1000);
// 		system("cls");
//	}
//	printf("%s\n",arr2);
//	return 0;
//}
