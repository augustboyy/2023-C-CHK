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
	printf("main ()�Լ� ȣ�� abc �Լ�\n");
}