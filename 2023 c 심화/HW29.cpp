#pragma warning (disable : 4996)
#include <stdio.h>
/*������*/
// 10)������ HW29

int inputUInt(const char* msg);
int transNumber(int num);

int main() {
	
	int start, finish, n;
	int i, j = 0, k = 0;
	int res;

	start = inputUInt("���۰� �Է�(100���� ũ�ų� ���� ��) : ");
	finish = inputUInt("�� �� �Է�(10000���� �۰ų� ���� ��) : ");
	n = inputUInt("������(1���� 10������ ��) : ");

	printf("�������� %d�� ���� ���\n", n);

	for (i = start; i <= finish; i++) { // start�� finish ������ ���ڵ��� ��� transNumber�Լ��� ����ֱ�

		res = i; //i�� ���� �ٷ� ���� ������ for���� ������ ����(for������ �ʱ�ȭ�� ó�� �� �ѹ��� ��)
		j = 0; // �ϳ��� ���ڰ� ������ ������ j�� �ʱ�ȭ �Ǿ�� �� ���� while�� �ۿ��� �ʱ�ȭ (���࿡ start ������ ������ ������ start + 1�� ���ڰ� ������ �� ���̰� �װ��� ������ �����̱� ����)

		while (res >= 10) { //res���� ���ڸ� ���� �ɶ����� transNumber���� �ݺ�

			res = transNumber(res);
			j += 1;// �ݺ�Ƚ�� ���
		}

		if (n == j) { // � ������ transNumber������ ����Ƚ���� ���� ���ϴ� �������� ���� ���� ȭ�鿡 �� ���ڸ� ���
			printf("%d\n", i);
			k += 1; // �������� ��µ� ���ڵ��� �� ������ ���� ���
		}

	}

	printf("�� ���� : %d��", k);

	
	return 0;
}

int inputUInt(const char* msg) {

	int num = 0;

	for (;;) {

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
		if (num > 0) { // ���� ������ �Է¹ް� �����
			return num;
			break;
		}
		else { ; }
	}
}

int transNumber(int num) { //�����

	int n1000, n100, n10, n;
	int res;
	//�ؿ� ������ �Է¹��� ���ڸ� �� �ڸ��� ���ڷ� �ɰ��� ���� �ٸ� ������ ����ִ� ����
	n1000 = num / 1000; //1000�� �ڸ���
	n100 = (num - (n1000 * 1000)) / 100; //100���ڸ���
	n10 = (num - (n1000 * 1000) - (n100 * 100)) / 10; //10�� �ڸ���
	n = (num - (n1000 * 1000) - (n100 * 100) - (n10 * 10)); //1�� �ڸ���

	if (n1000 == 10) { //�Էµ� ���� 10000�϶� 1000�� �ڸ����� 10�� �Ǵ� ��� �߻� ������ �������� 0�̹Ƿ� 0����

		return 0;
	}
	// �Էµ� ���ڰ� ���ڸ� �������� �� �� ���� ���� ���̽� �з�(ù��° �Է��� ������ 100���� ũ������ ������ �ݺ��ϴ� ���� ������ ���ڸ� ���ڱ��� ������)
	else if (n1000 != 0) { // �Էµ� ���� 4�ڸ� ������ ��

		res = n1000 * n100 * n10 * n;
		return res;
	}

	else if (n1000 == 0 && n100 != 0) { //�Էµ� ���� 3�ڸ� ������ ��

		res = n100 * n10 * n;
		return res;
	}

	else if (n1000 == 0 && n100 == 0 && n10 != 0) { //�Էµ� ���� 2�ڸ� ������ ��

		res = n10 * n;
		return res;
	}
	 //�Էµ� ���� ���ڸ� ������ ��
	else {

		return n;
	}
}