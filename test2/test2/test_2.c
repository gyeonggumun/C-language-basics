#include<stdio.h>

struct node {
	int value;
	struct node* link;
};

int main() {
	
	struct node a = { 5, NULL };
	struct node b = { 10, NULL };
	struct node c = { 15, NULL };
	struct node d = { 20, NULL };

	a.link = &b;  // a 다음 주소는 b
	b.link = &c;  // b 다음 주소는 c
	c.link = &d;  // c 다음 주소는 d
	d.link = NULL; // d 마지막 주소

	a.link = &c;  // a 다음 주소는 c
	c.link = &b;  // c 다음 주소는 b
	b.link = &d; // b 다음 주소는 d
	
	struct node* haed = &a;

	printf("%d %d %d", haed->value, haed->link->value, haed->link->link->value);
}