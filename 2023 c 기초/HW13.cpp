#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
/*�̸��� ���� �� ����ϱ�*/
// 30)������ HW13



int main(void) {

	char fName[80], lName[80];
	int cl, cf, i;

	printf("���� �Է��Ͻÿ� : ");
	fgets(lName, sizeof(lName), stdin); // ���Ⱑ ���� �ѹ��� �Է� ������ fgets���! (scanf�� ������ ������ �Է��� �ߴ���)
	lName[strlen(lName) - 1] = 0; // �ٵ� fgets�� ���� �Էµ� ������ \n���ڱ��� �о���� ������ �� �κ��� NULL���ڷ� �ٲ��ִ� ���!(���� 0 �� \0���� ASCII code)
	//(strlen�Լ��� ���ڿ����� NULL���� �������� ���ڿ��� ���̸� �˷���) ���� apple���ڿ� �Է� �׷� �������� apple\n�� �� ���ڿ��� ���̴� 6 ���� ���� �� �̿��ϸ� �迭�� 5���� ��(\n)�� NULL���ڷ� �ٲ�

	printf("�̸��� �Է��Ͻÿ� : ");
	fgets(fName, sizeof(fName), stdin); 
	fName[strlen(fName) - 1] = 0; 
	
	cl = strlen(lName);
	cf = strlen(fName); //�̸��� ���ĺ� ���� ����

	printf("%s  %s\n", lName, fName); // �߰��� ���� ��ĭ

	for (i = cl; i > 1; i--) { //������ ���� ���ĺ� �������� �Ѱ� ���� ����ִ� �ݺ���
		putchar(' ');
	}
	printf("%d  ", cl); //���� ��� ���� ��ĭ

	for (i = cf; i > 1; i--) {// ������ �̸��� ���ĺ� �������� �Ѱ� ���� ����ִ� �ݺ���
		putchar(' ');
	}
	printf("%d", cf);

	return 0;
}