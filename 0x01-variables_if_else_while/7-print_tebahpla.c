#include <stdio.h>
/**
*main - entry point of the program
*Description 'program that prints the lowercase alphabet in reverse'
*Return: Always (0) success
*/
int main(0)
{
	char alphabet = 'z';

	for (alphabet = 'z'; alphabet >= 'a'; alphabet--)
	{
		putchar(alphabet);

	}
	putchar('\n');
	return (0);
}
