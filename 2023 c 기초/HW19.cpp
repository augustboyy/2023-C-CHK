#pragma warning (disable : 4996)
#include <stdio.h>
/*윤, 평년 구하는 프로그램*/
// 30)남기현 HW19

int inputInt(const char* msg);
int yearCheck(int year);
void outPut(int year, int checkedY);

int main() {

	int year;

	year = inputInt("년도를 입력하시오 : ");
	outPut(year, yearCheck(year));
	
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

		if (num > 0) { // 양의 정수만 입력받게 함

			return num;
		}
	}
}

int yearCheck(int year) {// 윤,평년 구하는 로직

	if (year % 4 == 0 && year % 100 != 0) {

		return 1;
	}

	else if (year % 400 == 0) {

		return 1;
	}

	else {

		return 0;
	}
}

void outPut(int year, int checkedY) {

	if (checkedY == 1) {

		printf("%d년은 윤년(Leap year)입니다.", year);
	}

	else {// 어차피 checkedY에는 0아님 1만 들어오니깐 검사수를 줄이기 위해 if(checkedY==0)이렇게 안썼어 그렇게 쓰면 checkedY를 두번 검사하잖아

		printf("%d년은 평년(Common year)입니다.", year);
	}

}