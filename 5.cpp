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
	printf("��ʼ��������֣�"); 
	while(1)
	{
		scanf("%d",&guess);
		if(ret>guess)
		{
			printf("��С��\n");
		}
		else if(ret<guess)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ��¶��ˣ�\n");
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
		printf("��ѡ��>");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				game();
				break;
			case 0:
			    printf("�˳���Ϸ��\n");
				break;
			default:
			    printf("�������������ѡ��\n");
				break;	
		}
	}
	while(input);
	return 0;
}















//4.��дһ�����򣬿���һֱ���ռ����ַ���
//�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
//������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
//��������ֲ������
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
















//3.��д����ģ��������������ĳ�����
//  ����������������룬������ȷ����ʾ����¼�ɹ���,�������
//  �����������룬����������Ρ����ξ�������ʾ�˳�����
//int main()
//{
//	int i=1;
//	char arr[20]={0};
//	while(i<4)
//	{
//		if(i<2)
//		{
//			printf("���������룺\n");
//		}
//		scanf("%s",&arr);
//		if((strcmp(arr,"123456"))==0)
//		{
//			printf("����ɹ�\n");
//			break;
//		}
//		else
//		{
//			if(i<3)
//			{
//				printf("��������������������룡\n");
//			}
//			i++;
//		}
//	}
//	if(i==4)
//	{
//		printf("�����������������˳�����"); 
//	}
//	return 0;
// } 











//2.д����������������������в�����Ҫ�����֣�
//�ҵ��˷����±꣬�Ҳ�������-1.���۰���ң�
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
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���%d\n",search(arr,k,sz));
//	}
//	return 0;
// } 
