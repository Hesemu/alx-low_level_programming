#include "main.h"
/**
*_isalpha - checks for alphabetic character
*@c: character to be checked
*Return: 1 is c is letter, lowercase or upercase: 0 otherwise
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		_isalpha(c);
		return (1);
	}
	else
		return (0);

}
