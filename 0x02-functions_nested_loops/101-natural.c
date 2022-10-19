#include <stdio.h>

/**
* main - Entry point of the program.
*Deacription 'program lists all the natural numbers below 10, 1024 (excluded)
*that are multiples of 3 or 5.
* Return: Always 0.
*/
int main(void)
{
	int x = 0;
	int total = 0;

	for (x = 0; x < 1024; x++)
	{
		if ((x % 3) == 0 || (x % 5) == 0)
			total = total + x;
	}
	printf("%d\n", total);

	return (0);
}
