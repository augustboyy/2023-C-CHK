#pragma warning (disable : 4996)
#include <stdio.h>
/*입력된 정수를 8진수와 16진수로 출력하는 프로그램*/
// 30)남기현 HW9

int inputInt(const char* msg); //입력 함수 선언부

int main() {

	int number;
	number = inputInt("정수 입력 : ");

	printf("입력된 값은 8진수로 %#o 입니다.\n", number); //#플래그로 접두어 표기 %o는 8진수 형식변환문자
	printf("입력된 값은 16진수로 %#x 입니다.", number); // %x는 16진수 형식변환문자

	
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