#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	int a = 3;//int����ռ�ĸ��ֽڣ�һ���ֽڰ˸�����λ����32������λ
//	int b = -5;
//	int c = a & b;//&����λ������������������Ķ����Ʋ���������㣬ȫΪһ����һ����0����0
//	printf("c = %d\n",c);
//	
//	int x = 3;
//	int y = -5;
//	int z = a | b;// |����λ����������������Ķ�����λ����ȫΪ0����0����1����1
//	printf("z = %d",z);
//
//	int m = 3;
//	int n = -5;
//	int q = m ^ n;//  ^ : ��λ��򣬶�����λ������ͬΪ0������Ϊ1
//	printf("\nq = %d",q);
//	return 0;
//}
//
//int main()
//{
//
//	//3^3 = 0
//	//0 ^ 5  =5
//	//3^3^5 =  5
//	//3^5^3 = 5    ��λ������㽻����
//	int a = 3;
//	int b = 5;
//	printf("����ǰ��a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("������a=%d b=%d\n",a,b);
//
//	return 0;
//}

int main()
{
	int max = 0;
	int i = 0;
	int score = 0;
	for (i = 0; i < 3; i++)
	{
		scanf("%d",&score);
		if (score > max)
		{
			max = score;
		}
	}
	printf("%d",max);
	return 0;
}