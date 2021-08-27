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
//typedef struct LNode {//�������
//    int data;//ÿ�����ֻ���һ������
//	struct LNode* next;//ÿ�����ָ����һ�����
//}LNode,*LinkList;
//
//bool InitList(LinkList &L)//��ʼ��ͷ�ڵ�
//{
//	L = (LinkList)malloc(sizeof(LNode));//����һ��ͷ���
//	if (L == NULL)
//		return false;//�ڴ治�㣬����ʧ��
//	L->next = NULL;
//	return true;
//}	
//bool Empty(LinkList &L)//�жϵ������Ƿ�Ϊ�գ���ͷ��㣩
//{
//	if (L->next == NULL)
//		return true;//ͷ���ָ��ձ�Ҳ����ͷ������ʱû�������ڵ�
//	else
//		return false;
//}
//void List_TailInsert(LinkList& L)//β�巨����������
//{
//	int x = 0;
//	LNode* s, * r = L;//���彫���ݴ���s�r����ָ���β
//	scanf("%d", &x);//�û�������Ҫ��ŵ�����
//	while (x != 99999)//������ֹ������ݵ�һ��ֵ�������Լ�ѡһ�����������
//	{
//		s = (LNode*)malloc(sizeof(LNode));//Ϊ�½ڵ����ռ䣬����sָ��
//		s->data = x;//���½ڵ��������
//		r->next = s;//sָ��rָ��Ľ���next
//		r = s;//r�ٴ�ָ���β
//		scanf("%d", &x);
//	}
//	r->next = NULL;//β���ָ���ÿ�
//}
//void List_HeadInsert(LinkList& L)//ͷ�巨����
//{
//	int x = 0;
//	LNode* s = L;
//	scanf("%d", &x);
//	while (x != 99999)//������˳��������Ԫ��
//	{
//		s = (LNode*)malloc(sizeof(LNode));
//		s->next = L->next;//��������˵Ӧ��Ϊ�ձ�����Ӧ���Ƚ�Lָ��ձ�
//		L->next = s;//ͷ���ָ���½ڵ�
//		s->data = x;//��������
//		scanf("%d", &x);
//	}
//}
//void List_Inverse(LinkList& L,int len)//�õ���������
//{
//	if (len == 1);
//	{
//		printf("��������Ϊ1����������");
//	}
//	int i = 0;
//	LNode* s = L->next->next;//����ȫ��ָ��ڶ������
//	LNode* r = L->next->next;
//	LNode* p = L->next;//ʼ��ָ���һ�����
//	while (i < len - 1)//��len����㣬ֻ���ƶ�len-1��
//	{
//		r=r->next;//rָ��  ��Ҫ�Ƶ�ǰ��Ľ��  �ĺ���һ�����
//		s->next = L->next;//����Ҫ�ƶ��Ľ��ָ��ͷ����һ�����
//		L->next = s;//ͷ���ָ��ý��
//		s = r;//s�ƶ�����һ����Ҫǰ�õĽ��
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
//	InitList(L);//��ʼ��������
//	Empty(L);
//	List_TailInsert(L);//β�巨
//	len=Length(L);//���㵥������
//	List_HeadInsert(L);//ͷ�巨
//	List_Inverse(L,len);//��������
//	
//	
//	return 0;
//}