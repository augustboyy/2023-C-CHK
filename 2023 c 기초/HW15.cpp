#pragma warning (disable : 4996)
#include <stdio.h>
/*BMI 구하기*/
// 30)남기현 HW15

double inputDouble(const char* msg);
double calBMI(double weight, double height);
void putBMI(double BMI);

int main() {

	double weight, height, BMI;

	weight = inputDouble("몸무게를 입력하세요(kg) : ");
	height = inputDouble("키를 입력하세요(m) : ");
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

		printf("당신의 BMI는 %.1lf으로 저체중입니다.", BMI);
	}

	else if (BMI < 25) { //이후 연산식에 (BMI >= 18.5 && BMI < 25) 이렇게 안적는 이유: 이미 위에서 걸려져서 내려올땐 18.5보다 크거나 같은 수이기 때문에 불필요한 연산 줄이기

		printf("당신의 BMI는 %.1lf으로 정상체중입니다.", BMI);
	}

	else if (BMI < 30) {

		printf("당신의 BMI는 %.1lf으로 과체중입니다.", BMI);
	}

	else if (BMI < 40) {

		printf("당신의 BMI는 %.1lf으로 비만입니다.", BMI);
	}

	else {

		printf("당신의 BMI는 %.1lf으로 고도비만입니다.", BMI);
	}

	return;
}