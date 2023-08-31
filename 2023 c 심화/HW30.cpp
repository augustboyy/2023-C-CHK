#pragma warning (disable : 4996)
#include <stdio.h>
/*2진수 변환 프로그램*/
// 10)남기현 HW30

int inputInt(const char* msg);

int main() {

	int a, i;
	unsigned int b = 0x80000000, res;

	a = inputInt("10진수 정수를 입력하시오 : ");
	printf("%d(10) = ", a);
	
	for (i = 0; i <= 31; i++) {

		res = a & b;
		//b = b << 1;
		b = b >> 1;
		res = res >> (31-i);

		if (res == 0) {

			printf("0");
		}

		else if (res == 1) {

			printf("1");
		}

		else {
			;
		}
		
	}

	printf("(2)");

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