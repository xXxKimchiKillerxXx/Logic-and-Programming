#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SEC_PER_MIN 60

int main(void)
{
	int input_sec, min, sec;
	printf("초를 입력하시오: ");
	scanf("%d", &input_sec);

	min = sec = input_sec;
	min = input_sec / SEC_PER_MIN;
	sec = input_sec % SEC_PER_MIN;

	printf("%d초는 %d분 %d초입니다.", input_sec, min, sec);

	return 0;
}