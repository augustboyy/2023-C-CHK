#pragma warning (disable : 4996)
#include <stdio.h>
/*����ö ��� ����ϱ�*/
// 30)������ HW16

int inputInt(const char* msg);
int calc(int station);
void put(int fee);

int main() {

	int station;

	for (;;) {

		station = inputInt("������ �Է��Ͻÿ� : ");
		put(calc(station)); //calc���� station�޾Ƽ� fee�� ������ �״�� ���ϵ� fee�� put�� �������ڷ� ���� put����
	}

	return 0;
}

int inputInt(const char* msg) {

	int num = 0;
	for (;;) {

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

		if (num > 0) { // ���� ������ �Է¹ް� ��
		
			return num;
		}
	}
}

int calc(int station) { //��� ����

	int fee;

	if (station <= 5) {

		fee = 600;
	}

	else if (station <= 10) {

		fee = 800;
	}

	else if (station <= 12) {

		fee = 900;
	}

	else {

		fee = 1300;
	}

	return fee;
}

void put(int fee) {

	printf("��� : %d��\n", fee);
}