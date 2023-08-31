#pragma warning (disable : 4996)
#include <stdio.h>


int main() {

	int a = 0;

	printf("숫자 입력.\n");
	scanf("%d", &a);

	if (a > 0) {
		printf("입력받은 수 %d는 양수입니다.\n", a);
	}

	else if (a < 0) {
		printf("입력받은 수 %d는 음수입니다.\n", a);
	}

	else {
		printf("입력받은 수 %d는 0 입니다.\n", a);
	}
	return 0;
}