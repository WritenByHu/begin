#include <stdio.h>

//void Add(int x, int y) {
//	
//}
//
//
//int main() {
//	void (*p)(int, int) = Add;
//
//	return 0;
//
//}

int add(int x, int y) {
	return x + y;

}
int mul(int x, int y) {
	return x * y;

}
int div(int x, int y) {
	return x / y;

}



int main() {
	
	//int(*p)(int, int);//����ָ��
	int(*p[4])(int, int) = {add,mul,div};//����ָ������
	int i = 0;
	for (i = 0; i < 4; i++) {
		printf("%d", p[i](2, 3));
	}

	return 0;
}
