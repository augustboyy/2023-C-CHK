#pragma warning (disable : 4996)
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/*���������� ����*/
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
		if (num <= 3 && num >= 1) { // 1~3 ������ ���ڸ� �Է¹ް� �����
			return num;
			break;
		}
		else { ; }
	}
}

void putres(int putnum, int *win, int *same) { // win, same�� ���� ���ÿ� ��ȭ��Ű�� ����. �׷��� ���ϰ��� ������ �ϳ�. ���� parameter�� ������ ���

	int randnum; //��ǻ���� ����
	randnum = random(4);

	for (;;) {

		if (randnum == 1) { //1�� ����, 2�� ����, 3�� ��

			if (putnum == 1){
				printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : �����ϴ�.\n");
				*same += 1; //�����Ͱ� ����Ű�� ���� �ٲٰ� ���� ���� *same ���
				randnum = random(4);
			}

			else if (putnum == 2) {
				printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : �����ϴ�.\n");
				break;
			}

			else {
				printf("����� �� ����, ��ǻ�ʹ� ���� ���� : �̰���ϴ�.\n");
				*win += 1;
				randnum = random(4);
			}
		}

		else if (randnum == 2) {

			if (putnum == 1) {
				printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : �̰���ϴ�.\n");
				*win += 1;
				randnum = random(4);
			}

			else if (putnum == 2) {
				printf("����� ���� ����, ��ǻ�ʹ� ���� ���� : �����ϴ�.\n");
				*same += 1;
				randnum = random(4);
			}

			else {
				printf("����� �� ����, ��ǻ�ʹ� ���� ���� : �����ϴ�.\n");
				break;
			}
		}

		else {

			if (putnum == 1) {
				printf("����� ���� ����, ��ǻ�ʹ� �� ���� : �����ϴ�.\n");
				break;
			}

			else if (putnum == 2) {
				printf("����� ���� ����, ��ǻ�ʹ� �� ���� : �̰���ϴ�.\n");
				*win += 1;
				randnum = random(4);
			}

			else {
				printf("����� �� ����, ��ǻ�ʹ� �� ���� : �����ϴ�.\n");
				*same += 1;
				randnum = random(4);
			}
		}
		putnum = inputInt("������ 1, ������ 2, ���� 3 �߿��� �����ϼ��� : ");
	}

	return;
}

int main() {
	srand((unsigned int)time(NULL));

	int putnum, randnum, win = 0, same = 0;
	putnum = inputInt("������ 1, ������ 2, ���� 3 �߿��� �����ϼ��� : ");
	putres(putnum, &win, &same); //������ ������� win,same�� �ּҸ� argument�� ���
	printf("���Ӱ�� : %d�� %d��", win, same);


	
	return 0;
}