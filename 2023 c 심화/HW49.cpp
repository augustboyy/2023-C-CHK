#pragma warning (disable : 4996)
#include <stdio.h>
#define SIZE(ary) (sizeof(ary)/sizeof(ary[0]))
/*배열 내의 데이터를 역순으로 저장하기*/
// 10)남기현 HW49

void swap(int *num1, int *num2);

int main() {

	int ary[] = { 1,2,3,4,5 };
	int i;

	printf("처음 배열에 저장된 값 : ");
	for (i = 0; i < SIZE(ary); i++) {

		printf("%2d", ary[i]);
	}
	putchar('\n');

	for (i = 0; i < SIZE(ary) / 2; i++) {

		swap(&ary[i], &ary[SIZE(ary) - 1 - i]);
	}

	printf("바뀐 배열에 저장된 값 : ");
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