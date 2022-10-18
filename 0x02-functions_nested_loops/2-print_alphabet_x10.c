#include "main.h"
/**
*print_alphabet_x10 - Entry point of the program
*Description 'function that prints 10 times the alphabet'
*/
void print_alphabet_x10(void)
{
	int i = 1;
	char alphabet = 'a';

	while (i++ <= 10)
	{
		for (; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);
		_putchar('\n');

	}

}
