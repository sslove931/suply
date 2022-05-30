#include<stdio.h>
//7.递归方式实现打印一个整数的每一位
//192除以10 =19
//192取余10 =2 
//19     1
//19     9
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












//6.递归和非递归分别实现求n的阶乘
//int mul(int n)
//{
//	if(n>1)
//	{
//		return n*mul(n-1);
//	}
//	else 
//	return 1;
//}
//int main()
//{
//	int n=0;
//	scanf("%d",&n);
//	printf("%d",mul(n));
//	return 0;
//}










//5.递归和非递归分别实现strlen
//int strlen(char* ch)
//{
//	if(*ch!=0)
//	{
//		return 1+strlen(ch+1);
//	}
//	else 
//	return 0;
//}
//int main()
//{
//	char ch[]="abcdef";
//	printf("%d",strlen(ch));
//	return 0;
//} 







//int main()
//{
//	int count=0;
//	int i=0;
//	char ch[]="abcd";
//	while(ch[i]!=0)
//	{
//		i++;
//		count++;
//	}
//	printf("%d ",count);
//	return 0;
//}









//4. 编写一个函数 reverse_string(char * string)（递归实现）
//实现：将参数字符串中的字符反向排列。
//要求：不能使用C函数库中的字符串操作函数。
//void reverse(char* string)
//{
//	if(*string!=0)
//	{
//		string++;
//		reverse(string);
//		printf("%c",*(string-1));
//	}
//}
//int main()
//{
//	char* string="abcdef";
//	reverse(string);
//	return 0;
//} 










//3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
//例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19
//int digitsum(int i)
//{
//	if(i>10)
//	{
//		return (i%10)+digitsum(i/10);
//	}
//	else 
//	{
//		return i;
//	}
//}
//int main()
//{
//	int i=0;
//	scanf("%d",&i);
//	printf("%d",digitsum(i));
//	return 0;
//}













//2.编写一个函数实现n^k，使用递归实现
//int mul(int n,int k)
//{
//	if(k==0)
//	return 1;
//	else if(k==1)
//	return n;
//	else
//	return n*mul(n,k-1);
//}
//int main()
//{
//	int n=0;
//	int k=0;
//	scanf("%d%d",&n,&k);
//	printf("%d",mul(n,k));
//	return 0;
//}











//int mul(int n,int k)
//{
//	int j=0;
//	int ret=1;
//	for(j=1;j<=k;j++)
//	{
//		ret=ret*n;
//	}
//	return ret;
//}
//int main()
//{
//	int n=0;
//	int k=0;
//	scanf("%d%d",&n,&k);
//	mul(n,k);
//	printf("%d",mul(n,k));
//	return 0;
//}






//1.递归和非递归分别实现求第n个斐波那契数。
//int fib(int i)
//{
//	if(i<=2)
//	return 1;
//	else 
//	return fib(i-1)+fib(i-2); 
//}
//int main()
//{
//	int i=0;
//	scanf("%d",&i);
//	printf("%d ",fib(i));
//	return 0;
//} 










//int fib(int i)
//{
//	int a=1;
//	int b=1;
//	int c=0;
//	if(i<=2)
//	return 1;
//	else
//	{
//		while(i>2)
//		{
//	    c=a+b;
//		a=b;
//		b=c;
//		i--;
//		}
//		return c;
//	}
//}
//int main()
//{
//	int i=0;
//	scanf("%d",&i);
//	printf("%d ",fib(i));
//	return 0;
//}
