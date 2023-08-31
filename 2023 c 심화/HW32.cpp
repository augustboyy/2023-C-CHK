#pragma warning (disable : 4996)
#include <stdio.h>
#include <math.h>
#include <float.h>
/*���� �Լ� �����*/
// 10)������ HW32

int inputUInt(const char* msg);
double inputUDouble(const char* msg);
int ipow(int num, int N);
double fpow(double fnum, int N);

int main() {

	int num, N, res1;
	int q = 1;
	double fnum, res2;

	num = inputUInt("���� ���� ���� �Է��Ͻÿ� : ");
	N = inputUInt("0�̳� ���� ���� ������ �Է��Ͻÿ� : ");

	if (num == 0 && N == 0) {

		printf("���� �Ұ�\n");
	}
	else {

		res1 = ipow(num, N);

		printf("%d�� %d������ %d�Դϴ�.\n", num, N, res1);
	}
	

	

	fnum = inputUDouble("���� �Ǽ� ���� �Է��Ͻÿ� : ");
	N = inputUInt("0�̳� ���� ���� ������ �Է��Ͻÿ� : ");

	if (fabs(fnum - 0) < DBL_EPSILON) {

		q = 0;
	}

	if (q == 0 && N == 0) {

		printf("���� �Ұ�");
	}

	else{

		res2 = fpow(fnum, N);

		printf("%.2lf�� %d������ %.3lf�Դϴ�.", fnum, N, res2);
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
		if (num >= 0) { // ���� ������ �Է¹ް� �����
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
		if (num >= 0) { // ���� �Ǽ��� �Է¹ް� �����
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