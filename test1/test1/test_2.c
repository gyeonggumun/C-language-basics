#include<stdio.h>

struct point {
	int x;
	int y;
};

int main() {

	struct point p[] = { {10, 20}, {30, 40}, {50, 60} };

	// ptr은 p배열의 두번째 인덱스의 주소를 가리킴
	struct point* ptr = &p[1];

	// ptr -> x 는 p배열의 두번째 인덱스 x자리 30을 가리킴
	// (ptr + 1)로 인덱스를 하나 올려 3번째 인덱스 의 y자리인 60을 가리킴
	printf("%d %d", ptr->x, (ptr + 1)->y);

	return 0;
}