#pragma warning (disable : 4996)
#include <stdio.h>
/*stdin buffer ��� �ϴ� �Լ���� �Է� �����ϱ�*/

int main() {
	int a = 0;
	char myClass;

	printf("�����Է�:");
	scanf("%d", &a); //�Է� ���ۿ� ������+ new line ��ɹ���
	
	printf("��(A,B,C) �Է�:");
	myClass = getchar(); //�Է¹��� ������ ASCII �ڵ� ��ȯ, ���ۿ� �����ִ� new line��ɹ��� ������
	printf("������ %d��, ��: %c��\n", a, myClass);

	return 0;
}