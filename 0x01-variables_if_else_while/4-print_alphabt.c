#include <stdio.h>
/**
 *main - entry point of the program
 *Description 'program prints the alphabet in lowercase except q and e'
 *Return: Always (0) success
 */
int main(void)
{
	char alphabet = 'a';

	if (alphabet <= 'z')
	{
		switch (alphabet)
		case (alphabet != 'e'):
		case (alphabet != 'q'):
			putchar(alphabet);
			alphabet++;
	}
	putchar('\n');
	return (0);
}
