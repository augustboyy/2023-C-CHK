#pragma warning (disable : 4996)
#include <stdio.h>
/*�� ���� ���� �Է¹޾� ����, ��� ����ϱ�*/
// 30)������ HW8


int main() {
	
	int hist = 0, lite = 0, art = 0, total = 0;
	double dtotal = 0;

	printf("����, ����, ���� ������ �Է��ϼ���.(�����ڴ� space) : ");
	scanf("%d %d %d", &hist, &lite, &art);

	total = hist + lite + art;
	dtotal = total / 3.;

	printf("������ %d�̰� ����� %lg�Դϴ�.", total, dtotal);

	return 0;
}