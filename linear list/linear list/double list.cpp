//#define _CRT_SECURE_NO_WARNINGS 
//#include<stdlib.h>
//#include<stdio.h>
//
//typedef struct DNode {//����˫���������ͣ�
//	int data;//������
//	struct DNode* prior, * next;//ǰ���ͺ��ָ��
//}DNode,*DLinkList;
//bool InitDLinkList(DLinkList &L)
//{
//	L = (DNode*)malloc(sizeof(DNode));//����һ��ͷ���
//	if (L == NULL)
//		return false;
//	L->prior = NULL;//ͷ����ǰ����Զָ��NULL
//	L->next = NULL;//ͷ������ʱû���������
//	return true;
//}
//bool Empty(DLinkList& L) {//�ж�˫�����Ƿ�Ϊ��
//	if (L->next = NULL)
//		return true;
//	else
//		return false;
//}
//bool InserNextDNode(DNode* p, DNode s) {//��p�������s���
//	if (p == NULL || s == NULL)//�Ƿ�����
//		return fales;
//    s->next = p->next;
//	if(p->next!=NULL)//p�к�̽��
//		p->next->prior = s;
//		p->next = s;
//		s->prior = p;
//		retrun true;
//
//}
//bool DeleteNextDNode(DNode* p)//ɾ��p����Ľ��
//{
//	if (p == NULL) 
//		return false;
//	DNode* q = p->next;//����p�ĺ�̽��Ϊq
//		if (q == NULL)
//			return false;//pû�к�̽��
//    p->next = q->next;
//	if(q->next!=NULL)//�ж�q�Ƿ��к�̽��
//	q->next->prior = p;
//	free(q);
//	return true;
//}
//void DestoryList(DLinkList &L){//����һ��˫����
//	while (L->next != NULL)
//		DeleteNextDNode(L);//��ͷ����ֻҪ�н���ִ��ɾ����̽�����
//	free(L);//�ͷ�ͷ���
//	L = NULL;//ͷָ��ָ��NULL
//}
//
//int main() {
//	DLinkList L;
//	InitDLinkList(L);
//	Empty(L);
//
//
//}