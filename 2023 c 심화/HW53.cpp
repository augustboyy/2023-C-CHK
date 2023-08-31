#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*문자열 내의 숫자의 합 구하기*/
// 10)남기현 HW53

int input(char* string);
int pickNum(char* string);
void sum(char* string, int sum);


int main() {

	int end, res;
	char string[100];

	for (;;) {

		end = input(string);

		if (end == 1) {

			break;
		}

		else {

			res = pickNum(string);
			sum(string, res);
			
		}	
	}
	return 0;
}

int input(char* string) {

	printf("문장을 입력하시오 : ");
	scanf("%s", string);

	if (strcmp(string, "end") == 0) {

		return 1;
	}

	getchar();

	return 0;
}

int pickNum(char* string) {

	int sum = 0;
	int num = 0; 

	for (int i = 0; string[i] != '\0'; i++) {

		if (isdigit(string[i])) { 

			num = num * 10 + (string[i] - '0'); 
		}

		else {

			sum += num;
			num = 0;
		}
	}

	sum += num; 

	return sum;
}

void sum(char* string, int sum) {

	printf("\"%s\" 내의 총 숫자는 [%d]입니다,\n", string, sum);

	return;
}
