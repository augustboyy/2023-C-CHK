#pragma warning (disable : 4996)
#include <stdio.h>
#define PocketM 278970
/*용돈 환폐단위 환산 프로그램*/

int main() {

	int TotalM;
	int m50000, m10000, m5000, m1000, m500, m100, m50, m10;

	m50000 = PocketM / 50000; 
	TotalM = PocketM - m50000 * 50000;
	m10000 = TotalM / 10000;
	TotalM = TotalM - m10000 * 10000;
	m5000 = TotalM / 5000;
	TotalM = TotalM - m5000 * 5000;
	m1000 = TotalM / 1000;
	TotalM = TotalM - m1000 * 1000;
	m500 = TotalM / 500;
	TotalM = TotalM - m500 * 500;
	m100 = TotalM / 100;
	TotalM = TotalM - m100 * 100;
	m50 = TotalM / 50;
	TotalM = TotalM - m50 * 50;
	m10 = TotalM / 10;
	TotalM = TotalM - m10 * 10;

	printf("50000원권 => %d 개\n10000원권 => %d 개\n5000원권 => %d 개\n1000원권 => %d 개\n500원권 => %d 개\n100원권 => %d 개\n50원권 => %d 개\n10원권 => %d 개\n", m50000, m10000, m5000, m1000, m500, m100, m50, m10);



	return 0;
}