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
//}//strcpy,memset��ʹ��

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
//}�Զ��彻���������ĺ���

//int is_prime(int x) {
//	int i = 0;
//	for (i = sqrt(x); i > 1; i--)
//	{
//		if (x % i == 0)//��������
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
//}�����ж�����

//int binary_search(int arr1[], int x,int sz) {//arr1�����ݵ����������λԪ��ֵ������Ҫ��ǰ����±����λ
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
//		printf("�Ҳ���");
//	else
//		printf("�ҵ��ˣ��±���%d", ret);
//	return 0;
//}���ֲ���Ѱ����������ֵ

//void Add(int* p) {
//	(*p)++;//++���ȼ��ϸߣ����Ⱥ�p���ã����԰�*p��������������
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
//}//ÿ�δ�ӡ����1

//int main() {
//
//	printf("%d", printf("%d", printf("%d", 43)));//printf����ֵ�Ǵ�ӡ�ַ��ĸ���
//	return 0;
//}

//int main() {
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//}ͷ�ļ���Դ�ļ�����

void print(int n) {
	if (n > 9)//�ж��Ƿ�Ϊ��λ��
	{
		print(n/10);//ȥ���������ֵ�ǰ��λ��Ȼ���ٴε��ú�������������жϣ�ֱ���������ӡ��ǰ������

	}
	printf("%d ", n%10);//���ֵ����һλ��������������һλ������ӡ�� 
}
int main() {
	
	unsigned int num = 0;
	scanf("%d", &num);
	print(num);
	return 0;
}//����һ������ֵ������˳���ӡ����ÿһλ

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
//}//��д��������������ʱ���������ַ����ĳ���

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
//}//n�Ľ׳�

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
//		return Fib(n - 1) + Fib(n - 2);//������̫��
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
//}��n��쳲�������
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