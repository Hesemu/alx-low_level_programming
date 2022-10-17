#include <stdio.h>
/**
 *main - entry point of the program
 *Description 'program prints the alphabet in lowercase except q and e'
 *Return: Always (0) success
 */
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
		if (alphabet == 'e' || alphabet == 'q')
		{
			continue;
		}
	putchar('\n');
	}
	return (0);
}
