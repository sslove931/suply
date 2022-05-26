#include<stdio.h>
//4.创建一个数组，
//实现函数init（）初始化数组、
//实现empty（）清空数组、
//实现reverse（）函数完成数组元素的逆置。
//要求：自己设计函数的参数，返回值。
void init(int arr[],int sz)
{
	int i=0;
	for(i=0;i<sz;i++)
	{
		arr[i]=i;
	}
}
void reverse(int arr[],int sz)
{
	int left=0;
	int right=sz-1;
	int tmp=0;
	while(right>=left)
	{
		tmp=arr[left];
		arr[left]=arr[right];
		arr[right]=tmp;
		left++;
		right--;
	}
}
void empty(int arr[],int sz)
{
	int i=0;
	for(i=0;i<sz;i++)
	{
		arr[i]=0;
	 } 
}
void display(int arr[],int sz)
{
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[10];
	int sz=sizeof(arr)/sizeof(arr[0]);
	init(arr,sz);
	display(arr,sz);
	reverse(arr,sz);
	display(arr,sz);
	empty(arr,sz); 
	display(arr,sz);
	return 0;
}












//5.实现一个函数，判断一个数是不是素数。
//int is_prime(int i)
//{
//	int n=0;
//	if(i==1)
//	return 1;
//	for(n=2;n<i;n++)
//	{
//		if(i%n==0)
//		return 0;
//	}
//	if(n==i)
//	return 1;
//}
//int main()
//{
//	int i=0;
//	scanf("%d",&i);
//	if(is_prime(i)==1)
//	{
//		printf("%d是素数\n",i);
//	}
//	else
//	{
//		printf("%d不是素数\n",i);
//	}
//	return 0;
//}












//3.实现一个函数判断year是不是润年。
//int is_leapyear(int i)
//{
//	if((i%4==0)&&(i%100!=0)||(i%400==0))
//	{
//		return 1;
//	}
//	else
//	return 0;
//}
//int main()
//{
//	int i=0;
//	int ret=0;
//	int count=0;
//	for(i=1000;i<=2000;i++)
//	{
//		ret=is_leapyear(i);
//		if(ret==1)
//		{
//			printf("%d ",i);
//			count++;
//		}
//	}
//	printf("\ncount=%d",count);
//	return 0;
//} 












//2.使用函数实现两个数的交换。
//void ex(int* a,int* b)
//{
//	int tmp=0;
//	tmp=*a;
//	*a=*b;
//	*b=tmp;
//}
//int main()
//{
//	int a=10;
//	int b=20;
//	printf("a=%d  b=%d\n",a,b);
//	ex(&a,&b);
//	printf("a=%d  b=%d",a,b);
//	return 0;
//} 
//










//1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
//输入9，输出9*9口诀表，输入12，输出12*12的乘法口诀表。
//int main()
//{
//	int n=0;
//	int i=0;
//	int j=0;
//	scanf("%d",&n);
//	for(i=1;i<=n;i++)//有几行 
//	{
//		for(j=1;j<=i;j++)//一行有几列 
//		{
//			if(i<=9)
//			{
//				printf("%d*%d=%-5d",j,i,j*i);
//			}
//			else
//			{
//				printf("%d*%d=%-4d",j,i,j*i);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}
