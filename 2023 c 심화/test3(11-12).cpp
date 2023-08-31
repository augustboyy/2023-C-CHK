#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>

int** myAlloc(int, int);
void dataInput(int**, int, int);
void dataOutput(int**, int, int);
void myDelete(int**, int);

int main()
{
	int** ip;
	int col, row;

	printf("row 수 입력 : ");
	scanf("%d", &row);
	printf("column 수 입력 : ");
	scanf("%d", &col);

	ip = myAlloc(row, col);

	if (ip == NULL) {

		printf("동적메모리할당 실패\n");
	}

	else {

		dataInput(ip, row, col);
		dataOutput(ip, row, col);
		myDelete(ip, row);
	}

	return 0;
}

int** myAlloc(int row, int col) {

	int** ip = NULL;
	int i;

	ip = (int**)malloc(sizeof(int*) * row);
	if (ip == NULL) { return ip; }

	for (i = 0; i < row; i++) {

		ip[i] = (int*)malloc(sizeof(int) * col);
		if (ip[i] == NULL) {

			myDelete(ip, i);
		}
	}

	return ip;
}

void dataInput(int** ip, int row, int col) {

	int i, j;

	for (i = 0; i < row; i++) {

		for (j = 0; j < col; j++) {

			scanf("%d", &ip[i][j]);
		}
	}

	return;
}

void dataOutput(int** ip, int row, int col) {

	int i, j;

	for (i = 0; i < row; i++) {

		for (j = 0; j < col; j++) {

			printf("%5d", ip[i][j]);
		}

		putchar('\n');
	}

	putchar('\n');

	return;
}

void myDelete(int** ip, int row) {

	int i;

	if (ip != NULL) {

		for (i = 0; i < row; i++) {

			free(ip[i]);
		}

		free(ip);
	}
	return;
}