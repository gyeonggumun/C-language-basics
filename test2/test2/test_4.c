#include<stdio.h>

struct node {
	int data;
	struct node* next;
};

int main() {

	struct node a = { 1, NULL };
	struct node b = { 2, NULL };
	struct node c = { 3, NULL };
	struct node d = { 4, NULL };

	// 초기값 a -> b -> c -> d -> NULL설정
	a.next = &b;
	b.next = &c;
	c.next = &d;
	d.next = NULL;
	
	// temp는 b를 가리킴
	struct node* temp = a.next;

	// a 다음을 d로 변경
	a.next = c.next;

	// c 다음을 b로 변경
	c.next = temp;

	struct node* head = &a;

	printf("%d %d %d", head->data, head->next->data, c.next->data);
	
	return 0;
}