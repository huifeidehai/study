#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <stdlib.h>
#include<math.h>
#include<time.h>
//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//
//	printf("����60s�ػ��������룺������ ��ȡ���ػ�\n������");
//		scanf("%s", input);
//	if (strcmp(input, "������") == 0)
//	{
//		system("shutdown -a");
//}
//
//	return 0;
//}60s����ؼ���ȡ���ػ�


//void game() {
//	int ret = 0;
//	int input = 0;
//	int i = 0;
//	
//		 ret= rand()%100+1;//1-100��һ�������
//		
//	for (i = 1; i < 12; i++)
//	{
//		printf("���������֣�\n");
//		scanf("%d", &input);//�����������
//		if (input < ret)
//			printf("��С��\n");
//		else if (input > ret)
//			printf("�´���\n");
//		else
//		{
//			system("cls");
//			Sleep(5000);
//			printf("��ȷ�𰸣�%d\n", ret);
//			printf("�ش���ȷ\n");
//			printf("����һ��\n");
//			Sleep(3000);
//		  break;
//		}
//		
//	}
//	if (i == 12)
//		printf("%d\n", ret);
//}
//void menu() {
//	printf("*************************\n");
//	printf("***   1.play   0.exit ***\n");
//	printf("*************************\n");
//}
//int main() {
//	int input = 0;
//	srand((unsigned int)time(NULL));//��ʱ�������һ��������,unsigned-ǿ�������滻(��������ֻ����һ��)
//	//time_t time( time_t *timer );
//	//srand( unsigned int seed );
//	do {
//		menu();//��ʼ����
//		printf("��ѡ��");
//		scanf("%d", &input);
//		system("cls");
//		switch (input) {
//		case 1:
//			game();
//			
//			continue;
//		case 0:
//			printf("�˳���Ϸ");
//			break;
//		default:
//			printf("ѡ�����\n");	
//			break;
//		}
//       
//	} while (input);
//	return 0;
//}
//��������Ϸ��1�������������һ������ 2��������

//int main() {
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++){
//		for (j = 1;j <= i ; j++)
//		{
//				printf("%d*%d=%-2d ",j,i, i * j);
//		}	 
//				printf("\n");
//			
//			
//		
//	}
//	return 0;
//}�žų˷���
 
 
//int main() {
//	int arr[] = {-1,-2,-3,-4,-5,-6,-7,-8,-9,-10 };
//	int max = arr[0];
//	int i = 0;
//	int j = sizeof(arr)/sizeof(arr[0])-1;
//	for (i = 1; i <= j; i++)
//		if (max < arr[i])
//			max = arr[i];
//	printf("%d\n", max);
//	return 0;
//}�Ƚ�ʮ������С

/* int main() {
//	int i = 0;
//	int j = 1;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++, j *= (-1))
//	{
//		sum += j*(1.0/i);
//		
//}
//	printf("%lf\n", sum);
//		return 0;
}*/
//���1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + ..... - 1 / 000
/*int main() {
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			count++;
		if (i / 10 == 9)
			count++;
	}
	printf("%d\n", count);
	return 0;
}*/
//1-100�����ֹ��м���9
/*int main()
{

int a = 0;
	int b = 0;
	for (a = 101; a <= 200; a+=2)
	{
		for (b = sqrt(a); b > 1; b--)
		{
			if (a % b == 0)
				break;
			
		}
		if (b==1)
			printf("%d\n", a);
	}
	return 0;*/
//}100-200֮�������
/*int main() {
	int i = 0;
	int count = 0;
	for (i = 1000; i >=1000 && i <= 2000; i++)
	{
		if (i % 4 == 0 && i % 100 != 0)
		{
			printf("%d ", i);
			count++;
		}
		else if (i % 400 == 0)
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("%d\n", count);
	return 0;*/
//}��ӡ1000-2000��֮���������
/*һ�֣�int Max(int x, int y) {
	if (x >= y)
		return x;
	else
		return y;
}
int main() {
	int a = 0;
	int b = 0;
	int i = 0;
	scanf("%d %d", &a, &b);
	for (i = max(a, b); i > 0; i--)
		if (a % i == 0 && b % i == 0)
		{
		
			printf("%d\n", i);
			break;
		}
		return 0;
�ڶ��֣�int main() {
	int a = 0;
	int b = 0;
	int r = 0;
	int med = 0;
	scanf("%d %d", &a, &b);
	if (a < b)
	{
		med = a;
		a = b;
		b = med;
	}
	for (r = 0; a % b!=0; a = b, b = r)
	{
		r = a % b;
	}
	printf("%d\n", b);
	return 0;

}*/
//}ȡ�������Լ��

//int main() {
//	int i = 0;
//	for (i = 3; i < 101; i += 3)
//		printf("%d ", i);
//	return 0;


/*int main() {
	int i = 0;
	char password[20] = {0};
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
	    scanf("%s", password);
	    if (strcmp(password ,"123456")==0)
	{
			printf("��¼�ɹ�\n");
			break;
	}
		
	}
	if (i == 3)
		printf("���ξ��������˳�\n");
	return 0;
}*/
//����������������˳�
/*int main() {
	//char arr1[] = { "welcome to jinke!!!!!!" };
	//char arr2[] = { "######################" };
	//int left = 0;
	////int right = sizeof(arr1) / sizeof(arr2[0]) - 2;
	//int right = strlen(arr1) - 1;
	//
	//for (left = 0, right = strlen(arr1) - 1; right >= left; left++, right--)
	//{
	//	arr2[left] = arr1[left];
	//	arr2[right] = arr1[right];
	//	printf("%s\n", arr2);
	//	if (right <= left+1)
	//		break;
	//	Sleep(1000);
	//		system("cls");
	//}
     //return 0;	
}*/
//������һ�������е��ַ����滻�����е��ַ�
	/*int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int k = 10;
	int right = sz-1;
	int mid = (left + right) / 2;
	for (mid = (left + right) / 2; right>=left; mid = (left + right) / 2)
	{
		if (arr[mid] > k)
			right = mid - 1;
		else if (arr[mid] < k)
			left = mid + 1;
		else
		{
			printf("�ҵ��ˣ�%d\n", mid);
			break;
		}	
	}
	if (left > right) {
      printf("δ�ҵ�\n");
	}*/
//���ֲ���������ֵ


//int main()
//{	
	/*char arr[] = {1,2,3,4,5,6,7,8,9,10};
	int k = 5;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if( k==arr[i])
		{
			printf("�ҵ���\n");
			break;
		}
	} 
	if (i == sz)
	{
		printf("�Ҳ���\n");
	}*/
//��һ���������ҵ�һ����
	/*int i = 0;
	int n = 0;
	int ret = 1;
	int sum = 0;
	for(n = 1; n <= 10; n++)
	{
		ret = ret * n;
		sum = sum + ret;
	}*/
	//printf("%d\n", sum);����1��10�׳������򻯰�
	/*int n = 0;
	int i = 0;
	int n1 = 1;
	int sum = 0;
	for(i=1;i<=10;i++)
	{ 
		for (n = 1,n1=1; n <= i; n++)
	{
		n1 *= n;
	}
		sum += n1;
	}
	
	printf("%d\n", sum);*/
	//����1��10�׳�֮��

	/*int n = 0;
	int i = 0;
	int n1 = 1;
	scanf("%d", &i);
	for (n = 1; n < i; n++)
	{
		n1*=(n + 1);
	}
	printf("%d\n", n1);*/
	//����n�Ľ׳�
	/*int i = 1;
	do
	{	if(i==5)
		continue;
		printf("%d\n", i);
	    i++;
	} while (i <= 10);*/
	/*int i = 0;
	int j = 0;
	for (i = 0,j = 0; j = 1; i++, j++)
		j++;*/

	//int i = 0;
	//int j = 0;
	//for (; i < 10; i++)
	//{
	//	
	//	for (; j < 10; j++)
	//	{
	//		printf("hehe\n");
	//	}
	//}
	//return 0;
//}
/*{
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (i = 5)
			printf("haha\n");
		printf("hehe\n");
	}
	
	return 0;
}*/
//int main() {
//	int i = 0;
//	/*for (i = 1; i <= 10; i++)
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//	}
//	*/
//	while (i <= 10) {
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//
//	}
//	/*int ch = 0;
//	while ((ch = getchar()) != EOF) {
//		if (ch < '0' || ch>'9')
//		continue;
//		putchar(ch);
//	}
//	return 0;*/
//	return 0;
//}
//int main() {
//	int password[20] = { 0 };
//	int net = 0;
//	int ret = 0;
//	printf("���������룺", password);
//	scanf("%s", password);
//	getchar();
//	while ((ret = getchar()) != '\n');
//	{
//		;
//	}
//	printf("��ȷ��<Y/N>");
//	net = getchar();
//	/*scanf("%s", net);
//	getchar(net);*/
//	if (net == 'Y')
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else {
//		printf("ʧ��");
//	}
//		return 0;
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//EOF-end of file
//	{
//		putchar(ch);
//
//	}
//	return 0;
//}
//	
//	/*int ch = getchar();
//	putchar(ch);
//	printf("%c\n", ch);
//	return 0;*/
//
//int main() {
//	int a = 1;
//	while (a <= 10)
//	{a++;
//		if (a == 5)
//			continue;
//		printf("%d\n", a);
//		
//}
//	return 0;
//	
//}
//int main() {
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//		case 1:
//			m++;
//		case 2:
//			n++;
//		case 3:
//			switch (n) {
//			case 1:
//				n++;
//			case 2:
//				m++, n++;
//				break;
//			}
//		case 4:m++;
//			break;
//		default:
//			break;
//		break;
//	}
//	printf("m= %d,n= %d\n", m, n);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (a >= 1 && a <= 5)
//	printf("������");
//	else if(a==6 || a==7)
//		printf("��Ϣ��\n");
//	return 0;
//}
//int Alt(int x) {
//	if (x % 2 == 1)
//		return x;
//
//}
//int main()
//{
//	int main()
//	{
//		int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	return 0;
//}
//{
//	int day = 0;
//	scanf("%d", &day);
//	if (day == 1)
//		printf("����1\n");
//	else if (day == 2)
//		printf("����2\n");
//	else if (day == 3)
//		printf("����3\n");
//	else if (day == 4)
//		printf("����4\n");
//	else if (day == 5)
//		printf("����5\n");
//	else if (day == 6)
//		printf("����6\n");
//	else
//		printf("����7\n");
//	return 0;
//}
//	int i =1 ;
//	
//	while (i < 100) {
//		printf("%d ", i);
//		if(i%2==1)
//			printf("%d\n", i);
//		i += 2;
//	}
//	return 0;
//	/*int a = 0;
//	int b = 2;
//	if (a == 0)
//	if (b == 2)
//			printf("hehe\n");
//
//    else
//			printf("haha\n");*/
//	/*int age = 10;
//	if (age < 18)
//	{		printf("δ����\n");
//	printf("�ú�ѧϰ\n");
//}
//	else
//		if (age >= 18 && age < 28)
//			printf("����\n");
//		else if (age >= 28 && age < 50)
//			printf("����\n");
//		else if (age >= 50 && age < 90)
//			printf("����\n");
//		else*/
//			printf("����\n");
//	return 0;
//}