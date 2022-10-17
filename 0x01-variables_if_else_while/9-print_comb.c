#include <stdio.h>
/**
*main - Entry point of the program
*Description 'program that prints all possible combinations of single digit
numbers'
*Return: Always (0) success
*/
int main(void)
{
	int x = 0;

	for (x = 0; x < 10; x++)
	{
		putchar((x % 10) + '0');
		if (x == 9)
		continue;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
