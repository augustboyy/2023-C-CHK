#pragma warning (disable : 4996)
#include <stdio.h>
/*�µ� ��ȯ�ϱ�*/
//30)������ HW6

double input(void) {
	
	double Ftemp = 0;

	printf("ȭ�� �µ��� �Է��ϼ��� : ");
	scanf("%lf", &Ftemp);

	return Ftemp;
}

void output(double Ctemp) {

	printf("���� �µ��� %.1lf�� �Դϴ�.\n", Ctemp);

	return;
}

int main() {
	
	double Ftemp = 0, Ctemp = 0;

	Ftemp = input();
	Ctemp = (5. / 9.) * (Ftemp - 32.);
	output(Ctemp);

	return 0;
}