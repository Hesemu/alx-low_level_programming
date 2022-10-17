#include <stdio.h>
/**
*main - Entry point to the program
*Description 'program prits all single digit numbers of base 10 from 0'
*Return: Always (0) success
*/
int main(void)
{
	int num = 0;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');

	}
	putchar('\n');
	return (0);
}
