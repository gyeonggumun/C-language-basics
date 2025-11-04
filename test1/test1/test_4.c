#include<stdio.h>

struct num {
	int val;
};

int main() {

	struct num n[] = { {10}, {20}, {30}};
	struct num* ptr = n;

	// 이중 포인터 pptr = ptr = n[0] 를 가리킴
	struct num** pptr = &ptr;

	// (**pptr).val는 n[0] 10을 가리킴
	// (*pptr)[2].val는 ptr[2]이지만 ptr이 n의 주소를 가리킴으로 n[2] 30을 가리킴
	printf("%d %d", (**pptr).val, (*pptr)[2].val);

	return 0;
}