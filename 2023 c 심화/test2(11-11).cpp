#pragma warning (disable : 4996)
#include <stdio.h>
#include <stdlib.h>

int* myAlloc(int);
void dataInput(int*, int);
void dataOutput(int*, int);
void myDelete(int*);

int main()
{
	int* ip;
	int col;

	printf("column 수 입력 : ");
	scanf("%d", &col);

	ip = myAlloc(col);
	if (ip == NULL) {

		printf("동적메모리할당 실패\n");
	}
	else {

		dataInput(ip, col);
		dataOutput(ip, col);
		myDelete(ip);
	}

	return 0;
}

int* myAlloc(int col) {

	int* ip;
	ip = (int *)malloc(col * sizeof(int));

	return ip;
}

void dataInput(int* ip, int col) {

	int i;
	for (i = 0; i < col; i++) {

		scanf("%d", ip[i]);
	}

	return;
}

void dataOutput(int* ip, int col) {

	int i;
	for (i = 0; i < col; i++) {

		printf("5%d", ip[i]);
	}
	putchar('\n');

	return;
}

void myDelete(int* ip) {

	if (ip != NULL) {

		free(ip);
	}

	return;
}