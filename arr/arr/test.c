#define _CRT_SECURT_NO_WARNING_1
#include <stdio.h>
#include<string.h>
//void bubble_sort(int arr[],int sz) {
//	int i = 0; 
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int flag = 1;
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 0;//�����������˵����������������Ҫ�ٴν���ѭ������
//			}
//		}
//		if (flag == 1)//˵������һ�ν���Ҳû�н��У����ʱ�����Ѿ����򣬲���Ҫ�ٴ������ˡ�
//			break;
//	}
//
//}
//int main() {
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	
//	return 0;
//}//���������ð������

//int main() {
//	int arr[3][4] = { {1,2,3,4},{5,6,7} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("&arr[%d][%d]=%p\n", i, j, &arr[i][j]);
//		}
//	}
//}//��ӡ��ά����ĵ�ַ

//int main() {
//	int arr[3][4] = { {1,2,3 }, {4 ,5} };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;//��ӡÿ��Ԫ��
//}