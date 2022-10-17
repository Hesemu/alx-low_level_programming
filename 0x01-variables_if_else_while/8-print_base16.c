#include <stdio.h>
/**
*main - entry point of the program
*Description 'program that prints all numbers of base 16 in lowercase'
*Return: Always (0) success
*/
int main(void)
{
	char alphabet = 'a';
	int x = 0;

	for (x = 0; x < 10; x++)
		putchar((x % 10) + '0');

	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);

	putchar('\n');
	return (0);
}
