#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
/*성명, 키, 성별을 입력받아 실행 예와 같이 수행되는 프로그램*/
// 30)남기현 HW17

int main() {

	char name[80], sex;
	double height;

	printf("성명입력 : ");
	fgets(name, sizeof(name), stdin);
	name[strlen(name) - 1] = 0;// 전에 보내준거에 왜 이거 쓰는지 알려줌!

	printf("키 입력(cm) : ");
	scanf("%lf", &height);
	if (getchar() != '\n') {// 버퍼 비우는 기능 scanf는 마지막에 개행문자를 읽어오지 않고 버퍼에 남겨둠 그럼 다음 scanf가 개행을 만나고 오작동 

		while (getchar() != '\n') {
			;
		}
	}
	
	printf("성별입력(M/F) : ");
	scanf("%c", &sex);
	if (getchar() != '\n') {

		while (getchar() != '\n') {
			;
		}
	}

	if (sex == 'M') {
	
		printf("%s씨의 키는 %.2lfcm이고 남성입니다.", name, height);
	}
	
	else {

		printf("%s씨의 키는 %.2lfcm이고 여성입니다.", name, height);
	}

	return 0;
}