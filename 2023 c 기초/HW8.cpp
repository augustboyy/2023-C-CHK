#pragma warning (disable : 4996)
#include <stdio.h>
/*세 과목 점수 입력받아 총점, 평균 출력하기*/
// 30)남기현 HW8


int main() {
	
	int hist = 0, lite = 0, art = 0, total = 0;
	double dtotal = 0;

	printf("역사, 문학, 예능 점수를 입력하세요.(구분자는 space) : ");
	scanf("%d %d %d", &hist, &lite, &art);

	total = hist + lite + art;
	dtotal = total / 3.;

	printf("총점은 %d이고 평균은 %lg입니다.", total, dtotal);

	return 0;
}