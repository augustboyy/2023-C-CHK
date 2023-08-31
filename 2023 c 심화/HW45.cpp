#pragma warning (disable : 4996)
#include <stdio.h>
/*키보드로부터...*/
// 10)남기현 HW45

int inputInt(const char* msg);
void range(int* start, int* end);
void range_re(int *start, int* end);
int inputAlph(int start, int end);
void calc(int start, int end, char d);

int main() {

	int start, end;
	char d;

	range(&start, &end);
	d = inputAlph(start, end);
	calc(start, end, d);


	
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
		
		if (num >= 0) {

			return num;
		}
	}
}

int inputAlph(int start, int end) {

	char num;

	for (;;) {

		for (;;) {

			printf("%d~%d까지의 짝수의 합을 구할까요? 홀수의 합을 구할까요?(짝수:e/홀수:o) : ", start, end);
			scanf("%c", &num);

			if (getchar() != '\n') {
				while (getchar() != '\n') {
					;
				}
			}

			else {
				break;
			}
		}

		if ((num == 'e') || (num == 'o')) {

			return num;
		}
	}
		
}

void range(int* start, int* end) {

	*start = inputInt("시작값을 입력하시오 : ");
	*end = inputInt("끝 값을 입력하시오 : ");

	if (*start >= *end) {

		range_re(start, end);
	}
}

void range_re(int *start, int *end) {

	*end = inputInt("끝 값을 입력하시오 : ");

	if (*start >= *end) {

		range_re(start, end);
	}
}

void calc(int start, int end, char d) {

	int i, j, q = 0;

	if (d == 'o') {

		printf("%d~%d까지의 홀수(", start, end);

		for (i = start; i <= end; i++) {
			
			if ((i % 2) != 0) {

				printf("%d ", i);
				q += i;
			}
		}

		printf(")의 합은 %d입니다.\n", q);
	}

	else {

		printf("%d~%d까지의 짝수(", start, end);

		for (i = start; i <= end; i++) {

			if ((i % 2) == 0) {

				printf("%d ", i);
				q += i;
			}
		}

		printf(")의 합은 %d입니다.\n", q);
	}

	return;
}