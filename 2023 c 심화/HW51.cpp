#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
/*���� �� ��Ʈ ���α׷�(1���� �迭 ���)*/
// 10)������ HW51

void swap(int* num1, int* num2);
void sort(int* numtring, int size);
void output(int* numtring, int size);

int main() {

	int size, i;
	int numtring[] = { 8, 2, 4, 11, 1, 6 };
	size = sizeof(numtring) / sizeof(numtring[0]);

	printf("��Ʈ �� ������ : ");
	for (i = 0; i < size; i++) {

		printf("%d ", numtring[i]);
	}
	putchar('\n');

	sort(numtring, size);
	output(numtring, size);

	 
	return 0;
}

void swap(int* num1, int* num2) {

	int j;

	j = *num1;
	*num1 = *num2;
	*num2 = j;

	return;
}

void sort(int* numtring, int size) {

	int i, j;

	for (i = 0; i < size-1; i++) {

		for (j = size - 1; j > 0; j--) {

			if (size - j > i) {

				if (numtring[i] > numtring[size - j]){

					swap(&numtring[i], &numtring[size - j]);
				}
			}

		}
	}

	return;
}

void output(int* numtring, int size) {

	int i;

	printf("��Ʈ �� ������ : ");
	for (i = 0; i < size; i++) {

		printf("%d ", numtring[i]);
	}

	return;
}