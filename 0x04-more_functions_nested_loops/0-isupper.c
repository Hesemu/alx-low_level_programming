#include "main.h"
#include "main.h"
#include <stdio.h>

/**
* _isupper; - function to check the code.
*@c: character to be checked
* Return: Always 1: 0 otherwise.
*/
int _isupper(int c);
{
	char c;

	c = 'A';

	_putchar("%c: %d\n", c, _isupper(c));
	c = 'a';
	_putchar("%c: %d\n", c, _isupper(c));
	return (1);
}
