#pragma warning (disable : 4996)
#include <stdio.h>
/*BMI ���ϱ�*/
// 30)������ HW15

double inputDouble(const char* msg);
double calBMI(double weight, double height);
void putBMI(double BMI);

int main() {

	double weight, height, BMI;

	weight = inputDouble("�����Ը� �Է��ϼ���(kg) : ");
	height = inputDouble("Ű�� �Է��ϼ���(m) : ");
	BMI = calBMI(weight, height);

	putBMI(BMI);

	
	return 0;
}

double inputDouble(const char* msg) {

	double num = 0;

	for (;;) {

		printf("%s", msg);
		scanf("%lf", &num);

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

double calBMI(double weight, double height) {

	double BMI;

	BMI = weight / (height * height);

	return BMI;
}

void putBMI(double BMI) {

	if (BMI < 18.5) {

		printf("����� BMI�� %.1lf���� ��ü���Դϴ�.", BMI);
	}

	else if (BMI < 25) { //���� ����Ŀ� (BMI >= 18.5 && BMI < 25) �̷��� ������ ����: �̹� ������ �ɷ����� �����ö� 18.5���� ũ�ų� ���� ���̱� ������ ���ʿ��� ���� ���̱�

		printf("����� BMI�� %.1lf���� ����ü���Դϴ�.", BMI);
	}

	else if (BMI < 30) {

		printf("����� BMI�� %.1lf���� ��ü���Դϴ�.", BMI);
	}

	else if (BMI < 40) {

		printf("����� BMI�� %.1lf���� ���Դϴ�.", BMI);
	}

	else {

		printf("����� BMI�� %.1lf���� �����Դϴ�.", BMI);
	}

	return;
}