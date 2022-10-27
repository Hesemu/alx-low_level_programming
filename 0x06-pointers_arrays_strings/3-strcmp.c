#include "main.h"
/**
*_strcmp - function that compares two strings
*@s1: first string to compare
*@s2: second string to compare with first (s1)
*Return:if s1 > s2, returns the positive diff of the first unmatched characters
*	if s1 < s2, returns the negative diff of the first unmatched characters
*	if s1 == s2, returns 0
*/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;

	}

	return (*s1 - *s2);


}
