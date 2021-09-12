#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h> 
#include <string.h>
//int main()
//{
//	int arr[10] = { 0 };
//	int num = 0;
//	num = sizeof(arr) / sizeof(arr[1]);
//	printf("%d\n", num);
//	//int a = 10;
//	//printf("%d\n", sizeof(a));
//	//printf("%d\n", sizeof(int));
//	//printf("%d\n", sizeof a);
//	return 0;
//}
//int main()
//{
//	int a = 1;
//	int b=a << 2;
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 5 % 2;
//	printf("%d\n", a);
//
//	return 0;
//}
//int main()
//{   
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//
//	return 0;
//}
//如何自定义函数-自己设计函数逻辑
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 41;
//	int num2 = 50;
//	int a = 10;
//	int sum = 0;
//	int b = 20;
//	sum = Add(num1, num2);
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//int main()
//{
//	int line = 0;
//
//	printf("加入金科\n");
//
//	while (line < 20000)
//	{
//      printf("敲一行代码:%d\n",line);
//	  line++;
//	}
//	if (line >= 20000);
//	printf("好offer\n");
//	
	//return 0;
//}
int main()
{
	int input = 0;
		printf("加入金科\n");
	printf("你要好好学习吗？(1/0)>:");
	scanf("%d", &input);
	if (input == 1)
		printf("你很厉害\n");
	else
		printf("卖红薯");
	return 0;
}
//int main()
//{
//	printf("%c\n",'\x61');
//	//printf("\x32");
//	// printf("%d\n", strlen("c:\test\32\test.c"));//
//
//	return 0;
//  }
//int main()
//{
//	printf("%S\n", "\"");
//	/*printf("%c\n",'\'');*/
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c' ,0};
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}

//int main()
//{
//	char arr1[]="abc";
//	printf("%s\n", arr1);//数组
//	char arr2[] = { 'a','b',';c','\0'};
//	printf("%s\n", arr2);
//
//	return 0;
//}
//enum color
//{
//	RED,
//	YELLOW,
//	BLUE
//};
//int main()
//{
//     
//	return 0;
//}
//enum sex//枚举常量
//{
//	male,
//    female,
//    secret
//};
//int main()
//{
//    //enum sex s = female;
//    printf("%d\n", male);//0
//    printf("%d\n", female);//1
//    printf("%d\n", secret);//2
//    return 0;
//}
//#define MAX 10
//int main()
//{
//	int arr[MAX] = { 0 };
//	printf("%d\n", MAX);
//	/*int n = 10;
//	int arr[10] = { 0 };*/
//	/*const int num = 4;
//	printf("%d\n", num);
//	num = 8;
//	printf("%d\n", num);*/
//
//	return 0;
//}