#pragma warning (disable : 4996)
#include <stdio.h>
/*정수를 입력받아 짝수이면 #, 홀수이면 @ 문자를 입력받은 문자수 만큼  출력하시오*/

int main() {

	int a = 0;
	scanf("%d", &a);

	if (a % 2 == 0) {
		while (a) {
			printf("#");
			a--;
		}
	}

	else {
		while (a) {
			printf("@");
			a--;
		}
	}
	


	return 0;
}