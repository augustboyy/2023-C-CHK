#pragma warning (disable : 4996)
#include <stdio.h>
/*������ �Է¹޾� ¦���̸� #, Ȧ���̸� @ ���ڸ� �Է¹��� ���ڼ� ��ŭ  ����Ͻÿ�*/

int main() {

	int a = 0;
	scanf("%d", &a);

	if (a % 2 == 0) {
		while (a) {
			printf("#");
			a--;
		}
	}

	else {
		while (a) {
			printf("@");
			a--;
		}
	}
	


	return 0;
}