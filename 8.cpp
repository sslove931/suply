#include<stdio.h>
//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，
//有多少个位(bit)不同？ 
//输入例子:
//1999 2299
//输出例子:7
int main()
{
	int i=0;
	int n=0;
	int q=0;
	int count=0;
	scanf("%d%d",&i,&n); 
	q=i^n;
	while(q)
	{
		if(q%2==1)
		count++;
		q=q/2;
	}
	printf("%d",count);
	return 0;
}










//int main()
//{
//	int i=0;
//	int n=0;
//	int q=0;
//	int count=0;
//	scanf("%d%d",&i,&n);
//	q=i^n;
//	while(q)
//	{
//		count++;
//		q=q&(q-1);
//	}
//	printf("%d",count);
//	return 0;
//}








//int count(int n,int j)
//{
//	int i=0;
//	int sum=0;
//	int k=n^j;
//	for(i=0;i<32;i++)
//	{
//		if(((k>>i)&1)==1)
//		sum++;
//	}
//	return sum;
//}	
//int main()
//{
//	int n=0;
//	int j=0;
//	scanf("%d%d",&n,&j);
//	printf("%d",count(n,j));
//	return 0;
//}












//3. 输出一个整数的每一位。
//void print(int n)
//{
//	if(n>10)
//	{
//		print(n/10);
//		printf("%d",n%10);
//	}
//	else
//	printf("%d",n);
//}
//int main()
//{
//	int n=0;
//	scanf("%d",&n);
//	print(n);
//	return 0;
//}










//2.获取一个数二进制序列中所有的偶数位和奇数位，
//分别输出二进制序列。
//int main()
//{
//	int i=0;
//	int n=0;
//	int j=0;
//	int k=0;
//	scanf("%d",&n);
//	printf("奇数项是：");
//	for(i=30;i>=0;i-=2)
//	{
//		printf("%d",(n>>i)&1);
//		j++;
//	}
//	printf("\nj=%d",j);
//	printf("\n偶数项是："); 
//	for(i=31;i>=0;i-=2)
//	{
//		printf("%d",(n>>i)&1);
//		k++;
//	} 
//	printf("\nk=%d",k);
//	return 0;
//}










//1.写一个函数返回参数二进制中 1 的个数
//int  count_one_bits(int n)
//{
//	int i=0;
//	int count=0;
//    for(i=0;i<32;i++)
//    {
//    	n=n>>i;
//    	if((n&1)==1)
//    	{
//    		count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int n=0;
//	scanf("%d",&n);
//	printf("%d",count_one_bits(n));
//	return 0;
//}






//int main()
//{
//	int a=10;
//	int b=20;
//	int const *r=&a;
//	r=&b;
//	printf("%d\n",*r);
//	const char* p="abcdef";
//	printf("%s",p);
//	return 0;
//}
