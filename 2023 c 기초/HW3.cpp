#pragma warning (disable : 4996)
#include <stdio.h>
#define TIME 54321
/*�� ���� ��, ��, �ʴ����� ȯ���ϴ� ���α׷�*/

int main() {

	int a = 0;
	int h, m;
	
	h = TIME / 3600;
	a = TIME - h * 3600;

	m = a / 60;
	a = a - m * 60;


	printf("%d�ʴ� %d�ð� %d�� %d�� �Դϴ�.", TIME, h, m, a);

	return 0;
}