#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
/**/

int main() {
	
	/*char a[20] = "apple";
	int b = 0;

	b = strlen(a);
	printf("%d", b); */

	int num = 0;
	for(;;){
		printf("점수입력 : ");
		scanf("%d", &num);

		if (getchar() == '\n') {
			printf("정상입력\n");
		}

		else {
			printf("정수입력실패\n");
			while (getchar() != '\n') {// buffer 내의 잔여 data를 모두 지우는 기능
				;
			}
		}
	}
	
	return 0;
}