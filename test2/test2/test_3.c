#include<stdio.h>

struct node {
	int val;
	struct node* next;
};

int main() {

	struct node n1 = { 7, NULL };
	struct node n2 = { 14, NULL };
	struct node n3 = { 21, NULL };

	n1.next = &n2;   // n1 다음 주소는 n2
	n2.next = &n3;   // n2 다음 주소는 n3
	n3.next = NULL;  // n3 다음 주소는 NULL

	// p는 n1을 가리킴
	struct node* p = &n1;

	// pp는 n1을 가리킴
	struct node** pp = &p;

	// 7, 14, 21 출력
	printf("%d %d %d", (*pp)->val, (*pp)->next->val, (**pp).next->next->val);

	return 0;
}