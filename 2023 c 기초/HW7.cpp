#pragma warning (disable : 4996)
#include <stdio.h>
/*����Ÿ��� �ü��� �Է¹޾� ����ð��� ����ϱ�*/
// 30)������ HW7



int main() {
	
	double dist = 0, velo = 0, time = 0;
	int h = 0, m = 0;
	double s = 0;
	
	printf("�Ÿ��� �Է��Ͻʽÿ�(km����) : ");
	scanf("%lf", &dist);
	putchar('\n');

	printf("�ü��� �Է��Ͻÿ�(km/h����) : ");
	scanf("%lf", &velo);
	putchar('\n');

	time = dist / velo;

	h = time;
	m = (time - h) * 60;
	s = (((time - h) * 60) - m) * 60;

	printf("%.2lf km => %d�ð� %d�� %.3lf�� �ҿ��", dist, h, m, s);



	return 0;
}