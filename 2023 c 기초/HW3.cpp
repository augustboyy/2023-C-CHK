#pragma warning (disable : 4996)
#include <stdio.h>
#define TIME 54321
/*초 수를 시, 분, 초단위로 환산하는 프로그램*/

int main() {

	int a = 0;
	int h, m;
	
	h = TIME / 3600;
	a = TIME - h * 3600;

	m = a / 60;
	a = a - m * 60;


	printf("%d초는 %d시간 %d분 %d초 입니다.", TIME, h, m, a);

	return 0;
}