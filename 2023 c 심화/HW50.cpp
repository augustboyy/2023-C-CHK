#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
/*문자 검색 프로그램*/
// 10)남기현 HW50 

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

			printf("\"%s\"문자열 안에 \"%c\"문자는 존재하지 않습니다.\n", string, character);
		}

		else {

			printf("\"%s\"문자열 안에 \'%c\'문자는 %d번 위치에 존재합니다.\n", string, character, a);
		}
	}



	return 0;
}

int input(char* string, char* character) {

	printf("문자열을 입력하시오 : ");
	scanf("%s", string);

	if (strcmp(string, "end") == 0) {

		return 1;
	}

	getchar();

	printf("문자를 입력하시오 : ");
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