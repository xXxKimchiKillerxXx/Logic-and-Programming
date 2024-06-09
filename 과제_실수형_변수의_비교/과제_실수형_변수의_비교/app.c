#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	double a, b, epsilon = 1.0E-32F;
	a = b = 1.0E32F;

	puts("실수형 변수 연산 후 비교의 결과");
	printf("a와 b의 오차는 epsilon보다 ");
	printf(a + epsilon > b ? "작다." : "작지 않다.");
	puts("");
	puts("실수형 절댓값 함수를 이용한 비교의 결과");
	printf("a와 b의 오차는 epsilon보다 ");
	printf(fabs(a - b) < epsilon ? "작다." : "작지 않다.");

	return 0;
}