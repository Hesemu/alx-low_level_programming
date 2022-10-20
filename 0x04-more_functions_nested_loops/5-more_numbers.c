#include "main.h"
/**
* more_numbers - function prints 10 times the number from 0-14
*/
void more_numbers(void)
{
	int count;
	int x;

	for (count = 0; count <= 9; count++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (count > 9)
				_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');

		}
		_putchar('\n');

	}

}
