#include<stdio.h>
static void abc();
void sub()
{
	abc();
	return;
}
static void abc()
{
	printf("sub()�Լ� ȣ�� abc �Լ�\n");
}