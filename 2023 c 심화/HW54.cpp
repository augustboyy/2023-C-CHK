#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*3�� 4��¥�� 2���� int�迭�� ��, ��,�� ���� ���ϱ�*/
// 10)������ HW54

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

	for (;;) { //while(1) �� ��ġ

		int res;
		res = rand() % n;

		if (res > 0) { // ���� ������ 0 ���� (25 ���� ���� ���� ���� ����)

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

		printf("%d��     : ", i);
		for (j = 0; j < 4; j++) {

			printf("%2d  ", initArr[i][j]);
		}
		printf("  %d���� �� : %d\n", i, sumRow[i]);
	}

	printf("���� �� : ");
	for (i = 0; i < 4; i++) {

		printf("%2d  ", sumCol[i]);
	}

	return;
}