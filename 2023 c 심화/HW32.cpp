#pragma warning (disable : 4996)
#include <stdio.h>
#include <math.h>
#include <float.h>
/*누승 함수 만들기*/
// 10)남기현 HW32

int inputUInt(const char* msg);
double inputUDouble(const char* msg);
int ipow(int num, int N);
double fpow(double fnum, int N);

int main() {

	int num, N, res1;
	int q = 1;
	double fnum, res2;

	num = inputUInt("양의 정수 밑을 입력하시오 : ");
	N = inputUInt("0이나 양의 정수 지수를 입력하시오 : ");

	if (num == 0 && N == 0) {

		printf("정의 불가\n");
	}
	else {

		res1 = ipow(num, N);

		printf("%d의 %d제곱은 %d입니다.\n", num, N, res1);
	}
	

	

	fnum = inputUDouble("양의 실수 밑을 입력하시오 : ");
	N = inputUInt("0이나 양의 정수 지수를 입력하시오 : ");

	if (fabs(fnum - 0) < DBL_EPSILON) {

		q = 0;
	}

	if (q == 0 && N == 0) {

		printf("정의 불가");
	}

	else{

		res2 = fpow(fnum, N);

		printf("%.2lf의 %d제곱은 %.3lf입니다.", fnum, N, res2);
	}

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
		if (num >= 0) { // 양의 정수만 입력받게 만들기
			return num;
			break;
		}
		else { ; }
	}
}

double inputUDouble(const char* msg) {

	double num = 0;

	for (;;) {

		for (;;) {

			printf("%s", msg);
			scanf("%lf", &num);

			if (getchar() != '\n') {
				while (getchar() != '\n') {
					;
				}
			}

			else {
				break;
			}
		}
		if (num >= 0) { // 양의 실수만 입력받게 만들기
			return num;
			break;
		}
		else { ; }
	}
}

int ipow(int num, int N) {

	int i = 1;
	N += 1;

	if (num == 0) {

		return 0;
	}

	if (N == 0) {

		return 1;
	}


	while (N -= 1) {

		i *= num;
	}

	return i;
}

double fpow(double fnum, int N) {

	double i = 1;
	N += 1;

	if (fnum == 0) {

		return 0;
	}

	if (N == 0) {

		return 1;
	}

	while (N -= 1) {

		i *= fnum;
	}

	return i;
}