#include<stdio.h>

void main() {
	//���� 2�� �Է¹ް� ���ϱ�
	int num1 = 0;
	int num2 = 0;
	int result = 0;

	printf("ù��° ����: ");
	scanf_s("%d", &num1);

	printf("�ι�° ����: ");
	scanf_s("%d", &num2);

	result = num1 + num2;
	printf("%d + %d = %d", num1, num2, result);
}