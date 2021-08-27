//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdlib.h>
//#include<stdio.h>
//
//typedef struct DNode {//定义双链表结点类型；
//	int data;//数据域
//	struct DNode* prior, * next;//前驱和后继指针
//}DNode,*DLinkList;
//bool InitDLinkList(DLinkList &L)
//{
//	L = (DNode*)malloc(sizeof(DNode));//分配一个头结点
//	if (L == NULL)
//		return false;
//	L->prior = NULL;//头结点的前驱永远指向NULL
//	L->next = NULL;//头结点后暂时没有其它结点
//	return true;
//}
//bool Empty(DLinkList& L) {//判断双链表是否为空
//	if (L->next = NULL)
//		return true;
//	else
//		return false;
//}
//bool InserNextDNode(DNode* p, DNode s) {//在p结点后插入s结点
//	if (p == NULL || s == NULL)//非法参数
//		return fales;
//    s->next = p->next;
//	if(p->next!=NULL)//p有后继结点
//		p->next->prior = s;
//		p->next = s;
//		s->prior = p;
//		retrun true;
//
//}
//bool DeleteNextDNode(DNode* p)//删除p结点后的结点
//{
//	if (p == NULL) 
//		return false;
//	DNode* q = p->next;//声明p的后继结点为q
//		if (q == NULL)
//			return false;//p没有后继结点
//    p->next = q->next;
//	if(q->next!=NULL)//判断q是否还有后继结点
//	q->next->prior = p;
//	free(q);
//	return true;
//}
//void DestoryList(DLinkList &L){//销毁一个双链表
//	while (L->next != NULL)
//		DeleteNextDNode(L);//，头结点后只要有结点就执行删除后继结点操作
//	free(L);//释放头结点
//	L = NULL;//头指针指向NULL
//}
//
//int main() {
//	DLinkList L;
//	InitDLinkList(L);
//	Empty(L);
//
//
//}