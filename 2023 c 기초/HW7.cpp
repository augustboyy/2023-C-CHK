#pragma warning (disable : 4996)
#include <stdio.h>
/*주행거리와 시속을 입력받아 주행시간을 계산하기*/
// 30)남기현 HW7



int main() {
	
	double dist = 0, velo = 0, time = 0;
	int h = 0, m = 0;
	double s = 0;
	
	printf("거리를 입력하십시오(km단위) : ");
	scanf("%lf", &dist);
	putchar('\n');

	printf("시속을 입력하시오(km/h단위) : ");
	scanf("%lf", &velo);
	putchar('\n');

	time = dist / velo;

	h = time;
	m = (time - h) * 60;
	s = (((time - h) * 60) - m) * 60;

	printf("%.2lf km => %d시간 %d분 %.3lf초 소요됨", dist, h, m, s);



	return 0;
}