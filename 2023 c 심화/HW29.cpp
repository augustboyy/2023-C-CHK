#pragma warning (disable : 4996)
#include <stdio.h>
/*고집수*/
// 10)남기현 HW29

int inputUInt(const char* msg);
int transNumber(int num);

int main() {
	
	int start, finish, n;
	int i, j = 0, k = 0;
	int res;

	start = inputUInt("시작값 입력(100보다 크거나 같은 수) : ");
	finish = inputUInt("끝 값 입력(10000보다 작거나 같은 수) : ");
	n = inputUInt("고집수(1부터 10사이의 수) : ");

	printf("고집수가 %d인 숫자 출력\n", n);

	for (i = start; i <= finish; i++) { // start와 finish 사이의 숫자들을 모두 transNumber함수에 집어넣기

		res = i; //i의 값을 바로 집어 넣으면 for문에 문제가 생김(for문에서 초기화는 처음 단 한번만 함)
		j = 0; // 하나의 숫자가 연산이 끝나면 j가 초기화 되어야 함 따라서 while문 밖에서 초기화 (만약에 start 숫자의 연산이 끝나면 start + 1의 숫자가 연산이 될 것이고 그것은 별개의 연산이기 때문)

		while (res >= 10) { //res값이 한자리 수가 될때까지 transNumber연산 반복

			res = transNumber(res);
			j += 1;// 반복횟수 기록
		}

		if (n == j) { // 어떤 숫자의 transNumber연산의 시행횟수가 내가 원하는 고집수와 같을 때만 화면에 그 숫자를 출력
			printf("%d\n", i);
			k += 1; // 마지막에 출력될 숫자들의 총 개수를 위한 기록
		}

	}

	printf("총 개수 : %d개", k);

	
	return 0;
}

int inputUInt(const char* msg) {

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
		if (num > 0) { // 양의 정수만 입력받게 만들기
			return num;
			break;
		}
		else { ; }
	}
}

int transNumber(int num) { //연산부

	int n1000, n100, n10, n;
	int res;
	//밑에 네줄이 입력받은 숫자를 각 자리의 숫자로 쪼개서 각각 다른 변수에 집어넣는 로직
	n1000 = num / 1000; //1000의 자리수
	n100 = (num - (n1000 * 1000)) / 100; //100의자리수
	n10 = (num - (n1000 * 1000) - (n100 * 100)) / 10; //10의 자리수
	n = (num - (n1000 * 1000) - (n100 * 100) - (n10 * 10)); //1의 자리수

	if (n1000 == 10) { //입력된 수가 10000일때 1000의 자리수가 10이 되는 모순 발생 어차피 연산결과는 0이므로 0리턴

		return 0;
	}
	// 입력된 숫자가 몇자리 숫자인지 알 수 없음 따라서 케이스 분류(첫번째 입력은 무조건 100보다 크겠지만 연산을 반복하다 보면 무조건 한자리 숫자까지 떨어짐)
	else if (n1000 != 0) { // 입력된 수가 4자리 숫자일 때

		res = n1000 * n100 * n10 * n;
		return res;
	}

	else if (n1000 == 0 && n100 != 0) { //입력된 수가 3자리 숫자일 때

		res = n100 * n10 * n;
		return res;
	}

	else if (n1000 == 0 && n100 == 0 && n10 != 0) { //입력된 수가 2자리 숫자일 때

		res = n10 * n;
		return res;
	}
	 //입력된 수가 한자리 숫자일 때
	else {

		return n;
	}
}