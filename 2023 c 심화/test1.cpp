#pragma warning (disable : 4996)
#include <stdio.h>

int inputInt(const char* msg);
int fact(int num);
void putRes(int n, int res);

int main() {

	int n, res;

	for (;;) {

		n = inputInt("정수입력");

		if (n < 0) {
			break;
		}

		else if (n == 0) {

			printf("0! = 1\n");
		}

		else {

			res = fact(n);
			putRes(n, res);

		}

	}
	
	return 0;
}

int inputInt(const char* msg) {

	int num = 0;

	for (;;) {

		printf(msg); //오잉
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

int fact(int num) {

	int res = num, save =num;
	num += 1;

	while (num -= 1) {

		res *= num;
	}

	return res/save;
}

void putRes(int n, int res) {

	printf("%d! = %d\n", n, res);

	return;
}