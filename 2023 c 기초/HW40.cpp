#pragma warning (disable : 4996)
#include <stdio.h>
/*0부터 99까지의 정수를 한 줄에 10개씩 수직을 출력하기*/
// 30)남기현 HW40

int main() { // 커서는 우측으로만 이동하는데 수직으로 어떻게 수를 출력할까? -> 0에 10씩 더헤서 90까지 출력, 줄바꿈, 1에 10씩 더헤서 출력 ...

	int i, j;

	for (i = 0; i < 10; i++) {

		for (j = 0; j < 10; j++) { // j는 0부터 9까지

			printf(" %2d", i + j * 10);
		}

		putchar('\n');
	}

	return 0;
}