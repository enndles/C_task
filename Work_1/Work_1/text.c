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

//�ݹ�ʵ��
//void reverse(char* str)
//{
//	char tem = *str;//������Ԫ��ֵ
//	int len = strlen(str);//�����ַ�������
//	*str = *(str + len - 1);//�ѵ�һ��Ԫ����Ϊ���һ���ַ�
//	*(str + len - 1) = '\0';//�����һ���ַ���Ϊ'\0'��Ŀǰ�ַ������ȼ�1
//	if(strlen(str + 1) > 1)//ֻ��ʣ���ַ������ȴ��ڶ��Ž��н���
//		reverse(str + 1);//�ݹ��ظ����������ֵ�ŵ���Ӧλ�õ�ǰ��
//	*(str + len - 1) = tem;//���ڵ��⣬��ԭ�������ǰ���ֵ�ŵ���Ӧλ�õĺ���
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse(arr);
//	printf("%s\n",arr);
//	return 0;
//}
// 

//���λ����֮��
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

//���ݺ���
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

//����һ������һά���飬��������ʵ�����¹��ܣ�
//��ʼ��ֵȫΪ0
//��ӡÿһ��Ԫ��
//Ԫ�صߵ�


//��ʼ��
void Init(int* arr, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		arr[i] = 0;
	}
}

//��ӡ
void print(int* arr, int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}

//��ת����Ԫ��
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