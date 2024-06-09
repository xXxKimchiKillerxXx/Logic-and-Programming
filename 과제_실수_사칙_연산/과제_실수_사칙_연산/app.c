#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    double x, y, result;
    const char op[] = { '+', '-', '*', '/' };

    printf("두 개의 실수를 입력하시오: ");
    scanf("%lf %lf", &x, &y);

    for (int i = 0; i < 4; i++)
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
        }
        printf("%lf ", x);
        printf("%c", op[i]);
        printf(" %lf", y);
        printf(" = %lf", result);
        puts("");
    }

    return 0;
}