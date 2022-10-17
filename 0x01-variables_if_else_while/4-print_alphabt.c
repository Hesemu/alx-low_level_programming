#include <stdio.h>
/**
 *main - entry point of the program
 *Description 'program prints the alphabet in lowercase except q and e'
 *Return: Always (0) success
 */
int main(void)
{
	char alphabet = 'z';

	if (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
		switch (alphabet)
		{
			case (alphabet == 'q'):
			case (alphabet == 'e'):
			continue;
		}
	putchar('\n');
	}
	return (0);
}
