#pragma warning (disable : 4996)
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*숫자 맞추기 게임*/
// 10)남기현 HW25

int random(int n) {
	for (;;) { //while(1) 과 동치

		int res;
		res = rand() % n;

		if (res > 0) { // 난수 생성중 0 제외 (25 뒷편에 난수 생성 예제 참고)
			return res;
			break;
		}
	}
}

int inputInt(const char* msg) {

	int num = 0;

	for (;;) {

		for (;;) {

			printf("%s", msg);
			scanf("%d", &num);

			if (getchar() != '\n') {
				while (getchar() != '\n') {
					;
				}
			}

			else {
				break;
			}
		}
		if (num <= 100 && num >= 1) { // 1~100 사이의 숫자만 입략받게 만들기
			return num;
			break;
		}
		else { ; }
	}
}

int putres(int putnum, int randnum) {

	int min = 0, max = 100, i = 0; // min, max 활용을 통해 범위 줄이기

	while (putnum != randnum) { // 입력한 수와 랜덤생성 수가 일치할 때 루프 탈출

		if (putnum > randnum){
			max = putnum;
			printf("%d보다는 크고, %d보다는 작습니다.\n", min, max);
			i += 1; // 시도횟수 기록용
			putnum = inputInt("1부터 100사이의 정수 입력 : ");
		}

		else if (putnum < randnum) {
			min = putnum;
			printf("%d보다는 크고, %d보다는 작습니다.\n", min, max);
			i += 1;
			putnum = inputInt("1부터 100사이의 정수 입력 : ");
		}
	}

	return i;
}

int main() {
	srand((unsigned int)time(NULL));

	int putnum, randnum, i;

	putnum = inputInt("1부터 100사이의 정수 입력 : ");
	randnum = random(101);
	i = putres(putnum, randnum);
	printf("정답입니다 시도한 횟수는 %d회입니다.", i += 1);

	




	return 0;
}