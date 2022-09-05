#include <stdio.h>

// ����
void p(int num);
void function_without_return();
int function_with_return();
void function_without_params();
void function_with_params(int num1, int num2, int num3);

int apple(int total, int ate); // ��ü total���� ate�԰� ���� ��

int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
int div(int num1, int num2);

int main_function(void) {

	// function
	// ����

	//int num = 2;
	////printf("num�� %d �Դϴ�\n", num); // 2
	//p(num);

	//num = num + 3;
	////printf("num�� %d �Դϴ�\n", num); // 5
	//p(num);

	//num -= 1;
	////printf("num�� %d �Դϴ�\n", num); // 4
	//p(num);

	// �Լ� ����
	// ��ȯ���� ���� �Լ�
	/*function_without_return();*/

	// ��ȯ���� �ִ� �Լ�
	/*int ret = function_with_return();
	p(ret);*/

	// �Ķ����(���ް�)�� ���� �Լ�
	function_without_params();

	//�Ķ����(���ް�)�� �ִ� �Լ�
	function_with_params(8, 21, 23);

	// �Ķ����(���ް�)�� �ް�, ��ȯ���� �ִ� �Լ�
	//int ret = apple(5, 2); // ��� 5�� �� 2�� ����
	//printf("��� 5�� �߿� 2���� ������? %d���� ���ƿ�.\n", ret);
	//printf("��� %d�� �߿� %d���� ������? %d���� ���ƿ�.\n", 10, 4, apple(10, 4));

	// ���� �Լ�
	int num = 2;
	num = add(num, 3);
	p(num);

	num = sub(num, 1);
	p(num);

	num = mul(num, 3);
	p(num);

	num = div(num, 2);
	p(num);

	return 0;
}

// ���� : �̸�(���ް�)
void p(int num) {
	printf("num�� %d �Դϴ�\n", num);
}

void function_without_return() {
	printf("��ȯ���� ���� �Լ��Դϴ�.\n");
}

int function_with_return() {
	printf("��ȯ���� �ִ� �Լ��Դϴ�.\n");
	return 10;
}

void function_without_params() {
	printf("���ް��� ���� �Լ��Դϴ�.\n");
}

void function_with_params(int num1, int num2, int num3) {
	printf("���ް� �ִ� �Լ�, ���޹��� ���� %d, %d, %d�Դϴ�.\n",
		num1, num2, num3);
}

int apple(int total, int ate) {
	printf("���ް��� ��ȯ���� �ִ� �Լ��Դϴ�.\n");
	return total - ate;
}

int add(int num1, int num2) {
	return num1 + num2;
}

int sub(int num1, int num2) {
	return num1 - num2;
}

int mul(int num1, int num2) {
	return num1 * num2;
}

int div(int num1, int num2) {
	return num1 / num2;
}
// ���ް� : 36
// �Լ� : �� + 4
// ��ȯ�� : ?
// ��ȯ�� �Լ��̸�(���ް�){}

