//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdlib.h>
//#include<stdio.h>
//
//
//#define InitSize 10
//typedef struct {
//	int* data;
//	int length;
//	int MaxSize;
//}Seqlist;
//
//
//void InitList(Seqlist &L)
//{
//	L.data = (int*)malloc(sizeof(int) * InitSize);
//	L.length = 0;
//	L.MaxSize = InitSize;
//}
//
//void IncreaseList(Seqlist &L, int len)
//{
//	int* p = L.data;
//	L.data = (int*)malloc((L.MaxSize + len) * sizeof(int));
//	for (int i = 0; i < L.length; i++)
//	{
//		L.data[i] = p[i];
//	}
//	L.MaxSize = L.MaxSize + len;
//	free(p);
//}
//int main()
//{
//	
//	Seqlist L;
//	InitList(L);
//	IncreaseList(L, 5);
//	for (int i = 0; i < L.length; i++)
//	{
//		printf("%d\n", L.data[i]);
//	}
//	printf("%d\n", L.length);
//	return 0;
//}
//
//
//typedef struct LNode {//结点类型
//    int data;//每个结点只存放一个数据
//	struct LNode* next;//每个结点指向下一个结点
//}LNode,*LinkList;
//
//bool InitList(LinkList &L)//初始化头节点
//{
//	L = (LinkList)malloc(sizeof(LNode));//分配一个头结点
//	if (L == NULL)
//		return false;//内存不足，分配失败
//	L->next = NULL;
//	return true;
//}	
//bool Empty(LinkList &L)//判断单链表是否为空（带头结点）
//{
//	if (L->next == NULL)
//		return true;//头结点指向空表，也就是头结点后暂时没有其他节点
//	else
//		return false;
//}
//void List_TailInsert(LinkList& L)//尾插法建立单链表
//{
//	int x = 0;
//	LNode* s, * r = L;//定义将数据存在s里，r负责指向表尾
//	scanf("%d", &x);//用户输入想要存放的数据
//	while (x != 99999)//设置终止存放数据的一个值，可以自己选一个特殊的数字
//	{
//		s = (LNode*)malloc(sizeof(LNode));//为新节点分配空间，并由s指向
//		s->data = x;//在新节点存入数据
//		r->next = s;//s指向r指向的结点的next
//		r = s;//r再次指向表尾
//		scanf("%d", &x);
//	}
//	r->next = NULL;//尾结点指针置空
//}
//void List_HeadInsert(LinkList& L)//头插法建立
//{
//	int x = 0;
//	LNode* s = L;
//	scanf("%d", &x);
//	while (x != 99999)//按输入顺序逆序存放元素
//	{
//		s = (LNode*)malloc(sizeof(LNode));
//		s->next = L->next;//理论上来说应该为空表，所以应该先将L指向空表
//		L->next = s;//头结点指向新节点
//		s->data = x;//存入数据
//		scanf("%d", &x);
//	}
//}
//void List_Inverse(LinkList& L,int len)//让单链表逆序
//{
//	if (len == 1);
//	{
//		printf("单链表长度为1，无需逆置");
//	}
//	int i = 0;
//	LNode* s = L->next->next;//首先全部指向第二个结点
//	LNode* r = L->next->next;
//	LNode* p = L->next;//始终指向第一个结点
//	while (i < len - 1)//若len个结点，只需移动len-1次
//	{
//		r=r->next;//r指向  需要移到前面的结点  的后面一个结点
//		s->next = L->next;//将需要移动的结点指向头结点后一个结点
//		L->next = s;//头结点指向该结点
//		s = r;//s移动到下一个需要前置的结点
//		i++;
//	}
//	p->next = NULL;
//}
//int Length(LinkList& L)
//{
//	int len = 0;
//	LNode* s = L;
//	while (s->next != NULL)
//	{
//		s = s->next;
//		len++;
//	 }
//	return len;
//}
//int main() {
//	LinkList L;
//	int len = 0;
//	InitList(L);//初始化单链表
//	Empty(L);
//	List_TailInsert(L);//尾插法
//	len=Length(L);//计算单链表长度
//	List_HeadInsert(L);//头插法
//	List_Inverse(L,len);//逆序排列
//	
//	
//	return 0;
//}