#pragma warning (disable : 4996)
#include <stdio.h>
#include <math.h>
/*소수 출력하기*/
// 10)남기현 HW44

int inputInt(const char* msg);
int primeNumber(int number);
int calc(int number);

int main() {

	int num, p;

	num = inputInt("정수 값 하나를 입력하시오 : ");
	printf("1~%d까지의 소수 값은 다음과 같습니다\n", num);
	p = calc(num);
	printf("\n1~%d까지의 총 소수는 %d개 입니다.", num, p);


	
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

int primeNumber(int number) {

	int j;
	int res;

	for (j = 2; j <= sqrt(number); j++) {

		res = number % j;

		if (res == 0) {

			return 0;
		}
	}
	return 1;
}

int calc(int number) {

	int d;
	int i, a = 0;

	for (i = 2; i <= number; i++) {

		d = primeNumber(i);

		if (d == 1) {

			a += printf("%-5d", i);

			if ((a / 5) % 5 == 0) {

				putchar('\n');
			}
		}
	}

	return a/5;
}
