#pragma warning (disable : 4996)
#include <stdio.h>
/*정해진 금액으로 물건 구입하기*/
// 30)남기현 HW39

int input(const char* msg, int* money);
void res(int money);

int main() {

	int money;
	int check;

	for (;;) {

		check = input("현재 당신의 소유금액 입력 : ", &money);

		if (check == 1) {

			break;
		}

		if (money < 1600) {

			printf("금액부족\n");
			continue; // 모든 물건을 하나씩 사야하기 때문에 1600원 이하면 재입력을 하러 제어를 for문으로 다시 가져감
		}

		res(money);
	}

	return 0;
}

int input(const char* msg, int* money) {

	printf("%s", msg);
	scanf("%d", money);

	if (getchar() != '\n') { // 입력 성공시 남아있는 개행문자를 지울 수 있다! 입력 실패시 1을 반환하며 프로그램을 종료시킨다!

		return 1; // 입력이 실패했다는 신호
	}

	return 0;
}

void res(int money) { // 자연수 조건의 부정방정식의 해를 구하는 방법은 거의 노가다밖에 없는데 그 노가다의 상한을 정하는데 나도 고민을 많이 했어

	int i, j, k;
	int num1, num2, num3;

	num1 = money / 500; // 물건을 한종류만 산다고 가정했을때 최대로 살 수 있는 갯수(상한이 되겠죠)
	num2 = money / 700; // 고민을 더 한다면 상한을 더 줄일 수 도 있을거임( 모든 물건을 반드시 한개이상 사기때문)
	num3 = money / 400;

	for (i = 1; i <= num1; i++) { //그 상한 갯수까지만 노가다를 돌리면 답을 구할 수도 있다(답이 없는 경우도 존재)<-(money가 500,700,400의 배수의 합으로 표현 불가능시)

		for (j = 1; j <= num2; j++) { // 코딩이 아니라 수학이라구요? 네 코딩을 잘하려면 수학을 잘해야 해요

			for (k = 1; k <= num3; k++) {

				if (500 * i + 700 * j + 400 * k == money){ // 해가 존재하지 않는 경우에는 아무것도 안한다

					printf("크림빵(%d 개), 새우깡(%d 봉지), 콜라(%d 병)\n", i, j, k);
					break; // 어차피 정해진 i ,j 에 대해 k는 단 한개만 존재하므로 답이 나왔으면 그 뒤에 for문을 돌릴 이유가 없음(반복 횟수를 줄이자!)
				}
			}
		}
	}

	printf("어떻게 구입하시겠습니까?\n");
}
