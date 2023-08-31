#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*요일 구하는 프로그램*/
// 10)남기현 HW46

int inputDate(int* year, int* month, int* date);
int dateCheck(int year, int month, int date);
int totalDate(int year, int month, int date);
void result(int year, int month, int date, int sum);

int main() {

	int year, month, date;
	int check1, check2, sum;

	for (;;) {

		check1 = inputDate(&year, &month, &date);

		if (check1 != 3) {
			break;
		}

		else if (getchar() != '\n') {
			break;
		}

		else{;}

		check2 = dateCheck(year, month, date);

		if (check2 == 0) {

			sum = totalDate(year, month, date);
			result(year, month, date, sum);
		}

		else { ; }
	}

	return 0;
}

int inputDate(int* year, int* month, int* date) {

	int a;
	
	printf("년 월 일을 입력하시오 : ");
	a = scanf("%d %d %d", year, month, date);

	return a;
}

int dateCheck(int year, int month, int date) {
	
	if (year <= 0 || month <= 0 || date <= 0) {

		return 1;
	}

	else if (year < 1900) {

		return 1;
	}
	
	else if (month > 12) {

		return 1;
	}

	if (year % 4 == 0 && year % 100 != 0) {

		if (month == 1 || month == 3 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {

			if (date > 31) {

				return 1;
			}
		}

		else if (month == 4 || month == 6 || month == 9 || month == 11) {

			if (date > 30) {

				return 1;
			}
		}

		else if (month == 2) {

			if (date > 29) {

				return 1;
			}
		}
	}

	else if (year % 400 == 0) {

	if (month == 1 || month == 3 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {

		if (date > 31) {

			return 1;
		}
	}

	else if (month == 4 || month == 6 || month == 9 || month == 11) {

		if (date > 30) {

			return 1;
		}
	}

		else if (month == 2) {

			if (date > 29) {

				return 1;
			}
		}
	}

	if (month == 1 || month == 3 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {

		if (date > 31) {

			return 1;
		}
	}

	else if (month == 4 || month == 6 || month == 9 || month == 11) {

		if (date > 30) {

			return 1;
		}
	}

	else if (month == 2) {

		if (date > 28){

			return 1;
		}
	}

	return 0;
}

int totalDate(int year, int month, int date) {

	int i, j, sum = 0;
	int month_re[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	for (i = 1900; i <= year - 1; i++) {

		if (i % 4 == 0 && i % 100 != 0) {

			sum += 366;
		}

		else if (i % 400 == 0) {

			sum += 366;
		}

		else {

			sum += 365;
		}
	}

	for (j = 0; j < month - 1; j++) {

		sum += month_re[j];
	}

	if (year % 4 == 0 && year % 100 != 0) {

		if (month >= 3) {

			sum += 1;
		}
	}

	else if (year % 400 == 0) {

		if (month >= 3) {

			sum+=1;
		}
	}

	sum += date;

	return sum;
}

void result(int year, int month, int date, int sum) {

	sum %= 7;

	if (sum == 0) {

		printf("%d년 %d월 %d일은 일요일 입니다\n", year, month, date);
	}

	else if (sum == 1) {

		printf("%d년 %d월 %d일은 월요일 입니다\n", year, month, date);
	}

	else if (sum == 2) {

		printf("%d년 %d월 %d일은 화요일 입니다\n", year, month, date);
	}

	else if (sum == 3) {

		printf("%d년 %d월 %d일은 수요일 입니다\n", year, month, date);
	}

	else if (sum == 4) {

		printf("%d년 %d월 %d일은 목요일 입니다\n", year, month, date);
	}

	else if (sum == 5) {

		printf("%d년 %d월 %d일은 금요일 입니다\n", year, month, date);
	}

	else {

		printf("%d년 %d월 %d일은 토요일 입니다\n", year, month, date);
	}

	return;
}