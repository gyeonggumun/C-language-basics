#include<stdio.h>

struct dat {
	int x;
	int y;
};
int main() {
	struct dat a[] = { {1, 2}, {3, 4}, {5, 6} };

	//ptr은 배열 a의 첫 번째 요소를 가리키는 포인터
	//ptr -> a[0]
	struct dat* ptr = a;

	// pptr은 ptr의 주소를 가리키는 이중 포인터
	// pptr -> ptr -> a[0]
	struct dat** ppptr = &ptr;

	// (*ppptr)[1]은 ptr[1]과 동일하며, 이는 a[1]을 가리킴
	// (*ppptr)[2]은 ptr[2]와 동일하며, 이는 a[2]를 가리킴
	(*ppptr)[1] = (*ppptr)[2];

	// a[1].x = 5, a[1].y = 6이 됨
	printf(" % d% 그리고 %d \n", a[1].x, a[1].y);

	return 0;
}