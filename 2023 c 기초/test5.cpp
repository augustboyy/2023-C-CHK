#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
/**/

int main() {

	/*int i = 0;
	int j = 0;
	int sum = 0;

	for (i = 1; i <= 10; i++) {

		for (j = 1; j <= i*10; j++) {

			sum = sum + j;
			
		}

		printf("1~%d = %d", i*10, sum);
		sum = 0;
		

		putchar('\n');
	}*/

	char a[80];
	
	fgets(a, sizeof(a), stdin);
	a[strlen(a) - 1] = '\0';// fgets �� �޴� ���ڿ��� �������� ���๮�� �����.
	printf("%s", a);
	printf("dsdsds");

	return 0;
}