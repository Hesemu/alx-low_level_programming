#include "main.h"
/**
*print_alphabet_x10 - Entry point of the program
*Description 'function that prints 10 times the alphabet'
*/
void print_alphabet_x10(void)
{
	int i = 0;
	char alphabet = 'a';

	for (; alphabet < 'z'; alphabet++)
	{
		do {
			putchar(alphabet);

		} while (i++ < 10);


	}
	putchar('\n');

}
