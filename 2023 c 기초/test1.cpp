#pragma warning (disable : 4996)
#include <stdio.h>


int main() {

	int a = 0;

	printf("���� �Է�.\n");
	scanf("%d", &a);

	if (a > 0) {
		printf("�Է¹��� �� %d�� ����Դϴ�.\n", a);
	}

	else if (a < 0) {
		printf("�Է¹��� �� %d�� �����Դϴ�.\n", a);
	}

	else {
		printf("�Է¹��� �� %d�� 0 �Դϴ�.\n", a);
	}
	return 0;
}