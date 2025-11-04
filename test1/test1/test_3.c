#include<stdio.h>

struct data {
	int a;
	int b;
};

int main() {
	struct data d1 = { 1, 2 };
	struct data d2 = { 3, 4 };
	struct data d3 = { 5, 6 };

	struct data* arr[] = { &d1, &d2, &d3 };

	// arr[0] -> a 는 d1주소의 a자리 값 1
	// arr[2] -> b 는 d3주소의 b자리 값 6
	printf("%d %d", arr[0]->a, arr[2]->b);
	
	return 0;
}