#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*ȸ���˻� ���α׷�*/
// 10)������ HW52

int input(char* string);
int stringCheck(char* string);

int main() {
	
	int end, res;
	char string[80];

	for (;;) {

		end = input(string);

		if (end == 1) {

			break;
		}

		else {

			res = stringCheck(string);

			if (res == 1) {

				printf("\"%s\"�� ȸ���Դϴ�!\n", string);
			}

			else {

				printf("\"%s\"�� ȸ���� �ƴմϴ�!\n", string);
			}
		}
	}

	return 0;
}

int input(char* string) {

	int i;

	printf("���ڿ��� �Է��Ͻÿ� : ");
	scanf("%s", string);

	if (strcmp(string, "end") == 0) {

		return 1;
	}

	getchar();
	for (i = 0; i < 100; i++) {

		string[i] = tolower(string[i]);
	}
	

	return 0;
}

int stringCheck(char* string) {

	int len, res = 1;
	int i;

	len = strlen(string);

	for (i = 0; i < len / 2; i++) {

		if (string[i] != string[len - 1 - i]) {

			res = 0;
		}
	}

	return res;
}
