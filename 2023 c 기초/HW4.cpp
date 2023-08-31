#pragma warning (disable : 4996)
#include <stdio.h>
#define YEAR 365.2422
/*1년을 일, 시 ,분, 초로 환산하는 프로그램*/

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

	printf("%.4lf일은 %d일 %d시간 %d분 %lg초 입니다.", YEAR, d, h, m, s);


	return 0;
}