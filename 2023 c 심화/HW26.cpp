#pragma warning (disable : 4996)
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*가위바위보 게임*/
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
		if (num <= 3 && num >= 1) { // 1~3 사이의 숫자만 입력받게 만들기
			return num;
			break;
		}
		else { ; }
	}
}

void putres(int putnum, int *win, int *same) { // win, same의 값을 동시에 변화시키고 싶음. 그러나 리턴값은 무조건 하나. 따라서 parameter로 포인터 사용

	int randnum; //컴퓨터의 선택
	randnum = random(4);

	for (;;) {

		if (randnum == 1) { //1은 가위, 2는 바위, 3은 보

			if (putnum == 1){
				printf("당신은 바위 선택, 컴퓨터는 바위 선택 : 비겼습니다.\n");
				*same += 1; //포인터가 가리키는 값을 바꾸고 싶음 따라서 *same 사용
				randnum = random(4);
			}

			else if (putnum == 2) {
				printf("당신은 가위 선택, 컴퓨터는 바위 선택 : 졌습니다.\n");
				break;
			}

			else {
				printf("당신은 보 선택, 컴퓨터는 바위 선택 : 이겼습니다.\n");
				*win += 1;
				randnum = random(4);
			}
		}

		else if (randnum == 2) {

			if (putnum == 1) {
				printf("당신은 바위 선택, 컴퓨터는 가위 선택 : 이겼습니다.\n");
				*win += 1;
				randnum = random(4);
			}

			else if (putnum == 2) {
				printf("당신은 가위 선택, 컴퓨터는 가위 선택 : 비겼습니다.\n");
				*same += 1;
				randnum = random(4);
			}

			else {
				printf("당신은 보 선택, 컴퓨터는 가위 선택 : 졌습니다.\n");
				break;
			}
		}

		else {

			if (putnum == 1) {
				printf("당신은 바위 선택, 컴퓨터는 보 선택 : 졌습니다.\n");
				break;
			}

			else if (putnum == 2) {
				printf("당신은 가위 선택, 컴퓨터는 보 선택 : 이겼습니다.\n");
				*win += 1;
				randnum = random(4);
			}

			else {
				printf("당신은 보 선택, 컴퓨터는 보 선택 : 비겼습니다.\n");
				*same += 1;
				randnum = random(4);
			}
		}
		putnum = inputInt("바위는 1, 가위는 2, 보는 3 중에서 선택하세요 : ");
	}

	return;
}

int main() {
	srand((unsigned int)time(NULL));

	int putnum, randnum, win = 0, same = 0;
	putnum = inputInt("바위는 1, 가위는 2, 보는 3 중에서 선택하세요 : ");
	putres(putnum, &win, &same); //포인터 사용으로 win,same의 주소를 argument로 사용
	printf("게임결과 : %d승 %d무", win, same);


	
	return 0;
}