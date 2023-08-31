#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
/*이름을 영문으로 입력받아 다음과 같은 형태로 출력하시오*/
// 30)남기현 HW12



int main(void) {

	char name[80];

	printf("이름을 입력하시오 : ");
	fgets(name, sizeof(name), stdin); // 띄어쓰기가 들어가도 한번에 입력 가능한 fgets사용! (scanf는 구분자 만나면 입력을 중단함)
	name[strlen(name) - 1] = 0; // 근데 fgets는 버퍼 입력된 마지막 \n문자까지 읽어오기 때문에 그 부분을 NULL문자로 바꿔주는 기능!(숫자 0 은 \0이의 ASCII code)
	//(strlen함수는 문자열에서 NULL문자 전까지의 문자열의 길이를 알려줌) 만약 apple문자열 입력 그럼 변수에는 apple\n이 들어감 문자열의 길이는 6 따라서 위의 식 이용하면 배열의 5번지 방(\n)을 NULL문자로 바꿈

	printf("\"%s\"\n\"%20s\"\n\"%-20s\"", name, name, name); // 형식변환문자로 요구조건 맞추기 이런건 책보고 알아서 찾아보라구
	
	return 0;
}