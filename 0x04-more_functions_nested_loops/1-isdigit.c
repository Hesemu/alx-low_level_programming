#include "main.h"
/**
* _isdigit - check for a digit
*@c: integer to be checked
* Return: Always 1: 0 otherwise.
*/
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);

	}
	else
		return (0);


}
