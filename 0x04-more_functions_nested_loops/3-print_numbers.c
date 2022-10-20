#include "main.h"
#include <unistd.h>
/**
* print_numbers - function prints numbers from 0-9
*Return: 0-9
*/
void print_numbers(void)
{
	int x = 0;

	for (x = 0; x <= 9; x++)
	{
		_putchar((x % 10) + '0');
	}
	_putchar('\n');

}
