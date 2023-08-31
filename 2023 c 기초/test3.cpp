#pragma warning (disable : 4996)
#include <stdio.h>
/*정수를 입력받아 양수이면 누적, 0이면 종료*/

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