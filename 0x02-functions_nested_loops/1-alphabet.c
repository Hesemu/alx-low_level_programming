#include "main.h"
/**
*main - Entry point of the program
*print_alphabet 'a function that prints the alphabet, in lowercase followed by a
*new line'
Return: Always (0) for success
*/
void print_alphabet(void)
{
	char alphabet = 'a';

	for (; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
	_putchar('\n')
	return (0);
}
