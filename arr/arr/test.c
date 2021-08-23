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
//				flag = 0;//如果经过交换说明可能依旧无序，需要再次进行循环排序
//			}
//		}
//		if (flag == 1)//说明本趟一次交换也没有进行，则此时数组已经有序，不需要再次排序了。
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
//}//对数组进行冒泡排序

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
//}//打印二维数组的地址

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
//	return 0;//打印每行元素
//}