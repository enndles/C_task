#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//void text(int a[])
//{
//
//
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	text(arr);
//	return 0;
//}


//判断三角形类型
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	while (scanf("%d %d %d", &a, &b, &c) == 3)
//	{
//		if ((a + b > c) && (a + c > b) && (b + c > a))
//		{
//			if (a == b && b == c)
//			{
//				printf("等边三角形\n");
//			}
//			else if ((a == b && b != c) || (a == c && c != b) || (b == c && c != a))
//			{
//				printf("等腰三角形\n");
//
//			}
//			else
//			{
//				printf("普通三角形\n");
//			}
//		}
//		else
//		{
//			printf("不是三角形\n");
//		}
//	}
//	return 0;
//}

//打印一个数组的内容
//void print(int* arr,int len)
//{
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//int main()
//{
//	int arr[5] = { 1,2,3,4,5 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//	print(arr,len);
//	return 0;
//}


//逆序一个字符串

//void reverse(char* arr, int n)
//{
//	int p = 0;
//	int q = n - 1;
//	while (p < q)
//	{
//		char tmp = arr[p];
//		arr[p] = arr[q];
//		arr[q] = tmp;
//		p++;
//		q--;
//	}
//
//}
//int main()
//{
//	char arr[] = "hello world";
//	int len = strlen(arr);
//	//printf("%d", len);
//	reverse(arr,len);
//	printf("%s\n", arr);
//	return 0;
//}

//计算2 + 22 + 222+2222+22222的和
//计算n+nn+nnn+nnnn+nnnnn的和
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int sum = 0;
//	int i = 0;
//	int k = 0;
//	scanf("%d %d",&n ,&a);//a是数字，n是次数
//	for (i = 0; i < n; i++)
//	{
//		k = k * 10 + a;
//		sum += k;
//	}
//	printf("%d", sum);
//	return 0;
//}

//#include <math.h>
////判断水仙花数
//int is_flower(int i)
//{
//	int num = i;
//	int n = 1;
//	//计算位数
//	while (num/ 10)
//	{
//		n++;
//		num /= 10;
//	}
//	num = i;
//	int sum = 0;
//	while (num)
//	{
//		sum += pow(num % 10, n);
//		num = num / 10;
//	}
//	return sum == i;
// }
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10000; i++)
//	{
//		if (is_flower(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

//打印菱形
//
//int main()
//{
//	int line = 0;
//	scanf("%d", &line);
//	int i = 0;
//	int j = 0;
//
//	//上
//	for (i = 0; i < line; i++)
//	{
//		//打印空格
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//打印星号
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//
//	//下
//	for (i = 0; i < line - 1; i++)
//	{
//		for (j = 0; j <=i; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j < 2*(line-i-1) -1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//一块钱一瓶水，两个空瓶一瓶水,问最终可获得几瓶水


int main()
{
	int money = 0;
	scanf("%d", &money);
	int total = money;
	int empty = money;
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d", total);
	return 0;
}