#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	//1��ָ�����;�����ָ�뱻������ʱ���ʼ����ֽڣ�����ı�ָ��Ĵ�С��ָ���Сֻ��������й�
//	//2��ָ�����ͻ�������ָ��+-1ʱ�������ֽڵĴ�С���磺int*����+-1�����ĸ��ֽڣ�char*һ������һ���ֽ�
//	int a = 0x11223344;
//	int* pa = &a;
//	printf("%p\n",pa);
//	return 0;
//}

//int main()
//{
//	int arr[10] = {0};
//	printf("%d\n",&arr[9]-&arr[0]);//9
//	//ָ������ľ���ֵ��ֵΪָ��֮��Ԫ�صĸ���������ָ��ͬһ��ռ��ָ����������
//	return 0;
//}

////ָ�������Ԫ�ظ���
//int my_len(char* arr)
//{
//	char* p = arr;
//	while (*arr != '\0')
//	{
//		arr++;
//	}
//	return (arr - p);
//}
//
//int main()
//{
//	char arr[] = "abcde";
//	int len = my_len(arr);
//	printf("%d",len);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	printf("%p---->%p\n", arr,p);//000000ECFAF0F5B8---->000000ECFAF0F5B8
//	return 0;
//}
//void print(int* arr, int len)
//{
//	int* p;
//	for (p = arr; p < &arr[len];)
//	{
//		printf("%d\n",*p++);//�൱����printf("%d",*p);Ȼ��p++.
//	}
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	return 0;
//}

//����ָ��:ָ��ָ�������ָ��
//int main()
//{
//	int a = 0;
//	int* pa = &a;
//	int** ppa= &pa;
//
//	**ppa = 20;
//	printf("%d",a);
//	return 0;
//}

//ָ������
//���ָ�������
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int* p[10] = {&a,&b,&c};
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d\n",*p[i]);
//	}
//	return 0;
//}

int main()
{

	//ָ������ʵ�ֶ�������
	int arr1[4] = { 1,2,3,4 };
	int arr2[4] = { 2,3,4,5 };
	int arr3[4] = { 3,4,5,6 };
	int* p[3] = {arr1, arr2, arr3};
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}

	return 0;
}