#pragma warning (disable : 4996)
#include <stdio.h>
/*����ö ��� ����ϱ�*/
// 30)������ HW18 

int inputInt(const char* msg);
void outPut(int fee, int dis);

int main() {

	int age, num, fee, dis = 0;

	age = inputInt("���尴�� ���̸� �Է��Ͻÿ� : ");
	num = inputInt("���尴�� ���� �Է��Ͻÿ� : ");

	if (age <= 7) {// ����� ��� �κ� 

		fee = 500 * num;
	}

	else if (age <= 13) {

		fee = 700 * num;
	}

	else if (age <= 19) {

		fee = 1000 * num;
	}

	else if (age <= 55) {

		fee = 1500 * num;
	}

	else {

		fee = 500 * num;
	}

	if (num >= 5) {// ����� ����� ���� �� ��ü��� ������ ���ִ� �κ�. ���� ��ü�� �ƴ϶�� dis �� �ʱ�ȭ�� ���� 0�� �״�� ����
		
		dis = fee / 10;
	}

	outPut(fee, dis);// call by value���

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

void outPut(int fee, int dis) {

	printf("����� => %d��\n���αݾ� => %d��\n�����ݾ� => %d��", fee, dis, fee - dis);
}