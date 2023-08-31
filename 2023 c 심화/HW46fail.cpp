#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*요일 구하는 프로그램*/
// 10)남기현 HW46

void inputDate(int* year, int* month, int* date);

int main() {

	int year, month, date;

	inputDate(&year, &month, &date);

	//printf("%d %d %d", year, month, date);
	  

	return 0;
}

int inputInt(const char* msg) {

	int num = 0;

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
	return num;
}

void inputDate(int* year, int* month, int* date) {

	char Date[12];
	int i, j,k=0;

	printf("년 월 일을 입력하시오 : ");

	fgets(Date, sizeof(Date), stdin);
	Date[strlen(Date) - 1] = 0;
	
	*year = atoi(Date);

	for (i = 0; i < 11; i++) {

		if (Date[i] = ' ') {

			for (j = 0; j <= i; j++) {

				Date[j] = '0';
				
			}
			k += 1;
		}
	}
	printf("%s\n", Date);
	printf("%d", k);
	*month = atoi(Date);
	*date = atoi(Date);

	return;
}
