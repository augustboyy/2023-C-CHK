#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
/*���� �˻� ���α׷�*/
// 10)������ HW50 

int input(char* string, char* character);
int strCheck(char* string, char* character);

int main() {

	char string[100];
	char character;
	int a, b;

	for (;;) {

		b = input(string, &character);
		a = strCheck(string, &character);

		if (b == 1) {

			break;
		}

		if (a == -1) {

			printf("\"%s\"���ڿ� �ȿ� \"%c\"���ڴ� �������� �ʽ��ϴ�.\n", string, character);
		}

		else {

			printf("\"%s\"���ڿ� �ȿ� \'%c\'���ڴ� %d�� ��ġ�� �����մϴ�.\n", string, character, a);
		}
	}



	return 0;
}

int input(char* string, char* character) {

	printf("���ڿ��� �Է��Ͻÿ� : ");
	scanf("%s", string);

	if (strcmp(string, "end") == 0) {

		return 1;
	}

	getchar();

	printf("���ڸ� �Է��Ͻÿ� : ");
	scanf("%c", character);

	getchar();

	return 0;
}

int strCheck(char* string, char* character) {

	char inchar = *character;
	int i, index;

	

	for (i = 0; i < strlen(string); i++) {

		if (string[i] == inchar) {

			index = i + 1;
			break;
		}

		else {

			index = -1;
		}
	}

	return index;
}