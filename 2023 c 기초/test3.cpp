#pragma warning (disable : 4996)
#include <stdio.h>
/*������ �Է¹޾� ����̸� ����, 0�̸� ����*/

int main() {

	int a,b = 0;

	for(;;) {
		
		scanf("%d", &a);
		if (a == 0) { break;}

		else if (a > 0) {
			b = a + b;
		}
		printf("%d\n", b);
	}
	
	return 0;
}