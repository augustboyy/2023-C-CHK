#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
/*�̸��� �������� �Է¹޾� ������ ���� ���·� ����Ͻÿ�*/
// 30)������ HW12



int main(void) {

	char name[80];

	printf("�̸��� �Է��Ͻÿ� : ");
	fgets(name, sizeof(name), stdin); // ���Ⱑ ���� �ѹ��� �Է� ������ fgets���! (scanf�� ������ ������ �Է��� �ߴ���)
	name[strlen(name) - 1] = 0; // �ٵ� fgets�� ���� �Էµ� ������ \n���ڱ��� �о���� ������ �� �κ��� NULL���ڷ� �ٲ��ִ� ���!(���� 0 �� \0���� ASCII code)
	//(strlen�Լ��� ���ڿ����� NULL���� �������� ���ڿ��� ���̸� �˷���) ���� apple���ڿ� �Է� �׷� �������� apple\n�� �� ���ڿ��� ���̴� 6 ���� ���� �� �̿��ϸ� �迭�� 5���� ��(\n)�� NULL���ڷ� �ٲ�

	printf("\"%s\"\n\"%20s\"\n\"%-20s\"", name, name, name); // ���ĺ�ȯ���ڷ� �䱸���� ���߱� �̷��� å���� �˾Ƽ� ã�ƺ���
	
	return 0;
}