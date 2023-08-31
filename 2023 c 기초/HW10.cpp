#pragma warning (disable : 4996)
#include <stdio.h>
/*두 정서를 입력 받아 함,차,곱,몫의 값을 출력하는 프로그램*/
// 30)남기현 HW10


int main() {

	int num1, num2;

	printf("두개의 정수 입력 (구분자는 space) : ");

	scanf("%d %d", &num1, &num2);


	printf("%d+%d = %d\n", num1, num2, num1+num2);// printf 함수 안에서 연산하고 출력하기
	printf("%d-%d = %d\n", num1, num2, num1-num2);
	printf("%d*%d = %d\n", num1, num2, num1*num2);
	printf("%d/%d = %.2lf", num1, num2, (double)num1/num2); /* num1, num2둘다 int형이기 때문에 나눗셈 연산시 몫만 나오고 나머지 버려짐
	따라서 num1을 double형으로 형변화후 compiler의 자동 형변환으로 num2도 double형으로 바뀜*/

	
	return 0;
}