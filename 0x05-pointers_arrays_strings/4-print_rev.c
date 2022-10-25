#include "main.h"
/**
*print_rev - function prints a string in reverse
*@s: string in question, to be printed
*/
void print_rev(char *s)
{
	int i = 0;
	int length = 0;

	while (s[i++])
		length++;

	for (i = length - 1; i >= 0; i++)
		_putchar(s[i]);

	_putchar('\n');

}
