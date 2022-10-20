#include "main.h"
#include <unistd.h>
/**
* print_numbers - function prints numbers from 0-9
*Return: 0-9
*/
void print_numbers(void)
{
	int x = 0;

	while (x <= 9)
	{
		_putchar((x  % 10) + '0');
		x++;
	}
	_putchar('\n');

}
