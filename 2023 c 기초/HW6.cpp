#pragma warning (disable : 4996)
#include <stdio.h>
/*온도 변환하기*/
//30)남기현 HW6

double input(void) {
	
	double Ftemp = 0;

	printf("화씨 온도를 입력하세요 : ");
	scanf("%lf", &Ftemp);

	return Ftemp;
}

void output(double Ctemp) {

	printf("섭씨 온도는 %.1lf도 입니다.\n", Ctemp);

	return;
}

int main() {
	
	double Ftemp = 0, Ctemp = 0;

	Ftemp = input();
	Ctemp = (5. / 9.) * (Ftemp - 32.);
	output(Ctemp);

	return 0;
}