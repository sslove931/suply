#include<stdio.h>
//4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У�
//�ж��ٸ�λ(bit)��ͬ�� 
//��������:
//1999 2299
//�������:7
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












//3. ���һ��������ÿһλ��
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










//2.��ȡһ�������������������е�ż��λ������λ��
//�ֱ�������������С�
//int main()
//{
//	int i=0;
//	int n=0;
//	int j=0;
//	int k=0;
//	scanf("%d",&n);
//	printf("�������ǣ�");
//	for(i=30;i>=0;i-=2)
//	{
//		printf("%d",(n>>i)&1);
//		j++;
//	}
//	printf("\nj=%d",j);
//	printf("\nż�����ǣ�"); 
//	for(i=31;i>=0;i-=2)
//	{
//		printf("%d",(n>>i)&1);
//		k++;
//	} 
//	printf("\nk=%d",k);
//	return 0;
//}










//1.дһ���������ز����������� 1 �ĸ���
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
