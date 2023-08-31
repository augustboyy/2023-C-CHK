#pragma warning (disable : 4996)
#include <stdio.h>
/*지하철 요금 계산하기*/
// 30)남기현 HW18 

int inputInt(const char* msg);
void outPut(int fee, int dis);

int main() {

	int age, num, fee, dis = 0;

	age = inputInt("입장객의 나이를 입력하시오 : ");
	num = inputInt("입장객의 수를 입력하시오 : ");

	if (age <= 7) {// 입장료 계산 부분 

		fee = 500 * num;
	}

	else if (age <= 13) {

		fee = 700 * num;
	}

	else if (age <= 19) {

		fee = 1000 * num;
	}

	else if (age <= 55) {

		fee = 1500 * num;
	}

	else {

		fee = 500 * num;
	}

	if (num >= 5) {// 입장료 계산이 끝난 후 단체라면 할인을 해주는 부분. 만약 단체가 아니라면 dis 의 초기화된 값인 0이 그대로 유지
		
		dis = fee / 10;
	}

	outPut(fee, dis);// call by value기법

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

void outPut(int fee, int dis) {

	printf("입장료 => %d원\n할인금액 => %d원\n결제금액 => %d원", fee, dis, fee - dis);
}