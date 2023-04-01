#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int CountOne(unsigned int a) {
//	int count = 0;
//	while (a) {
//		count++;
//		a = a / 2;
//	}
//	return count;
//}

//int CountOne(int a) {
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++) {
//		if (((a >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}

// n = n & (n-1)
// 1101
// 1100
// 1100
// 1011
// 1000
// 0111
// 0000

//int CountOne(int a) {
//	int count = 0;
//	while (a) {
//		a = a & (a - 1);
//		count++;
//	}
//	return count;
//}
//int main() {
//	int a = 0;
//	int count = 0;
//	printf("输入要计算二进制中1的个数的数>");
//	scanf("%d", &a);
//	count = CountOne(a);
//	printf("%d", count);
//
//	return 0;
//}

//void print(int* arr) {
//	int i = 0;
//	for (i = 0; i < 10; i++) {
//		printf("arr = %d\n", *(arr + i));
//	}
//
//}
//
//int main() {
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//
//	print(arr);
//	return 0;
//}

//int get_length(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		str++;
//		count++;
//	}
//	return count;
//}

//int get_length(char* str)
//{
//	if (*str == '\0')
//		return 0;
//	return 1 + get_length(str+1);
//}

//int get_length(char* str) {
//	char* start = str;
//	char* end = str;
//	while (*end != '\0') {
//		end++;
//	}
//	return end - start;
//}

int main() {
	int count = 0;
	char a[] = "abcdef";
	
	count = get_length(a);
	printf("%d", count);
	return 0;

}