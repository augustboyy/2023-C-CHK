#pragma warning (disable : 4996)
#include <stdio.h>
/*�� ������ �Է� �޾� ��,��,��,���� ���� ����ϴ� ���α׷�*/
// 30)������ HW10


int main() {

	int num1, num2;

	printf("�ΰ��� ���� �Է� (�����ڴ� space) : ");

	scanf("%d %d", &num1, &num2);


	printf("%d+%d = %d\n", num1, num2, num1+num2);// printf �Լ� �ȿ��� �����ϰ� ����ϱ�
	printf("%d-%d = %d\n", num1, num2, num1-num2);
	printf("%d*%d = %d\n", num1, num2, num1*num2);
	printf("%d/%d = %.2lf", num1, num2, (double)num1/num2); /* num1, num2�Ѵ� int���̱� ������ ������ ����� �� ������ ������ ������
	���� num1�� double������ ����ȭ�� compiler�� �ڵ� ����ȯ���� num2�� double������ �ٲ�*/

	
	return 0;
}