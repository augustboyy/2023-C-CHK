#pragma warning (disable : 4996)
#include <stdio.h>
/*ASCII code�� �Է¹޾� ASCII code�� �ش��ϴ� ���� ����ϱ�*/
// 30)������ HW11

int inputInt(const char* msg); // �����ε� ��� ���� �Է��� �� �Լ��� �̿��Ұſ���

int main(void) {

	int a;

	a = inputInt("ASCII code ���� �Է��Ͻÿ� : ");
	printf("%d��(��) '%c'�� ASCII code �Դϴ�.", a, a); // a���� �Է¹��� ���ڰ� ����ְ���? �ٵ� ���� ��ȯ ������ %d�� �װ� ���ڷ� �ν��ؼ� ����ϰ� %c�� �װ� ASCII code�� �ν��ؼ� �׿� �´� ���� �ϳ��� ����մϴ�

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