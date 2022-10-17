#include <stdio.h>
/**
*main - Entry point of the program
* Description 'program that prints the alphabet in lowercase and uppercase'
*Return: Always (0) success
*/
int main(void)
{
	char alphabet = 'a';
	char ALPHABET = 'A';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		for (ALPHABET = 'A'; ALPHABET <= 'Z'; ALPHABET++)
		{
			putchar(alphabet);
		putchar(ALPHABET);
		}

	}
	putchar('\n');
	return (0);
}
