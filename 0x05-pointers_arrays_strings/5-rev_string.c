#include "main.h"
/**
*rev_string - function reverses a string
*@s: String to be reversed
*/
void rev_string(char *s)
{
	int i = 0;
	char reverse;
	int length = 0;

	while (s[i++])
		length++;

	for (i = length - 1; i >= length / 2; i--)
	{
		reverse = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = reverse;

	}

}
