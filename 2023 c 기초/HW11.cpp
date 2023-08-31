#pragma warning (disable : 4996)
#include <stdio.h>
/*ASCII code를 입력받아 ASCII code에 해당하는 문자 출력하기*/
// 30)남기현 HW11

int inputInt(const char* msg); // 앞으로도 계속 정수 입력은 요 함수를 이용할거에여

int main(void) {

	int a;

	a = inputInt("ASCII code 값을 입력하시오 : ");
	printf("%d은(는) '%c'의 ASCII code 입니다.", a, a); // a에는 입력받은 숫자가 들어있겠죠? 근데 형식 변환 문자인 %d는 그걸 숫자로 인식해서 출력하고 %c는 그걸 ASCII code로 인식해서 그에 맞는 문자 하나를 출력합니다

	return 0;
}

int inputInt(const char* msg) {

	int num = 0;

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
	return num;
}