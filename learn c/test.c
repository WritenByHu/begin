# define _CRT_SECURE_NO_WARINGS 1
# include <stdio.h>
//int main() {
//	int number1 = 0;
//	int number2 = 0;
//	int sum = 0;
//	scanf_s("%d%d", &number1, &number2);
//	sum = number1 + number2;
//	printf("sum = %d", sum);
//
//
//
//	return 0;
//}
//int main()
//{
//    char arr1[] = "abc";
//    char arr2[] = { 'a','b','c',0};
//    //printf("%s\n", arr1);
//    //printf("%s\n", arr2);
//    printf("%s\n", "\x61\77");
//
//}
//void test() {
//	//static int a = 1; // static ���ξֲ�������ʱ�򣬾ֲ��������������ڱ䳤��
//	int a = 1;
//	a++;
//	printf("a =%d ", a);
//}
//struct Book
//{
//	char name[20];
//	short price;
//};
//int main() {
//	//int i = 0;
//	//while (i < 5)
//	//{
//	//	test();
//	//	i++;
//	//}
//
//	//int a = 10;
//	//int* p = &a; // int ����� * ���ߵ���p��һ��ָ�������ֻ���﷨��ʽû��ʵ�����á�
//	//*p = 20; // * �����ò�����/�����ʲ�����
//	//printf("p = %p a=%d", p, a);
//
//	//struct Book b1 = { "c���Գ������",11};
//	////printf("����:%s\n�۸�:%d\n", b1.name);
//	//struct Book* pd = &b1;
//	//printf("pd=%d",pd->price);
//
//	//int a = 13;
//	//if (a <= 10)
//	//	printf("aС�ڵ���10");
//	//else if (a < 20)
//	//	printf("a����10 С��20");
//	//else
//	//{
//	//	printf("a����10");
//	//};
//
//	//int i = 1;
//
//	//while (i < 100)
//	//{
//	//	printf("%d ", i);
//	//	//printf("i=%d\n", i);
//	//	i+=2; 
//	//};
//
//	/*int a = 3;
//	switch (a)
//	{
//	case 1:
//		printf("����1");
//		break;
//	case 2:
//		printf("����2");
//		break;
//	case 3:
//		printf("����3");
//		break;
//	case 4:
//		printf("����4");
//		break;
//	case 5:
//		printf("����5");
//		break;
//	case 6:
//		printf("����6");
//		break;
//	case 7:
//		printf("������");
//		break;
//	default:
//		break;
//	}*/
//	return 0;
//}
//int main() {
//	//for ѭ�� ��ʼ�����жϣ�����
//	//for (int i = 0; i <= 10; i++) {
//	//	printf("%d", i);
//	//};
//
//	//��ӡ�žų˷���
//	//for (int i = 1; i < 10; i++) {
//	//	for (int j = 1; j < i; j++) {
//	//		printf("%d x %d = %d ", j, i, i * j);
//	//	}
//	//	printf("\n");
//	//}
//	//int sum = 1;
//	//for (int i = 1; i < 5; i++) {
//	//	sum = i * sum;
//	//}
//	//printf("%d", sum);
//
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = 0;
//	len = sizeof(arr) / siseof(arr[0]);
//	printf("%d", len);
//
//	return 0;
//}
//int main() {
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int len = 0;
//	int left = 0;
//	int right = 0;
//	int x = 7;
//	int mid = 0;
//	len = sizeof(arr) / siseof(arr[0]);
//	while (left <= right) {
//		if (x < arr[mid])
//			right = mid;
//		else
//		{
//			left = mid;
//		}
//		mid = (right + left) / 2;
//	};
//	return 0;
//}
//int is_prime(int a) {
//	for (int i = 2; i < a; i++) {
//		if (a % i == 0) {
//			return 0;
//		}
//	}
//	return 1;
//};
//int main() {
//	
//	for (int i = 100; i < 200; i++) {
//		if (is_prime(i) == 1) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//
//void print(int x) {
//	if (x > 9) {
//		print(x / 10);
//	}
//	printf("%d  ", x % 10);
//}
//
//int main() {
//	int a = 1234;
//
//	print(a);
//
//	return 0;
//}

int main() {
	int a = 5;
	int b = 3;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d b=%d", a, b);

	return 0;
}