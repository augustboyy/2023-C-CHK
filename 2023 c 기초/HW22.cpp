#pragma warning (disable : 4996)
#include <stdio.h>
/*���ٿ� 5���� ��(*) ����ϱ�*/
// 30)������ HW22

int inputInt(const char* msg);

int main() {

	int star, res;
	int i;

	star = inputInt("�������� �Է��Ͻÿ� : ");
	res = star / 5; // ���������� ������ ����!!

	for (i = 0; i < res; i++) {
		
		printf("*****\n");
	}

	for (i = 0; i < (star - res * 5); i++) { //���������� ������ ����!!!!!!!!!!!!!!!!!!!!!!!!

		putchar('*');
	}
	return 0;
}

int inputInt(const char* msg) {

	int num = 0;

	for (;;) {

		printf("%s", msg);
		scanf("%d", &num);

		if (getchar() != '\n') {
			while (getchar() != '\n') {
				;
			}
		}

		else {
			break;
		}
	}
	return num;
}