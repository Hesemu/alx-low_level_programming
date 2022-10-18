#include "main.c"
/**
*print_last_digit - function prints the last digit of a number
*@x: The number whose last digit is in question
*Return: value of the number's last digit
*/
int print_last_digit(int x)
{
	int ld = 0;

	ld = (x % 10);

	if (ld < 0)
	{
		ld = (ld * -1);

	}
	_putchar(ld + '0');
	return (ld);

}
