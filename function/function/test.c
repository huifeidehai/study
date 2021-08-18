#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
//#include"add.h"
//int main() {
//	char arr1[] = "bit";//b i t \0
//	char arr2[20] = "##########" ;
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//int main() {
//
//	char arr1[] = "hello world";
//	memset(arr1, '#', 5);
//	printf("%s\n", arr1);
//	return 0;
//}//strcpy,memset的使用

//int Max(int x, int y) {
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main() {
//	int a = 20;
//	int b = 10;
//	int max = Max(a, b);
//	printf("%d\n", max);
//	return 0;
//}

//void Swap(int* x,int* y) {
//	int tmp=0;
//	tmp = *x;
//	*x = *y;
//	*y = tmp;
//}
//
//
//int main() {
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d\n", a, b);
//	Swap(&a, &b);
//	printf("a=%d,b=%d",a,b);
//	return 0;
//}自定义交换两个数的函数

//int is_prime(int x) {
//	int i = 0;
//	for (i = sqrt(x); i > 1; i--)
//	{
//		if (x % i == 0)//不是素数
//		{
//			return 0;
//		}
//		if (i == 1)
//			return 1;
//	}
//}
//	int main()
//	 {
//	int a = 0;
//	//int b=scanf("%d", &a);
//	for(a=101;a<200;a+=2)
//	{ 
//	if (is_prime(a) == 1)
//		printf("%d ", a);
//
//	}
//	return 0;
//}函数判断素数

//int binary_search(int arr1[], int x,int sz) {//arr1被传递的是数组的首位元素值，所以要提前算出下标最后位
//	int left = 0;
//	int mid = 0;
//	int right = sz-1;
//	while (left<=right) {
//		mid = (right + left) / 2;
//		if (arr1[mid] < x)
//		{
//			left = mid + 1;
//		}
//		else if (arr1[mid] > x)
//			right = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//
//
//}
//int main() {
//	
//	int arr[] = { 1,2,3,4,5,6,7,8,9};
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret=binary_search(arr,k,sz);
//	if (ret == -1)
//		printf("找不到");
//	else
//		printf("找到了，下标是%d", ret);
//	return 0;
//}二分查找寻找数组中数值

//void Add(int* p) {
//	(*p)++;//++优先级较高，会先和p作用，所以把*p用括号括起来；
//}
//int main() {
//	int num = 0;
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	Add(&num);
//	printf("%d\n", num);
//	return 0;
//}//每次打印增加1

//int main() {
//
//	printf("%d", printf("%d", printf("%d", 43)));//printf返回值是打印字符的个数
//	return 0;
//}

//int main() {
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//}头文件和源文件声明

void print(int n) {
	if (n > 9)//判断是否为两位数
	{
		print(n/10);//去除输入数字的前三位，然后再次调用函数，进入后先判断，直到结束后打印当前的数字

	}
	printf("%d ", n%10);//数字的最后一位，输入的数字最后一位是最后打印的 
}
int main() {
	
	unsigned int num = 0;
	scanf("%d", &num);
	print(num);
	return 0;
}//输入一个整形值，按照顺序打印它的每一位

//int my_strlen(char* str) {
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str+1);
//
//	}
//	else
//		return 0;
//
//}
//int main() {
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}//编写函数不允许创建临时变量，求字符串的长度

//int Fac1(int n)
//{
//	if (n != 1)
//		return n * Fac1(n - 1);
//	else 
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac1(n);
//	printf("%d\n", ret);
//}//n的阶乘

//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);//计算量太大
//}

//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//int main() {
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("%d\n", ret);
//	return 0;
//}第n个斐波那契数
//
//void test() {
//	if (n < 10000) {
//		test(n + 1);
//	}
//}
//int main() {
//	test(1);
//	return 0;
//}