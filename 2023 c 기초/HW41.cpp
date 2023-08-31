#pragma warning (disable : 4996)
#include <stdio.h>
/*대칭되는 별 찍기*/
// 30)남기현 HW41

int main() { 

	int i, j;
	int line;

	for (;;) {

		printf("출력 라인수를 입력하시오 : ");
		scanf("%d", &line);

		if (getchar() != '\n') { // 루프 탈출구

			break;
		}

		for (i = 1; i <= line; i++) { // 첫번째줄 두번쨰줄 ... 줄단위 반복문

			for (j = 1; j <= i; j++) { // 공백 전 별찍기 첫번째 줄에 한개 두번째 줄에 두개...

				putchar('*');
			}

			for (j = (line - i + 1) * 2; j >= 1; j--) { // 공백 찍기 공백의 갯수를 생각해 보면 마지막에 2개를 찍어야 균형이 딱 맞음 line는 고정, i는 점점 커지면서 공백의 갯수가 줄어들음

				putchar(' ');
			}

			for (j = 1; j <= i; j++) { // 공백 뒤 별찍기 첫번째 줄에 한개 두번째 줄에 두개...

				putchar('*');
			}

			putchar('\n'); //한줄 다 찍었으면 줄바꾸고 다음꺼 찍으러 올라감
		}

		putchar('\n');
	}

	return 0;
}