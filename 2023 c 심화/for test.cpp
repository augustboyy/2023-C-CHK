#pragma warning (disable : 4996)
#include <stdio.h>
#include <math.h>

int primeNumber(int number) {

	int j;
	int res;

	for (j = 2; j <= sqrt(number); j++) {

		res = number % j;

		if (res == 0) {

			return 0;
		}
	}
	return 1;
}

int main() {

	int i;
	for (i = 100; i < 10; i++) {

		printf("%d", i);

	}

}
