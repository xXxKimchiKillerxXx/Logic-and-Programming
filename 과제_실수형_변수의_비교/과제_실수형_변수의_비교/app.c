#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	double a, b, epsilon = 1.0E-32F;
	a = b = 1.0E32F;

	puts("�Ǽ��� ���� ���� �� ���� ���");
	printf("a�� b�� ������ epsilon���� ");
	printf(a + epsilon > b ? "�۴�." : "���� �ʴ�.");
	puts("");
	puts("�Ǽ��� ���� �Լ��� �̿��� ���� ���");
	printf("a�� b�� ������ epsilon���� ");
	printf(fabs(a - b) < epsilon ? "�۴�." : "���� �ʴ�.");

	return 0;
}