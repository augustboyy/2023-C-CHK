#pragma warning (disable : 4996)
#include <stdio.h>
/*���� ������ ī��Ʈ ���α׷�*/
// 10)������ HW28

int main() {

	char a;
	int i = 0, j = 0, k = 0, l = 0;
	
	while ((a = getchar()) != EOF) { /*/�����Ǽ���: stdin���� ���� '�ϳ���' ������(���ۿ� �ܿ� data����) �Ŀ� a�� ���� 
		�׸��� a�� EOF�������˻� �׶� False�϶� while�� ���� ��� �ݺ��ؼ� ���ۿ��� ���� �������� a�� �ִٰ� EOF���� �������� while�� Ż��*/

		if (a == 9 || a == 10 || a == 32) { //���鹮���� ASCII code (char �� ������ �Էµ� ������ ASCII code ���� ��) ���Ѵٸ� a=='�����Ѱ�' �̷������ε� �� ����
			
			i += 1;// ��Ͽ� ����
		}

		else if (a >= 48 && a <= 57) { //������ ASCII code

			j += 1;
		}

		else if ((a >= 65 && a <= 90) || (a >= 97 && a <= 122)) { //���ĺ��� ASCII code

			k += 1;
		}

		else {

			l += 1;
		}
	}

	printf("������ ��ҹ��� ���� : %d��\n", k);
	printf("���ڹ��� ���� : %d��\n", j);
	printf("���鹮��(space, tab, enter) ���� : %d��\n", i);
	printf("�� �� ��Ÿ����  ���� : %d��", l);

	return 0;
}