#include "main.h"
/**
*puts2 - function that prints every other character of a string
*str: string variable to be printed
*/
void puts2(char *str)
{
	int i = 0;
	int length = 0;

	while (str[i++])
		length++;

	for (i = 0; i < length; i += 2)
		_putchar(str[index]);

	_putchar('\n');


}
