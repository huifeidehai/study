#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//数组的打印，初始化，逆置
//void Print(int arr[] , int sz) {
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void Reverse(int* arr, int sz) {
//	int i = 0;
//	for (i = 0; i < sz/2; i++) {
//		int tmp = 0;
//		tmp = *(arr+i);
//		*(arr + i) = *(arr + sz - 1 - i);
//			* (arr + sz - 1 - i) = tmp;
//	}
//}
//int main() {
//	int arr[13]= { 1,2,3,4,5,6,7,8,9,10,11,12,13};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr,sz);
//	Print(arr, sz);
//	Reverse(arr, sz);
//	Print(arr, sz);
//	return 0;
//}

//int main() {
//	int arr1[] = { 1,3,5,7,9 };
//	int arr2[] = { 2,4,6,8,10 };
//	int tmp = 0;
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++) {
//		tmp = *(arr1 + i);
//		*(arr1 + i)= *(arr2 + i);
//		*(arr2 + i)=tmp;
//	}
//	return 0;
//}

//int main() {
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++) {
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++) {
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}

//int main() {
//	int a = 0x11223344;//倒着装在地址中
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//
//	return 0; 
//}//11223300

//int i;
//int main() {
//	i--;
//	if (i > sizeof(i))
//	{
//		printf(">\n");
//	}
//	else {
//		printf("<\n");
//	}
//	return 0;
//}

//int main() {
//	int a, b, c;
//	 a = 5;
//	c = ++a;//a=6 c=6
//	b = ++c, c++, ++a, a++;
//	printf("%d\n", b);
//	b += a++ + c;
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

//int main() {
//	int i = 0;
//	int a = 0;
//	scanf("%d", &a);
//	int count=0;
//	for (i = 0; i < 32; i++) {
//		if (((a>>i) & 1)== 1){
//			printf("%d\n", i + 1);
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int count_bit(int a,int b) {
//	int count = 0;
//	int c = a ^ b;
//	while (c) {
//		c= c & (c - 1);
//		count++;
//	}
//	return count;
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a,&b);
//	int count = count_bit(a,b);
//	printf("%d\n", count);
//	return 0;
//}

//void print(int a) {
//	int i = 0;
//	printf("偶数位:");
//	for (i = 31; i >= 0; i-=2) {
//		if ((a >> i) & 1 == 1) {
//			printf("%d ", 1);
//		}
//		else {
//			printf("%d ", 0);
//		}
//		
//	}
//	printf("\n");
//	printf("奇数位:");
//	for (i = 30; i >= 0; i -= 2) {
//		if ((a >> i) & 1 == 1) {
//			printf("%d ", 1);
//		}
//		else {
//			printf("%d ", 0);
//		}
//	}
//}
//
//int main() {
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}

//void print(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++) {
//		printf("%d ", *arr++);
//	}
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9 };
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	print(arr,sz);
//	return 0;
//}

//void print_table(int a)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= a; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			int p = i * j;
//			printf("%-2d*%2d=%-2d ", i, j, p);
//		}
//		printf("\n");
//	}
//}
//int main() {
//	int a= 0;
//	scanf("%d", &a);
//	print_table(a);
//	return 0;
//	return 0;
//}

//void print(int a)
//{
//
//	if(a>9)
//	{ 
//		print(a/10);
//	}
//	printf("%d ", a % 10);
//}
//int main() {
//	int a = 0;
//	scanf("%d", &a);
//	print(a);
//	return 0;
//}

//int print(int n) {
//	/*int i = 0;
//	int tmp = 1;
//	for (i = n; i > 0; i--) {
//		 tmp = tmp * i;
//	}
//	printf("%d\n", tmp);*/
//	if (n > 0) {
//		return  n * print(n - 1);
//	}
//	else {
//		return 1;
//	}
//}
//int main() {
//	int n = 0;
//	scanf("%d", &n);
//	int tmp=print(n);
//	printf("%d\n", tmp);
//	return 0;
//}

//int my_strlen(char* arr1)
//{
//	int count = 0;
//	char* p = arr1;
//	while (*p !='\0')
//	{
//		p=p+1;
//		count++;
//	}
//	return count;
//}
//void reverse_string(char* arr1)
//{
//	char tmp = *arr1;
//
//	int len =my_strlen(arr1);
//	*arr1 = *(arr1 + len - 1);
//	arr1[len - 1] = '\0';
//	if(my_strlen(arr1+1)>=2){ 
//		reverse_string(arr1+1);
//	}
//	
//	arr1[len - 1] = tmp;
//	/*reverse_string();*/
//}
//
//int main() {
//	char arr1[] = "abc";
//		reverse_string(arr1);
//		printf("%s", arr1);
//	return  0;
//}//运用递归的方式将数组逆序排列

//int DigitSum(int a)
//{
//	if (a > 9)
//	{
//		return (a % 10)+DigitSum(a / 10);
//	}
//	return a % 10;
//}
//int main() {
//	int a = 0;
//	scanf("%d", &a);
//	int ret=DigitSum(a);
//	printf("%d\n", ret);
//	return 0;
//}//写一个递归函数，输入一个非负整数，返回组成数字之和

//double Pow(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * Pow(n, k - 1);
//	}
//	else if(k == 0)
//	{
//		return 1.0;
//	}
//	else if (k < 0) {
//		return (1.0/Pow(n, -k));
//	}
//}
//int main() {
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	double ret = Pow(n, k);
//	printf("ret= %lf", ret);
//	return 0;
//}//运用递归函数计算n的k次方；