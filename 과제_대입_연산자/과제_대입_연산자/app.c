#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x = 1, y;

	printf("���� x + 1�� ���� %d\n", x);
	printf("���� y = x + 1�� ���� %d\n", y = x + 1);
	printf("���� y = 10 + (x = 2 + 7)�� ���� %d\n", y = 10 + (x = 2 + 7));
	printf("���� y = x = 3�� ���� %d\n", y = x = 3);

	return 0;
}