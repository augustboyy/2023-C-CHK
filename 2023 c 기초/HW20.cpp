#pragma warning (disable : 4996)
#include <stdio.h>
#define BASICPAY 3000 //유지보수를 위해서 각종 상수들을 매크로 상수로 정의
#define EXTRAPAY (3000 * 1.5)
#define BASICTAXRATE 0.15
#define EXTRATAXRATE 0.25
/*Pay 계산하기*/
// 30)남기현 HW20

int inputInt(const char* msg);
int glossPay(int hour);
int taxes(int glossPay);
void putRes(int glossPay, int taxes);

int main() {
	
	int hour = 0;

	hour = inputInt("일주일간의 근무시간을 입력하세요 : ");
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

		if (num > 0) { // 양의 정수만 입력받게 함

			return num;
		}
	}
}

int glossPay(int hour) { // 총수입 계산

	int glossPay = 0;

	if (hour <= 40) {

		glossPay = hour * BASICPAY;
	}

	else {

		glossPay = 40 * BASICPAY + (hour - 40) * EXTRAPAY;
	}

	return glossPay;
}

int taxes(int glossPay) { // 세금 계산

	int taxes = 0;

	if (glossPay <= 100000) {

		taxes = glossPay * BASICTAXRATE;
	}

	else {

		taxes = 100000 * BASICTAXRATE + (glossPay - 100000) * EXTRATAXRATE;
	}

	return taxes;
}

void putRes(int glossPay, int taxes) { // 결과 출력

	int netPay = 0;

	netPay = glossPay - taxes;

	printf("# 총수입 : %6d원\n# 세  금 : %6d원\n# 순수입 : %6d원\n", glossPay, taxes, netPay);

	return;
}