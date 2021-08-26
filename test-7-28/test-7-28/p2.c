
//包含一个stdio.h的文件
//std-标准 standard input output
#include<stdio.h>
int main()
{
	extern int g_val;
	printf("g_val=%d\n", g_val);
	return 0;
}
//int globa1 = 2020;
//void test()
//{
//	printf("test()--%d\n",globa1);
//}
//int main()
//{
//	test();
//	printf("%d\n",globa1);
//	return 0;
//}
//int main()
//{int num = 20;
//	{
//printf("num=%d\n", num);
//	}
//	
//	return 0;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;//计算两个数的和
//	int sum = 0;
//	scanf_s("%d%d", &num1, &num2);//输入数据-使用输入函数scanf
//	sum = num1 + num2;
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int a = 10;
//int main()
//{
//	{
//		
//		
//	}
//	printf("%d\n", a);
//	return 0;
//}
//int num1 = 20;//全局变量
//int main()
//{
//	int num1 = 10;//局部变量
//	printf("%d\n", num1);
//	return 0;
//}
//int main()
//{
//	short age=21;//向内存申请两个字节存放20
//	float weight = 84.6f;//
//	return 0;
//}
//int main()//sizeof-表示输入类型的大小
//{
//	printf("%d\n", sizeof(char));// 1 字节
//	printf("%d\n", sizeof(short)); //2
//	printf("%d\n", sizeof(int));//4
//	printf("%d\n", sizeof(long));//4/8
//	printf("%d\n", sizeof(long long));//8
//	printf("%d\n", sizeof(float));//4
//	printf("%d\n", sizeof(double));//8
//	
//	return 0;
//}
//int main()//主函数-程序的入口
//{ 
//	//printf("hello world\n"); 
//	//char ch='A';//内存
//	//printf("%c\n", ch);//%c-打印字符格式的数据
//	//short int-短整型
//	//int 是整型的意思
//	// 	   long-长整型
//	//int age = 20;
//	//printf("%d\n",age);//%d-打印整形十进制数据
//	//long num = 100;
//	//printf("%d\n", num);
//	//float f = 5.0;
//	//printf("%f\n", f);
//	//double d = 3.14;
//	//printf("%lf\n", d);
//	return 0;//返回 0
//}

//printf 是库函数，c语言本身的函数，需要用#include向c语言“打个招呼”
