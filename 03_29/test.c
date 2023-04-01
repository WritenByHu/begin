
#include <stdio.h>

//int main() {
//
//	// 这是错误的 "abcdef"是常量字符串，不能被修改
//	//char* p = "abcdef";
//	//*p = "w";
//	//printf("%s", *p);
//
//	//const char* p = "abcdef";
//	//printf("%s", *p)
//	return 0;
//}

//int main() {
//
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {2,3,4,5,6};
//	int arr3[] = {4,5,6,7,8};
//	int* p[] = {&arr1,&arr2,&arr3};
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++) {
//		for (j = 0; j < 5; j++) {
//			printf("%d", *(p[i] + j));
//		}
//		printf("\n");
//	}
//	
//	return 0;
//
//}

//int main() {
//
//
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int (*p)[10] = &arr;
//	return 0;
//}