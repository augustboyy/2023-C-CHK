#pragma warning (disable : 4996)
#include <stdio.h>
/*문자 종류별 카운트 프로그램*/
// 10)남기현 HW28

int main() {

	char a;
	int i = 0, j = 0, k = 0, l = 0;
	
	while ((a = getchar()) != EOF) { /*/연산의순서: stdin에서 문자 '하나만' 가져옴(버퍼에 잔여 data존재) 후에 a에 저장 
		그리고 a가 EOF값인지검사 그때 False일때 while문 실행 계속 반복해서 버퍼에서 값을 가져온후 a에 넣다가 EOF값을 가져오면 while문 탈출*/

		if (a == 9 || a == 10 || a == 32) { //공백문자의 ASCII code (char 형 변수엔 입력된 문자의 ASCII code 값이 들어감) 원한다면 a=='문자한개' 이런식으로도 비교 가능
			
			i += 1;// 기록용 변수
		}

		else if (a >= 48 && a <= 57) { //숫자의 ASCII code

			j += 1;
		}

		else if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122)) { //알파벳의 ASCII code

			k += 1;
		}

		else {

			l += 1;
		}
	}

	printf("영문자 대소문자 개수 : %d개\n", k);
	printf("숫자문자 개수 : %d개\n", j);
	printf("여백문자(space, tab, enter) 개수 : %d개\n", i);
	printf("그 외 기타문자  개수 : %d개", l);

	return 0;
}