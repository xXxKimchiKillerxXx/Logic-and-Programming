#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y;
	x = y = 10;

	printf("x�� ��: %d\n", x);
	printf("++x�� ��: %d\n", ++x);
	printf("x�� ��: %d\n", x);

	printf("y�� ��: %d\n", y);
	printf("y++�� ��: %d\n", y++);
	printf("y�� ��: %d", y);

	return 0;
}