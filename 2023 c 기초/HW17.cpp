#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
/*����, Ű, ������ �Է¹޾� ���� ���� ���� ����Ǵ� ���α׷�*/
// 30)������ HW17

int main() {

	char name[80], sex;
	double height;

	printf("�����Է� : ");
	fgets(name, sizeof(name), stdin);
	name[strlen(name) - 1] = 0;// ���� �����ذſ� �� �̰� ������ �˷���!

	printf("Ű �Է�(cm) : ");
	scanf("%lf", &height);
	if (getchar() != '\n') {// ���� ���� ��� scanf�� �������� ���๮�ڸ� �о���� �ʰ� ���ۿ� ���ܵ� �׷� ���� scanf�� ������ ������ ���۵� 

		while (getchar() != '\n') {
			;
		}
	}
	
	printf("�����Է�(M/F) : ");
	scanf("%c", &sex);
	if (getchar() != '\n') {

		while (getchar() != '\n') {
			;
		}
	}

	if (sex == 'M') {
	
		printf("%s���� Ű�� %.2lfcm�̰� �����Դϴ�.", name, height);
	}
	
	else {

		printf("%s���� Ű�� %.2lfcm�̰� �����Դϴ�.", name, height);
	}

	return 0;
}