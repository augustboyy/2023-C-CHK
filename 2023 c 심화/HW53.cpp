#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <ctype.h>
/*���ڿ� ���� ������ �� ���ϱ�*/
// 10)������ HW53

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

	printf("������ �Է��Ͻÿ� : ");
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

	printf("\"%s\" ���� �� ���ڴ� [%d]�Դϴ�,\n", string, sum);

	return;
}
