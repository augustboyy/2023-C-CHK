#pragma warning (disable : 4996)
#include <stdio.h>
/*Ű����κ���...*/
// 10)������ HW45

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

			printf("%d~%d������ ¦���� ���� ���ұ��? Ȧ���� ���� ���ұ��?(¦��:e/Ȧ��:o) : ", start, end);
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

	*start = inputInt("���۰��� �Է��Ͻÿ� : ");
	*end = inputInt("�� ���� �Է��Ͻÿ� : ");

	if (*start >= *end) {

		range_re(start, end);
	}
}

void range_re(int *start, int *end) {

	*end = inputInt("�� ���� �Է��Ͻÿ� : ");

	if (*start >= *end) {

		range_re(start, end);
	}
}

void calc(int start, int end, char d) {

	int i, j, q = 0;

	if (d == 'o') {

		printf("%d~%d������ Ȧ��(", start, end);

		for (i = start; i <= end; i++) {
			
			if ((i % 2) != 0) {

				printf("%d ", i);
				q += i;
			}
		}

		printf(")�� ���� %d�Դϴ�.\n", q);
	}

	else {

		printf("%d~%d������ ¦��(", start, end);

		for (i = start; i <= end; i++) {

			if ((i % 2) == 0) {

				printf("%d ", i);
				q += i;
			}
		}

		printf(")�� ���� %d�Դϴ�.\n", q);
	}

	return;
}