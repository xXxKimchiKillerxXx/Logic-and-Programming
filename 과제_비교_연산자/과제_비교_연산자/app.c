#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    const char* op[] = {"==", "!=", ">", "<", ">=", "<="};
    int x, y, result;

    printf("두 개의 정수를 입력하시오: ");
    scanf("%d%d", &x, &y);

    for (int i = 0; i < 6; i++)
    {
        switch (i)
        {
        case 0:
            result = x == y;
            break;
        case 1:
            result = x != y;
            break;
        case 2:
            result = x > y;
            break;
        case 3:
            result = x < y;
            break;
        case 4:
            result = x >= y;
            break;
        case 5:
            result = x <= y;
        }

        printf("%d ", x);
        printf("%s", op[i]);
        printf(" %d", y);
        printf(" 의 결과값: %d", result);
        printf(result ? "(참)" : "(거짓)");
        puts("");
    }

	return 0;
}