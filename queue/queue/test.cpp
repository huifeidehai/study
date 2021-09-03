#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#define MaxSize 10

//typedef struct {
//    int data[MaxSize];
//    int front, rear;
//    int size;
//}SqQueue;
//
//
//void InitQueue(SqQueue &S)
//{
//    S.front =0;
//    S.rear = MaxSize - 1;
//}
//bool Empty(SqQueue S)
//{
//    if (S.size == 0)
//        return true;
//    return false;
//}
//
//bool EnQueue(SqQueue S, int x)
//{
//    if (S.size == MaxSize)
//        return false;
//    S.rear = (S.rear + 1) % MaxSize;
//    S.data[S.rear] = x;
//    (S.size)++;
//    return true;
//}
//bool DeQueue(SqQueue S)
//{
//    if (S.size == 0)
//        return false;
//    S.front = (S.front + 1) % MaxSize;
//    (S.size)--;
//    return true;
//}
//int main(){
//    SqQueue S;
//    S.size = 0;
//    int x = 0;
//    InitQueue(S);
//    Empty(S);
//    scanf("%d", &x);
//    while (x != 9999)
//    {
//        EnQueue(S, x);
//        scanf("%d", &x);
//    }
//    DeQueue(S);
//    printf("%d", S.data[S.front]);
//    return 0;
//}