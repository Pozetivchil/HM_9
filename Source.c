#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() 
{
    char ch;
    double angle;
    int base;

    printf("Enter symbol: ");
    scanf(" %c", &ch);

    printf("Enter angle a (1-89 degrees): ");
    scanf("%lf", &angle);

    printf("Enter base length: ");
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

    system("pause");

    return 0;
}