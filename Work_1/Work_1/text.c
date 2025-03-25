#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


//void reverse(char* arr)
//{
//	int left = 0;
//	int right = strlen(arr) - 1;
//	while (left < right)
//	{
//		char tem = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tem;
//		left++;
//		right--;
//	}
//}

//递归实现
//void reverse(char* str)
//{
//	char tem = *str;//保存首元素值
//	int len = strlen(str);//计算字符串长度
//	*str = *(str + len - 1);//把第一个元素置为最后一个字符
//	*(str + len - 1) = '\0';//把最后一个字符置为'\0'，目前字符串长度减1
//	if(strlen(str + 1) > 1)//只有剩余字符串长度大于二才进行交换
//		reverse(str + 1);//递归重复，将后面的值放到对应位置的前面
//	*(str + len - 1) = tem;//从内到外，把原本储存的前面的值放到对应位置的后面
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse(arr);
//	printf("%s\n",arr);
//	return 0;
//}
// 

//求各位数字之和
//int Digitsum(unsigned int n)
//{
//	if (n > 9)
//	{
//		return Digitsum(n / 10) + (n % 10);
//	}
//	else
//	{
//		return n;
//	}
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u",&n);
//	int ret = Digitsum(n);
//	printf("%d",ret);
//	return 0;
//}

//求幂函数
//double pow(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * pow(n, k - 1);
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//	{
//		return 1.0 / pow(n,-k);
//	}
//
//
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d",&n,&k);
//	double ret = pow(n,k);
//	printf("%lf\n",ret);
//	return 0;
//}

//创建一个整型一维数组，创建函数实现以下功能：
//初始化值全为0
//打印每一个元素
//元素颠倒


//初始化
void Init(int* arr, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		arr[i] = 0;
	}
}

//打印
void print(int* arr, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

//翻转数组元素
void reverse(int* arr, int n)
{
	int left = 0;
	int right = n - 1;
	while(left < right)
	{
		int tem = 0;
		tem = arr[left];
		arr[left] = arr[right];
		arr[right] = tem;
		left++;
		right--;
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int len = sizeof(arr) / sizeof(arr[0]);
	reverse(arr, len);
	print(arr, len);
	Init(arr, len);
	print(arr, len);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}

	return 0;
}