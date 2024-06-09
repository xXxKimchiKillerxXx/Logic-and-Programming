#define _CRT_SECURE_NO_WARNINGS
#define BITS 8
#include <stdio.h>
#include <stdbool.h>

void logo(void)
{
	puts("���α׷� ����");
	puts("Ctrl + Z ����Ű 3�ٿ� ���� �Է½��� �����մϴ�.");
}

void ending(void)
{
	puts("Ctrl + Z ����Ű�� 3�ٿ��� �������� �ԷµǾ����ϴ�.");
	puts("�����մϴ�.");
}

void app_init(void)
{
	logo();
}

void to_binary(bool* bit_array, unsigned int x)
{
	size_t bit_count = sizeof(unsigned int) * BITS;

	for (size_t i = 0; i < bit_count; i++)
	{
		bit_array[bit_count - i - 1] = x & true;
		x >>= 1;
	}
	bit_array[bit_count] = 0;
}

void print_array(bool* bit_array)
{
	for (size_t i = 0; i < sizeof(int); i++) 
		for (size_t j = 0; j < BITS; j++) printf("%d ", bit_array[i * BITS + j]);
}

void app_run(void)
{
	unsigned num;
	bool bit_array[sizeof(int) * BITS + 1];

	while (true)
	{
		printf("������: ");
		if (scanf("%d", &num) == EOF) break;
		puts("");
		to_binary(bit_array, num);
		printf("%d�� ������: ", num);
		print_array(bit_array);
		puts("\n");
	}
}

void app_exit(void)
{
	ending();
}

int main(void)
{
	app_init();
	app_run();
	app_exit();
	return 0;
}