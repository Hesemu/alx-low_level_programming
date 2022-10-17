#include <stdio.h>
/**
*main - Entry point of the program
*Description 'Program that prints all possible different combinations of three
*digits'
*Return: Always (0) success
*/
int main(void)
{
	int x = 0;
	int y = 0;
	int z = 0;

	for (x = 0; x < 7; x++)
	{
		for (y = x + 1; y < 8; y++)
		{
			for (z = y + 1; z < 9; z++)
			{
				putchar((x % 10) + '0');
				putchar((y % 10) + '0');
				putchar((z % 10) + '0');

				if (x == 0 && y == 1 && z == 2)
					continue;
				putchar(',');
				putchar(' ');

			}

		}

	}
	putchar('\n');
	return (0);
}
