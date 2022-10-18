#include "main.h"
/**
*print_alphabet - Entry point of the program
*print_alphabet description 'a function that prints the alphabet, in lowercase
*followed by a new line'
*/
void print_alphabet(void)
{
	char alphabet = 'a';

	for (; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n');
}
