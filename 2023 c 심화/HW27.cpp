#pragma warning (disable : 4996)
#include <stdio.h>
/*달걀포장 프로그램*/
// 10)남기현 HW25

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

	while(i < 10) {//0~9 10회 수행

		weight = inputInt("계란의 무게를 입력하세요(단위 :g) : ");

		if (weight < 150) { //너무 가벼울 때 거르기
			printf("너무 가볍습니다.\n");
		}

		else if (weight > 500) { //너무 무거울 때 거르기
			printf("너무 무겁습니다.\n");
		}

		else {
			i += 1;
			printf("현재 달걀의 수 : %d\n", i);
		}
	}

	printf("달걀 포장 완료");

	return 0;
}