#pragma warning (disable : 4996)
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*���� ���߱� ����*/
// 10)������ HW25

int random(int n) {
	for (;;) { //while(1) �� ��ġ

		int res;
		res = rand() % n;

		if (res > 0) { // ���� ������ 0 ���� (25 ���� ���� ���� ���� ����)
			return res;
			break;
		}
	}
}

int inputInt(const char* msg) {

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
		if (num <= 100 && num >= 1) { // 1~100 ������ ���ڸ� �Է��ް� �����
			return num;
			break;
		}
		else { ; }
	}
}

int putres(int putnum, int randnum) {

	int min = 0, max = 100, i = 0; // min, max Ȱ���� ���� ���� ���̱�

	while (putnum != randnum) { // �Է��� ���� �������� ���� ��ġ�� �� ���� Ż��

		if (putnum > randnum){
			max = putnum;
			printf("%d���ٴ� ũ��, %d���ٴ� �۽��ϴ�.\n", min, max);
			i += 1; // �õ�Ƚ�� ��Ͽ�
			putnum = inputInt("1���� 100������ ���� �Է� : ");
		}

		else if (putnum < randnum) {
			min = putnum;
			printf("%d���ٴ� ũ��, %d���ٴ� �۽��ϴ�.\n", min, max);
			i += 1;
			putnum = inputInt("1���� 100������ ���� �Է� : ");
		}
	}

	return i;
}

int main() {
	srand((unsigned int)time(NULL));

	int putnum, randnum, i;

	putnum = inputInt("1���� 100������ ���� �Է� : ");
	randnum = random(101);
	i = putres(putnum, randnum);
	printf("�����Դϴ� �õ��� Ƚ���� %dȸ�Դϴ�.", i += 1);

	




	return 0;
}