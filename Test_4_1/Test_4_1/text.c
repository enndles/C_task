#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//дһ�����������ز�����������1�ĸ���
//int count_num_of_1(int num)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> i)&1) == 1)//����ͨ�����������֮���i���а�λ���������жϣ��Ƿ�����λ��1								
//		{						//��������iλ������1λ
//			count++;			//���ַ���������������Ҳ�����ڸ���
//		}
//	}
//	return count;
//}	
//
//int count_num_of_1(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);//һ�����������ڵ������а�λ�����㣬
//		count++;		//ÿ�ζ�����ȥ����������ұߵĶ�����λ��1��ֱ��Ϊ0
//	}
//	return count;
//}
//int main()
//{
//	int num = 0;
//	scanf("%d",&num);
//	int n = count_num_of_1(num);
//	printf("%d\n",n);
//	return 0;
//}


//��ȡһ�����Ķ�����λ��������ż��λ����
//int main()
//{
//	int num = 0;
//	int i = 0;
//	scanf("%d",&num);
//	//��ȡ����λ
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d",(num>>i)&1);
//	}
//	printf("\n");
//	//��ȡż��λ
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d",(num>>i)&1);
//	}
//	return 0;
//}

//��ӡXͼ��
//int main()
//{
//	int n = 0;
//	while (scanf("%d", &n) == 1)
//	{
//		int i = 0;
//		int j = 0;
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0; j < n; j++)
//			{
//				if (i == j)
//				{
//					printf("*");
//				}
//				else if (i + j == (n - 1))
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//
//	}
//	return 0;
//}


//�ж�ĳ��ĳ���ж�����
//int is_leap_year(int y)
//{
//	return (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0));
//}
//int main()
//{
//	int y = 0;
//	int m = 0;
//	int d = 0;
//	int days[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };
//	while (scanf("%d %d", &y, &m) == 2)
//	{
//		d = days[m];
//		if((is_leap_year(y) == 1) && (m ==2))
//		{
//			d++;
//		}
//		printf("%d\n", d);
//	}
//	return 0;
//}


