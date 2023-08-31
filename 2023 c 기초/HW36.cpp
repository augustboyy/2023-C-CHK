#pragma warning (disable : 4996)
#include <stdio.h>
/*1~100까지의 숫자를 출력할때...*/
// 30)남기현 HW36

int main() {
	
	int i;

	for (i = 1; i < 101; i++) { //1부터 100까지 반복

		if (i % 10 == 1) { //11,21,31,41... 앞에서 뉴라인
			
			putchar('\n');
		}

		if (i % 3 == 0 && i % 5 != 0) { // 3의배수만 * 출력 (15 배수는 거른다)

			printf("  *");
			continue; // 제어가 여기서 바로 for문으로 돌아감 (그냥 if else if else 로도 구성 가능하지만 컨티뉴 한번 써보고 싶었어)
		}

		else if (i % 5 == 0 && i % 3 != 0) { // 5의배수만 # 출력 (15 배수는 거른다)

			printf("  #");
			continue; // 제어가 여기서 바로 for문으로 돌아감
		}

		else { ; }

		printf(" %2d", i);
	}

	return 0;
}