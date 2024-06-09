#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y;
	x = y = 10;

	printf("x의 값: %d\n", x);
	printf("++x의 값: %d\n", ++x);
	printf("x의 값: %d\n", x);

	printf("y의 값: %d\n", y);
	printf("y++의 값: %d\n", y++);
	printf("y의 값: %d", y);

	return 0;
}