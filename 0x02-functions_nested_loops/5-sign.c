#include "main.h"
/**
*print_sign - function that prints the sign of a number
*@n: the number whose sign is to be checked
*Return: Always 1 for greater than 0: 0 for zero: -1 for less than zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);

	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);

	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
