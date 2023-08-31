#pragma warning (disable : 4996)
#include <stdio.h>
/*������ �칰Ż�� ���α׷�*/
// 30)������ HW24

int inputInt(const char* msg);
int escapeDay(int depth);
void putRes(int depth, int day);

int main() {

	int depth;

	depth = inputInt("�칰�� ���̸� �Է��Ͻÿ�(cm����) : ");
	putRes(depth, escapeDay(depth));

	return 0;
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

		if (num >= 0) { // ���� ���� �Ǵ� 0�� �Է¹ް� ��

			return num;
		}
	}
}

int escapeDay(int depth) { // �칰 Ż�� ��¥ ���

	int day = 0;

	while (depth > 0) { // depth�� 0�Ǵ� ������ �Ǹ� �칰�� Ż���� ������ ���� ������ �����Ѵ�

		depth -= 50;

		if (depth > 0) { // �ƹ����� ���� 50�ö󰡰� 20�������ٰ� �ؼ� +30 �ϸ� �ȵǰ���? 40��ġ�� ���� ������ 50 �ö󰡴� ����  Ż���ع����Ŵѱ� �װ� �����ϴ� if��

			depth += 20;
		}

		++day; //while������ �ѹ� �� ������ �ϳ��� ī��Ʈ ��
	}

	return day;
}

void putRes(int depth, int day) {

	printf("%.2lf���� ������ �칰�� Ż���ϱ� ���ؼ��� %d���� �ɸ��ϴ�.", (double)depth / 100, day);
}