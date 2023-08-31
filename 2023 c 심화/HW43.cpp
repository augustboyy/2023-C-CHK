#pragma warning (disable : 4996)
#include <stdio.h>
/*구구단 출력하기*/
// 10)남기현 HW43

int main(void) {

	int i, j, k;

	printf("<2중 for문을 이용한 출력>\n"); // c언어에서 문자를 출력할땐 옆으로만 가다가 줄바꾸면 다시 왼쪽 끝으로만 가기 때문에 그거 고려해서 로직 짜야함

	for (i = 1; i <= 9; i++) { //뒤에 곱해주는 수입니다

		for (j = 2; j <= 5; j++) {	// 처음엔 5단까지만

			printf("%d*%d = %2d", j, i, i * j); // 2*1부터 3*1까지 한줄만 출력함 그리고 줄 바꿔서 다음 줄 출력
			printf("        ");// 중간에 공백 출력용 7 칸임

			if (j == 5) { //5단일때 줄 바꿔주기

				putchar('\n');
			}
		}
	}

	putchar('\n');
	putchar('\n');

	for (i = 1; i <= 9; i++) { 

		for (j = 6; j <= 9; j++) {	//6단부터 9단

			printf("%d*%d = %2d", j, i, i * j);
			printf("        ");

			if (j == 9) { // 9단일때 줄 바꿔주기

				putchar('\n');
			}
		}
	}

	printf("\n<3중 for문을 이용한 출력>\n");

	for (k = 5; k <= 9; k += 4) {

		for (i = 1; i <= 9; i++) { // 얘는 위와 역할이 같아

			for (j = k-3; j <= k; j++) { /* 어렵쥬 ? 하지만 찬찬히 뜯어 볼게요~가장 바깥 for문에서 k가 5가됨  그후 가장 안쪽 for문에서 j는 2가되고 5까지 반복함
				그런 다음에 k가 9가됨 j는 6부터 9까지 반복함 즉 위에서 나눠서 출력한 1~5단과 6~9단을 3중for문으로 구성한 것임*/

				printf("%d*%d = %2d", j, i, i * j);
				printf("        ");

				if (j == k) {

					putchar('\n');
				}
			}
		}

		putchar('\n'); // 중간에 2줄 비워주는 용
		putchar('\n');
	}
	return 0;
}