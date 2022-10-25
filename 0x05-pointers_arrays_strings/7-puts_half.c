#include "main.h"
/**
*puts_half - function that prints half of a string
*@str: The string in question to be printed
*/
void puts_half(char *str)
{
	int i = 0;
	int length = 0;
	int y = 0;

	while (str[i++])
		length++;

	if ((length % 2) == 0)
		y = length / 2;

	else
		y = (length + 1) / 2;

	for (i = y; i < length; i++)
		_putchar(str[i]);

	_putchar('\n');

}
