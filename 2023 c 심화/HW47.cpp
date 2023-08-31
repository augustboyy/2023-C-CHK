#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>
/*�ּڰ�, �ֈ��� ã��*/
// 10)������ HW47

void inputarr(double* arr, int size);
void swap(double* num1, double* num2);
double max(double* arr, int size);
double min(double* arr, int size);
void put(double* arr, int size, double max, double min);

int main() {

	double arr[5];
	int size;
	double maxres, minres;

	size = sizeof(arr) / sizeof(arr[0]);

	inputarr(arr, size);

	maxres = max(arr, size);
	minres = min(arr, size);

	put(arr, size, maxres, minres);

	return 0;
}

void inputarr(double* arr, int size) {

	int check;

	printf("���� 5���� �Է��Ͻÿ�(������ space) : ");
	check = scanf("%lf %lf %lf %lf %lf", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

	if (check != size) {

		if (getchar() != '\n') {
			while (getchar() != '\n') {
				;
			}
		} 

		inputarr(arr, size);
	}

	else if (getchar() != '\n') {

		if (getchar() != '\n') {
			while (getchar() != '\n') {
				;
			}
		}

		inputarr(arr, size);
	}

	else { ; }

	return;
}

void swap(double* num1, double* num2) {

	double j;

	j = *num1;
	*num1 = *num2;
	*num2 = j;

	return;
}

double max(double* arr, int size) {

	int i;
	double *newArr;
	double max;

	newArr = (double*)malloc(sizeof(double) * size);

	for (i = 0; i < size; i++) {

		newArr[i] = arr[i];
	}

	for (i = 1; i < size; i++) {

		if (newArr[0] < newArr[i]) {

			swap(&newArr[0], &newArr[i]);
		}
	}

	max =  newArr[0];
	free(newArr);

	return max;
}

double min(double* arr, int size) {

	int i;
	double* newArr;
	double min;

	newArr = (double*)malloc(sizeof(double) * size);

	for (i = 0; i < size; i++) {

		newArr[i] = arr[i];
	}

	for (i = 1; i < size; i++) {

		if (newArr[0] > newArr[i]) {

			swap(&newArr[0], &newArr[i]);
		}
	}

	min = newArr[0];
	free(newArr);

	return min;
}

void put(double* arr, int size, double max, double min) {

	int i;

	for (i = 0; i < size; i++) {

		printf("%d�� ���� �� : %g\n", i, arr[i]);
	}
	putchar('\n');
	putchar('\n');

	printf("���� ū �� : %.2lf\n", max);
	printf("���� ���� �� : %.2lf", min);

	return;
}