#pragma warning (disable : 4996)
#include <stdio.h>

void printAge(int);
void printHeight(double);

int main(void) {

	char name[80] = "������";
	int age = 22;
	double height = 180.1;

	printf("������ %s�Դϴ�.\n", name);
	printAge(age);
	printHeight(height);

	return 0;
}


void printAge(int age) {
	
	printf("���̴� %d �Դϴ�.\n", age);

	return;
}


void printHeight(double height) {

	printf("Ű�� %.1lf�Դϴ�.\n", height);

	return;
}