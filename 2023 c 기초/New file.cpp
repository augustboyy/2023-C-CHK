#pragma warning (disable : 4996)
#include <stdio.h>
/*stdin buffer 사용 하는 함수들로 입력 이해하기*/

int main() {
	int a = 0;
	char myClass;

	printf("성적입력:");
	scanf("%d", &a); //입력 버퍼에 성적값+ new line 기능문자
	
	printf("반(A,B,C) 입력:");
	myClass = getchar(); //입력받은 문자의 ASCII 코드 반환, 버퍼에 남아있던 new line기능문자 가져옴
	printf("성적은 %d점, 반: %c반\n", a, myClass);

	return 0;
}