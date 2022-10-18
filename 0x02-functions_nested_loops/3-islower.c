#include "main.h"
/**
*_islower - Entry point of the program function
*Description 'A function that checks for lowercase'
*@c: is character to be checked for lowercase
*Return: 1 if c is lowercase: 0 otherwise
*/
int _islower(int c)
{
	int e = 'a';

	if (e <= 'z' && e >= 'a')
	{
		return (1);

	}
	else
		return (0);

}
