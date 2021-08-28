#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
//int main() {
//	int a = 11;
//	a = a | (1 << 2);//将第三位替换成1
//	printf("%d\n", a);
//	a = a & (~(1 << 2));//第三位再换回来
//	printf("%d\n", a);
//	return 0;
//}
//void test1(int arr[])
//{
//	printf("%d\n", sizeof(arr));//(2) 4
//}
//void test2(char ch[])
//{
//	printf("%d\n", sizeof(ch));//(4) 4
//}
//int main()
//{
//	int arr[10] = { 0 };
//	char ch[10] = { 0 };
//	printf("%d\n", sizeof(arr));//(1)  40
//	printf("%d\n", sizeof(ch));//(3)  10
//	test1(arr);
//	test2(ch);
//	return 0;
//}
//int main() {
//	int i = 0, a = 1 , b = 2, c = 3, d = 4;
//	i = a++ || ++b || d++;
//	printf("a=%d\n b=%d\n c=%d\n d=%d\n", a, b, c, d);
//	return 0;
//}

//int main() {
//	int a = 20;
//	int b = 10;
//	int max = 0;
//	max = (a > b ? a: b);
//
//	return 0;
//}
//创建了一个结构类型-struct stu
//struct stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};
//int main() {
//	int a = 10;
//	struct stu s1 = { "csh",21,"20000324" };
//	struct stu* ps = &s1;
//	printf("%s\n", (*ps).name);
//	printf("%s\n", ps->name);
//	//利用struct stu这个类型创建了一个学生对象s1，并初始化
//	
//}

//int main() {
//	char a = 3;
//	//00000000000000000000000000000011
//	char b = 127;
//	char c = a + b;
//	printf("%d\n", c);
//}
//int main()
//{
//	char a = 0xb6;
//	short b = 0xb600;
//	int c = 0xb6000000;
//	if (a == 0xb6)
//		printf("a");
//	if (b == 0xb600)
//		printf("b");
//	if (c == 0xb6000000)
//		printf("c");
//	return 0;
//}
//int main() {
//	char c = 1;
//	printf("%u\n", sizeof(c));
//	printf("%u\n", sizeof(+c));
//	printf("%u\n", sizeof(!c));
//	return 0;
//}
//int main() {
//	int a = 1, b = 2, c = 3, d = 4, e = 5, f = 6, g = 0;
//	g = a * b + c * d + e * f;
//	printf("%d\n", g);
//	return 0;
//}
/*int main(){
int i = 10; 
i = i-- - --i * (i = -3) * i++ + ++i;
printf("i = %d\n", i);
return 0; 
}*///编译器难以理解
int main()
{
	int i = 1;
	int ret = (++i) + (++i) + (++i);
	printf("%d\n", ret);
	printf("%d\n", i);
	return 0;
}
