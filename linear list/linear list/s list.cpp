#define _CRT_SECURE_NO_WARNINGS 
#define MaxSize 10
#include<stdlib.h>
#include<stdio.h>
struct Node
{
	int data;
	int next;//�¸����������±�
};
typedef struct {
	int data;
	int next;
}SLinkList[MaxSize];

int main()
{
	struct Node x;
	printf("x=%d\n", sizeof(x));
	struct Node a[MaxSize];
	printf("a=%d\n", sizeof(a));
	SLinkList d;
	printf("d=%d\n", sizeof(d));
	return 0;
}