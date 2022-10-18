#include "main.h"
/**
*main - Entry point of the program
*Description 'a function that prints the alphabet, in lowercase followed by a
*new line'
Return: Always (0)for success
*/
int main(void)
{
	char alphabet = 'a';

	for (; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n')
	return (0);
}
