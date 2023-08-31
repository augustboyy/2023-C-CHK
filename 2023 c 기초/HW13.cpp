#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
/*이름의 글자 수 출력하기*/
// 30)남기현 HW13



int main(void) {

	char fName[80], lName[80];
	int cl, cf, i;

	printf("성을 입력하시오 : ");
	fgets(lName, sizeof(lName), stdin); // 띄어쓰기가 들어가도 한번에 입력 가능한 fgets사용! (scanf는 구분자 만나면 입력을 중단함)
	lName[strlen(lName) - 1] = 0; // 근데 fgets는 버퍼 입력된 마지막 \n문자까지 읽어오기 때문에 그 부분을 NULL문자로 바꿔주는 기능!(숫자 0 은 \0이의 ASCII code)
	//(strlen함수는 문자열에서 NULL문자 전까지의 문자열의 길이를 알려줌) 만약 apple문자열 입력 그럼 변수에는 apple\n이 들어감 문자열의 길이는 6 따라서 위의 식 이용하면 배열의 5번지 방(\n)을 NULL문자로 바꿈

	printf("이름을 입력하시오 : ");
	fgets(fName, sizeof(fName), stdin); 
	fName[strlen(fName) - 1] = 0; 
	
	cl = strlen(lName);
	cf = strlen(fName); //이름의 알파벳 갯수 세기

	printf("%s  %s\n", lName, fName); // 중간에 공백 두칸

	for (i = cl; i > 1; i--) { //공백을 성의 알파벳 갯수보다 한개 적게 찍어주는 반복문
		putchar(' ');
	}
	printf("%d  ", cl); //갯수 찍고 공백 두칸

	for (i = cf; i > 1; i--) {// 공백을 이름의 알파벳 갯수보다 한개 적게 찍어주는 반복문
		putchar(' ');
	}
	printf("%d", cf);

	return 0;
}