#include <stdio.h>
#include <math.h>
#include <stdlib.h>

double x = 0, y = 0;

void task10()
{
    printf("Task: 10\n");
    printf("z = (1 + 1/x^2)^x - 12x^2y\n");

    double z = 0;

    if (x == 0)
    {
        printf("Немає рішення");
    }
    else
    {
        z = pow(1 + 1 / (x * x), x) - 12 * x * x * y;

        printf("Z = %.2f", z);
    }

    printf("\n\n");
}

void task17()
{
    printf("Task: 17\n");
    printf("z = |ln(y - sqrt(|x|)) * (x - y / (x + x^2/4))|\n");

    double z = 0;
    double denominator = x + (x * x) / 4;

    if (y - sqrt(fabs(x)) <= 0 || denominator == 0)
    {
        printf("Немає рішення");
    }
    else
    {
        z = fabs(log(y - sqrt(fabs(x))) *
                 (x - y / denominator));

        printf("Z = %.2f", z);
    }

    printf("\n\n");
}

void task34()
{
    printf("Task: 34\n");
    printf("z = 3 * x * R / pi^3\n");

    double R = 0, z = 0;

    printf("Input R: ");
    scanf("%lf", &R);

    z = 3 * x * R / pow(acos(-1), 3);

    printf("Z = %.2f", z);

    printf("\n\n");
}

void task43()
{
    printf("Task: 43\n");
    printf("z = (sqrt(x + 1) + sqrt(x - 1)) / (2 * sqrt(x))\n");

    double z = 0;

    if (x < 1)
    {
        printf("Немає рішення");
    }
    else
    {
        z = (sqrt(x + 1) + sqrt(x - 1)) /
            (2 * sqrt(x));

        printf("Z = %.2f", z);
    }

    printf("\n\n");
}

void task47()
{
    printf("Task: 47\n");
    printf("z = (-x^2 + sqrt(x^2 - 4y^3)) / (2y)\n");

    double z = 0;

    if (y == 0 || x * x - 4 * y * y * y < 0)
    {
        printf("Немає рішення");
    }
    else
    {
        z = (-x * x + sqrt(x * x - 4 * y * y * y)) /
            (2 * y);

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

    task10();

    task17();

    task34();

    task43();

    task47();

    return 0;
}
