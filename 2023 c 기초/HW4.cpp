#pragma warning (disable : 4996)
#include <stdio.h>
#define YEAR 365.2422
/*1���� ��, �� ,��, �ʷ� ȯ���ϴ� ���α׷�*/

int main() {

	double a = 0.;
	int d, h, m;
	double s = 0.;

	d = YEAR / 1;
	a = YEAR - 365;
	h = 24 * a;
	a = a * 24 - h ;
	m = a * 60;
	a = a *60 - m;
	s = a * 60;

	printf("%.4lf���� %d�� %d�ð� %d�� %lg�� �Դϴ�.", YEAR, d, h, m, s);


	return 0;
}