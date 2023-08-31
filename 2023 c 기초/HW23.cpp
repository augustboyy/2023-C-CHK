#pragma warning (disable : 4996)
#include <stdio.h>
/*반복적으로 두 개의 정수를 입력받아 두수의 차를 출력하시오*/
// 30)남기현 HW23

int main() {

	for (;;) {

		int num1, num2;

		printf("두개의 정수를 입력하시오 : ");
		scanf("%d %d", &num1, &num2);

		if (getchar() != '\n') { // 문자가 들어오면 버퍼에 반드시 문자가 남는 다는 것을 이용 반대로 입력 성공시 버퍼에 개행문자가 남는다.(scanf 함수의 특징)

			break;
		}

		else {
			if (num1 > num2) {

				printf("%d - %d = %d\n", num1, num2, num1 - num2);
			}

			else {

				printf("%d - %d = %d\n", num2, num1, num2 - num1);
			}
		}
	}

	return 0;
}