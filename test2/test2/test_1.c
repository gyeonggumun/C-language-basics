#include<stdio.h>

struct node {
	int data;
	struct node* next;
};

int main() {
	struct node n1 = { 10, NULL };
	struct node n2 = { 20, NULL };
	struct node n3 = { 30, NULL };

	n1.next = &n2;   // n1 다음 주소는 n2
	n2.next = &n3;   // n2 다음 주소는 n3
	n3.next = NULL;  // n3 다음 주소는 NULL

	// ptr은 n1의 주소를 가리킴
	struct node* ptr = &n1;

	// ptr->data 는 n1의 data값 10
	// ptr->next->data 는 n2의 data값 20
	// ptr->next->next->data 는 n3의 data값 30
	printf("%d %d %d", ptr->data, ptr->next->data, ptr->next->next->data);
	
	return 0;
}
