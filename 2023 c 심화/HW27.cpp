#pragma warning (disable : 4996)
#include <stdio.h>
/*�ް����� ���α׷�*/
// 10)������ HW25

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

int main() {

	int weight, i = 0;

	while(i < 10) {//0~9 10ȸ ����

		weight = inputInt("����� ���Ը� �Է��ϼ���(���� :g) : ");

		if (weight < 150) { //�ʹ� ������ �� �Ÿ���
			printf("�ʹ� �������ϴ�.\n");
		}

		else if (weight > 500) { //�ʹ� ���ſ� �� �Ÿ���
			printf("�ʹ� ���̽��ϴ�.\n");
		}

		else {
			i += 1;
			printf("���� �ް��� �� : %d\n", i);
		}
	}

	printf("�ް� ���� �Ϸ�");

	return 0;
}