#pragma warning (disable : 4996)
#include <stdio.h>
/*지하철 요금 계산하기*/
// 30)남기현 HW16

int inputInt(const char* msg);
int calc(int station);
void put(int fee);

int main() {

	int station;

	for (;;) {

		station = inputInt("역수를 입력하시오 : ");
		put(calc(station)); //calc에서 station받아서 fee를 리턴함 그대로 리턴된 fee는 put의 전달인자로 들어가서 put동작
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

		if (num > 0) { // 양의 정수만 입력받게 함
		
			return num;
		}
	}
}

int calc(int station) { //계산 로직

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

	printf("요금 : %d원\n", fee);
}