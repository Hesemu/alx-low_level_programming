#include <stdio.h>
/**
 *main - entry point of the program
 *Description 'program prints the alphabet in lowercase except q and e'
 *Return: Always (0) success
 */
int main(void)
{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{	
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar(alphabet);
		}
	putchar('\n');
	}
	return (0);
}
