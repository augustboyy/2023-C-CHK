#pragma warning (disable : 4996)
#include <stdio.h>
#define SIZE(ary) (sizeof(ary)/sizeof(ary[0]))
/*�迭 ���� �����͸� �������� �����ϱ�*/
// 10)������ HW49

void swap(int *num1, int *num2);

int main() {

	int ary[] = { 1,2,3,4,5 };
	int i;

	printf("ó�� �迭�� ����� �� : ");
	for (i = 0; i < SIZE(ary); i++) {

		printf("%2d", ary[i]);
	}
	putchar('\n');

	for (i = 0; i < SIZE(ary) / 2; i++) {

		swap(&ary[i], &ary[SIZE(ary) - 1 - i]);
	}

	printf("�ٲ� �迭�� ����� �� : ");
	for (i = 0; i < SIZE(ary); i++) {

		printf("%2d", ary[i]);
	}
	return 0;
}

void swap(int *num1, int *num2) {

	int j;

	j = *num1;
	*num1 = *num2;
	*num2 = j;

	return;
}