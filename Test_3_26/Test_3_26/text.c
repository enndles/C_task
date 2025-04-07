#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
//int main()
//{
//	int a = 3;//int类型占四个字节，一个字节八个比特位，共32个比特位
//	int b = -5;
//	int c = a & b;//&：按位与运算符，两个整数的二进制补码进行运算，全为一才是一，有0就是0
//	printf("c = %d\n",c);
//	
//	int x = 3;
//	int y = -5;
//	int z = a | b;// |：按位或运算符，两个数的二进制位补码全为0才是0，有1就是1
//	printf("z = %d",z);
//
//	int m = 3;
//	int n = -5;
//	int q = m ^ n;//  ^ : 按位异或，二进制位补码相同为0，相异为1
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
//	//3^5^3 = 5    按位异或满足交换律
//	int a = 3;
//	int b = 5;
//	printf("交换前：a=%d b=%d\n", a, b);
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("交换后：a=%d b=%d\n",a,b);
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