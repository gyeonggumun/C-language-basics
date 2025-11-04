#include<stdio.h>

struct item {
	int code;
	int price;
};

int main() {
	
	struct item items[] = { {100, 5000}, {200, 8000}, {300, 12000} };

	// ptr = items[0]를 가리킴
	struct item* ptr = items;

	// ptr[0] 에 ptr[3]값을 덮어 씌움
	*ptr = *(ptr + 2);

	// ptr[0]의 코드 자리 300을 999로 교체
	ptr->code = 999;

	// items[0].code는 300이었지만 999로 교체됨
	// items[0].price는 12000이 나옴
	prictf("%d %d", items[0].code, items[0].price);

	return 0;
}