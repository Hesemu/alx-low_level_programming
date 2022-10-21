#include "main.h"
/**
* print_diagonal - Draws diagonal lines using the \ character.
* @n: The number of \ characters that will be printed.
*Return: diagonal
*/
void print_diagonal(int n)
{
	int length;
	int space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (length = 1; length <= n; length++)
		{
			for (space = 1; space < length; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}

	}
}
