#include <stdio.h>
#include <math.h>
#include <locale.h>

int func(double x)
{
    double fx = x * x * x + 3 * x * x - 3;
    return fx;
}

int main()
{
    setlocale(LC_ALL, "RUS");
    int exit = 0;

    do
    {
        double x = 2, step;

        printf("����������� �������: y = x^3 + 3*x^2 - 3\n");
        printf("��������: [2; 4]\n");

        printf("������� ��� ���������: ");
        scanf("%lf", &step);

        printf("\n------------------------------\n");
        printf("|    x     |       f(x)      |\n");
        printf("------------------------------\n");


        while (x <= 4)
        {
            printf("| %.6lf |    %.6lf    |\n", x, func(x));
            printf("------------------------------\n");

            x += step;
        }

        puts("��� ������ �� ��������� ������� 1: ");
        scanf("%d", &exit);
    } while (exit != 1);

    return 0;
}
