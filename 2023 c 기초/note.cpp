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
		printf("�����Է� : ");
		scanf("%d", &num);

		if (getchar() == '\n') {
			printf("�����Է�\n");
		}

		else {
			printf("�����Է½���\n");
			while (getchar() != '\n') {// buffer ���� �ܿ� data�� ��� ����� ���
				;
			}
		}
	}
	
	return 0;
}