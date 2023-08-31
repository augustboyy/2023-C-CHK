#pragma warning (disable : 4996)
#include <stdio.h>
#define BASICPAY 3000 //���������� ���ؼ� ���� ������� ��ũ�� ����� ����
#define EXTRAPAY (3000 * 1.5)
#define BASICTAXRATE 0.15
#define EXTRATAXRATE 0.25
/*Pay ����ϱ�*/
// 30)������ HW20

int inputInt(const char* msg);
int glossPay(int hour);
int taxes(int glossPay);
void putRes(int glossPay, int taxes);

int main() {
	
	int hour = 0;

	hour = inputInt("�����ϰ��� �ٹ��ð��� �Է��ϼ��� : ");
	putRes(glossPay(hour), taxes(glossPay(hour)));

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

int glossPay(int hour) { // �Ѽ��� ���

	int glossPay = 0;

	if (hour <= 40) {

		glossPay = hour * BASICPAY;
	}

	else {

		glossPay = 40 * BASICPAY + (hour - 40) * EXTRAPAY;
	}

	return glossPay;
}

int taxes(int glossPay) { // ���� ���

	int taxes = 0;

	if (glossPay <= 100000) {

		taxes = glossPay * BASICTAXRATE;
	}

	else {

		taxes = 100000 * BASICTAXRATE + (glossPay - 100000) * EXTRATAXRATE;
	}

	return taxes;
}

void putRes(int glossPay, int taxes) { // ��� ���

	int netPay = 0;

	netPay = glossPay - taxes;

	printf("# �Ѽ��� : %6d��\n# ��  �� : %6d��\n# ������ : %6d��\n", glossPay, taxes, netPay);

	return;
}