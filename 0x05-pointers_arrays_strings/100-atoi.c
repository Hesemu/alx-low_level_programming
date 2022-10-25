#include "main.h"
/**
*_atoi - function that converts a string to an integer
*@s: the string in question
*Return: value of the converted string
*/
int _atoi(char *s)
{
	int sign = 1;
	unsigned int x = 0;

	do {
		if (*s == '-')
			sign *= -1;

		else if (*s >= '0' && *s <= '9')
			x = (x * 10) + (*s - '0');

		else if (x > 0)
			break;


	} while (*s++);

	return (x * sign);

}
