#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() 
{
    setlocale(LC_ALL, "RUS");
    char ch;
    double angle;
    int base;

    printf("Введите символ: ");
    scanf(" %c", &ch);

    printf("Введите угол a (в градусах, 1–89): ");
    scanf("%lf", &angle);

    printf("Введите длину основания: ");
    scanf("%d", &base);
    printf("\n");

    double rad = angle * 3.14 / 180.0;

    int height = (int)((base / 2.0) * tan(rad) + 0.5);

    for (int i = 0; i < height; i++) 
    {
        int width = 1 + (i * (base - 1)) / (height - 1);
        if (height == 1) width = base;

        int spaces = (base - width) / 2;

        for (int s = 0; s < spaces; s++)
            printf(" ");
        for (int w = 0; w < width; w++) 
            printf("%c", ch);
        printf("\n");
    }

    return 0;
}