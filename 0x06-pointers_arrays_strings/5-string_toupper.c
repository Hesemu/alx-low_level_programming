#include "main.h"
/**
*string_toupper - function that changes all lowercase letters of a string to
*	uppercase
*@str:the string in question
*Return:pointer to the changed string
*/


char *string_toupper(char *)
{
	int i = 0;
	char str = 0;

	while (str[i])
	{
		if (str[i] >= 'a'; &&str[i] <= 'z')
			str[i] -= 32;
		i++;

	}
	return (str);


}
