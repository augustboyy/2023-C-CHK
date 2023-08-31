#pragma warning (disable : 4996)
#include <stdio.h>
/*한줄에 5개씩 별(*) 출력하기*/
// 30)남기현 HW22

int inputInt(const char* msg);

int main() {

	int star, res;
	int i;

	star = inputInt("정수값을 입력하시오 : ");
	res = star / 5; // 정수나누기 정수는 정수!!

	for (i = 0; i < res; i++) {
		
		printf("*****\n");
	}

	for (i = 0; i < (star - res * 5); i++) { //정수나누기 정수는 정수!!!!!!!!!!!!!!!!!!!!!!!!

		putchar('*');
	}
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