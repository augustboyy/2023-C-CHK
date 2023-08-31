#pragma warning (disable : 4996)
#include <stdio.h>
/*달팽이 우물탈출 ㅍ로그램*/
// 30)남기현 HW24

int inputInt(const char* msg);
int escapeDay(int depth);
void putRes(int depth, int day);

int main() {

	int depth;

	depth = inputInt("우물의 깊이를 입력하시오(cm단위) : ");
	putRes(depth, escapeDay(depth));

	return 0;
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

		if (num >= 0) { // 양의 정수 또는 0만 입력받게 함

			return num;
		}
	}
}

int escapeDay(int depth) { // 우물 탈출 날짜 계산

	int day = 0;

	while (depth > 0) { // depth가 0또는 음수가 되면 우물을 탈출한 것으로 간주 루프를 중지한다

		depth -= 50;

		if (depth > 0) { // 아무생각 없이 50올라가고 20내려간다고 해서 +30 하면 안되겠죠? 40센치만 남은 날에는 50 올라가는 동안  탈출해버릴거닌깐 그걸 구문하는 if문

			depth += 20;
		}

		++day; //while루프가 한번 돌 때마다 하나씩 카운트 함
	}

	return day;
}

void putRes(int depth, int day) {

	printf("%.2lf미터 깊이의 우물을 탈출하기 위해서는 %d일이 걸립니다.", (double)depth / 100, day);
}