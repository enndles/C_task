#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//写一个函数，返回参数二进制中1的个数
//int count_num_of_1(int num)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((num >> i)&1) == 1)//这里通过右移运算符之后和i进行按位与来进行判断，是否最右位是1								
//		{						//这里右移i位而不是1位
//			count++;			//这种方法既适用于正数也适用于负数
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
//		n = n & (n - 1);//一个数和它相邻的数进行按位与运算，
//		count++;		//每次都会消去这个数的最右边的二进制位的1，直至为0
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


//获取一个数的二进制位的奇数和偶数位数字
//int main()
//{
//	int num = 0;
//	int i = 0;
//	scanf("%d",&num);
//	//获取奇数位
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d",(num>>i)&1);
//	}
//	printf("\n");
//	//获取偶数位
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d",(num>>i)&1);
//	}
//	return 0;
//}

//打印X图形
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


//判断某年某月有多少天
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


