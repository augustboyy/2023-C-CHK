#pragma warning (disable : 4996)
#include <stdio.h>
/*���� �Է� �Լ�*/
int inputInt(const char* msg);
int main() {
	
	/*int a = 0;

	for (;;) {

		printf("�����Է� : ");
		scanf("%d", &a);

		if (getchar() == '\n') {

			printf("ok\n");
		}

		else {

			printf("�����Է½���\n");

			while (getchar() != '\n') {// stdin buffer ����ִ� ���
				;
			}
			
		}
	}
	*/



	int a = 0;
	a = inputInt("�����Է� : ");
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