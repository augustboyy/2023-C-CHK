#pragma warning (disable : 4996)
#include <stdio.h>

void printAge(int);
void printHeight(double);

int main(void) {

	char name[80] = "남기현";
	int age = 22;
	double height = 180.1;

	printf("성명은 %s입니다.\n", name);
	printAge(age);
	printHeight(height);

	return 0;
}


void printAge(int age) {
	
	printf("나이는 %d 입니다.\n", age);

	return;
}


void printHeight(double height) {

	printf("키는 %.1lf입니다.\n", height);

	return;
}