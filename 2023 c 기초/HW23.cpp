#pragma warning (disable : 4996)
#include <stdio.h>
/*�ݺ������� �� ���� ������ �Է¹޾� �μ��� ���� ����Ͻÿ�*/
// 30)������ HW23

int main() {

	for (;;) {

		int num1, num2;

		printf("�ΰ��� ������ �Է��Ͻÿ� : ");
		scanf("%d %d", &num1, &num2);

		if (getchar() != '\n') { // ���ڰ� ������ ���ۿ� �ݵ�� ���ڰ� ���� �ٴ� ���� �̿� �ݴ�� �Է� ������ ���ۿ� ���๮�ڰ� ���´�.(scanf �Լ��� Ư¡)

			break;
		}

		else {
			if (num1 > num2) {

				printf("%d - %d = %d\n", num1, num2, num1 - num2);
			}

			else {

				printf("%d - %d = %d\n", num2, num1, num2 - num1);
			}
		}
	}

	return 0;
}