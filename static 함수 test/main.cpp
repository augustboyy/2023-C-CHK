#include<stdio.h>
static void abc();
void sub();
int main()
{
	for (;;) {

		abc();
		sub();
	
	}	

	return 0;
}
static void abc()
{
	printf("main ()함수 호출 abc 함수\n");
}