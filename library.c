#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double x = 0, y = 0;

void task21()
{
    printf("Task: 21\n");
    printf("z = e^x - x - 2 + (1 + x)^x\n");

    double z = 0;

    if (1 + x <= 0)
    {
        printf("Немає рішення");
    }
    else
    {
        z = exp(x) - x - 2 + pow(1 + x, x);

        printf("Z = %.2f", z);
    }

    printf("\n\n");
}

void task25()
{
    printf("Task: 25\n");
    printf("z = (1 + sin^2(x + y)) / (2 + |x - 2x / (1 + x^2y^2)|) + x\n");

    double z = 0;

    double denominator = 2 + fabs(x - (2 * x) / (1 + x * x * y * y));

    if (denominator == 0)
    {
        printf("немає рішення");
    }
    else
    {
        z = (1 + pow(sin(x + y), 2)) / denominator + x;

        printf("Z = %.2f", z);
    }

    printf("\n\n");
}

void task44()
{
    printf("Task: 44\n");
    printf("z = |3 - x / (5 - 7y)|\n");

    double z = 0;

    if (5 - 7 * y == 0)
    {
        printf("Немає рішення");
    }
    else
    {
        z = fabs(3 - x / (5 - 7 * y));

        printf("Z = %.2f", z);
    }

    printf("\n\n");
}

void task22()
{
    printf("Task: 22\n");
    printf("z = x * ln(x) + y / (cos(x) - x / 3)\n");

    double z = 0;

    if (x <= 0 || cos(x) - x / 3 == 0)
    {
        printf("Немає рішення");
    }
    else
    {
        z = x * log(x) + y / (cos(x) - x / 3);

        printf("Z = %.2f", z);
    }

    printf("\n\n");
}

void task18()
{
    printf("Task: 18\n");
    printf("z = e^x - (y^2 + 12xy - 3x^2) / (18y - 1)\n");

    double z = 0;

    if (18 * y - 1 == 0)
    {
        printf("Немає рішення");
    }
    else
    {
        z = exp(x) - (y * y + 12 * x * y - 3 * x * x) / (18 * y - 1);

        printf("Z = %.2f", z);
    }

    printf("\n\n");
}

int main()
{
    system("cls");

    printf("Input X: ");
    scanf("%lf", &x);

    printf("Input Y: ");
    scanf("%lf", &y);

    task18();

    task21();

    task22();

    task25();

    task44();

    return 0;
}