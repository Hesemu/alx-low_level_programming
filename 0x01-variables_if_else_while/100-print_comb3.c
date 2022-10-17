#include <stdio.h>
/**
*main - Entry point of the program
*Description 'program that prints all possible different combinations of two di
gits'
*Return: Always (0) success
*/
int main(void)
{
	int x = 0;
	int y = 0;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 10; y++)
		{
			putchar((x % 10) + '0');
			putchar((y % 10) + '0');
			if (x == 0 && x == 1)
				continue;
			putchar(',');
			putchar(' ');

		}
		putchar('\n');

	}
	return (0);
}
