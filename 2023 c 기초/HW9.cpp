#pragma warning (disable : 4996)
#include <stdio.h>
/*�Էµ� ������ 8������ 16������ ����ϴ� ���α׷�*/
// 30)������ HW9

int inputInt(const char* msg); //�Է� �Լ� �����

int main() {

	int number;
	number = inputInt("���� �Է� : ");

	printf("�Էµ� ���� 8������ %#o �Դϴ�.\n", number); //#�÷��׷� ���ξ� ǥ�� %o�� 8���� ���ĺ�ȯ����
	printf("�Էµ� ���� 16������ %#x �Դϴ�.", number); // %x�� 16���� ���ĺ�ȯ����

	
	return 0;
}

int inputInt(const char* msg) {

	int num = 0;

	for (;;) {

		printf("%s", msg);
		scanf("%d", &num);

		if (getchar() != '\n') {
			while (getchar() != '\n') {
				;
			}
		}

		else {
			break;
		}
	}
	return num;
}