#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*배열의 부분합 구하기 (이차원 배열 사용)*/
// 10)남기현 HW55

int random(int n);
void initializeArr(int(*initArr)[5]);
void sum(int(*initArr)[5], int* sum1, int* sum2, int* sum3);
void put(int(*initArr)[5], int* sum1, int* sum2, int* sum3);

int main() {
	srand((unsigned int)time(NULL));

	int initArr[5][5];
	int sum1 = 0, sum2 = 0, sum3 = 0;

	initializeArr(initArr);
	sum(initArr, &sum1, &sum2, &sum3);
	put(initArr, &sum1, &sum2, &sum3);

	return 0;
}

int random(int n) {

	for (;;) { //while(1) 과 동치

		int res;
		res = rand() % n;

		if (res > 0) { // 난수 생성중 0 제외 (25 뒷편에 난수 생성 예제 참고)

			return res;
			break;
		}
	}
}

void initializeArr(int(*initArr)[5]) {

	int i, j;

	for (i = 0; i < 5; i++) {

		for (j = 0; j < 5; j++) {

			initArr[i][j] = random(21);
		}
	}

	return;
}

void sum(int(*initArr)[5], int* sum1, int* sum2, int* sum3) {

	int i, j, k = 0;

	for (i = 0; i < 5; i++) {

		*sum1 += initArr[i][i];
	}

	for (i = 0; i < 4; i++) {

		for (j = 4; j > k; j--) {

			*sum2 += initArr[i][j];
		}

		k += 1;
	}

	k = 0;

	for (i = 0; i < 4; i++) {

		for (j = 4; j > k; j--) {

			*sum3 += initArr[j][i];
		}

		k += 1;
	}

	return;
}

void put(int(*initArr)[5], int* sum1, int* sum2, int* sum3) {

	int i, j;

	for (i = 0; i < 5; i++){

		printf("%d번 행 : ", i);
		for (j = 0; j < 5; j++) {

			printf("%2d ", initArr[i][j]);
		}
		putchar('\n');
	}

	putchar('\n');
	putchar('\n');
	printf("sum1 = %d\nsum2 = %d\nsum3 = %d", *sum1, *sum2, *sum3);

	return;
}
