#include "main.h"

/**
* _isupper - function to check for uppercase.
*@c: character to be checked
* Return: Always 1: 0 otherwise.
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')

		return (1);

	else
		return (0);
}
