#include<stdio.h>

void main() {
	// �ֿϵ��� ����
	char* name = "�����";
	int age = 3;
	char gender = 'M';
	float weight = 6.3;
	// �����
	//�ݵ�� ����ǥ �ȿ��� �ۼ��Ѵ�
	// \n:new line(�ٹٲ�, ���๮��)
	//puts() : ���ڿ� ���, ���������� �ٹٲ��� �ڵ����� ���Եȴ� => �ڹ��� println
	printf("�̸� : %s\n", name);
	puts(name);
	printf("���� : %d��\n", age);
	printf("���� : %c\n", gender);
	printf("������: %.1fkg\n", weight);

}