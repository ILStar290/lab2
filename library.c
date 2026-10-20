#include <stdio.h>
#include <math.h>

void task10(double x, double y)
{
    printf("Task: 10\n");
    printf("z = (1 + 1/x^2)^x - 12x^2y\n");

    double z;

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

void task17(double x, double y)
{
    printf("Task: 17\n");
    printf("z = |ln(y - sqrt(|x|)) * (x - y / (x + x^2/4))|\n");

    double z;
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

void task34(double x)
{
    printf("Task: 34\n");
    printf("z = 3 * x * R / pi^3\n");

    double R, z;

    printf("Input R: ");
    scanf("%lf", &R);

    z = 3 * x * R / pow(acos(-1.0), 3);

    printf("Z = %.2f", z);
    printf("\n\n");
}

void task43(double x)
{
    printf("Task: 43\n");
    printf("z = (sqrt(x + 1) + sqrt(x - 1)) / (2 * sqrt(x))\n");

    double z;

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

void task47(double x, double y)
{
    printf("Task: 47\n");
    printf("z = (-x^2 ± sqrt(x^2 - 4y^3)) / (2y)\n");

    double z;
    double discriminant = x * x - 4 * y * y * y;

    if (y == 0 || discriminant < 0)
    {
        printf("Немає рішення");
    }
    else
    {
        z = (-x * x + sqrt(discriminant)) / (2 * y);
        printf("Z (+) = %.2f\n", z);

        z = (-x * x - sqrt(discriminant)) / (2 * y);
        printf("Z (-) = %.2f", z);
    }

    printf("\n\n");
}

int main()
{
    double x, y;

    printf("Input X: ");
    scanf("%lf", &x);

    printf("Input Y: ");
    scanf("%lf", &y);

    task10(x, y);
    task17(x, y);
    task34(x);
    task43(x);
    task47(x, y);

    return 0;
}
