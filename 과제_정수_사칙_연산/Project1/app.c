#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int x, y, result;
    const char op[] = { '+', '-', '*', '/', '%' };

    printf("�ΰ��� ������ �Է��Ͻÿ�: ");
    scanf("%d %d", &x, &y);

    for (int i = 0; i < 5; i++)
    {
        switch (i)
        {
        case 0:
            result = x + y;
            break;
        case 1:
            result = x - y;
            break;
        case 2:
            result = x * y;
            break;
        case 3:
            result = x / y;
            break;
        case 4:
            result = x % y;
        }
        printf("%d ", x);
        printf("%c", op[i]);
        printf(" %d", y);
        printf(" = %d", result);
        puts("");
    }

    return 0;
}