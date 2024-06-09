#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	int cnt_50000, cnt_10000, cnt_5000, cnt_1000, cnt_500, cnt_100, cnt_50, cnt_10;
	int item_price, item_quant;
	int total = 0;
	int in, out;
	
	printf("���� �ݾ��� �Է��Ͻÿ�: ");
	scanf("%d", &in);

	while (true)
	{
		printf("���� ��, ������ �Է��Ͻÿ�: ");
		if (scanf("%d %d", &item_price, &item_quant) == EOF) break;
		total += item_price * item_quant;
	}

	out = in - total;

	if (out < 0)
	{
		printf("�ݾ��� �����մϴ�.");
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

		puts("�Ž������� ������ �����ϴ�.\n");
		printf("5������ %d��\n1������ %d��\n5õ���� %d��\n1õ���� %d��\n5��� ��ȭ %d��\n1��� ��ȭ %d��\n50�� ��ȭ %d��\n10�� ��ȭ %d��", cnt_50000, cnt_10000, cnt_5000, cnt_1000, cnt_500, cnt_100, cnt_50, cnt_10);
	}

	return 0;
}