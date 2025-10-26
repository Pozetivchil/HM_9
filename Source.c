#include <stdio.h>
#include <locale.h>
#define ROW 9
#define COL 9
#define ROW_2 5
#define COL_2 5


int main()
{
	setlocale(LC_ALL, "RUS");

	zadanie2(123456789.0);

	return 0;
}

int zadanie1_2()
{
	int row, col;
	printf("\n");
	for (row = 1; row <= ROW; ++row)
	{
		for (col = 1; col <= row; col++)
		{
			printf("%5d", col * row);
		}
		printf("\n");
	}

	system("pause");

	return 1;
}

int zadanie1_3()
{
	int row, col;
	printf("\n");
	for (row = 1; row <= ROW_2; ++row)
	{
		for (col = row; col <= COL_2; col++)
		{
			printf("%5d", 5 * row);
		}
		printf("\n");
	}

	system("pause");

	return 1;
}

int zadanie2(double num)
{
	int count = 0;

	for (int i = 0; i <= lenOfIntVar(num); i++)
	{
		if (num / 10 == 3)
		{
			count++;
		}
		num /= 10;
	}

	printf("%d", count);
}

int lenOfIntVar(double num)
{
	int lenOfNum = 1;
	while (num / 10 >= 1)
	{
		num /= 10;
		++lenOfNum;
	}
	
	return lenOfNum;
}