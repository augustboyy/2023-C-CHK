#pragma warning (disable : 4996)
#include <stdio.h>
/*��, ��� ���ϴ� ���α׷�*/
// 30)������ HW19

int inputInt(const char* msg);
int yearCheck(int year);
void outPut(int year, int checkedY);

int main() {

	int year;

	year = inputInt("�⵵�� �Է��Ͻÿ� : ");
	outPut(year, yearCheck(year));
	
	return 0;
}

int inputInt(const char* msg) {

	int num = 0;

	for (;;) {

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

		if (num > 0) { // ���� ������ �Է¹ް� ��

			return num;
		}
	}
}

int yearCheck(int year) {// ��,��� ���ϴ� ����

	if (year % 4 == 0 && year % 100 != 0) {

		return 1;
	}

	else if (year % 400 == 0) {

		return 1;
	}

	else {

		return 0;
	}
}

void outPut(int year, int checkedY) {

	if (checkedY == 1) {

		printf("%d���� ����(Leap year)�Դϴ�.", year);
	}

	else {// ������ checkedY���� 0�ƴ� 1�� �����ϱ� �˻���� ���̱� ���� if(checkedY==0)�̷��� �Ƚ�� �׷��� ���� checkedY�� �ι� �˻����ݾ�

		printf("%d���� ���(Common year)�Դϴ�.", year);
	}

}