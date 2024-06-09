#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int cnt_50000, cnt_10000, cnt_5000, cnt_1000, cnt_500, cnt_100, cnt_50, cnt_10;
	int item_price, item_quant;
	int total = 0;
	int in, out;
	
	printf("받은 금액을 입력하시오: ");
	scanf("%d", &in);

	while (true)
	{
		printf("물건 값, 수량을 입력하시오: ");
		if (scanf("%d %d", &item_price, &item_quant) == EOF) break;
		total += item_price * item_quant;
	}

	out = in - total;

	if (out < 0)
	{
		printf("금액이 부족합니다.");
	}
	else
	{
		cnt_50000 = out / 50000;
		cnt_10000 = out % 50000 / 10000;
		cnt_5000 = out % 10000 / 5000;
		cnt_1000 = out % 5000 / 1000;
		cnt_500 = out % 1000 / 500;
		cnt_100 = out % 500 / 100;
		cnt_50 = out % 100 / 50;
		cnt_10 = out % 50 / 10;

		puts("거스름돈은 다음과 같습니다.\n");
		printf("5만원권 %d장\n1만원권 %d장\n5천원권 %d장\n1천원권 %d장\n5백원 주화 %d개\n1백원 주화 %d개\n50원 주화 %d개\n10원 주화 %d개", cnt_50000, cnt_10000, cnt_5000, cnt_1000, cnt_500, cnt_100, cnt_50, cnt_10);
	}

	return 0;
}