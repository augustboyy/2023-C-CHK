#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*3행 4열짜리 2차원 int배열의 행, 열,의 합을 구하기*/
// 10)남기현 HW54

int random(int n);
void initializeArr(int(*initArr)[4]);
void sumArr(int(*initArr)[4], int* sumCol, int* sumRow);
void putArr(int(*initArr)[4], int* sumCol, int* sumRow);

int main() {
	srand((unsigned int)time(NULL));

	int initArr[3][4];
	int sumCol[4] = { 0 }, sumRow[3] = { 0 };

	initializeArr(initArr);
	sumArr(initArr, sumCol, sumRow);
	putArr(initArr, sumCol, sumRow);
	
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

void initializeArr(int(*initArr)[4]) {

	int i, j;

	for (i = 0; i < 3; i++) {

		for (j = 0; j < 4; j++) {

			initArr[i][j] = random(10);
		}
	}

	return;
}

void sumArr(int(*initArr)[4], int* sumCol, int* sumRow) {

	int i, j;

	for (i = 0; i < 3; i++) {

		for (j = 0; j < 4; j++) {

			sumRow[i] += initArr[i][j];
		}
	}

	for (i = 0; i < 4; i++) {

		for (j = 0; j < 3; j++) {

			sumCol[i] += initArr[j][i];
		}
	}

	return;
}

void putArr(int(*initArr)[4], int* sumCol, int* sumRow) {

	int i, j;

	for (i = 0; i < 3; i++) {

		printf("%d행     : ", i);
		for (j = 0; j < 4; j++) {

			printf("%2d  ", initArr[i][j]);
		}
		printf("  %d행의 합 : %d\n", i, sumRow[i]);
	}

	printf("열의 합 : ");
	for (i = 0; i < 4; i++) {

		printf("%2d  ", sumCol[i]);
	}

	return;
}