#pragma warning (disable : 4996)
#include <stdio.h>
/*정수 입력 함수*/
int inputInt(const char* msg);
int main() {
	
	/*int a = 0;

	for (;;) {

		printf("정수입력 : ");
		scanf("%d", &a);

		if (getchar() == '\n') {

			printf("ok\n");
		}

		else {

			printf("정수입력실패\n");

			while (getchar() != '\n') {// stdin buffer 비워주는 기능
				;
			}
			
		}
	}
	*/



	int a = 0;
	a = inputInt("정수입력 : ");
	printf("%d", a);

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