#include<stdio.h>
static void abc();
void sub()
{
	abc();
	return;
}
static void abc()
{
	printf("sub()함수 호출 abc 함수\n");
}